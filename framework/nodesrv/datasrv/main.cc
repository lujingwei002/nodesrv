#include "stdafx.h"

int main(int argc, char **argv)
{
    Neox::main(argc, argv);
    NodeMgr::lua_reglib(luaopen_datasrv);
    NodeMgr::lua_dofile("srvapp.lua");
    //主循环
    Neox::loop();
    return 0;
}