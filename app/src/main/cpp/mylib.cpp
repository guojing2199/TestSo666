#include <jni.h>
#include "mylib.h"

extern "C"
{
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
};



using namespace std;


static int add(lua_State *L)
{
    int ret = 0;
    luaL_checktype(L, 1, LUA_TNUMBER); // 参数安全检查
    luaL_checktype(L, 2, LUA_TNUMBER);
    int x = (int)lua_tonumber(L, 1);
    int y = (int)lua_tonumber(L, 2);

    lua_pushinteger(L, x + y);

    return ret;
}

static const struct luaL_Reg R[] = {
        {"add", add},
        {NULL, NULL}
};

extern "C"
{
int luaopen_testso(lua_State *L)
{
    luaL_newlib(L, R);
    //LOGD("load lrapilib");
    return 1;
}
}