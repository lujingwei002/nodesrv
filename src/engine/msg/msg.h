#ifndef _MSG_H_
#define _MSG_H_
#include <stdint.h>
#include <stdlib.h>
#include "container/buffer.h"

//tolua_begin

class MessageHeader
{
public:
    uint32_t len;
    //源实体id
    uint32_t src_objectid;
    uint32_t src_nodeid;
    //目标实体id
    uint32_t dst_objectid;
    uint32_t dst_nodeid;
    //消息id
    uint32_t id;
};

class MessageOption
{
public:
    bool cache;
};

class Message
{
public:
    static int alloc_count;
    Message();
    ~Message();

    uint32_t magic_code;
    MessageHeader header;
    uint32_t magic_code2;

    MessageOption option;
    uint32_t byte_sent;
    int32_t sockfd;
    int32_t sid;
    int32_t ref_count;
    Buffer payload;
    char* data;
    int datalen;
};


//发送消息
#define MSG_SEND 1
//连接节点
#define MSG_NODE_REG 3
//创建实体
#define MSG_CREATE_GAMEOBJECT 4
//网络原始数据
#define MSG_NET_RAW_DATA 5
//网络数据包
#define MSG_NET_PACKET 6
//新链接
#define MSG_NEW_CONNECTION 7
//断开链接
#define MSG_CLOSE_CONNECTION 8
//远程方法调用
#define MSG_POST 9
#define MSG_NEW_SESSION  10
#define MSG_CLOSE_SESSION 11

#pragma pack(push, 1)

//创建实体
typedef struct tagCreateGameObjectMsg
{
    uint16_t len;
    char filepath[64];
} CreateGameObjectMsg;

#pragma pack(pop)

//tolua_end

#endif
