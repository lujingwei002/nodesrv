#include "date.h"
#include <sys/time.h>
#include <time.h>

int Date::msectime(lua_State *L)
{
    struct timeval tv; 
    struct timezone tz; 
    ::gettimeofday(&tv,&tz);
    long long msec = tv.tv_sec * 1000 + tv.tv_usec / 1000;
    lua_pushnumber(L, msec);
    return 1;
}

int Date::gettimeofday(lua_State *L)
{
    struct timeval tv; 
    struct timezone tz; 
    ::gettimeofday(&tv,&tz);
    lua_pushinteger(L,tv.tv_sec);
    lua_pushinteger(L,tv.tv_usec);
    return 2;
}

int Date::time(lua_State *L)
{
    int t = time(NULL);
    lua_pushinteger(L, t);
    return 1;
}

int Date::strftime(lua_State *L)
{
    if(lua_gettop(L) == 2 && lua_isstring(L, 1) && lua_isnumber(L, 2))
    {
        const char *format = (const char *)lua_tostring(L, 1);
        time_t time = (time_t)lua_tonumber(L, 2);
        struct tm *tm;
        tm = localtime(&time);
        char str[32];
        if(::strftime(str, sizeof(str), format, tm))
        {
        }
        lua_pushstring(L, str);
        return 1;
    }
    return 0;
}

int Date::issameday(lua_State *L)
{
	if (lua_gettop(L) == 1 && lua_isnumber(L, 1))
    {
		time_t t1 = (time_t)lua_tonumber(L, 1);
		time_t t2 = time(NULL);
        struct tm tm1;
        localtime_r(&t1, &tm1);
        struct tm tm2;
        localtime_r(&t2, &tm2);
        if(tm1.tm_year == tm2.tm_year &&
           tm1.tm_mon == tm2.tm_mon && 
           tm1.tm_mday == tm2.tm_mday)
        {
            lua_pushboolean(L, 1);
            return 1;
        }
        lua_pushboolean(L, 0);
        return 1;
	}
    return 0;
}

int Date::issamemonth(lua_State *L)
{
	if (lua_gettop(L) == 1 && lua_isnumber(L, 1))
    {
		time_t t1 = (time_t)lua_tonumber(L, 1);
		time_t t2 = time(NULL);
        struct tm tm1;
        localtime_r(&t1, &tm1);
        struct tm tm2;
        localtime_r(&t2, &tm2);
        if(tm1.tm_year == tm2.tm_year &&
           tm1.tm_mon == tm2.tm_mon)
        {
            lua_pushboolean(L, 1);
            return 1;
        }
        lua_pushboolean(L, 0);
        return 1;
	}
    return 0;
}

int Date::issameweek(lua_State *L)
{
	if (lua_gettop(L) == 1 && lua_isnumber(L, 1))
    {
		time_t t1 = (time_t)lua_tonumber(L, 1);
		time_t t2 = time(NULL);
        struct tm tm1;
        localtime_r(&t1, &tm1);
        struct tm tm2;
        localtime_r(&t2, &tm2);
        if(tm1.tm_year != tm2.tm_year)
        {
            lua_pushboolean(L, 0);
            return 1;
        }
        if(tm1.tm_yday == tm2.tm_yday)
        {
            lua_pushboolean(L, 1);
            return 1;
        }
        if(tm1.tm_yday > tm2.tm_yday && tm1.tm_yday - tm2.tm_yday <= tm1.tm_wday)
        {
            lua_pushboolean(L, 1);
            return 1;
        }
        if(tm1.tm_yday < tm2.tm_yday && tm2.tm_yday - tm1.tm_yday <= 6 - tm1.tm_wday)
        {
            lua_pushboolean(L, 1);
            return 1;
        }
        lua_pushboolean(L, 0);
        return 1;
	}
    return 0;
}


