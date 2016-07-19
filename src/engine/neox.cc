#include "neox.h"

extern "C"{
    int luaopen_neox(lua_State* tolua_S);
}

namespace Neox
{
    int main(int argc, char** argv)
    {
        NodeMgr::main(argc, argv);
        //Net::init(); 
        //Script::init();
        //初始化lua
        return 0;
    }
    Node* create_node_remote(int nodeid)
    {
        return NodeMgr::create_node_remote(nodeid);
    }

    GameObject* create_gameobject_local(int nodeid, const char* filepath)
    {
        Node* node = NodeMgr::find_node(nodeid);
        if (!node)
        {
            return NULL;
        }
        return node->create_gameobject_local(filepath);
    }

    
    int update(long long cur_tick)
    {
        NodeMgr::update(cur_tick);
        return 0;
    }

    static void sig_int(int b)
    {
        LOG_INFO("sig_int\n");
        //lua_State *L = s_L;
        //if (L != NULL) {
            //lua_getglobal(L, "_atint");
            //if(!lua_isnil(L, -1)){
                //lua_pcall(L, 0, 0, 0);
                //return;
            //}
        //} 
        exit(0);
    }

    static void _atexit() 
    {
        LOG_INFO("_atexit\n");
        static const char * pidfile = "pid";
        File::remove(pidfile);
        //lua_State *L = s_L;
        //if (L != NULL) {
            //lua_getglobal(L, "_atexit");
            //if(!lua_isnil(L, -1)){
                //lua_pcall(L, 0, 0, 0);
            //}
        //}    
    }

    void fork_daemon()
    {
        pid_t pid;
        pid = fork();
        if(pid)
        {
            exit(0);
        }else if(pid < 0)
        {
            LOG_ERROR("fork error\n");
            exit(1);
        }
        setsid();
        pid = fork();
        if(pid)
        {
            exit(0);
        }else if(pid < 0)
        {
            LOG_ERROR("fork error\n");
            exit(1);
        }
        //ps, 关了就不要写
        //for(i = 0; i <=2; i++){
          //close(i);
        //}
        //忽略ctrl-c
        signal(SIGHUP, SIG_IGN);
        signal(SIGQUIT, SIG_IGN);
        signal(SIGTTOU, SIG_IGN);
        signal(SIGTTIN, SIG_IGN);
        signal(SIGCHLD, SIG_IGN);
        signal(SIGTERM, SIG_IGN);
        signal(SIGHUP, SIG_IGN);
        //往关闭的socket写数据
        signal(SIGPIPE, SIG_IGN);
        //google protobuf出错时候会出这个
        signal(SIGABRT, SIG_IGN);
        //ctrl-c信号
        signal(SIGINT, sig_int);
        atexit(_atexit);

        //记录pid
        FILE* file = fopen("pid", "w+");
        pid = getpid();
        char pidstr[32];
        sprintf(pidstr, "%d", pid);
        fwrite(pidstr, strlen(pidstr), 1, file);
        fclose(file);
    }

    void loop()
    {
        NodeMgr::update(time(NULL));
    }

    int lua_openlibs(lua_State* L)
    {
        luaopen_neox(L);
        luaopen_json(L);
        luaopen_log(L);
        luaopen_cstring(L);
        luaopen_port(L);
        luaopen_ae(L);
        luaopen_system(L);
        luaopen_pblua(L);
        luaopen_pb_port(L);
        luaopen_rmi_port(L);
        luaopen_websock_port(L);
        luaopen_redis(L);
        luaopen_mysql(L);
        luaopen_srvapp(L);
        return 0;
    }
};


