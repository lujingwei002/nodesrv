
#include "component.h"
#include "node/node.h"
#include "node/nodemgr.h"

IMPLEMENT(Component)

Component::Component()
{
    this->entity = 0;
}

Component::~Component()
{

}

void Component::destory()
{

}

void Component::awake()
{

}

void Component::update(uint64_t cur_tick)
{

}


int Component::recv(Message* msg)
{
    return 0;
}

int Component::unreach(Message* msg)
{
    return 0;
}

void Component::set_entity(Entity* entity)
{
    this->entity = entity;
}

Entity* Component::get_entity()
{
    return this->entity;
}

int Component::create_file_event(int fd, int mask, aeFileProc* proc, void* clientData)
{
    return this->entity->node->create_file_event(fd, mask, proc, clientData);
}

void Component::delete_file_event(int fd, int mask)
{
    this->entity->node->delete_file_event(fd, mask);
}

int64_t Component::lua_getnumber(const char *fieldname)
{
    return this->entity->node->lua_getnumber(fieldname);
}

const char* Component::lua_getstring(const char *fieldname)
{
    return this->entity->node->lua_getstring(fieldname);
}

int Component::lua_pushfunction(const char *func)
{
    return this->entity->node->lua_pushfunction(func);
}

int Component::lua_printstack()
{
    return this->entity->node->lua_printstack();
} 

lua_State* Component::get_lua_state()
{
    return NodeMgr::L;
}

Node* Component::get_node()
{
    if (!entity)
    {
        return NULL;
    }
    return entity->node;
}

void Component::send_entity_msg(int dst_nodeid, int dst_entityid, Message* msg)
{
    entity->node->send_entity_msg(this->entity, dst_nodeid, dst_entityid, msg);
}


int Component::reg_msg(unsigned int id)
{
    return this->entity->reg_msg(id, this);
}

int Component::unreg_msg(unsigned int id)
{
    return this->entity->unreg_msg(id, this);
}


int Component::get_component(lua_State* L)
{
    return this->entity->get_component(L);
}

Component* Component::get_component(const char* name)
{
    return this->entity->get_component(name);
}

Message* Component::alloc_msg()
{
    return this->entity->node->alloc_msg();
}
