/*
** Lua binding: nodesrv
** Generated automatically by tolua++-1.0.92 on Wed Jun 29 20:53:57 2016.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_nodesrv_open (lua_State* tolua_S);

#include "type/type.h"
#include "entity/entity.h"
#include "component/component.h"
#include "component/testcomponent.h"
#include "component/scriptcomponent.h"
#include "component/netcomponent.h"
#include "component/httpcomponent.h"
#include "node/node.h"
#include "node/nodemgr.h"
#include "msg/msg.h"
#include "container/buffer.h"
#include "msg/rpc.h"
#include "file/file.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Type (lua_State* tolua_S)
{
 Type* self = (Type*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_ScriptComponent (lua_State* tolua_S)
{
 ScriptComponent* self = (ScriptComponent*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_Component (lua_State* tolua_S)
{
 Component* self = (Component*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_NetComponent (lua_State* tolua_S)
{
 NetComponent* self = (NetComponent*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_Buffer (lua_State* tolua_S)
{
 Buffer* self = (Buffer*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_Entity (lua_State* tolua_S)
{
 Entity* self = (Entity*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_TestComponent (lua_State* tolua_S)
{
 TestComponent* self = (TestComponent*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_Node (lua_State* tolua_S)
{
 Node* self = (Node*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_HttpComponent (lua_State* tolua_S)
{
 HttpComponent* self = (HttpComponent*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"TestComponent");
 tolua_usertype(tolua_S,"CreateEntityMsg");
 tolua_usertype(tolua_S,"Buffer");
 tolua_usertype(tolua_S,"ScriptComponent");
 tolua_usertype(tolua_S,"RpcMessage");
 tolua_usertype(tolua_S,"MsgHeader");
 tolua_usertype(tolua_S,"Message");
 tolua_usertype(tolua_S,"Component");
 tolua_usertype(tolua_S,"NetComponent");
 tolua_usertype(tolua_S,"::google::protobuf::Message");
 tolua_usertype(tolua_S,"Node");
 tolua_usertype(tolua_S,"Entity");
 tolua_usertype(tolua_S,"Type");
 tolua_usertype(tolua_S,"aeFileProc");
 tolua_usertype(tolua_S,"HttpComponent");
}

/* method: new of class  Type */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Type_new00
static int tolua_nodesrv_Type_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Type",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Type* tolua_ret = (Type*)  new Type(name);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Type");
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

/* method: new_local of class  Type */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Type_new00_local
static int tolua_nodesrv_Type_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Type",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Type* tolua_ret = (Type*)  new Type(name);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Type");
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

/* get function: name of class  Type */
#ifndef TOLUA_DISABLE_tolua_get_Type_name
static int tolua_get_Type_name(lua_State* tolua_S)
{
  Type* self = (Type*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  Type */
#ifndef TOLUA_DISABLE_tolua_set_Type_name
static int tolua_set_Type_name(lua_State* tolua_S)
{
  Type* self = (Type*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_isstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy(self->name,tolua_tostring(tolua_S,2,0),64-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_new00
static int tolua_nodesrv_Entity_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Entity* tolua_ret = (Entity*)  new Entity();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Entity");
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

/* method: new_local of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_new00_local
static int tolua_nodesrv_Entity_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Entity* tolua_ret = (Entity*)  new Entity();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Entity");
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

/* method: delete of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_delete00
static int tolua_nodesrv_Entity_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
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

/* method: test of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_test00
static int tolua_nodesrv_Entity_test00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'test'",NULL);
#endif
  {
   int tolua_ret = (int)  self->test();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'test'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_create00
static int tolua_nodesrv_Entity_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create'",NULL);
#endif
  {
   self->create();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_save00
static int tolua_nodesrv_Entity_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
  {
   int tolua_ret = (int)  self->save();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_update00
static int tolua_nodesrv_Entity_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  uint64_t cur_tick = ((uint64_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'",NULL);
#endif
  {
   self->update(cur_tick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: awake of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_awake00
static int tolua_nodesrv_Entity_awake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
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

/* method: destory of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_destory00
static int tolua_nodesrv_Entity_destory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destory'",NULL);
#endif
  {
   self->destory();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_recv00
static int tolua_nodesrv_Entity_recv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
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

/* method: recv of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_recv01
static int tolua_nodesrv_Entity_recv01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const void* data = ((const void*)  tolua_touserdata(tolua_S,3,0));
  size_t datalen = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv'",NULL);
#endif
  {
   int tolua_ret = (int)  self->recv(header,data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Entity_recv00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: unreach of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_unreach00
static int tolua_nodesrv_Entity_unreach00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const void* data = ((const void*)  tolua_touserdata(tolua_S,3,0));
  size_t datalen = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unreach'",NULL);
#endif
  {
   int tolua_ret = (int)  self->unreach(header,data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unreach'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_component of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_add_component00
static int tolua_nodesrv_Entity_add_component00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  Component* component = ((Component*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_component'",NULL);
#endif
  {
   int tolua_ret = (int)  self->add_component(component);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_component'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_script of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_add_script00
static int tolua_nodesrv_Entity_add_script00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  const char* scriptname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_script'",NULL);
#endif
  {
   ScriptComponent* tolua_ret = (ScriptComponent*)  self->add_script(scriptname);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScriptComponent");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_script'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: del_component of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_del_component00
static int tolua_nodesrv_Entity_del_component00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  Component* component = ((Component*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'del_component'",NULL);
#endif
  {
   int tolua_ret = (int)  self->del_component(component);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_component'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_component of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_get_component00
static int tolua_nodesrv_Entity_get_component00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Type",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  Type* type = ((Type*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_component'",NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->get_component(type);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_component'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_component of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_get_component01
static int tolua_nodesrv_Entity_get_component01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_component'",NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->get_component(name);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Entity_get_component00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_component of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_get_component02
static int tolua_nodesrv_Entity_get_component02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     false
 )
  goto tolua_lerror;
 else
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_component'",NULL);
#endif
  {
return self->get_component(L);
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Entity_get_component01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_script of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_get_script00
static int tolua_nodesrv_Entity_get_script00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  const char* classname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_script'",NULL);
#endif
  {
   ScriptComponent* tolua_ret = (ScriptComponent*)  self->get_script(classname);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScriptComponent");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_script'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reg_msg of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_reg_msg00
static int tolua_nodesrv_Entity_reg_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  uint32_t id = ((uint32_t)  tolua_tonumber(tolua_S,2,0));
  Component* component = ((Component*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reg_msg'",NULL);
#endif
  {
   int tolua_ret = (int)  self->reg_msg(id,component);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reg_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unreg_msg of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_unreg_msg00
static int tolua_nodesrv_Entity_unreg_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  uint32_t id = ((uint32_t)  tolua_tonumber(tolua_S,2,0));
  Component* component = ((Component*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unreg_msg'",NULL);
#endif
  {
   int tolua_ret = (int)  self->unreg_msg(id,component);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unreg_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_child of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_get_child00
static int tolua_nodesrv_Entity_get_child00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_child'",NULL);
#endif
  {
   Entity* tolua_ret = (Entity*)  self->get_child(index);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_child'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_child of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_add_child00
static int tolua_nodesrv_Entity_add_child00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  Entity* entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_child'",NULL);
#endif
  {
   int tolua_ret = (int)  self->add_child(entity);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_child'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: del_child of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_del_child00
static int tolua_nodesrv_Entity_del_child00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'del_child'",NULL);
#endif
  {
   int tolua_ret = (int)  self->del_child(index);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_child'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: del_child of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_del_child01
static int tolua_nodesrv_Entity_del_child01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  Entity* entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'del_child'",NULL);
#endif
  {
   int tolua_ret = (int)  self->del_child(entity);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Entity_del_child00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: child_index of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_child_index00
static int tolua_nodesrv_Entity_child_index00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
  Entity* entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'child_index'",NULL);
#endif
  {
   int tolua_ret = (int)  self->child_index(entity);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'child_index'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_parent of class  Entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Entity_get_parent00
static int tolua_nodesrv_Entity_get_parent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_parent'",NULL);
#endif
  {
   Entity* tolua_ret = (Entity*)  self->get_parent();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_parent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  Entity */
#ifndef TOLUA_DISABLE_tolua_get_Entity_id
static int tolua_get_Entity_id(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  Entity */
#ifndef TOLUA_DISABLE_tolua_set_Entity_id
static int tolua_set_Entity_id(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->id = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data of class  Entity */
#ifndef TOLUA_DISABLE_tolua_get_Entity_data
static int tolua_get_Entity_data(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->data);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data of class  Entity */
#ifndef TOLUA_DISABLE_tolua_set_Entity_data
static int tolua_set_Entity_data(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: node of class  Entity */
#ifndef TOLUA_DISABLE_tolua_get_Entity_node_ptr
static int tolua_get_Entity_node_ptr(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'node'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->node,"Node");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: node of class  Entity */
#ifndef TOLUA_DISABLE_tolua_set_Entity_node_ptr
static int tolua_set_Entity_node_ptr(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'node'",NULL);
  if (!tolua_isusertype(tolua_S,2,"Node",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->node = ((Node*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: name of class  Entity */
#ifndef TOLUA_DISABLE_tolua_get_Entity_name
static int tolua_get_Entity_name(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  Entity */
#ifndef TOLUA_DISABLE_tolua_set_Entity_name
static int tolua_set_Entity_name(lua_State* tolua_S)
{
  Entity* self = (Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_isstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy(self->name,tolua_tostring(tolua_S,2,0),64-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_new00
static int tolua_nodesrv_Component_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Component* tolua_ret = (Component*)  new Component();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
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

/* method: new_local of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_new00_local
static int tolua_nodesrv_Component_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Component* tolua_ret = (Component*)  new Component();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Component");
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

/* method: delete of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_delete00
static int tolua_nodesrv_Component_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
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

/* method: awake of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_awake00
static int tolua_nodesrv_Component_awake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
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

/* method: destory of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_destory00
static int tolua_nodesrv_Component_destory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destory'",NULL);
#endif
  {
   self->destory();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_update00
static int tolua_nodesrv_Component_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  long long cur_tick = ((long long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'",NULL);
#endif
  {
   self->update(cur_tick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_recv00
static int tolua_nodesrv_Component_recv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
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

/* method: recv of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_recv01
static int tolua_nodesrv_Component_recv01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const void* data = ((const void*)  tolua_touserdata(tolua_S,3,0));
  size_t datalen = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv'",NULL);
#endif
  {
   int tolua_ret = (int)  self->recv(header,data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Component_recv00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: unreach of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_unreach00
static int tolua_nodesrv_Component_unreach00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const void* data = ((const void*)  tolua_touserdata(tolua_S,3,0));
  size_t datalen = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unreach'",NULL);
#endif
  {
   int tolua_ret = (int)  self->unreach(header,data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unreach'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_pushfunction of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_lua_pushfunction00
static int tolua_nodesrv_Component_lua_pushfunction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const char* func = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_pushfunction'",NULL);
#endif
  {
   int tolua_ret = (int)  self->lua_pushfunction(func);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_pushfunction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_printstack of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_lua_printstack00
static int tolua_nodesrv_Component_lua_printstack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_printstack'",NULL);
#endif
  {
   int tolua_ret = (int)  self->lua_printstack();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_printstack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_getstring of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_lua_getstring00
static int tolua_nodesrv_Component_lua_getstring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const char* fieldname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_getstring'",NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->lua_getstring(fieldname);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_getstring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_getnumber of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_lua_getnumber00
static int tolua_nodesrv_Component_lua_getnumber00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const char* fieldname = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_getnumber'",NULL);
#endif
  {
   int64_t tolua_ret = (int64_t)  self->lua_getnumber(fieldname);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_getnumber'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_entity of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_get_entity00
static int tolua_nodesrv_Component_get_entity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_entity'",NULL);
#endif
  {
   Entity* tolua_ret = (Entity*)  self->get_entity();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_entity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_entity of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_set_entity00
static int tolua_nodesrv_Component_set_entity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  Entity* entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_entity'",NULL);
#endif
  {
   self->set_entity(entity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_entity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_node of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_get_node00
static int tolua_nodesrv_Component_get_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_node'",NULL);
#endif
  {
   Node* tolua_ret = (Node*)  self->get_node();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create_file_event of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_create_file_event00
static int tolua_nodesrv_Component_create_file_event00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"aeFileProc",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  int fd = ((int)  tolua_tonumber(tolua_S,2,0));
  int mask = ((int)  tolua_tonumber(tolua_S,3,0));
  aeFileProc* proc = ((aeFileProc*)  tolua_tousertype(tolua_S,4,0));
  void* clientData = ((void*)  tolua_touserdata(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create_file_event'",NULL);
#endif
  {
   int tolua_ret = (int)  self->create_file_event(fd,mask,proc,clientData);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_file_event'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete_file_event of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_delete_file_event00
static int tolua_nodesrv_Component_delete_file_event00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  int fd = ((int)  tolua_tonumber(tolua_S,2,0));
  int mask = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete_file_event'",NULL);
#endif
  {
   self->delete_file_event(fd,mask);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete_file_event'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reg_msg of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_reg_msg00
static int tolua_nodesrv_Component_reg_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reg_msg'",NULL);
#endif
  {
   int tolua_ret = (int)  self->reg_msg(id);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reg_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unreg_msg of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_unreg_msg00
static int tolua_nodesrv_Component_unreg_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unreg_msg'",NULL);
#endif
  {
   int tolua_ret = (int)  self->unreg_msg(id);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unreg_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send_entity_msg of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_send_entity_msg00
static int tolua_nodesrv_Component_send_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,2,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,3,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,4,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_entity_msg'",NULL);
#endif
  {
   self->send_entity_msg(dst_entityid,msgid,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: forward_entity_msg of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_forward_entity_msg00
static int tolua_nodesrv_Component_forward_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,5,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'forward_entity_msg'",NULL);
#endif
  {
   self->forward_entity_msg(dst_nodeid,dst_entityid,msgid,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'forward_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_component of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_get_component00
static int tolua_nodesrv_Component_get_component00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     false
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_component'",NULL);
#endif
  {
return self->get_component(L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_component'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_component of class  Component */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Component_get_component01
static int tolua_nodesrv_Component_get_component01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_component'",NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->get_component(name);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Component_get_component00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: entity of class  Component */
#ifndef TOLUA_DISABLE_tolua_get_Component_entity_ptr
static int tolua_get_Component_entity_ptr(lua_State* tolua_S)
{
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'entity'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->entity,"Entity");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: entity of class  Component */
#ifndef TOLUA_DISABLE_tolua_set_Component_entity_ptr
static int tolua_set_Component_entity_ptr(lua_State* tolua_S)
{
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'entity'",NULL);
  if (!tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->entity = ((Entity*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TestComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_TestComponent_new00
static int tolua_nodesrv_TestComponent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TestComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TestComponent* tolua_ret = (TestComponent*)  new TestComponent();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"TestComponent");
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

/* method: new_local of class  TestComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_TestComponent_new00_local
static int tolua_nodesrv_TestComponent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TestComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TestComponent* tolua_ret = (TestComponent*)  new TestComponent();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"TestComponent");
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

/* method: delete of class  TestComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_TestComponent_delete00
static int tolua_nodesrv_TestComponent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TestComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TestComponent* self = (TestComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: test of class  TestComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_TestComponent_test00
static int tolua_nodesrv_TestComponent_test00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TestComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TestComponent* self = (TestComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'test'",NULL);
#endif
  {
   int tolua_ret = (int)  self->test();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'test'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_ScriptComponent_new00
static int tolua_nodesrv_ScriptComponent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScriptComponent",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* modname = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   ScriptComponent* tolua_ret = (ScriptComponent*)  new ScriptComponent(modname);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScriptComponent");
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

/* method: new_local of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_ScriptComponent_new00_local
static int tolua_nodesrv_ScriptComponent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScriptComponent",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* modname = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   ScriptComponent* tolua_ret = (ScriptComponent*)  new ScriptComponent(modname);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"ScriptComponent");
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

/* method: delete of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_ScriptComponent_delete00
static int tolua_nodesrv_ScriptComponent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptComponent* self = (ScriptComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: awake of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_ScriptComponent_awake00
static int tolua_nodesrv_ScriptComponent_awake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptComponent* self = (ScriptComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: update of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_ScriptComponent_update00
static int tolua_nodesrv_ScriptComponent_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptComponent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptComponent* self = (ScriptComponent*)  tolua_tousertype(tolua_S,1,0);
  uint64_t cur_tick = ((uint64_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'",NULL);
#endif
  {
   self->update(cur_tick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_ScriptComponent_recv00
static int tolua_nodesrv_ScriptComponent_recv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptComponent",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptComponent* self = (ScriptComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: modname of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_get_ScriptComponent_modname
static int tolua_get_ScriptComponent_modname(lua_State* tolua_S)
{
  ScriptComponent* self = (ScriptComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'modname'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->modname);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: modname of class  ScriptComponent */
#ifndef TOLUA_DISABLE_tolua_set_ScriptComponent_modname
static int tolua_set_ScriptComponent_modname(lua_State* tolua_S)
{
  ScriptComponent* self = (ScriptComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'modname'",NULL);
  if (!tolua_isstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy(self->modname,tolua_tostring(tolua_S,2,0),64-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_new00
static int tolua_nodesrv_NetComponent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   NetComponent* tolua_ret = (NetComponent*)  new NetComponent();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"NetComponent");
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

/* method: new_local of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_new00_local
static int tolua_nodesrv_NetComponent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   NetComponent* tolua_ret = (NetComponent*)  new NetComponent();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"NetComponent");
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

/* method: delete of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_delete00
static int tolua_nodesrv_NetComponent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NetComponent* self = (NetComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: update of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_update00
static int tolua_nodesrv_NetComponent_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NetComponent* self = (NetComponent*)  tolua_tousertype(tolua_S,1,0);
  long long cur_tick = ((long long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'",NULL);
#endif
  {
   self->update(cur_tick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: listen of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_listen00
static int tolua_nodesrv_NetComponent_listen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NetComponent* self = (NetComponent*)  tolua_tousertype(tolua_S,1,0);
  const char* host = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short port = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'listen'",NULL);
#endif
  {
   int tolua_ret = (int)  self->listen(host,port);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'listen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_send00
static int tolua_nodesrv_NetComponent_send00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NetComponent* self = (NetComponent*)  tolua_tousertype(tolua_S,1,0);
  int sockfd = ((int)  tolua_tonumber(tolua_S,2,0));
  const void* data = ((const void*)  tolua_touserdata(tolua_S,3,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send'",NULL);
#endif
  {
   int tolua_ret = (int)  self->send(sockfd,data,size);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send_str of class  NetComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NetComponent_send_str00
static int tolua_nodesrv_NetComponent_send_str00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"NetComponent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  NetComponent* self = (NetComponent*)  tolua_tousertype(tolua_S,1,0);
  int sockfd = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_str'",NULL);
#endif
  {
   int tolua_ret = (int)  self->send_str(sockfd,data);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send_str'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_new00
static int tolua_nodesrv_HttpComponent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HttpComponent* tolua_ret = (HttpComponent*)  new HttpComponent();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"HttpComponent");
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

/* method: new_local of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_new00_local
static int tolua_nodesrv_HttpComponent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HttpComponent* tolua_ret = (HttpComponent*)  new HttpComponent();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"HttpComponent");
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

/* method: delete of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_delete00
static int tolua_nodesrv_HttpComponent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpComponent* self = (HttpComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: recv of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_recv00
static int tolua_nodesrv_HttpComponent_recv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpComponent* self = (HttpComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: awake of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_awake00
static int tolua_nodesrv_HttpComponent_awake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpComponent* self = (HttpComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: send_binary_frame of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_send_binary_frame00
static int tolua_nodesrv_HttpComponent_send_binary_frame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpComponent* self = (HttpComponent*)  tolua_tousertype(tolua_S,1,0);
  int sid = ((int)  tolua_tonumber(tolua_S,2,0));
  const void* data = ((const void*)  tolua_touserdata(tolua_S,3,0));
  unsigned short datalen = ((unsigned short)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_binary_frame'",NULL);
#endif
  {
   int tolua_ret = (int)  self->send_binary_frame(sid,data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send_binary_frame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send_string_frame of class  HttpComponent */
#ifndef TOLUA_DISABLE_tolua_nodesrv_HttpComponent_send_string_frame00
static int tolua_nodesrv_HttpComponent_send_string_frame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HttpComponent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HttpComponent* self = (HttpComponent*)  tolua_tousertype(tolua_S,1,0);
  int sid = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* str = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_string_frame'",NULL);
#endif
  {
   int tolua_ret = (int)  self->send_string_frame(sid,str);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send_string_frame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_new00
static int tolua_nodesrv_Node_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Node* tolua_ret = (Node*)  new Node(nodeid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
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

/* method: new_local of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_new00_local
static int tolua_nodesrv_Node_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Node* tolua_ret = (Node*)  new Node(nodeid);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Node");
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

/* method: delete of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_delete00
static int tolua_nodesrv_Node_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
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

/* method: main of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_main00
static int tolua_nodesrv_Node_main00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  const char* mainfile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'main'",NULL);
#endif
  {
   self->main(mainfile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'main'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_update00
static int tolua_nodesrv_Node_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  long long cur_tick = ((long long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'",NULL);
#endif
  {
   self->update(cur_tick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: connect of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_connect00
static int tolua_nodesrv_Node_connect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  const char* host = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short port = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'connect'",NULL);
#endif
  {
   int tolua_ret = (int)  self->connect(host,port);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'connect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: listen of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_listen00
static int tolua_nodesrv_Node_listen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  const char* host = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short port = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'listen'",NULL);
#endif
  {
   int tolua_ret = (int)  self->listen(host,port);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'listen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_send00
static int tolua_nodesrv_Node_send00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  const char* data = ((const char*)  tolua_tostring(tolua_S,2,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send'",NULL);
#endif
  {
   int tolua_ret = (int)  self->send(data,size);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find_entity of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_find_entity00
static int tolua_nodesrv_Node_find_entity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  int entityid = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find_entity'",NULL);
#endif
  {
   Entity* tolua_ret = (Entity*)  self->find_entity(entityid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_entity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_entity of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_add_entity00
static int tolua_nodesrv_Node_add_entity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Entity* entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_entity'",NULL);
#endif
  {
   int tolua_ret = (int)  self->add_entity(entity);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_entity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_id of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_get_id00
static int tolua_nodesrv_Node_get_id00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_id'",NULL);
#endif
  {
   int tolua_ret = (int)  self->get_id();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_id'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_local of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_is_local00
static int tolua_nodesrv_Node_is_local00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'is_local'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->is_local();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_local'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_local of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_set_local00
static int tolua_nodesrv_Node_set_local00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  bool v = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_local'",NULL);
#endif
  {
   self->set_local(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_local'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_disconnect of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_is_disconnect00
static int tolua_nodesrv_Node_is_disconnect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'is_disconnect'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->is_disconnect();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_disconnect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create_entity_local of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_create_entity_local00
static int tolua_nodesrv_Node_create_entity_local00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  const char* filepath = ((const char*)  tolua_tostring(tolua_S,2,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create_entity_local'",NULL);
#endif
  {
   Entity* tolua_ret = (Entity*)  self->create_entity_local(filepath);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_entity_local'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create_entity_remote of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_create_entity_remote00
static int tolua_nodesrv_Node_create_entity_remote00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
  const char* filepath = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create_entity_remote'",NULL);
#endif
  {
   self->create_entity_remote(src_entity,filepath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_entity_remote'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_recv00
static int tolua_nodesrv_Node_recv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv'",NULL);
#endif
  {
   self->recv(header,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv_entity_msg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_recv_entity_msg00
static int tolua_nodesrv_Node_recv_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv_entity_msg'",NULL);
#endif
  {
   self->recv_entity_msg(header,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recv_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv_node_reg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_recv_node_reg00
static int tolua_nodesrv_Node_recv_node_reg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv_node_reg'",NULL);
#endif
  {
   self->recv_node_reg(header,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recv_node_reg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: recv_create_entity of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_recv_create_entity00
static int tolua_nodesrv_Node_recv_create_entity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recv_create_entity'",NULL);
#endif
  {
   self->recv_create_entity(header,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recv_create_entity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send_entity_msg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_send_entity_msg00
static int tolua_nodesrv_Node_send_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,5,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_entity_msg'",NULL);
#endif
  {
   self->send_entity_msg(src_entity,dst_entityid,msgid,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: send_entity_msg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_send_entity_msg01
static int tolua_nodesrv_Node_send_entity_msg01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  Buffer* buffer = ((Buffer*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_entity_msg'",NULL);
#endif
  {
   self->send_entity_msg(src_entity,dst_entityid,msgid,buffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodesrv_Node_send_entity_msg00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: send_entity_msg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_send_entity_msg02
static int tolua_nodesrv_Node_send_entity_msg02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"::google::protobuf::Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
 ::google::protobuf::Message* msg = ((::google::protobuf::Message*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'send_entity_msg'",NULL);
#endif
  {
   self->send_entity_msg(src_entity,dst_entityid,msgid,msg);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodesrv_Node_send_entity_msg01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: forward_entity_msg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_forward_entity_msg00
static int tolua_nodesrv_Node_forward_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,5,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'forward_entity_msg'",NULL);
#endif
  {
   self->forward_entity_msg(src_entity,dst_entityid,msgid,data,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'forward_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: forward_entity_msg of class  Node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Node_forward_entity_msg01
static int tolua_nodesrv_Node_forward_entity_msg01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MsgHeader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  MsgHeader* header = ((MsgHeader*)  tolua_tousertype(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'forward_entity_msg'",NULL);
#endif
  {
   self->forward_entity_msg(header,data,size);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodesrv_Node_forward_entity_msg00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  Node */
#ifndef TOLUA_DISABLE_tolua_get_Node_id
static int tolua_get_Node_id(lua_State* tolua_S)
{
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  Node */
#ifndef TOLUA_DISABLE_tolua_set_Node_id
static int tolua_set_Node_id(lua_State* tolua_S)
{
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->id = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: name of class  Node */
#ifndef TOLUA_DISABLE_tolua_get_Node_name
static int tolua_get_Node_name(lua_State* tolua_S)
{
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: name of class  Node */
#ifndef TOLUA_DISABLE_tolua_set_Node_name
static int tolua_set_Node_name(lua_State* tolua_S)
{
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'name'",NULL);
  if (!tolua_isstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy(self->name,tolua_tostring(tolua_S,2,0),64-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::update */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_update00
static int tolua_nodesrv_NodeMgr_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  long long cur_tick = ((long long)  tolua_tonumber(tolua_S,1,0));
  {
   NodeMgr::update(cur_tick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::find_node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_find_node00
static int tolua_nodesrv_NodeMgr_find_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int nodeid = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   Node* tolua_ret = (Node*)  NodeMgr::find_node(nodeid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::create_temp_node */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_create_temp_node00
static int tolua_nodesrv_NodeMgr_create_temp_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Node* tolua_ret = (Node*)  NodeMgr::create_temp_node();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_temp_node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::create_node_local */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_create_node_local00
static int tolua_nodesrv_NodeMgr_create_node_local00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int nodeid = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   Node* tolua_ret = (Node*)  NodeMgr::create_node_local(nodeid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_node_local'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::create_node_remote */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_create_node_remote00
static int tolua_nodesrv_NodeMgr_create_node_remote00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int nodeid = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   Node* tolua_ret = (Node*)  NodeMgr::create_node_remote(nodeid);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_node_remote'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::transfer_entity */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_transfer_entity00
static int tolua_nodesrv_NodeMgr_transfer_entity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,1,0));
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   NodeMgr::transfer_entity(src_entity,dst_nodeid);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transfer_entity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::send_entity_msg */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_send_entity_msg00
static int tolua_nodesrv_NodeMgr_send_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"::google::protobuf::Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,1,0));
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
 ::google::protobuf::Message* msg = ((::google::protobuf::Message*)  tolua_tousertype(tolua_S,5,0));
  {
   NodeMgr::send_entity_msg(src_entity,dst_nodeid,dst_entityid,msgid,msg);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'send_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::send_entity_msg */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_send_entity_msg01
static int tolua_nodesrv_NodeMgr_send_entity_msg01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,1,0));
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  Buffer* buffer = ((Buffer*)  tolua_tousertype(tolua_S,5,0));
  {
   NodeMgr::send_entity_msg(src_entity,dst_nodeid,dst_entityid,msgid,buffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodesrv_NodeMgr_send_entity_msg00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::send_entity_msg */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_send_entity_msg02
static int tolua_nodesrv_NodeMgr_send_entity_msg02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,1,0));
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,5,0));
  size_t size = ((size_t)  tolua_tonumber(tolua_S,6,0));
  {
   NodeMgr::send_entity_msg(src_entity,dst_nodeid,dst_entityid,msgid,data,size);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodesrv_NodeMgr_send_entity_msg01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::forward_entity_msg */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_forward_entity_msg00
static int tolua_nodesrv_NodeMgr_forward_entity_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,1,0));
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  int dst_entityid = ((int)  tolua_tonumber(tolua_S,3,0));
  int msgid = ((int)  tolua_tonumber(tolua_S,4,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,5,0));
  size_t len = ((size_t)  tolua_tonumber(tolua_S,6,0));
  {
   NodeMgr::forward_entity_msg(src_entity,dst_nodeid,dst_entityid,msgid,data,len);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'forward_entity_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: NodeMgr::create_entity_remote */
#ifndef TOLUA_DISABLE_tolua_nodesrv_NodeMgr_create_entity_remote00
static int tolua_nodesrv_NodeMgr_create_entity_remote00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Entity* src_entity = ((Entity*)  tolua_tousertype(tolua_S,1,0));
  int dst_nodeid = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* filepath = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   NodeMgr::create_entity_remote(src_entity,dst_nodeid,filepath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create_entity_remote'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: src_entityid of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_src_entityid
static int tolua_get_Message_src_entityid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_entityid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->src_entityid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: src_entityid of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_src_entityid
static int tolua_set_Message_src_entityid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_entityid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->src_entityid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: src_nodeid of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_src_nodeid
static int tolua_get_Message_src_nodeid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_nodeid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->src_nodeid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: src_nodeid of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_src_nodeid
static int tolua_set_Message_src_nodeid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_nodeid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->src_nodeid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dst_entityid of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_dst_entityid
static int tolua_get_Message_dst_entityid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_entityid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dst_entityid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dst_entityid of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_dst_entityid
static int tolua_set_Message_dst_entityid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_entityid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dst_entityid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dst_nodeid of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_dst_nodeid
static int tolua_get_Message_dst_nodeid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_nodeid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dst_nodeid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dst_nodeid of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_dst_nodeid
static int tolua_set_Message_dst_nodeid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_nodeid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dst_nodeid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_id
static int tolua_get_Message_id(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_id
static int tolua_set_Message_id(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->id = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sockfd of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_sockfd
static int tolua_get_Message_sockfd(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sockfd'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sockfd);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sockfd of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_sockfd
static int tolua_set_Message_sockfd(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sockfd'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sockfd = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sid of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_sid
static int tolua_get_Message_sid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sid of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_sid
static int tolua_set_Message_sid(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sid = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_data
static int tolua_get_Message_data(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->data);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: datalen of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_datalen
static int tolua_get_Message_datalen(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'datalen'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->datalen);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: datalen of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_datalen
static int tolua_set_Message_datalen(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'datalen'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->datalen = ((size_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: len of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_get_MsgHeader_len
static int tolua_get_MsgHeader_len(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'len'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->len);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: len of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_set_MsgHeader_len
static int tolua_set_MsgHeader_len(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'len'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->len = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: src_entityid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_get_MsgHeader_src_entityid
static int tolua_get_MsgHeader_src_entityid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_entityid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->src_entityid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: src_entityid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_set_MsgHeader_src_entityid
static int tolua_set_MsgHeader_src_entityid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_entityid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->src_entityid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: src_nodeid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_get_MsgHeader_src_nodeid
static int tolua_get_MsgHeader_src_nodeid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_nodeid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->src_nodeid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: src_nodeid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_set_MsgHeader_src_nodeid
static int tolua_set_MsgHeader_src_nodeid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src_nodeid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->src_nodeid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dst_entityid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_get_MsgHeader_dst_entityid
static int tolua_get_MsgHeader_dst_entityid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_entityid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dst_entityid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dst_entityid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_set_MsgHeader_dst_entityid
static int tolua_set_MsgHeader_dst_entityid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_entityid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dst_entityid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dst_nodeid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_get_MsgHeader_dst_nodeid
static int tolua_get_MsgHeader_dst_nodeid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_nodeid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dst_nodeid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dst_nodeid of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_set_MsgHeader_dst_nodeid
static int tolua_set_MsgHeader_dst_nodeid(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst_nodeid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dst_nodeid = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_get_MsgHeader_id
static int tolua_get_MsgHeader_id(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  MsgHeader */
#ifndef TOLUA_DISABLE_tolua_set_MsgHeader_id
static int tolua_set_MsgHeader_id(lua_State* tolua_S)
{
  MsgHeader* self = (MsgHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->id = ((uint32_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: len of class  CreateEntityMsg */
#ifndef TOLUA_DISABLE_tolua_get_CreateEntityMsg_len
static int tolua_get_CreateEntityMsg_len(lua_State* tolua_S)
{
  CreateEntityMsg* self = (CreateEntityMsg*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'len'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->len);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: len of class  CreateEntityMsg */
#ifndef TOLUA_DISABLE_tolua_set_CreateEntityMsg_len
static int tolua_set_CreateEntityMsg_len(lua_State* tolua_S)
{
  CreateEntityMsg* self = (CreateEntityMsg*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'len'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->len = ((uint16_t)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: filepath of class  CreateEntityMsg */
#ifndef TOLUA_DISABLE_tolua_get_CreateEntityMsg_filepath
static int tolua_get_CreateEntityMsg_filepath(lua_State* tolua_S)
{
  CreateEntityMsg* self = (CreateEntityMsg*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'filepath'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->filepath);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: filepath of class  CreateEntityMsg */
#ifndef TOLUA_DISABLE_tolua_set_CreateEntityMsg_filepath
static int tolua_set_CreateEntityMsg_filepath(lua_State* tolua_S)
{
  CreateEntityMsg* self = (CreateEntityMsg*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'filepath'",NULL);
  if (!tolua_isstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy(self->filepath,tolua_tostring(tolua_S,2,0),64-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_new00
static int tolua_nodesrv_Buffer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Buffer* tolua_ret = (Buffer*)  new Buffer();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Buffer");
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

/* method: new_local of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_new00_local
static int tolua_nodesrv_Buffer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Buffer* tolua_ret = (Buffer*)  new Buffer();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Buffer");
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

/* method: new of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_new01
static int tolua_nodesrv_Buffer_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  uint32_t init_size = ((uint32_t)  tolua_tonumber(tolua_S,2,0));
  {
   Buffer* tolua_ret = (Buffer*)  new Buffer(init_size);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Buffer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Buffer_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_new01_local
static int tolua_nodesrv_Buffer_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  uint32_t init_size = ((uint32_t)  tolua_tonumber(tolua_S,2,0));
  {
   Buffer* tolua_ret = (Buffer*)  new Buffer(init_size);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Buffer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodesrv_Buffer_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_delete00
static int tolua_nodesrv_Buffer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: read_int64 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_read_int6400
static int tolua_nodesrv_Buffer_read_int6400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int64_t def = ((int64_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read_int64'",NULL);
#endif
  {
   int64_t tolua_ret = (int64_t)  self->read_int64(def);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_int64'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read_int32 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_read_int3200
static int tolua_nodesrv_Buffer_read_int3200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int32_t def = ((int32_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read_int32'",NULL);
#endif
  {
   int32_t tolua_ret = (int32_t)  self->read_int32(def);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_int32'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read_int16 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_read_int1600
static int tolua_nodesrv_Buffer_read_int1600(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int16_t def = ((int16_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read_int16'",NULL);
#endif
  {
   int16_t tolua_ret = (int16_t)  self->read_int16(def);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_int16'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read_int8 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_read_int800
static int tolua_nodesrv_Buffer_read_int800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int8_t def = ((int8_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read_int8'",NULL);
#endif
  {
   int8_t tolua_ret = (int8_t)  self->read_int8(def);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_int8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read_buf of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_read_buf00
static int tolua_nodesrv_Buffer_read_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
  uint32_t datalen = ((uint32_t)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read_buf'",NULL);
#endif
  {
   int tolua_ret = (int)  self->read_buf(data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write_utf8 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_write_utf800
static int tolua_nodesrv_Buffer_write_utf800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
  uint16_t str_len = ((uint16_t)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write_utf8'",NULL);
#endif
  {
   int tolua_ret = (int)  self->write_utf8(str,str_len);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_utf8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write_int64 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_write_int6400
static int tolua_nodesrv_Buffer_write_int6400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int64_t val = ((int64_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write_int64'",NULL);
#endif
  {
   int tolua_ret = (int)  self->write_int64(val);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_int64'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write_int32 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_write_int3200
static int tolua_nodesrv_Buffer_write_int3200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int32_t val = ((int32_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write_int32'",NULL);
#endif
  {
   int tolua_ret = (int)  self->write_int32(val);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_int32'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write_int16 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_write_int1600
static int tolua_nodesrv_Buffer_write_int1600(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int16_t val = ((int16_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write_int16'",NULL);
#endif
  {
   int tolua_ret = (int)  self->write_int16(val);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_int16'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write_int8 of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_write_int800
static int tolua_nodesrv_Buffer_write_int800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  int8_t val = ((int8_t)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write_int8'",NULL);
#endif
  {
   int tolua_ret = (int)  self->write_int8(val);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_int8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write_buf of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_write_buf00
static int tolua_nodesrv_Buffer_write_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
  const void* data = ((const void*)  tolua_touserdata(tolua_S,2,0));
  uint32_t datalen = ((uint32_t)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write_buf'",NULL);
#endif
  {
   int tolua_ret = (int)  self->write_buf(data,datalen);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_size00
static int tolua_nodesrv_Buffer_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'",NULL);
#endif
  {
   uint32_t tolua_ret = (uint32_t)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_reset00
static int tolua_nodesrv_Buffer_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'",NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_buffer of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_get_buffer00
static int tolua_nodesrv_Buffer_get_buffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Buffer* self = (Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_buffer'",NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->get_buffer();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_buffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: temp of class  Buffer */
#ifndef TOLUA_DISABLE_tolua_nodesrv_Buffer_temp00
static int tolua_nodesrv_Buffer_temp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Buffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Buffer* tolua_ret = (Buffer*)  Buffer::temp();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"Buffer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'temp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: encode of class  RpcMessage */
#ifndef TOLUA_DISABLE_tolua_nodesrv_RpcMessage_encode00
static int tolua_nodesrv_RpcMessage_encode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RpcMessage",0,&tolua_err) ||
     false
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_State* L =  tolua_S;
  {
return RpcMessage::encode(L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'encode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: decode of class  RpcMessage */
#ifndef TOLUA_DISABLE_tolua_nodesrv_RpcMessage_decode00
static int tolua_nodesrv_RpcMessage_decode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RpcMessage",0,&tolua_err) ||
     false
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_State* L =  tolua_S;
  {
return RpcMessage::decode(L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'decode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::getcwd */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_getcwd00
static int tolua_nodesrv_File_getcwd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   char* tolua_ret = (char*)  File::getcwd();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getcwd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::chdir */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_chdir00
static int tolua_nodesrv_File_chdir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* dir = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  File::chdir(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'chdir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::mkdirs */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_mkdirs00
static int tolua_nodesrv_File_mkdirs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* dir = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  File::mkdirs(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mkdirs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::mkdir */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_mkdir00
static int tolua_nodesrv_File_mkdir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* dir = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  File::mkdir(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mkdir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::exists */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_exists00
static int tolua_nodesrv_File_exists00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* dir = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  File::exists(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'exists'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::remove */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_remove00
static int tolua_nodesrv_File_remove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* dir = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  File::remove(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::rename */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_rename00
static int tolua_nodesrv_File_rename00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* src = ((char*)  tolua_tostring(tolua_S,1,0));
  char* dst = ((char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  File::rename(src,dst);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::basename */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_basename00
static int tolua_nodesrv_File_basename00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     false
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_State* L =  tolua_S;
  {
return File::basename(L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'basename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: File::listdir */
#ifndef TOLUA_DISABLE_tolua_nodesrv_File_listdir00
static int tolua_nodesrv_File_listdir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     false
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_State* L =  tolua_S;
  {
return File::listdir(L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'listdir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_nodesrv_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Type","Type","",tolua_collect_Type);
  #else
  tolua_cclass(tolua_S,"Type","Type","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Type");
   tolua_function(tolua_S,"new",tolua_nodesrv_Type_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_Type_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_Type_new00_local);
   tolua_variable(tolua_S,"name",tolua_get_Type_name,tolua_set_Type_name);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Entity","Entity","",tolua_collect_Entity);
  #else
  tolua_cclass(tolua_S,"Entity","Entity","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Entity");
   tolua_function(tolua_S,"new",tolua_nodesrv_Entity_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_Entity_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_Entity_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_Entity_delete00);
   tolua_function(tolua_S,"test",tolua_nodesrv_Entity_test00);
   tolua_function(tolua_S,"create",tolua_nodesrv_Entity_create00);
   tolua_function(tolua_S,"save",tolua_nodesrv_Entity_save00);
   tolua_function(tolua_S,"update",tolua_nodesrv_Entity_update00);
   tolua_function(tolua_S,"awake",tolua_nodesrv_Entity_awake00);
   tolua_function(tolua_S,"destory",tolua_nodesrv_Entity_destory00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_Entity_recv00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_Entity_recv01);
   tolua_function(tolua_S,"unreach",tolua_nodesrv_Entity_unreach00);
   tolua_function(tolua_S,"add_component",tolua_nodesrv_Entity_add_component00);
   tolua_function(tolua_S,"add_script",tolua_nodesrv_Entity_add_script00);
   tolua_function(tolua_S,"del_component",tolua_nodesrv_Entity_del_component00);
   tolua_function(tolua_S,"get_component",tolua_nodesrv_Entity_get_component00);
   tolua_function(tolua_S,"get_component",tolua_nodesrv_Entity_get_component01);
   tolua_function(tolua_S,"get_component",tolua_nodesrv_Entity_get_component02);
   tolua_function(tolua_S,"get_script",tolua_nodesrv_Entity_get_script00);
   tolua_function(tolua_S,"reg_msg",tolua_nodesrv_Entity_reg_msg00);
   tolua_function(tolua_S,"unreg_msg",tolua_nodesrv_Entity_unreg_msg00);
   tolua_function(tolua_S,"get_child",tolua_nodesrv_Entity_get_child00);
   tolua_function(tolua_S,"add_child",tolua_nodesrv_Entity_add_child00);
   tolua_function(tolua_S,"del_child",tolua_nodesrv_Entity_del_child00);
   tolua_function(tolua_S,"del_child",tolua_nodesrv_Entity_del_child01);
   tolua_function(tolua_S,"child_index",tolua_nodesrv_Entity_child_index00);
   tolua_function(tolua_S,"get_parent",tolua_nodesrv_Entity_get_parent00);
   tolua_variable(tolua_S,"id",tolua_get_Entity_id,tolua_set_Entity_id);
   tolua_variable(tolua_S,"data",tolua_get_Entity_data,tolua_set_Entity_data);
   tolua_variable(tolua_S,"node",tolua_get_Entity_node_ptr,tolua_set_Entity_node_ptr);
   tolua_variable(tolua_S,"name",tolua_get_Entity_name,tolua_set_Entity_name);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Component","Component","",tolua_collect_Component);
  #else
  tolua_cclass(tolua_S,"Component","Component","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Component");
   tolua_function(tolua_S,"new",tolua_nodesrv_Component_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_Component_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_Component_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_Component_delete00);
   tolua_function(tolua_S,"awake",tolua_nodesrv_Component_awake00);
   tolua_function(tolua_S,"destory",tolua_nodesrv_Component_destory00);
   tolua_function(tolua_S,"update",tolua_nodesrv_Component_update00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_Component_recv00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_Component_recv01);
   tolua_function(tolua_S,"unreach",tolua_nodesrv_Component_unreach00);
   tolua_function(tolua_S,"lua_pushfunction",tolua_nodesrv_Component_lua_pushfunction00);
   tolua_function(tolua_S,"lua_printstack",tolua_nodesrv_Component_lua_printstack00);
   tolua_function(tolua_S,"lua_getstring",tolua_nodesrv_Component_lua_getstring00);
   tolua_function(tolua_S,"lua_getnumber",tolua_nodesrv_Component_lua_getnumber00);
   tolua_function(tolua_S,"get_entity",tolua_nodesrv_Component_get_entity00);
   tolua_function(tolua_S,"set_entity",tolua_nodesrv_Component_set_entity00);
   tolua_function(tolua_S,"get_node",tolua_nodesrv_Component_get_node00);
   tolua_function(tolua_S,"create_file_event",tolua_nodesrv_Component_create_file_event00);
   tolua_function(tolua_S,"delete_file_event",tolua_nodesrv_Component_delete_file_event00);
   tolua_function(tolua_S,"reg_msg",tolua_nodesrv_Component_reg_msg00);
   tolua_function(tolua_S,"unreg_msg",tolua_nodesrv_Component_unreg_msg00);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_Component_send_entity_msg00);
   tolua_function(tolua_S,"forward_entity_msg",tolua_nodesrv_Component_forward_entity_msg00);
   tolua_function(tolua_S,"get_component",tolua_nodesrv_Component_get_component00);
   tolua_function(tolua_S,"get_component",tolua_nodesrv_Component_get_component01);
   tolua_variable(tolua_S,"entity",tolua_get_Component_entity_ptr,tolua_set_Component_entity_ptr);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TestComponent","TestComponent","Component",tolua_collect_TestComponent);
  #else
  tolua_cclass(tolua_S,"TestComponent","TestComponent","Component",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TestComponent");
   tolua_function(tolua_S,"new",tolua_nodesrv_TestComponent_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_TestComponent_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_TestComponent_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_TestComponent_delete00);
   tolua_function(tolua_S,"test",tolua_nodesrv_TestComponent_test00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ScriptComponent","ScriptComponent","Component",tolua_collect_ScriptComponent);
  #else
  tolua_cclass(tolua_S,"ScriptComponent","ScriptComponent","Component",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ScriptComponent");
   tolua_function(tolua_S,"new",tolua_nodesrv_ScriptComponent_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_ScriptComponent_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_ScriptComponent_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_ScriptComponent_delete00);
   tolua_function(tolua_S,"awake",tolua_nodesrv_ScriptComponent_awake00);
   tolua_function(tolua_S,"update",tolua_nodesrv_ScriptComponent_update00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_ScriptComponent_recv00);
   tolua_variable(tolua_S,"modname",tolua_get_ScriptComponent_modname,tolua_set_ScriptComponent_modname);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"NetComponent","NetComponent","Component",tolua_collect_NetComponent);
  #else
  tolua_cclass(tolua_S,"NetComponent","NetComponent","Component",NULL);
  #endif
  tolua_beginmodule(tolua_S,"NetComponent");
   tolua_function(tolua_S,"new",tolua_nodesrv_NetComponent_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_NetComponent_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_NetComponent_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_NetComponent_delete00);
   tolua_function(tolua_S,"update",tolua_nodesrv_NetComponent_update00);
   tolua_function(tolua_S,"listen",tolua_nodesrv_NetComponent_listen00);
   tolua_function(tolua_S,"send",tolua_nodesrv_NetComponent_send00);
   tolua_function(tolua_S,"send_str",tolua_nodesrv_NetComponent_send_str00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"HttpComponent","HttpComponent","Component",tolua_collect_HttpComponent);
  #else
  tolua_cclass(tolua_S,"HttpComponent","HttpComponent","Component",NULL);
  #endif
  tolua_beginmodule(tolua_S,"HttpComponent");
   tolua_function(tolua_S,"new",tolua_nodesrv_HttpComponent_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_HttpComponent_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_HttpComponent_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_HttpComponent_delete00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_HttpComponent_recv00);
   tolua_function(tolua_S,"awake",tolua_nodesrv_HttpComponent_awake00);
   tolua_function(tolua_S,"send_binary_frame",tolua_nodesrv_HttpComponent_send_binary_frame00);
   tolua_function(tolua_S,"send_string_frame",tolua_nodesrv_HttpComponent_send_string_frame00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Node","Node","",tolua_collect_Node);
  #else
  tolua_cclass(tolua_S,"Node","Node","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Node");
   tolua_function(tolua_S,"new",tolua_nodesrv_Node_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_Node_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_Node_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_Node_delete00);
   tolua_function(tolua_S,"main",tolua_nodesrv_Node_main00);
   tolua_function(tolua_S,"update",tolua_nodesrv_Node_update00);
   tolua_function(tolua_S,"connect",tolua_nodesrv_Node_connect00);
   tolua_function(tolua_S,"listen",tolua_nodesrv_Node_listen00);
   tolua_function(tolua_S,"send",tolua_nodesrv_Node_send00);
   tolua_function(tolua_S,"find_entity",tolua_nodesrv_Node_find_entity00);
   tolua_function(tolua_S,"add_entity",tolua_nodesrv_Node_add_entity00);
   tolua_function(tolua_S,"get_id",tolua_nodesrv_Node_get_id00);
   tolua_function(tolua_S,"is_local",tolua_nodesrv_Node_is_local00);
   tolua_function(tolua_S,"set_local",tolua_nodesrv_Node_set_local00);
   tolua_function(tolua_S,"is_disconnect",tolua_nodesrv_Node_is_disconnect00);
   tolua_function(tolua_S,"create_entity_local",tolua_nodesrv_Node_create_entity_local00);
   tolua_function(tolua_S,"create_entity_remote",tolua_nodesrv_Node_create_entity_remote00);
   tolua_function(tolua_S,"recv",tolua_nodesrv_Node_recv00);
   tolua_function(tolua_S,"recv_entity_msg",tolua_nodesrv_Node_recv_entity_msg00);
   tolua_function(tolua_S,"recv_node_reg",tolua_nodesrv_Node_recv_node_reg00);
   tolua_function(tolua_S,"recv_create_entity",tolua_nodesrv_Node_recv_create_entity00);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_Node_send_entity_msg00);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_Node_send_entity_msg01);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_Node_send_entity_msg02);
   tolua_function(tolua_S,"forward_entity_msg",tolua_nodesrv_Node_forward_entity_msg00);
   tolua_function(tolua_S,"forward_entity_msg",tolua_nodesrv_Node_forward_entity_msg01);
   tolua_variable(tolua_S,"id",tolua_get_Node_id,tolua_set_Node_id);
   tolua_variable(tolua_S,"name",tolua_get_Node_name,tolua_set_Node_name);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"NodeMgr",0);
  tolua_beginmodule(tolua_S,"NodeMgr");
   tolua_function(tolua_S,"update",tolua_nodesrv_NodeMgr_update00);
   tolua_function(tolua_S,"find_node",tolua_nodesrv_NodeMgr_find_node00);
   tolua_function(tolua_S,"create_temp_node",tolua_nodesrv_NodeMgr_create_temp_node00);
   tolua_function(tolua_S,"create_node_local",tolua_nodesrv_NodeMgr_create_node_local00);
   tolua_function(tolua_S,"create_node_remote",tolua_nodesrv_NodeMgr_create_node_remote00);
   tolua_function(tolua_S,"transfer_entity",tolua_nodesrv_NodeMgr_transfer_entity00);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_NodeMgr_send_entity_msg00);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_NodeMgr_send_entity_msg01);
   tolua_function(tolua_S,"send_entity_msg",tolua_nodesrv_NodeMgr_send_entity_msg02);
   tolua_function(tolua_S,"forward_entity_msg",tolua_nodesrv_NodeMgr_forward_entity_msg00);
   tolua_function(tolua_S,"create_entity_remote",tolua_nodesrv_NodeMgr_create_entity_remote00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Message","Message","",NULL);
  tolua_beginmodule(tolua_S,"Message");
   tolua_variable(tolua_S,"src_entityid",tolua_get_Message_src_entityid,tolua_set_Message_src_entityid);
   tolua_variable(tolua_S,"src_nodeid",tolua_get_Message_src_nodeid,tolua_set_Message_src_nodeid);
   tolua_variable(tolua_S,"dst_entityid",tolua_get_Message_dst_entityid,tolua_set_Message_dst_entityid);
   tolua_variable(tolua_S,"dst_nodeid",tolua_get_Message_dst_nodeid,tolua_set_Message_dst_nodeid);
   tolua_variable(tolua_S,"id",tolua_get_Message_id,tolua_set_Message_id);
   tolua_variable(tolua_S,"sockfd",tolua_get_Message_sockfd,tolua_set_Message_sockfd);
   tolua_variable(tolua_S,"sid",tolua_get_Message_sid,tolua_set_Message_sid);
   tolua_variable(tolua_S,"data",tolua_get_Message_data,NULL);
   tolua_variable(tolua_S,"datalen",tolua_get_Message_datalen,tolua_set_Message_datalen);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"MsgHeader","MsgHeader","",NULL);
  tolua_beginmodule(tolua_S,"MsgHeader");
   tolua_variable(tolua_S,"len",tolua_get_MsgHeader_len,tolua_set_MsgHeader_len);
   tolua_variable(tolua_S,"src_entityid",tolua_get_MsgHeader_src_entityid,tolua_set_MsgHeader_src_entityid);
   tolua_variable(tolua_S,"src_nodeid",tolua_get_MsgHeader_src_nodeid,tolua_set_MsgHeader_src_nodeid);
   tolua_variable(tolua_S,"dst_entityid",tolua_get_MsgHeader_dst_entityid,tolua_set_MsgHeader_dst_entityid);
   tolua_variable(tolua_S,"dst_nodeid",tolua_get_MsgHeader_dst_nodeid,tolua_set_MsgHeader_dst_nodeid);
   tolua_variable(tolua_S,"id",tolua_get_MsgHeader_id,tolua_set_MsgHeader_id);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"MSG_SEND",MSG_SEND);
  tolua_constant(tolua_S,"MSG_NODE_REG",MSG_NODE_REG);
  tolua_constant(tolua_S,"MSG_CREATE_ENTITY",MSG_CREATE_ENTITY);
  tolua_constant(tolua_S,"MSG_NET_RAW_DATA",MSG_NET_RAW_DATA);
  tolua_constant(tolua_S,"MSG_NET_PACKET",MSG_NET_PACKET);
  tolua_constant(tolua_S,"MSG_NEW_CONNECTION",MSG_NEW_CONNECTION);
  tolua_cclass(tolua_S,"CreateEntityMsg","CreateEntityMsg","",NULL);
  tolua_beginmodule(tolua_S,"CreateEntityMsg");
   tolua_variable(tolua_S,"len",tolua_get_CreateEntityMsg_len,tolua_set_CreateEntityMsg_len);
   tolua_variable(tolua_S,"filepath",tolua_get_CreateEntityMsg_filepath,tolua_set_CreateEntityMsg_filepath);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Buffer","Buffer","",tolua_collect_Buffer);
  #else
  tolua_cclass(tolua_S,"Buffer","Buffer","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Buffer");
   tolua_function(tolua_S,"new",tolua_nodesrv_Buffer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_Buffer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_Buffer_new00_local);
   tolua_function(tolua_S,"new",tolua_nodesrv_Buffer_new01);
   tolua_function(tolua_S,"new_local",tolua_nodesrv_Buffer_new01_local);
   tolua_function(tolua_S,".call",tolua_nodesrv_Buffer_new01_local);
   tolua_function(tolua_S,"delete",tolua_nodesrv_Buffer_delete00);
   tolua_function(tolua_S,"read_int64",tolua_nodesrv_Buffer_read_int6400);
   tolua_function(tolua_S,"read_int32",tolua_nodesrv_Buffer_read_int3200);
   tolua_function(tolua_S,"read_int16",tolua_nodesrv_Buffer_read_int1600);
   tolua_function(tolua_S,"read_int8",tolua_nodesrv_Buffer_read_int800);
   tolua_function(tolua_S,"read_buf",tolua_nodesrv_Buffer_read_buf00);
   tolua_function(tolua_S,"write_utf8",tolua_nodesrv_Buffer_write_utf800);
   tolua_function(tolua_S,"write_int64",tolua_nodesrv_Buffer_write_int6400);
   tolua_function(tolua_S,"write_int32",tolua_nodesrv_Buffer_write_int3200);
   tolua_function(tolua_S,"write_int16",tolua_nodesrv_Buffer_write_int1600);
   tolua_function(tolua_S,"write_int8",tolua_nodesrv_Buffer_write_int800);
   tolua_function(tolua_S,"write_buf",tolua_nodesrv_Buffer_write_buf00);
   tolua_function(tolua_S,"size",tolua_nodesrv_Buffer_size00);
   tolua_function(tolua_S,"reset",tolua_nodesrv_Buffer_reset00);
   tolua_function(tolua_S,"get_buffer",tolua_nodesrv_Buffer_get_buffer00);
   tolua_function(tolua_S,"temp",tolua_nodesrv_Buffer_temp00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"RpcMessage","RpcMessage","",NULL);
  tolua_beginmodule(tolua_S,"RpcMessage");
   tolua_function(tolua_S,"encode",tolua_nodesrv_RpcMessage_encode00);
   tolua_function(tolua_S,"decode",tolua_nodesrv_RpcMessage_decode00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"File",0);
  tolua_beginmodule(tolua_S,"File");
   tolua_function(tolua_S,"getcwd",tolua_nodesrv_File_getcwd00);
   tolua_function(tolua_S,"chdir",tolua_nodesrv_File_chdir00);
   tolua_function(tolua_S,"mkdirs",tolua_nodesrv_File_mkdirs00);
   tolua_function(tolua_S,"mkdir",tolua_nodesrv_File_mkdir00);
   tolua_function(tolua_S,"exists",tolua_nodesrv_File_exists00);
   tolua_function(tolua_S,"remove",tolua_nodesrv_File_remove00);
   tolua_function(tolua_S,"rename",tolua_nodesrv_File_rename00);
   tolua_function(tolua_S,"basename",tolua_nodesrv_File_basename00);
   tolua_function(tolua_S,"listdir",tolua_nodesrv_File_listdir00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 extern "C"{
 TOLUA_API int luaopen_nodesrv (lua_State* tolua_S) {
 return tolua_nodesrv_open(tolua_S);
};
}
#endif
