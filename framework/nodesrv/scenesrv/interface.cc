/*
** Lua binding: scenesrv
** Generated automatically by tolua++-1.0.92 on Wed Jul 13 12:09:58 2016.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_scenesrv_open (lua_State* tolua_S);

#include "scenesrv.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_SceneSrv (lua_State* tolua_S)
{
 SceneSrv* self = (SceneSrv*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Component");
 tolua_usertype(tolua_S,"Message");
 tolua_usertype(tolua_S,"SceneSrv");
}

/* method: new of class  SceneSrv */
#ifndef TOLUA_DISABLE_tolua_scenesrv_SceneSrv_new00
static int tolua_scenesrv_SceneSrv_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SceneSrv",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SceneSrv* tolua_ret = (SceneSrv*)  new SceneSrv();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"SceneSrv");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SceneSrv */
#ifndef TOLUA_DISABLE_tolua_scenesrv_SceneSrv_new00_local
static int tolua_scenesrv_SceneSrv_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SceneSrv",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SceneSrv* tolua_ret = (SceneSrv*)  new SceneSrv();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"SceneSrv");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SceneSrv */
#ifndef TOLUA_DISABLE_tolua_scenesrv_SceneSrv_delete00
static int tolua_scenesrv_SceneSrv_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SceneSrv",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SceneSrv* self = (SceneSrv*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: awake of class  SceneSrv */
#ifndef TOLUA_DISABLE_tolua_scenesrv_SceneSrv_awake00
static int tolua_scenesrv_SceneSrv_awake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SceneSrv",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SceneSrv* self = (SceneSrv*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'awake'",NULL);
#endif
  {
   self->awake();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'awake'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv of class  SceneSrv */
#ifndef TOLUA_DISABLE_tolua_scenesrv_SceneSrv_recv00
static int tolua_scenesrv_SceneSrv_recv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SceneSrv",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SceneSrv* self = (SceneSrv*)  tolua_tousertype(tolua_S,1,0);
  Message* msg = ((Message*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv'",NULL);
#endif
  {
   int tolua_ret = (int)  self->recv(msg);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_scenesrv_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SceneSrv","SceneSrv","Component",tolua_collect_SceneSrv);
  #else
  tolua_cclass(tolua_S,"SceneSrv","SceneSrv","Component",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SceneSrv");
   tolua_function(tolua_S,"new",tolua_scenesrv_SceneSrv_new00);
   tolua_function(tolua_S,"new_local",tolua_scenesrv_SceneSrv_new00_local);
   tolua_function(tolua_S,".call",tolua_scenesrv_SceneSrv_new00_local);
   tolua_function(tolua_S,"delete",tolua_scenesrv_SceneSrv_delete00);
   tolua_function(tolua_S,"awake",tolua_scenesrv_SceneSrv_awake00);
   tolua_function(tolua_S,"recv",tolua_scenesrv_SceneSrv_recv00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 extern "C"{
 TOLUA_API int luaopen_scenesrv (lua_State* tolua_S) {
 return tolua_scenesrv_open(tolua_S);
};
}
#endif

