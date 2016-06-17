#include "netcomponent.h"

#include "entity/entity.h"
#include "node/node.h"
#include "net/sendbuf.h"
#include "net/recvbuf.h"

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>


IMPLEMENT(NetComponent)

static void _ev_accept(struct aeEventLoop *eventLoop, int sockfd, void *clientData, int mask)
{
    NetComponent* self = (NetComponent*)clientData;
    self->ev_accept(sockfd);
}

static void _ev_writable(struct aeEventLoop *eventLoop, int sockfd, void *clientData, int mask)
{
    NetComponent* self = (NetComponent*)clientData;
    self->ev_writable(sockfd);
}

static void _ev_readable(struct aeEventLoop *eventLoop, int sockfd, void *clientData, int mask)
{
    NetComponent* self = (NetComponent*)clientData;
    self->ev_readable(sockfd);
}



NetComponent::NetComponent():Component()
{
}

NetComponent::~NetComponent()
{

}


void NetComponent::update(long long cur_tick)
{
    Component::update(cur_tick);
}


int NetComponent::listen(const char* host, unsigned short port)
{
    int error;
    int sockfd = ::socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1)
    {
        printf("socket error\n");
        return 1;
    }
    error = fcntl(sockfd, F_SETFL, fcntl(sockfd, F_GETFD, 0) | O_NONBLOCK);
    if (error < 0)
    {
        printf("fcntl error\n");
        ::close(sockfd);
        return 2;
    }
    struct sockaddr_in addr;
	bzero((void*)&addr, sizeof(addr));	
	addr.sin_family = AF_INET;	
	addr.sin_addr.s_addr = INADDR_ANY;	
	addr.sin_port = htons(port);	
    int reuse = 1;
    setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));
	error = ::bind(sockfd,(struct sockaddr *)&addr,sizeof(addr));
	if(error < 0){		
        ::close(sockfd);
        printf("bind error\n");
		return 3;	
    }
	error = ::listen(sockfd, 5);	
    if(error < 0){
        ::close(sockfd);
        printf("listen error\n");
        return 4;
    }
    this->listenfd_ = sockfd;
    this->create_file_event(this->listenfd_, AE_READABLE | AE_WRITABLE, _ev_accept, this);
    printf("listen success\n");
    return 0;
}

void NetComponent::ev_writable(int sockfd)
{
    printf("netcomponent ev_writable\n");
    //发送数据
    for(;;)
    {
        int datalen = Sendbuf::datalen(sockfd);
        if (datalen <= 0)
        {
            printf("netcomponent  delete write event\n");
            this->delete_file_event(sockfd, AE_WRITABLE);
            break;
        }
        char* buf = Sendbuf::get_read_ptr(sockfd);
        int ir = ::send(sockfd, buf, datalen, 0);
        printf("netcomponent real send %d\n", ir);
        if (ir > 0) 
        {
            Sendbuf::skip_read_ptr(sockfd, ir);
        } else if (ir == -1 && errno == EAGAIN) 
        {
            break;
        } else if(ir == -1) 
        {
            real_close(sockfd, "peer close");
            break;
        }
    }
}


void NetComponent::ev_readable(int sockfd)
{
    printf("netcomponent ev_readable\n");
    //接收数据
    for(;;)
    {
        char* wptr= Recvbuf::getwptr(sockfd);
        int buflen = Recvbuf::bufremain(sockfd);
        int ir = ::recv(sockfd, wptr, buflen, 0);
        printf("netcomponent real recv %d bufremain %d\n", ir, buflen);
        if (ir == 0 || (ir == -1 && errno != EAGAIN))
        {
            break;
        }
        if (ir == -1 && errno == EAGAIN)
        {
            break;
        }
        Recvbuf::wskip(sockfd, ir);

        for (;;)
        {
            char* rptr = Recvbuf::getrptr(sockfd);
            int datalen = Recvbuf::datalen(sockfd);
            if (datalen <= 0)
            {
                Recvbuf::buf2line(sockfd);
                break;
            }
            int packetlen = dispatch(sockfd, rptr, datalen);
            if (packetlen > 0)
            {
                Recvbuf::rskip(sockfd, packetlen);
            }
            if (packetlen == 0)
            {
                Recvbuf::buf2line(sockfd);
                break;
            }
        }
        break;
    }
}

int NetComponent::dispatch(int sockfd, char* data, size_t datalen)
{
    static Message msg;
    msg.src_nodeid = 0;
    msg.src_entityid = 0;
    msg.dst_entityid = 0;
    msg.dst_nodeid = 0;
    msg.id = MSG_NET_RAW_DATA;
    msg.sockfd = sockfd;
    msg.data = data;
    msg.datalen = datalen;
    int ir = this->entity->recv(&msg);
    return ir;
}

void NetComponent::ev_accept(int listenfd)
{
    int sockfd;	
    int error;
    struct sockaddr_in addr;	
    socklen_t addrlen = sizeof(addr);	
    sockfd = ::accept(listenfd, (struct sockaddr*)&addr, &addrlen);
    if(sockfd < 0)
    {
        return;
    }
    error = ::fcntl(sockfd, F_SETFL, fcntl(sockfd, F_GETFD, 0) | O_NONBLOCK);
    if (error < 0) 
    {
        return;
    }
    printf("accept a new socket sockfd(%d)\n", sockfd);

    this->create_file_event(sockfd, AE_READABLE, _ev_readable, this);
    Sendbuf::create(sockfd);
    Recvbuf::create(sockfd, 1024);

    static Message msg;
    msg.src_nodeid = 0;
    msg.src_entityid = 0;
    msg.dst_entityid = 0;
    msg.dst_nodeid = 0;
    msg.id = MSG_NEW_CONNECTION;

    msg.sockfd = sockfd;
    this->entity->recv(&msg);
}


void NetComponent::real_close(int sockfd, const char* reason)
{
   printf("real close %d\n", sockfd); 
   Recvbuf::free(sockfd);
   Sendbuf::free(sockfd);
}

int NetComponent::send(int sockfd, const void* data, size_t size)
{
    //插入到缓冲区
    char* buf= Sendbuf::alloc(sockfd,  size);
    if (!buf)
    {
        return 0;
    }
    printf("entity[%d] send %ld to sockfd(%d)\n", this->entity->id, size, sockfd);
    memcpy(buf, data, size);
    Sendbuf::flush(sockfd, buf, size);
    this->create_file_event(sockfd, AE_WRITABLE, _ev_writable, this);
    return size;
}


int NetComponent::send_str(int sockfd, const char* data)
{
    return send(sockfd, data, strlen(data));
}
