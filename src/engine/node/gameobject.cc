
#include "node/gameobject.h"
#include "component/component.h"
#include "component/scriptcomponent.h"
#include "log/log.h"

#include <string.h>

GameObject::GameObject()
{
    this->data = 0;
    this->node = 0;
    this->id = 0;
}

GameObject::~GameObject()
{
    destory();
    for(int i = 0; i < (int)children.size(); i++)
    {
        GameObject* object = children[i];
        delete object;
    }
    for (int i = comp_vector.size() - 1; i >= 0; i--)
    {
        Component* component = comp_vector[i];
        delete component;
    }
}

void GameObject::create()
{

}

int GameObject::unreach(Message* msg)
{
    LOG_DEBUG("object[%d] unreach datalen(%ld)", msg->header.id, msg->payload.size());
    std::map<unsigned int, Component*>::iterator it;
    it = msg_map.find(msg->header.id);
    if (it != msg_map.end())
    {
        Component* component = it->second;
        component->unreach(msg);
    }
    return 0;
}


int GameObject::recv(Message* msg)
{
    LOG_DEBUG("object[%d] recv msg", this->id);
    std::map<unsigned int, Component*>::iterator it;
    it = msg_map.find(msg->header.id);
    if (it != msg_map.end())
    {
        Component* component = it->second;
        return component->recv(msg);
    }
    LOG_DEBUG("component not found msg(%d)", msg->header.id);
    return 0;
}

//int GameObject::recv(MsgHeader* header, const void* data, size_t datalen)
//{
    //LOG_DEBUG("object[%d] recv datalen(%ld)", id, datalen);
    //std::map<unsigned int, Component*>::iterator it;
    //it = msg_map.find(header->id);
    //if (it != msg_map.end())
    //{
        //Component* component = it->second;
        //return component->recv(header, data, datalen);
    //}
    //return 0;
//}

int GameObject::save()
{
    return 0;
}


ScriptComponent* GameObject::add_script(const char* scriptname)
{
    LOG_DEBUG("object[%d] add script %s", this->id, scriptname);
    ScriptComponent* component = new ScriptComponent(scriptname);
    comp_vector.push_back(component);
    comp_map[scriptname] = component;
    component->set_gameobject(this);
    return component;
}

int GameObject::add_component(Component* component)
{
    LOG_DEBUG("object[%d] add component %s", this->id, component->get_type_name());
    comp_vector.push_back(component);
    comp_map[component->get_type_name()] = component;
    component->set_gameobject(this);
    return 0;
}

int GameObject::del_component(Component* component)
{
    std::map<std::string, Component*>::iterator it = comp_map.begin();
    for (; it != comp_map.end(); it++)
    {
        if (component == it->second)
        {
            comp_map.erase(it);
            break;
        }
    }
 
    for (int i = comp_vector.size() - 1; i >= 0; i--)
    {
        if (comp_vector[i] == component)
        {
            //交换，再删除
            comp_vector[i] = comp_vector[comp_vector.size() - 1];
            comp_vector.pop_back();
            break;
        }
    }
    return 0;
}

void GameObject::update(uint64_t cur_tick)
{
//    LOG_INFO("object[%d] update %d", this->id, comp_vector.size());
    for (int i = comp_vector.size() - 1; i >= 0; i--)
    {
        Component* component = comp_vector[i];
        component->update(cur_tick);
    }
}

int GameObject::reg_msg(uint32_t id, Component* component)
{
    msg_map[id] = component;
    return 0;
}

int GameObject::unreg_msg(uint32_t id, Component* component)
{
    std::map<unsigned int, Component*>::iterator it;
    it = msg_map.find(id);
    if (it != msg_map.end())
    {
        msg_map.erase(it);
        return 0;
    }
    return 1;
}

int GameObject::test()
{
    printf("object[%d] test\n", this->id);
    return 0;
}

GameObject* GameObject::get_child(int index)
{
    if (index < 0 || index >= (int)children.size())
    {
        return NULL;
    }
    return children[index];
}

int GameObject::add_child(GameObject* object)
{
    children.push_back(object);
    object->parent = this;
    return children.size() - 1;
}

GameObject* GameObject::get_parent()
{
    return this->parent;
}

int GameObject::child_index(GameObject* object)
{
    for(int i = 0; i < (int)children.size(); i++)
    {
        if (children[i] == object)
        {
            return i;
        }
    }
    return -1;
}

int GameObject::del_child(GameObject* object)
{
    for(int i = 0; i < (int)children.size(); i++)
    {
        if (children[i] == object)
        {
            children[i] = children[children.size() - 1];
            children.pop_back();
            return i;
        }
    }
    return -1;
}

int GameObject::del_child(int index)
{
    if (index < 0 || index >= (int)children.size())
    {
        return 1;
    }
    children[index] = children[children.size() - 1];
    children.pop_back();
    return 0; 
}

Component* GameObject::get_component(Type* type)
{
    for (int i = comp_vector.size() - 1; i >= 0; i--)
    {
        Component* component = comp_vector[i];
        if (type == component->get_type())
        {
            return component;
        }
    }
    return NULL;
}

Component* GameObject::get_component(const char* name)
{
    std::map<std::string, Component*>::iterator it;
    it = comp_map.find(name);
    if (it == comp_map.end())
    {
        return NULL;
    }
    return it->second;
}

int GameObject::get_component(lua_State* L)
{
    const char* classname = ((const char*)  tolua_tostring(L, 2, 0));
    Component* component = get_component(classname);
    if (component == NULL)
    {
        lua_pushnil(L);
        return 1;
    }
    tolua_pushusertype(L, (void*)component, classname);
    return 1;
}

ScriptComponent* GameObject::get_script(const char* classname)
{
    Component* component = get_component(classname);
    if (component == NULL)
    {
        return NULL;
    }
    if (component->get_type() != ScriptComponent::type)
    {
        return NULL;
    }
    return (ScriptComponent*)component;
}

void GameObject::destory()
{
    for (int i = 0; i < (int)comp_vector.size(); i++)
    {
        Component* component = comp_vector[i];
        component->destory();
    }
}

void GameObject::awake()
{
    for (int i = 0; i < (int)comp_vector.size(); i++)
    {
        Component* component = comp_vector[i];
        component->awake();
    }
}

