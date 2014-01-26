#include "lua_cocos2dx_physics_auto.hpp"
#include "cocos2d.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_physics_PhysicsShape_getFriction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getFriction'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getFriction();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFriction",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getFriction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setGroup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setGroup'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setGroup(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGroup",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setGroup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setDensity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setDensity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDensity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDensity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setDensity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getMass(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getMass'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMass();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMass",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getMass'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getMaterial(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getMaterial'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::PhysicsMaterial& ret = cobj->getMaterial();
        physics_material_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaterial",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getMaterial'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getCollisionBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getCollisionBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getCollisionBitmask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCollisionBitmask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getCollisionBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getArea(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getArea'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getArea();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArea",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getArea'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setCategoryBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setCategoryBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setCategoryBitmask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCategoryBitmask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setCategoryBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getGroup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getGroup'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getGroup();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getGroup",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getGroup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setMoment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setMoment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMoment(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMoment",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setMoment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_containsPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_containsPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        bool ret = cobj->containsPoint(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "containsPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_containsPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getCategoryBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getCategoryBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getCategoryBitmask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCategoryBitmask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getCategoryBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getContactTestBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getContactTestBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getContactTestBitmask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContactTestBitmask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getContactTestBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getCenter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getCenter'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getCenter();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCenter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getCenter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getDensity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getDensity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getDensity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDensity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getDensity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setMass(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setMass'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMass(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMass",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setMass'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getTag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTag",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_calculateDefaultMoment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_calculateDefaultMoment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->calculateDefaultMoment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "calculateDefaultMoment",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_calculateDefaultMoment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setCollisionBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setCollisionBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setCollisionBitmask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCollisionBitmask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setCollisionBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getMoment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getMoment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMoment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMoment",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getMoment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getOffset'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getOffset();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOffset",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getOffset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getRestitution(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getRestitution'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRestitution();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRestitution",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getRestitution'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setFriction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setFriction'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFriction(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFriction",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setFriction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setMaterial(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setMaterial'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::PhysicsMaterial arg0;

        ok &= luaval_to_physics_material(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setMaterial(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaterial",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setMaterial'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setTag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setContactTestBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setContactTestBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setContactTestBitmask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContactTestBitmask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setContactTestBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_setRestitution(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_setRestitution'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRestitution(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRestitution",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_setRestitution'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShape_getBody(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShape* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShape",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShape_getBody'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cobj->getBody();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBody",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShape_getBody'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_physics_PhysicsShape_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShape)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShape(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShape");
    tolua_cclass(tolua_S,"PhysicsShape","cc.PhysicsShape","cc.Object",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShape");
        tolua_function(tolua_S,"getFriction",lua_cocos2dx_physics_PhysicsShape_getFriction);
        tolua_function(tolua_S,"setGroup",lua_cocos2dx_physics_PhysicsShape_setGroup);
        tolua_function(tolua_S,"setDensity",lua_cocos2dx_physics_PhysicsShape_setDensity);
        tolua_function(tolua_S,"getMass",lua_cocos2dx_physics_PhysicsShape_getMass);
        tolua_function(tolua_S,"getMaterial",lua_cocos2dx_physics_PhysicsShape_getMaterial);
        tolua_function(tolua_S,"getCollisionBitmask",lua_cocos2dx_physics_PhysicsShape_getCollisionBitmask);
        tolua_function(tolua_S,"getArea",lua_cocos2dx_physics_PhysicsShape_getArea);
        tolua_function(tolua_S,"setCategoryBitmask",lua_cocos2dx_physics_PhysicsShape_setCategoryBitmask);
        tolua_function(tolua_S,"getGroup",lua_cocos2dx_physics_PhysicsShape_getGroup);
        tolua_function(tolua_S,"setMoment",lua_cocos2dx_physics_PhysicsShape_setMoment);
        tolua_function(tolua_S,"containsPoint",lua_cocos2dx_physics_PhysicsShape_containsPoint);
        tolua_function(tolua_S,"getCategoryBitmask",lua_cocos2dx_physics_PhysicsShape_getCategoryBitmask);
        tolua_function(tolua_S,"getType",lua_cocos2dx_physics_PhysicsShape_getType);
        tolua_function(tolua_S,"getContactTestBitmask",lua_cocos2dx_physics_PhysicsShape_getContactTestBitmask);
        tolua_function(tolua_S,"getCenter",lua_cocos2dx_physics_PhysicsShape_getCenter);
        tolua_function(tolua_S,"getDensity",lua_cocos2dx_physics_PhysicsShape_getDensity);
        tolua_function(tolua_S,"setMass",lua_cocos2dx_physics_PhysicsShape_setMass);
        tolua_function(tolua_S,"getTag",lua_cocos2dx_physics_PhysicsShape_getTag);
        tolua_function(tolua_S,"calculateDefaultMoment",lua_cocos2dx_physics_PhysicsShape_calculateDefaultMoment);
        tolua_function(tolua_S,"setCollisionBitmask",lua_cocos2dx_physics_PhysicsShape_setCollisionBitmask);
        tolua_function(tolua_S,"getMoment",lua_cocos2dx_physics_PhysicsShape_getMoment);
        tolua_function(tolua_S,"getOffset",lua_cocos2dx_physics_PhysicsShape_getOffset);
        tolua_function(tolua_S,"getRestitution",lua_cocos2dx_physics_PhysicsShape_getRestitution);
        tolua_function(tolua_S,"setFriction",lua_cocos2dx_physics_PhysicsShape_setFriction);
        tolua_function(tolua_S,"setMaterial",lua_cocos2dx_physics_PhysicsShape_setMaterial);
        tolua_function(tolua_S,"setTag",lua_cocos2dx_physics_PhysicsShape_setTag);
        tolua_function(tolua_S,"setContactTestBitmask",lua_cocos2dx_physics_PhysicsShape_setContactTestBitmask);
        tolua_function(tolua_S,"setRestitution",lua_cocos2dx_physics_PhysicsShape_setRestitution);
        tolua_function(tolua_S,"getBody",lua_cocos2dx_physics_PhysicsShape_getBody);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShape).name();
    g_luaType[typeName] = "cc.PhysicsShape";
    g_typeCast["PhysicsShape"] = "cc.PhysicsShape";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapeCircle_getRadius(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShapeCircle* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShapeCircle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShapeCircle*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapeCircle_getRadius'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRadius();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRadius",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeCircle_getRadius'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeCircle_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeCircle",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeCircle* ret = cocos2d::PhysicsShapeCircle::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeCircle";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeCircle*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2)
    {
        double arg0;
        cocos2d::PhysicsMaterial arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeCircle* ret = cocos2d::PhysicsShapeCircle::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeCircle";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeCircle*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        cocos2d::PhysicsMaterial arg1;
        cocos2d::Point arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeCircle* ret = cocos2d::PhysicsShapeCircle::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeCircle";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeCircle*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeCircle_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeCircle_calculateArea(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeCircle",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapeCircle::calculateArea(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "calculateArea",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeCircle_calculateArea'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeCircle_calculateMoment(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeCircle",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapeCircle::calculateMoment(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        double arg1;
        cocos2d::Point arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapeCircle::calculateMoment(arg0, arg1, arg2);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "calculateMoment",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeCircle_calculateMoment'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapeCircle_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapeCircle)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapeCircle(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapeCircle");
    tolua_cclass(tolua_S,"PhysicsShapeCircle","cc.PhysicsShapeCircle","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapeCircle");
        tolua_function(tolua_S,"getRadius",lua_cocos2dx_physics_PhysicsShapeCircle_getRadius);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapeCircle_create);
        tolua_function(tolua_S,"calculateArea", lua_cocos2dx_physics_PhysicsShapeCircle_calculateArea);
        tolua_function(tolua_S,"calculateMoment", lua_cocos2dx_physics_PhysicsShapeCircle_calculateMoment);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapeCircle).name();
    g_luaType[typeName] = "cc.PhysicsShapeCircle";
    g_typeCast["PhysicsShapeCircle"] = "cc.PhysicsShapeCircle";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapeBox_getSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShapeBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShapeBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShapeBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapeBox_getSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeBox_getSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeBox_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeBox* ret = cocos2d::PhysicsShapeBox::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeBox* ret = cocos2d::PhysicsShapeBox::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        cocos2d::Point arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeBox* ret = cocos2d::PhysicsShapeBox::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeBox_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeBox_calculateArea(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapeBox::calculateArea(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "calculateArea",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeBox_calculateArea'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeBox_calculateMoment(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        double arg0;
        cocos2d::Size arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_size(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapeBox::calculateMoment(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        cocos2d::Size arg1;
        cocos2d::Point arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_size(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapeBox::calculateMoment(arg0, arg1, arg2);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "calculateMoment",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeBox_calculateMoment'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapeBox_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapeBox)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapeBox(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapeBox");
    tolua_cclass(tolua_S,"PhysicsShapeBox","cc.PhysicsShapeBox","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapeBox");
        tolua_function(tolua_S,"getSize",lua_cocos2dx_physics_PhysicsShapeBox_getSize);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapeBox_create);
        tolua_function(tolua_S,"calculateArea", lua_cocos2dx_physics_PhysicsShapeBox_calculateArea);
        tolua_function(tolua_S,"calculateMoment", lua_cocos2dx_physics_PhysicsShapeBox_calculateMoment);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapeBox).name();
    g_luaType[typeName] = "cc.PhysicsShapeBox";
    g_typeCast["PhysicsShapeBox"] = "cc.PhysicsShapeBox";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapePolygon_getPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShapePolygon* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShapePolygon",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShapePolygon*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapePolygon_getPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getPoint(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapePolygon_getPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShapePolygon_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapePolygon",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const cocos2d::Point* arg0;
        int arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapePolygon* ret = cocos2d::PhysicsShapePolygon::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapePolygon";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapePolygon*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        const cocos2d::Point* arg0;
        int arg1;
        cocos2d::PhysicsMaterial arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapePolygon* ret = cocos2d::PhysicsShapePolygon::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapePolygon";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapePolygon*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        const cocos2d::Point* arg0;
        int arg1;
        cocos2d::PhysicsMaterial arg2;
        cocos2d::Point arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapePolygon* ret = cocos2d::PhysicsShapePolygon::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapePolygon";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapePolygon*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapePolygon_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapePolygon",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const cocos2d::Point* arg0;
        int arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapePolygon::calculateArea(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "calculateArea",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsShapePolygon_calculateMoment(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapePolygon",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        double arg0;
        const cocos2d::Point* arg1;
        int arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (const cocos2d::Point*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapePolygon::calculateMoment(arg0, arg1, arg2);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 4)
    {
        double arg0;
        const cocos2d::Point* arg1;
        int arg2;
        cocos2d::Point arg3;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (const cocos2d::Point*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        double ret = cocos2d::PhysicsShapePolygon::calculateMoment(arg0, arg1, arg2, arg3);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "calculateMoment",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapePolygon_calculateMoment'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapePolygon_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapePolygon)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapePolygon(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapePolygon");
    tolua_cclass(tolua_S,"PhysicsShapePolygon","cc.PhysicsShapePolygon","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapePolygon");
        tolua_function(tolua_S,"getPoint",lua_cocos2dx_physics_PhysicsShapePolygon_getPoint);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapePolygon_create);
        tolua_function(tolua_S,"calculateArea", lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea);
        tolua_function(tolua_S,"calculateMoment", lua_cocos2dx_physics_PhysicsShapePolygon_calculateMoment);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapePolygon).name();
    g_luaType[typeName] = "cc.PhysicsShapePolygon";
    g_typeCast["PhysicsShapePolygon"] = "cc.PhysicsShapePolygon";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShapeEdgeSegment* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShapeEdgeSegment",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShapeEdgeSegment*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getPointB();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPointB",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointA(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsShapeEdgeSegment* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsShapeEdgeSegment",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsShapeEdgeSegment*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointA'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getPointA();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPointA",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointA'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsShapeEdgeSegment_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeEdgeSegment",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeSegment* ret = cocos2d::PhysicsShapeEdgeSegment::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeSegment";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeSegment*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        cocos2d::PhysicsMaterial arg2;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeSegment* ret = cocos2d::PhysicsShapeEdgeSegment::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeSegment";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeSegment*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        cocos2d::PhysicsMaterial arg2;
        double arg3;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeSegment* ret = cocos2d::PhysicsShapeEdgeSegment::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeSegment";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeSegment*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeEdgeSegment_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapeEdgeSegment_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapeEdgeSegment)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapeEdgeSegment(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapeEdgeSegment");
    tolua_cclass(tolua_S,"PhysicsShapeEdgeSegment","cc.PhysicsShapeEdgeSegment","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapeEdgeSegment");
        tolua_function(tolua_S,"getPointB",lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointB);
        tolua_function(tolua_S,"getPointA",lua_cocos2dx_physics_PhysicsShapeEdgeSegment_getPointA);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapeEdgeSegment_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapeEdgeSegment).name();
    g_luaType[typeName] = "cc.PhysicsShapeEdgeSegment";
    g_typeCast["PhysicsShapeEdgeSegment"] = "cc.PhysicsShapeEdgeSegment";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapeEdgeBox_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeEdgeBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeBox* ret = cocos2d::PhysicsShapeEdgeBox::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeBox* ret = cocos2d::PhysicsShapeEdgeBox::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        double arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeBox* ret = cocos2d::PhysicsShapeEdgeBox::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        double arg2;
        cocos2d::Point arg3;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeBox* ret = cocos2d::PhysicsShapeEdgeBox::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeEdgeBox_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapeEdgeBox_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapeEdgeBox)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapeEdgeBox(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapeEdgeBox");
    tolua_cclass(tolua_S,"PhysicsShapeEdgeBox","cc.PhysicsShapeEdgeBox","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapeEdgeBox");
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapeEdgeBox_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapeEdgeBox).name();
    g_luaType[typeName] = "cc.PhysicsShapeEdgeBox";
    g_typeCast["PhysicsShapeEdgeBox"] = "cc.PhysicsShapeEdgeBox";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeEdgePolygon",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const cocos2d::Point* arg0;
        int arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgePolygon* ret = cocos2d::PhysicsShapeEdgePolygon::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgePolygon";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgePolygon*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        const cocos2d::Point* arg0;
        int arg1;
        cocos2d::PhysicsMaterial arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgePolygon* ret = cocos2d::PhysicsShapeEdgePolygon::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgePolygon";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgePolygon*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        const cocos2d::Point* arg0;
        int arg1;
        cocos2d::PhysicsMaterial arg2;
        double arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgePolygon* ret = cocos2d::PhysicsShapeEdgePolygon::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgePolygon";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgePolygon*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapeEdgePolygon_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapeEdgePolygon)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapeEdgePolygon(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapeEdgePolygon");
    tolua_cclass(tolua_S,"PhysicsShapeEdgePolygon","cc.PhysicsShapeEdgePolygon","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapeEdgePolygon");
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapeEdgePolygon).name();
    g_luaType[typeName] = "cc.PhysicsShapeEdgePolygon";
    g_typeCast["PhysicsShapeEdgePolygon"] = "cc.PhysicsShapeEdgePolygon";
    return 1;
}

int lua_cocos2dx_physics_PhysicsShapeEdgeChain_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsShapeEdgeChain",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const cocos2d::Point* arg0;
        int arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeChain* ret = cocos2d::PhysicsShapeEdgeChain::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeChain";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeChain*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        const cocos2d::Point* arg0;
        int arg1;
        cocos2d::PhysicsMaterial arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeChain* ret = cocos2d::PhysicsShapeEdgeChain::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeChain";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeChain*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        const cocos2d::Point* arg0;
        int arg1;
        cocos2d::PhysicsMaterial arg2;
        double arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsShapeEdgeChain* ret = cocos2d::PhysicsShapeEdgeChain::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShapeEdgeChain";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShapeEdgeChain*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsShapeEdgeChain_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsShapeEdgeChain_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsShapeEdgeChain)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsShapeEdgeChain(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsShapeEdgeChain");
    tolua_cclass(tolua_S,"PhysicsShapeEdgeChain","cc.PhysicsShapeEdgeChain","cc.PhysicsShape",NULL);

    tolua_beginmodule(tolua_S,"PhysicsShapeEdgeChain");
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsShapeEdgeChain_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapeEdgeChain).name();
    g_luaType[typeName] = "cc.PhysicsShapeEdgeChain";
    g_typeCast["PhysicsShapeEdgeChain"] = "cc.PhysicsShapeEdgeChain";
    return 1;
}

int lua_cocos2dx_physics_PhysicsBody_isGravityEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_isGravityEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isGravityEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isGravityEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_isGravityEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_resetForces(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_resetForces'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resetForces();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resetForces",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_resetForces'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getVelocityLimit(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getVelocityLimit'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getVelocityLimit();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVelocityLimit",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getVelocityLimit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setGroup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setGroup'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setGroup(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGroup",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setGroup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getMass(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getMass'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMass();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMass",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getMass'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getCollisionBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getCollisionBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getCollisionBitmask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCollisionBitmask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getCollisionBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getRotation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getRotation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRotation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRotation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getRotation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_isResting(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_isResting'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isResting();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isResting",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_isResting'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_applyImpulse(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_applyImpulse'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Point arg0;
            ok &= luaval_to_point(tolua_S, 2, &arg0);

            if (!ok) { break; }
            cocos2d::Point arg1;
            ok &= luaval_to_point(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cobj->applyImpulse(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Point arg0;
            ok &= luaval_to_point(tolua_S, 2, &arg0);

            if (!ok) { break; }
            cobj->applyImpulse(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "applyImpulse",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_applyImpulse'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_applyForce(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_applyForce'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Point arg0;
            ok &= luaval_to_point(tolua_S, 2, &arg0);

            if (!ok) { break; }
            cocos2d::Point arg1;
            ok &= luaval_to_point(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cobj->applyForce(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Point arg0;
            ok &= luaval_to_point(tolua_S, 2, &arg0);

            if (!ok) { break; }
            cobj->applyForce(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "applyForce",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_applyForce'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_addShape(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_addShape'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::PhysicsShape* arg0;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->addShape(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2) 
    {
        cocos2d::PhysicsShape* arg0;
        bool arg1;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->addShape(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addShape",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_addShape'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_applyTorque(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_applyTorque'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->applyTorque(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "applyTorque",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_applyTorque'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getAngularVelocityLimit(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getAngularVelocityLimit'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getAngularVelocityLimit();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAngularVelocityLimit",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getAngularVelocityLimit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setAngularVelocityLimit(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setAngularVelocityLimit'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setAngularVelocityLimit(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAngularVelocityLimit",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setAngularVelocityLimit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getVelocity();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVelocity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getLinearDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getLinearDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getLinearDamping();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLinearDamping",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getLinearDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_removeAllShapes(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_removeAllShapes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeAllShapes();
        return 0;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeAllShapes(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAllShapes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_removeAllShapes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setAngularDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setAngularDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setAngularDamping(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAngularDamping",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setAngularDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setVelocityLimit(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setVelocityLimit'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setVelocityLimit(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVelocityLimit",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setVelocityLimit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setEnable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setEnable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setCategoryBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setCategoryBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setCategoryBitmask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCategoryBitmask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setCategoryBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getWorld(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getWorld'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsWorld* ret = cobj->getWorld();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsWorld";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsWorld*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getWorld",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getWorld'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getAngularVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getAngularVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getAngularVelocity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAngularVelocity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getAngularVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getPosition'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getPosition();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setGravityEnable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setGravityEnable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setGravityEnable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGravityEnable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setGravityEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getGroup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getGroup'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getGroup();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getGroup",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getGroup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setMoment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setMoment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMoment(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMoment",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setMoment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getTag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTag",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_local2World(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_local2World'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->local2World(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "local2World",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_local2World'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getCategoryBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getCategoryBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getCategoryBitmask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCategoryBitmask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getCategoryBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getMoment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getMoment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        double ret = cobj->getMoment(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMoment",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getMoment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getFirstShape(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getFirstShape'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->getFirstShape();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFirstShape",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getFirstShape'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getShapes(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getShapes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Vector<cocos2d::PhysicsShape *>& ret = cobj->getShapes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShapes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getShapes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getContactTestBitmask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContactTestBitmask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setAngularVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setAngularVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setAngularVelocity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAngularVelocity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setAngularVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_world2Local(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_world2Local'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->world2Local(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "world2Local",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_world2Local'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_isEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_isEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_removeShape(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_removeShape'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

            if (!ok) { break; }
            cobj->removeShape(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { break; }
            cobj->removeShape(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::PhysicsShape* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj->removeShape(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::PhysicsShape* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { break; }
            cobj->removeShape(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeShape",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_removeShape'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setMass(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setMass'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMass(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMass",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setMass'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_addMoment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_addMoment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addMoment(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMoment",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_addMoment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setVelocity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVelocity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setLinearDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setLinearDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setLinearDamping(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLinearDamping",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setLinearDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setCollisionBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setCollisionBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setCollisionBitmask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCollisionBitmask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setCollisionBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setDynamic(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setDynamic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDynamic(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDynamic",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setDynamic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setRotationEnable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setRotationEnable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRotationEnable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRotationEnable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setRotationEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getAngularDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getAngularDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getAngularDamping();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAngularDamping",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getAngularDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getVelocityAtLocalPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getVelocityAtLocalPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getVelocityAtLocalPoint(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVelocityAtLocalPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getVelocityAtLocalPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_isRotationEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_isRotationEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isRotationEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isRotationEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_isRotationEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_addMass(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_addMass'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addMass(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMass",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_addMass'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getShape(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getShape'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->getShape(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShape",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getShape'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setTag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getVelocityAtWorldPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getVelocityAtWorldPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getVelocityAtWorldPoint(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVelocityAtWorldPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getVelocityAtWorldPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_setContactTestBitmask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_setContactTestBitmask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setContactTestBitmask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContactTestBitmask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_setContactTestBitmask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_removeFromWorld(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_removeFromWorld'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeFromWorld();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeFromWorld",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_removeFromWorld'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_isDynamic(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_isDynamic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isDynamic();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isDynamic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_isDynamic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsBody_getNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getNode();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_getNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_createBox(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createBox(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createBox(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        cocos2d::Point arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createBox(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createBox",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_createBox'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_createEdgeSegment(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeSegment(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        cocos2d::PhysicsMaterial arg2;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeSegment(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        cocos2d::PhysicsMaterial arg2;
        double arg3;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        ok &= luaval_to_physics_material(tolua_S, 4, &arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeSegment(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createEdgeSegment",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_createEdgeSegment'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::create(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0);
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1);
            if (!ok) { break; }
            cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::create(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_createEdgeBox(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeBox(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeBox(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        double arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeBox(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Size arg0;
        cocos2d::PhysicsMaterial arg1;
        double arg2;
        cocos2d::Point arg3;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createEdgeBox(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createEdgeBox",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_createEdgeBox'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_physics_PhysicsBody_createCircle(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsBody",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createCircle(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 2)
    {
        double arg0;
        cocos2d::PhysicsMaterial arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createCircle(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        double arg0;
        cocos2d::PhysicsMaterial arg1;
        cocos2d::Point arg2;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_physics_material(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cocos2d::PhysicsBody::createCircle(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createCircle",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsBody_createCircle'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsBody_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsBody)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsBody(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsBody");
    tolua_cclass(tolua_S,"PhysicsBody","cc.PhysicsBody","cc.Object",NULL);

    tolua_beginmodule(tolua_S,"PhysicsBody");
        tolua_function(tolua_S,"isGravityEnabled",lua_cocos2dx_physics_PhysicsBody_isGravityEnabled);
        tolua_function(tolua_S,"resetForces",lua_cocos2dx_physics_PhysicsBody_resetForces);
        tolua_function(tolua_S,"getVelocityLimit",lua_cocos2dx_physics_PhysicsBody_getVelocityLimit);
        tolua_function(tolua_S,"setGroup",lua_cocos2dx_physics_PhysicsBody_setGroup);
        tolua_function(tolua_S,"getMass",lua_cocos2dx_physics_PhysicsBody_getMass);
        tolua_function(tolua_S,"getCollisionBitmask",lua_cocos2dx_physics_PhysicsBody_getCollisionBitmask);
        tolua_function(tolua_S,"getRotation",lua_cocos2dx_physics_PhysicsBody_getRotation);
        tolua_function(tolua_S,"isResting",lua_cocos2dx_physics_PhysicsBody_isResting);
        tolua_function(tolua_S,"applyImpulse",lua_cocos2dx_physics_PhysicsBody_applyImpulse);
        tolua_function(tolua_S,"applyForce",lua_cocos2dx_physics_PhysicsBody_applyForce);
        tolua_function(tolua_S,"addShape",lua_cocos2dx_physics_PhysicsBody_addShape);
        tolua_function(tolua_S,"applyTorque",lua_cocos2dx_physics_PhysicsBody_applyTorque);
        tolua_function(tolua_S,"getAngularVelocityLimit",lua_cocos2dx_physics_PhysicsBody_getAngularVelocityLimit);
        tolua_function(tolua_S,"setAngularVelocityLimit",lua_cocos2dx_physics_PhysicsBody_setAngularVelocityLimit);
        tolua_function(tolua_S,"getVelocity",lua_cocos2dx_physics_PhysicsBody_getVelocity);
        tolua_function(tolua_S,"getLinearDamping",lua_cocos2dx_physics_PhysicsBody_getLinearDamping);
        tolua_function(tolua_S,"removeAllShapes",lua_cocos2dx_physics_PhysicsBody_removeAllShapes);
        tolua_function(tolua_S,"setAngularDamping",lua_cocos2dx_physics_PhysicsBody_setAngularDamping);
        tolua_function(tolua_S,"setVelocityLimit",lua_cocos2dx_physics_PhysicsBody_setVelocityLimit);
        tolua_function(tolua_S,"setEnable",lua_cocos2dx_physics_PhysicsBody_setEnable);
        tolua_function(tolua_S,"setCategoryBitmask",lua_cocos2dx_physics_PhysicsBody_setCategoryBitmask);
        tolua_function(tolua_S,"getWorld",lua_cocos2dx_physics_PhysicsBody_getWorld);
        tolua_function(tolua_S,"getAngularVelocity",lua_cocos2dx_physics_PhysicsBody_getAngularVelocity);
        tolua_function(tolua_S,"getPosition",lua_cocos2dx_physics_PhysicsBody_getPosition);
        tolua_function(tolua_S,"setGravityEnable",lua_cocos2dx_physics_PhysicsBody_setGravityEnable);
        tolua_function(tolua_S,"getGroup",lua_cocos2dx_physics_PhysicsBody_getGroup);
        tolua_function(tolua_S,"setMoment",lua_cocos2dx_physics_PhysicsBody_setMoment);
        tolua_function(tolua_S,"getTag",lua_cocos2dx_physics_PhysicsBody_getTag);
        tolua_function(tolua_S,"local2World",lua_cocos2dx_physics_PhysicsBody_local2World);
        tolua_function(tolua_S,"getCategoryBitmask",lua_cocos2dx_physics_PhysicsBody_getCategoryBitmask);
        tolua_function(tolua_S,"getMoment",lua_cocos2dx_physics_PhysicsBody_getMoment);
        tolua_function(tolua_S,"getFirstShape",lua_cocos2dx_physics_PhysicsBody_getFirstShape);
        tolua_function(tolua_S,"getShapes",lua_cocos2dx_physics_PhysicsBody_getShapes);
        tolua_function(tolua_S,"getContactTestBitmask",lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask);
        tolua_function(tolua_S,"setAngularVelocity",lua_cocos2dx_physics_PhysicsBody_setAngularVelocity);
        tolua_function(tolua_S,"world2Local",lua_cocos2dx_physics_PhysicsBody_world2Local);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_physics_PhysicsBody_isEnabled);
        tolua_function(tolua_S,"removeShape",lua_cocos2dx_physics_PhysicsBody_removeShape);
        tolua_function(tolua_S,"setMass",lua_cocos2dx_physics_PhysicsBody_setMass);
        tolua_function(tolua_S,"addMoment",lua_cocos2dx_physics_PhysicsBody_addMoment);
        tolua_function(tolua_S,"setVelocity",lua_cocos2dx_physics_PhysicsBody_setVelocity);
        tolua_function(tolua_S,"setLinearDamping",lua_cocos2dx_physics_PhysicsBody_setLinearDamping);
        tolua_function(tolua_S,"setCollisionBitmask",lua_cocos2dx_physics_PhysicsBody_setCollisionBitmask);
        tolua_function(tolua_S,"setDynamic",lua_cocos2dx_physics_PhysicsBody_setDynamic);
        tolua_function(tolua_S,"setRotationEnable",lua_cocos2dx_physics_PhysicsBody_setRotationEnable);
        tolua_function(tolua_S,"getAngularDamping",lua_cocos2dx_physics_PhysicsBody_getAngularDamping);
        tolua_function(tolua_S,"getVelocityAtLocalPoint",lua_cocos2dx_physics_PhysicsBody_getVelocityAtLocalPoint);
        tolua_function(tolua_S,"isRotationEnabled",lua_cocos2dx_physics_PhysicsBody_isRotationEnabled);
        tolua_function(tolua_S,"addMass",lua_cocos2dx_physics_PhysicsBody_addMass);
        tolua_function(tolua_S,"getShape",lua_cocos2dx_physics_PhysicsBody_getShape);
        tolua_function(tolua_S,"setTag",lua_cocos2dx_physics_PhysicsBody_setTag);
        tolua_function(tolua_S,"getVelocityAtWorldPoint",lua_cocos2dx_physics_PhysicsBody_getVelocityAtWorldPoint);
        tolua_function(tolua_S,"setContactTestBitmask",lua_cocos2dx_physics_PhysicsBody_setContactTestBitmask);
        tolua_function(tolua_S,"removeFromWorld",lua_cocos2dx_physics_PhysicsBody_removeFromWorld);
        tolua_function(tolua_S,"isDynamic",lua_cocos2dx_physics_PhysicsBody_isDynamic);
        tolua_function(tolua_S,"getNode",lua_cocos2dx_physics_PhysicsBody_getNode);
        tolua_function(tolua_S,"createBox", lua_cocos2dx_physics_PhysicsBody_createBox);
        tolua_function(tolua_S,"createEdgeSegment", lua_cocos2dx_physics_PhysicsBody_createEdgeSegment);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_PhysicsBody_create);
        tolua_function(tolua_S,"createEdgeBox", lua_cocos2dx_physics_PhysicsBody_createEdgeBox);
        tolua_function(tolua_S,"createCircle", lua_cocos2dx_physics_PhysicsBody_createCircle);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsBody).name();
    g_luaType[typeName] = "cc.PhysicsBody";
    g_typeCast["PhysicsBody"] = "cc.PhysicsBody";
    return 1;
}

int lua_cocos2dx_physics_PhysicsWorld_getGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getGravity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getGravity();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getGravity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getAllBodies(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getAllBodies'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Vector<cocos2d::PhysicsBody *>& ret = cobj->getAllBodies();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAllBodies",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getAllBodies'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_setGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_setGravity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setGravity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGravity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_setGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getSpeed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getSpeed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getSpeed();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSpeed",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getSpeed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_removeBody(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_removeBody'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

            if (!ok) { break; }
            cobj->removeBody(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::PhysicsBody* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj->removeBody(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBody",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_removeBody'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_removeJoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_removeJoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::PhysicsJoint* arg0;
        bool arg1;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsJoint",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeJoint(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeJoint",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_removeJoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getUpdateRate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getUpdateRate'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getUpdateRate();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getUpdateRate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getUpdateRate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_setSpeed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_setSpeed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setSpeed(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSpeed",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_setSpeed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getShapes(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getShapes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::PhysicsShape *> ret = cobj->getShapes(arg0);
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShapes",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getShapes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_removeAllJoints(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_removeAllJoints'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeAllJoints(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAllJoints",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_removeAllJoints'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getShape(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getShape'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->getShape(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShape",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getShape'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_removeAllBodies(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_removeAllBodies'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeAllBodies();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAllBodies",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_removeAllBodies'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getDebugDrawMask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getDebugDrawMask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getDebugDrawMask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDebugDrawMask",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getDebugDrawMask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_setDebugDrawMask(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_setDebugDrawMask'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setDebugDrawMask(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDebugDrawMask",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_setDebugDrawMask'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_getBody(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_getBody'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cobj->getBody(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBody",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_getBody'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_setUpdateRate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_setUpdateRate'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setUpdateRate(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setUpdateRate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_setUpdateRate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsWorld_addJoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsWorld* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsWorld",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsWorld_addJoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::PhysicsJoint* arg0;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsJoint",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addJoint(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addJoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsWorld_addJoint'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_physics_PhysicsWorld_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsWorld)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsWorld(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsWorld");
    tolua_cclass(tolua_S,"PhysicsWorld","cc.PhysicsWorld","",NULL);

    tolua_beginmodule(tolua_S,"PhysicsWorld");
        tolua_function(tolua_S,"getGravity",lua_cocos2dx_physics_PhysicsWorld_getGravity);
        tolua_function(tolua_S,"getAllBodies",lua_cocos2dx_physics_PhysicsWorld_getAllBodies);
        tolua_function(tolua_S,"setGravity",lua_cocos2dx_physics_PhysicsWorld_setGravity);
        tolua_function(tolua_S,"getSpeed",lua_cocos2dx_physics_PhysicsWorld_getSpeed);
        tolua_function(tolua_S,"removeBody",lua_cocos2dx_physics_PhysicsWorld_removeBody);
        tolua_function(tolua_S,"removeJoint",lua_cocos2dx_physics_PhysicsWorld_removeJoint);
        tolua_function(tolua_S,"getUpdateRate",lua_cocos2dx_physics_PhysicsWorld_getUpdateRate);
        tolua_function(tolua_S,"setSpeed",lua_cocos2dx_physics_PhysicsWorld_setSpeed);
        tolua_function(tolua_S,"getShapes",lua_cocos2dx_physics_PhysicsWorld_getShapes);
        tolua_function(tolua_S,"removeAllJoints",lua_cocos2dx_physics_PhysicsWorld_removeAllJoints);
        tolua_function(tolua_S,"getShape",lua_cocos2dx_physics_PhysicsWorld_getShape);
        tolua_function(tolua_S,"removeAllBodies",lua_cocos2dx_physics_PhysicsWorld_removeAllBodies);
        tolua_function(tolua_S,"getDebugDrawMask",lua_cocos2dx_physics_PhysicsWorld_getDebugDrawMask);
        tolua_function(tolua_S,"setDebugDrawMask",lua_cocos2dx_physics_PhysicsWorld_setDebugDrawMask);
        tolua_function(tolua_S,"getBody",lua_cocos2dx_physics_PhysicsWorld_getBody);
        tolua_function(tolua_S,"setUpdateRate",lua_cocos2dx_physics_PhysicsWorld_setUpdateRate);
        tolua_function(tolua_S,"addJoint",lua_cocos2dx_physics_PhysicsWorld_addJoint);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsWorld).name();
    g_luaType[typeName] = "cc.PhysicsWorld";
    g_typeCast["PhysicsWorld"] = "cc.PhysicsWorld";
    return 1;
}

static int lua_cocos2dx_physics_PhysicsDebugDraw_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsDebugDraw)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsDebugDraw(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsDebugDraw");
    tolua_cclass(tolua_S,"PhysicsDebugDraw","cc.PhysicsDebugDraw","",NULL);

    tolua_beginmodule(tolua_S,"PhysicsDebugDraw");
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsDebugDraw).name();
    g_luaType[typeName] = "cc.PhysicsDebugDraw";
    g_typeCast["PhysicsDebugDraw"] = "cc.PhysicsDebugDraw";
    return 1;
}

int lua_cocos2dx_physics_PhysicsContact_getContactData(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContact* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContact*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContact_getContactData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::PhysicsContactData* ret = cobj->getContactData();
        physics_contactdata_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContactData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContact_getContactData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContact_getEventCode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContact* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContact*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContact_getEventCode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getEventCode();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getEventCode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContact_getEventCode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContact_getShapeA(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContact* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContact*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContact_getShapeA'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->getShapeA();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShapeA",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContact_getShapeA'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContact_getShapeB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContact* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContact*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContact_getShapeB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsShape* ret = cobj->getShapeB();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsShape";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsShape*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShapeB",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContact_getShapeB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContact_getData(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContact* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContact*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContact_getData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        void* ret = cobj->getData();
        #pragma warning NO CONVERSION FROM NATIVE FOR void*;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContact_getData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContact_setData(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContact* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContact*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContact_setData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        void* arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR void*;
        if(!ok)
            return 0;
        cobj->setData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContact_setData'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_physics_PhysicsContact_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsContact)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsContact(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsContact");
    tolua_cclass(tolua_S,"PhysicsContact","cc.PhysicsContact","cc.Event",NULL);

    tolua_beginmodule(tolua_S,"PhysicsContact");
        tolua_function(tolua_S,"getContactData",lua_cocos2dx_physics_PhysicsContact_getContactData);
        tolua_function(tolua_S,"getEventCode",lua_cocos2dx_physics_PhysicsContact_getEventCode);
        tolua_function(tolua_S,"getShapeA",lua_cocos2dx_physics_PhysicsContact_getShapeA);
        tolua_function(tolua_S,"getShapeB",lua_cocos2dx_physics_PhysicsContact_getShapeB);
        tolua_function(tolua_S,"getData",lua_cocos2dx_physics_PhysicsContact_getData);
        tolua_function(tolua_S,"setData",lua_cocos2dx_physics_PhysicsContact_setData);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsContact).name();
    g_luaType[typeName] = "cc.PhysicsContact";
    g_typeCast["PhysicsContact"] = "cc.PhysicsContact";
    return 1;
}

int lua_cocos2dx_physics_PhysicsContactPreSolve_getFriction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_getFriction'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getFriction();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFriction",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_getFriction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPreSolve_getElasticity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_getElasticity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getElasticity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getElasticity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_getElasticity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPreSolve_setElasticity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_setElasticity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setElasticity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setElasticity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_setElasticity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPreSolve_setFriction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_setFriction'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFriction(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFriction",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_setFriction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPreSolve_ignore(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_ignore'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->ignore();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ignore",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_ignore'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPreSolve_getSurfaceVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_getSurfaceVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getSurfaceVelocity();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSurfaceVelocity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_getSurfaceVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPreSolve_setSurfaceVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPreSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPreSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPreSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_setSurfaceVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setSurfaceVelocity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSurfaceVelocity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPreSolve_setSurfaceVelocity'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_physics_PhysicsContactPreSolve_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsContactPreSolve)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsContactPreSolve(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsContactPreSolve");
    tolua_cclass(tolua_S,"PhysicsContactPreSolve","cc.PhysicsContactPreSolve","",NULL);

    tolua_beginmodule(tolua_S,"PhysicsContactPreSolve");
        tolua_function(tolua_S,"getFriction",lua_cocos2dx_physics_PhysicsContactPreSolve_getFriction);
        tolua_function(tolua_S,"getElasticity",lua_cocos2dx_physics_PhysicsContactPreSolve_getElasticity);
        tolua_function(tolua_S,"setElasticity",lua_cocos2dx_physics_PhysicsContactPreSolve_setElasticity);
        tolua_function(tolua_S,"setFriction",lua_cocos2dx_physics_PhysicsContactPreSolve_setFriction);
        tolua_function(tolua_S,"ignore",lua_cocos2dx_physics_PhysicsContactPreSolve_ignore);
        tolua_function(tolua_S,"getSurfaceVelocity",lua_cocos2dx_physics_PhysicsContactPreSolve_getSurfaceVelocity);
        tolua_function(tolua_S,"setSurfaceVelocity",lua_cocos2dx_physics_PhysicsContactPreSolve_setSurfaceVelocity);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsContactPreSolve).name();
    g_luaType[typeName] = "cc.PhysicsContactPreSolve";
    g_typeCast["PhysicsContactPreSolve"] = "cc.PhysicsContactPreSolve";
    return 1;
}

int lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPostSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPostSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPostSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getFriction();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFriction",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPostSolve_getSurfaceVelocity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPostSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPostSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPostSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getSurfaceVelocity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getSurfaceVelocity();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSurfaceVelocity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getSurfaceVelocity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsContactPostSolve_getElasticity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsContactPostSolve* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsContactPostSolve",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsContactPostSolve*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getElasticity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getElasticity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getElasticity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsContactPostSolve_getElasticity'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_physics_PhysicsContactPostSolve_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsContactPostSolve)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsContactPostSolve(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsContactPostSolve");
    tolua_cclass(tolua_S,"PhysicsContactPostSolve","cc.PhysicsContactPostSolve","",NULL);

    tolua_beginmodule(tolua_S,"PhysicsContactPostSolve");
        tolua_function(tolua_S,"getFriction",lua_cocos2dx_physics_PhysicsContactPostSolve_getFriction);
        tolua_function(tolua_S,"getSurfaceVelocity",lua_cocos2dx_physics_PhysicsContactPostSolve_getSurfaceVelocity);
        tolua_function(tolua_S,"getElasticity",lua_cocos2dx_physics_PhysicsContactPostSolve_getElasticity);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsContactPostSolve).name();
    g_luaType[typeName] = "cc.PhysicsContactPostSolve";
    g_typeCast["PhysicsContactPostSolve"] = "cc.PhysicsContactPostSolve";
    return 1;
}

int lua_cocos2dx_physics_EventListenerPhysicsContact_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.EventListenerPhysicsContact",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::EventListenerPhysicsContact* ret = cocos2d::EventListenerPhysicsContact::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.EventListenerPhysicsContact";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::EventListenerPhysicsContact*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContact_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_EventListenerPhysicsContact_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventListenerPhysicsContact)");
    return 0;
}

int lua_register_cocos2dx_physics_EventListenerPhysicsContact(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.EventListenerPhysicsContact");
    tolua_cclass(tolua_S,"EventListenerPhysicsContact","cc.EventListenerPhysicsContact","cc.EventListenerCustom",NULL);

    tolua_beginmodule(tolua_S,"EventListenerPhysicsContact");
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_EventListenerPhysicsContact_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::EventListenerPhysicsContact).name();
    g_luaType[typeName] = "cc.EventListenerPhysicsContact";
    g_typeCast["EventListenerPhysicsContact"] = "cc.EventListenerPhysicsContact";
    return 1;
}

int lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::EventListenerPhysicsContactWithBodies* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EventListenerPhysicsContactWithBodies",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::EventListenerPhysicsContactWithBodies*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_hitTest'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::PhysicsShape* arg0;
        cocos2d::PhysicsShape* arg1;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->hitTest(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hitTest",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.EventListenerPhysicsContactWithBodies",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::EventListenerPhysicsContactWithBodies* ret = cocos2d::EventListenerPhysicsContactWithBodies::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.EventListenerPhysicsContactWithBodies";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::EventListenerPhysicsContactWithBodies*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventListenerPhysicsContactWithBodies)");
    return 0;
}

int lua_register_cocos2dx_physics_EventListenerPhysicsContactWithBodies(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.EventListenerPhysicsContactWithBodies");
    tolua_cclass(tolua_S,"EventListenerPhysicsContactWithBodies","cc.EventListenerPhysicsContactWithBodies","cc.EventListenerPhysicsContact",NULL);

    tolua_beginmodule(tolua_S,"EventListenerPhysicsContactWithBodies");
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_hitTest);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_EventListenerPhysicsContactWithBodies_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::EventListenerPhysicsContactWithBodies).name();
    g_luaType[typeName] = "cc.EventListenerPhysicsContactWithBodies";
    g_typeCast["EventListenerPhysicsContactWithBodies"] = "cc.EventListenerPhysicsContactWithBodies";
    return 1;
}

int lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::EventListenerPhysicsContactWithShapes* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EventListenerPhysicsContactWithShapes",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::EventListenerPhysicsContactWithShapes*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::PhysicsShape* arg0;
        cocos2d::PhysicsShape* arg1;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->hitTest(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hitTest",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.EventListenerPhysicsContactWithShapes",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::PhysicsShape* arg0;
        cocos2d::PhysicsShape* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::EventListenerPhysicsContactWithShapes* ret = cocos2d::EventListenerPhysicsContactWithShapes::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.EventListenerPhysicsContactWithShapes";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::EventListenerPhysicsContactWithShapes*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventListenerPhysicsContactWithShapes)");
    return 0;
}

int lua_register_cocos2dx_physics_EventListenerPhysicsContactWithShapes(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.EventListenerPhysicsContactWithShapes");
    tolua_cclass(tolua_S,"EventListenerPhysicsContactWithShapes","cc.EventListenerPhysicsContactWithShapes","cc.EventListenerPhysicsContact",NULL);

    tolua_beginmodule(tolua_S,"EventListenerPhysicsContactWithShapes");
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::EventListenerPhysicsContactWithShapes).name();
    g_luaType[typeName] = "cc.EventListenerPhysicsContactWithShapes";
    g_typeCast["EventListenerPhysicsContactWithShapes"] = "cc.EventListenerPhysicsContactWithShapes";
    return 1;
}

int lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::EventListenerPhysicsContactWithGroup* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EventListenerPhysicsContactWithGroup",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::EventListenerPhysicsContactWithGroup*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_hitTest'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::PhysicsShape* arg0;
        cocos2d::PhysicsShape* arg1;

        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsShape",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsShape*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->hitTest(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hitTest",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.EventListenerPhysicsContactWithGroup",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::EventListenerPhysicsContactWithGroup* ret = cocos2d::EventListenerPhysicsContactWithGroup::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.EventListenerPhysicsContactWithGroup";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::EventListenerPhysicsContactWithGroup*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventListenerPhysicsContactWithGroup)");
    return 0;
}

int lua_register_cocos2dx_physics_EventListenerPhysicsContactWithGroup(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.EventListenerPhysicsContactWithGroup");
    tolua_cclass(tolua_S,"EventListenerPhysicsContactWithGroup","cc.EventListenerPhysicsContactWithGroup","cc.EventListenerPhysicsContact",NULL);

    tolua_beginmodule(tolua_S,"EventListenerPhysicsContactWithGroup");
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_hitTest);
        tolua_function(tolua_S,"create", lua_cocos2dx_physics_EventListenerPhysicsContactWithGroup_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::EventListenerPhysicsContactWithGroup).name();
    g_luaType[typeName] = "cc.EventListenerPhysicsContactWithGroup";
    g_typeCast["EventListenerPhysicsContactWithGroup"] = "cc.EventListenerPhysicsContactWithGroup";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJoint_getBodyA(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_getBodyA'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cobj->getBodyA();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBodyA",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_getBodyA'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_getBodyB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_getBodyB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsBody* ret = cobj->getBodyB();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsBody";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsBody*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBodyB",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_getBodyB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_getMaxForce(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_getMaxForce'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMaxForce();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaxForce",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_getMaxForce'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_setMaxForce(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_setMaxForce'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMaxForce(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaxForce",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_setMaxForce'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_isEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_isEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_setEnable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_setEnable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_setEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_setCollisionEnable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_setCollisionEnable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setCollisionEnable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCollisionEnable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_setCollisionEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_getWorld(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_getWorld'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::PhysicsWorld* ret = cobj->getWorld();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsWorld";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsWorld*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getWorld",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_getWorld'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_setTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_setTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setTag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_setTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_removeFormWorld(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_removeFormWorld'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeFormWorld();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeFormWorld",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_removeFormWorld'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_isCollisionEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_isCollisionEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isCollisionEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isCollisionEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_isCollisionEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_getTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJoint* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_getTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getTag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTag",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_getTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJoint_destroy(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJoint",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::PhysicsJoint* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsJoint",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsJoint*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::PhysicsJoint::destroy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destroy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJoint_destroy'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJoint_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJoint)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJoint(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJoint");
    tolua_cclass(tolua_S,"PhysicsJoint","cc.PhysicsJoint","",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJoint");
        tolua_function(tolua_S,"getBodyA",lua_cocos2dx_physics_PhysicsJoint_getBodyA);
        tolua_function(tolua_S,"getBodyB",lua_cocos2dx_physics_PhysicsJoint_getBodyB);
        tolua_function(tolua_S,"getMaxForce",lua_cocos2dx_physics_PhysicsJoint_getMaxForce);
        tolua_function(tolua_S,"setMaxForce",lua_cocos2dx_physics_PhysicsJoint_setMaxForce);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_physics_PhysicsJoint_isEnabled);
        tolua_function(tolua_S,"setEnable",lua_cocos2dx_physics_PhysicsJoint_setEnable);
        tolua_function(tolua_S,"setCollisionEnable",lua_cocos2dx_physics_PhysicsJoint_setCollisionEnable);
        tolua_function(tolua_S,"getWorld",lua_cocos2dx_physics_PhysicsJoint_getWorld);
        tolua_function(tolua_S,"setTag",lua_cocos2dx_physics_PhysicsJoint_setTag);
        tolua_function(tolua_S,"removeFormWorld",lua_cocos2dx_physics_PhysicsJoint_removeFormWorld);
        tolua_function(tolua_S,"isCollisionEnabled",lua_cocos2dx_physics_PhysicsJoint_isCollisionEnabled);
        tolua_function(tolua_S,"getTag",lua_cocos2dx_physics_PhysicsJoint_getTag);
        tolua_function(tolua_S,"destroy", lua_cocos2dx_physics_PhysicsJoint_destroy);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJoint).name();
    g_luaType[typeName] = "cc.PhysicsJoint";
    g_typeCast["PhysicsJoint"] = "cc.PhysicsJoint";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointFixed_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointFixed",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        cocos2d::Point arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointFixed* ret = cocos2d::PhysicsJointFixed::construct(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointFixed";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointFixed*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointFixed_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointFixed_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointFixed)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointFixed(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointFixed");
    tolua_cclass(tolua_S,"PhysicsJointFixed","cc.PhysicsJointFixed","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointFixed");
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointFixed_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointFixed).name();
    g_luaType[typeName] = "cc.PhysicsJointFixed";
    g_typeCast["PhysicsJointFixed"] = "cc.PhysicsJointFixed";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointLimit_setAnchr2(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_setAnchr2'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setAnchr2(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnchr2",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_setAnchr2'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_setAnchr1(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_setAnchr1'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setAnchr1(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnchr1",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_setAnchr1'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_setMax(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_setMax'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMax(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMax",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_setMax'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_getAnchr2(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_getAnchr2'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchr2();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchr2",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_getAnchr2'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_getAnchr1(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_getAnchr1'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchr1();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchr1",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_getAnchr1'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_getMin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_getMin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_getMin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_getMax(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_getMax'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMax();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMax",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_getMax'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_setMin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointLimit_setMin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMin(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMin",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_setMin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 6)
        {
            cocos2d::PhysicsBody* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::PhysicsBody* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Point arg2;
            ok &= luaval_to_point(tolua_S, 4, &arg2);
            if (!ok) { break; }
            cocos2d::Point arg3;
            ok &= luaval_to_point(tolua_S, 5, &arg3);
            if (!ok) { break; }
            double arg4;
            ok &= luaval_to_number(tolua_S, 6,&arg4);
            if (!ok) { break; }
            double arg5;
            ok &= luaval_to_number(tolua_S, 7,&arg5);
            if (!ok) { break; }
            cocos2d::PhysicsJointLimit* ret = cocos2d::PhysicsJointLimit::construct(arg0, arg1, arg2, arg3, arg4, arg5);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointLimit";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointLimit*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 4)
        {
            cocos2d::PhysicsBody* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::PhysicsBody* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Point arg2;
            ok &= luaval_to_point(tolua_S, 4, &arg2);
            if (!ok) { break; }
            cocos2d::Point arg3;
            ok &= luaval_to_point(tolua_S, 5, &arg3);
            if (!ok) { break; }
            cocos2d::PhysicsJointLimit* ret = cocos2d::PhysicsJointLimit::construct(arg0, arg1, arg2, arg3);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointLimit";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointLimit*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "construct",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointLimit_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointLimit_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointLimit)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointLimit(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointLimit");
    tolua_cclass(tolua_S,"PhysicsJointLimit","cc.PhysicsJointLimit","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointLimit");
        tolua_function(tolua_S,"setAnchr2",lua_cocos2dx_physics_PhysicsJointLimit_setAnchr2);
        tolua_function(tolua_S,"setAnchr1",lua_cocos2dx_physics_PhysicsJointLimit_setAnchr1);
        tolua_function(tolua_S,"setMax",lua_cocos2dx_physics_PhysicsJointLimit_setMax);
        tolua_function(tolua_S,"getAnchr2",lua_cocos2dx_physics_PhysicsJointLimit_getAnchr2);
        tolua_function(tolua_S,"getAnchr1",lua_cocos2dx_physics_PhysicsJointLimit_getAnchr1);
        tolua_function(tolua_S,"getMin",lua_cocos2dx_physics_PhysicsJointLimit_getMin);
        tolua_function(tolua_S,"getMax",lua_cocos2dx_physics_PhysicsJointLimit_getMax);
        tolua_function(tolua_S,"setMin",lua_cocos2dx_physics_PhysicsJointLimit_setMin);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointLimit_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointLimit).name();
    g_luaType[typeName] = "cc.PhysicsJointLimit";
    g_typeCast["PhysicsJointLimit"] = "cc.PhysicsJointLimit";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointPin_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointPin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        cocos2d::Point arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointPin* ret = cocos2d::PhysicsJointPin::construct(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointPin";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointPin*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointPin_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointPin_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointPin)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointPin(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointPin");
    tolua_cclass(tolua_S,"PhysicsJointPin","cc.PhysicsJointPin","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointPin");
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointPin_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointPin).name();
    g_luaType[typeName] = "cc.PhysicsJointPin";
    g_typeCast["PhysicsJointPin"] = "cc.PhysicsJointPin";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointDistance_setDistance(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointDistance* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointDistance",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointDistance*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointDistance_setDistance'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDistance(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDistance",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointDistance_setDistance'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointDistance_getDistance(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointDistance* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointDistance",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointDistance*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointDistance_getDistance'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getDistance();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDistance",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointDistance_getDistance'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointDistance_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointDistance",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        cocos2d::Point arg2;
        cocos2d::Point arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointDistance* ret = cocos2d::PhysicsJointDistance::construct(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointDistance";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointDistance*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointDistance_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointDistance_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointDistance)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointDistance(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointDistance");
    tolua_cclass(tolua_S,"PhysicsJointDistance","cc.PhysicsJointDistance","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointDistance");
        tolua_function(tolua_S,"setDistance",lua_cocos2dx_physics_PhysicsJointDistance_setDistance);
        tolua_function(tolua_S,"getDistance",lua_cocos2dx_physics_PhysicsJointDistance_getDistance);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointDistance_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointDistance).name();
    g_luaType[typeName] = "cc.PhysicsJointDistance";
    g_typeCast["PhysicsJointDistance"] = "cc.PhysicsJointDistance";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointSpring_setAnchr2(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_setAnchr2'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setAnchr2(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnchr2",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_setAnchr2'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_setAnchr1(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_setAnchr1'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setAnchr1(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnchr1",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_setAnchr1'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_getDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_getDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getDamping();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDamping",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_getDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_setStiffness(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_setStiffness'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setStiffness(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setStiffness",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_setStiffness'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_getRestLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_getRestLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRestLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRestLength",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_getRestLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_getAnchr2(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_getAnchr2'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchr2();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchr2",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_getAnchr2'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_getAnchr1(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_getAnchr1'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchr1();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchr1",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_getAnchr1'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_getStiffness(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_getStiffness'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getStiffness();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStiffness",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_getStiffness'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_setRestLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_setRestLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRestLength(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRestLength",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_setRestLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_setDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointSpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointSpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointSpring_setDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDamping(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDamping",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_setDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointSpring_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointSpring",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 6)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        cocos2d::Point arg2;
        cocos2d::Point arg3;
        double arg4;
        double arg5;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        ok &= luaval_to_number(tolua_S, 6,&arg4);
        ok &= luaval_to_number(tolua_S, 7,&arg5);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointSpring* ret = cocos2d::PhysicsJointSpring::construct(arg0, arg1, arg2, arg3, arg4, arg5);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointSpring";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointSpring*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointSpring_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointSpring_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointSpring)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointSpring(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointSpring");
    tolua_cclass(tolua_S,"PhysicsJointSpring","cc.PhysicsJointSpring","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointSpring");
        tolua_function(tolua_S,"setAnchr2",lua_cocos2dx_physics_PhysicsJointSpring_setAnchr2);
        tolua_function(tolua_S,"setAnchr1",lua_cocos2dx_physics_PhysicsJointSpring_setAnchr1);
        tolua_function(tolua_S,"getDamping",lua_cocos2dx_physics_PhysicsJointSpring_getDamping);
        tolua_function(tolua_S,"setStiffness",lua_cocos2dx_physics_PhysicsJointSpring_setStiffness);
        tolua_function(tolua_S,"getRestLength",lua_cocos2dx_physics_PhysicsJointSpring_getRestLength);
        tolua_function(tolua_S,"getAnchr2",lua_cocos2dx_physics_PhysicsJointSpring_getAnchr2);
        tolua_function(tolua_S,"getAnchr1",lua_cocos2dx_physics_PhysicsJointSpring_getAnchr1);
        tolua_function(tolua_S,"getStiffness",lua_cocos2dx_physics_PhysicsJointSpring_getStiffness);
        tolua_function(tolua_S,"setRestLength",lua_cocos2dx_physics_PhysicsJointSpring_setRestLength);
        tolua_function(tolua_S,"setDamping",lua_cocos2dx_physics_PhysicsJointSpring_setDamping);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointSpring_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointSpring).name();
    g_luaType[typeName] = "cc.PhysicsJointSpring";
    g_typeCast["PhysicsJointSpring"] = "cc.PhysicsJointSpring";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointGroove_setAnchr2(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGroove* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGroove*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGroove_setAnchr2'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setAnchr2(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnchr2",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_setAnchr2'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGroove_setGrooveA(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGroove* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGroove*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGroove_setGrooveA'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setGrooveA(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGrooveA",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_setGrooveA'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGroove_setGrooveB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGroove* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGroove*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGroove_setGrooveB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setGrooveB(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGrooveB",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_setGrooveB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGroove_getGrooveA(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGroove* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGroove*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGroove_getGrooveA'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getGrooveA();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getGrooveA",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_getGrooveA'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGroove_getGrooveB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGroove* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGroove*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGroove_getGrooveB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getGrooveB();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getGrooveB",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_getGrooveB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGroove_getAnchr2(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGroove* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGroove*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGroove_getAnchr2'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchr2();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchr2",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_getAnchr2'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGroove_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointGroove",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 5)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        cocos2d::Point arg2;
        cocos2d::Point arg3;
        cocos2d::Point arg4;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        ok &= luaval_to_point(tolua_S, 6, &arg4);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointGroove* ret = cocos2d::PhysicsJointGroove::construct(arg0, arg1, arg2, arg3, arg4);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointGroove";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointGroove*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGroove_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointGroove_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointGroove)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointGroove(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointGroove");
    tolua_cclass(tolua_S,"PhysicsJointGroove","cc.PhysicsJointGroove","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointGroove");
        tolua_function(tolua_S,"setAnchr2",lua_cocos2dx_physics_PhysicsJointGroove_setAnchr2);
        tolua_function(tolua_S,"setGrooveA",lua_cocos2dx_physics_PhysicsJointGroove_setGrooveA);
        tolua_function(tolua_S,"setGrooveB",lua_cocos2dx_physics_PhysicsJointGroove_setGrooveB);
        tolua_function(tolua_S,"getGrooveA",lua_cocos2dx_physics_PhysicsJointGroove_getGrooveA);
        tolua_function(tolua_S,"getGrooveB",lua_cocos2dx_physics_PhysicsJointGroove_getGrooveB);
        tolua_function(tolua_S,"getAnchr2",lua_cocos2dx_physics_PhysicsJointGroove_getAnchr2);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointGroove_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointGroove).name();
    g_luaType[typeName] = "cc.PhysicsJointGroove";
    g_typeCast["PhysicsJointGroove"] = "cc.PhysicsJointGroove";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointRotarySpring_getDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotarySpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotarySpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getDamping();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDamping",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotarySpring_setRestAngle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotarySpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotarySpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setRestAngle'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRestAngle(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRestAngle",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setRestAngle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotarySpring_getStiffness(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotarySpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotarySpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getStiffness'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getStiffness();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStiffness",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getStiffness'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotarySpring_setStiffness(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotarySpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotarySpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setStiffness'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setStiffness(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setStiffness",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setStiffness'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotarySpring_setDamping(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotarySpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotarySpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setDamping'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDamping(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDamping",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setDamping'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotarySpring_getRestAngle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotarySpring* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotarySpring*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getRestAngle'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRestAngle();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRestAngle",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getRestAngle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotarySpring_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointRotarySpring",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        double arg2;
        double arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointRotarySpring* ret = cocos2d::PhysicsJointRotarySpring::construct(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointRotarySpring";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointRotarySpring*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointRotarySpring_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointRotarySpring)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointRotarySpring(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointRotarySpring");
    tolua_cclass(tolua_S,"PhysicsJointRotarySpring","cc.PhysicsJointRotarySpring","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointRotarySpring");
        tolua_function(tolua_S,"getDamping",lua_cocos2dx_physics_PhysicsJointRotarySpring_getDamping);
        tolua_function(tolua_S,"setRestAngle",lua_cocos2dx_physics_PhysicsJointRotarySpring_setRestAngle);
        tolua_function(tolua_S,"getStiffness",lua_cocos2dx_physics_PhysicsJointRotarySpring_getStiffness);
        tolua_function(tolua_S,"setStiffness",lua_cocos2dx_physics_PhysicsJointRotarySpring_setStiffness);
        tolua_function(tolua_S,"setDamping",lua_cocos2dx_physics_PhysicsJointRotarySpring_setDamping);
        tolua_function(tolua_S,"getRestAngle",lua_cocos2dx_physics_PhysicsJointRotarySpring_getRestAngle);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointRotarySpring_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointRotarySpring).name();
    g_luaType[typeName] = "cc.PhysicsJointRotarySpring";
    g_typeCast["PhysicsJointRotarySpring"] = "cc.PhysicsJointRotarySpring";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMax(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotaryLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotaryLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotaryLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMax'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMax();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMax",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMax'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotaryLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotaryLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotaryLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMin(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMin",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMax(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotaryLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotaryLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotaryLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMax'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMax(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMax",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMax'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRotaryLimit* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRotaryLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRotaryLimit*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRotaryLimit_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointRotaryLimit",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            cocos2d::PhysicsBody* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::PhysicsBody* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::PhysicsJointRotaryLimit* ret = cocos2d::PhysicsJointRotaryLimit::construct(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointRotaryLimit";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointRotaryLimit*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 4)
        {
            cocos2d::PhysicsBody* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::PhysicsBody* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2);
            if (!ok) { break; }
            double arg3;
            ok &= luaval_to_number(tolua_S, 5,&arg3);
            if (!ok) { break; }
            cocos2d::PhysicsJointRotaryLimit* ret = cocos2d::PhysicsJointRotaryLimit::construct(arg0, arg1, arg2, arg3);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointRotaryLimit";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointRotaryLimit*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "construct",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRotaryLimit_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointRotaryLimit_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointRotaryLimit)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointRotaryLimit(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointRotaryLimit");
    tolua_cclass(tolua_S,"PhysicsJointRotaryLimit","cc.PhysicsJointRotaryLimit","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointRotaryLimit");
        tolua_function(tolua_S,"getMax",lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMax);
        tolua_function(tolua_S,"setMin",lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMin);
        tolua_function(tolua_S,"setMax",lua_cocos2dx_physics_PhysicsJointRotaryLimit_setMax);
        tolua_function(tolua_S,"getMin",lua_cocos2dx_physics_PhysicsJointRotaryLimit_getMin);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointRotaryLimit_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointRotaryLimit).name();
    g_luaType[typeName] = "cc.PhysicsJointRotaryLimit";
    g_typeCast["PhysicsJointRotaryLimit"] = "cc.PhysicsJointRotaryLimit";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointRatchet_getAngle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRatchet*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRatchet_getAngle'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getAngle();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAngle",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_getAngle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_setAngle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRatchet*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRatchet_setAngle'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setAngle(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAngle",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_setAngle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_setPhase(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRatchet*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRatchet_setPhase'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setPhase(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPhase",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_setPhase'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_getPhase(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRatchet*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRatchet_getPhase'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getPhase();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPhase",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_getPhase'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_setRatchet(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRatchet*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRatchet_setRatchet'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRatchet(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRatchet",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_setRatchet'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_getRatchet(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointRatchet*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRatchet_getRatchet'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRatchet();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRatchet",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_getRatchet'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointRatchet",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        double arg2;
        double arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointRatchet* ret = cocos2d::PhysicsJointRatchet::construct(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointRatchet";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointRatchet*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointRatchet_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointRatchet_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointRatchet)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointRatchet(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointRatchet");
    tolua_cclass(tolua_S,"PhysicsJointRatchet","cc.PhysicsJointRatchet","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointRatchet");
        tolua_function(tolua_S,"getAngle",lua_cocos2dx_physics_PhysicsJointRatchet_getAngle);
        tolua_function(tolua_S,"setAngle",lua_cocos2dx_physics_PhysicsJointRatchet_setAngle);
        tolua_function(tolua_S,"setPhase",lua_cocos2dx_physics_PhysicsJointRatchet_setPhase);
        tolua_function(tolua_S,"getPhase",lua_cocos2dx_physics_PhysicsJointRatchet_getPhase);
        tolua_function(tolua_S,"setRatchet",lua_cocos2dx_physics_PhysicsJointRatchet_setRatchet);
        tolua_function(tolua_S,"getRatchet",lua_cocos2dx_physics_PhysicsJointRatchet_getRatchet);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointRatchet_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointRatchet).name();
    g_luaType[typeName] = "cc.PhysicsJointRatchet";
    g_typeCast["PhysicsJointRatchet"] = "cc.PhysicsJointRatchet";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointGear_setRatio(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGear* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGear",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGear*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGear_setRatio'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRatio(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRatio",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGear_setRatio'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGear_getPhase(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGear* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGear",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGear*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGear_getPhase'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getPhase();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPhase",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGear_getPhase'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGear_setPhase(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGear* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGear",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGear*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGear_setPhase'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setPhase(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPhase",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGear_setPhase'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGear_getRatio(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointGear* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointGear",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointGear*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointGear_getRatio'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRatio();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRatio",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGear_getRatio'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointGear_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointGear",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        double arg2;
        double arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointGear* ret = cocos2d::PhysicsJointGear::construct(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointGear";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointGear*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointGear_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointGear_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointGear)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointGear(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointGear");
    tolua_cclass(tolua_S,"PhysicsJointGear","cc.PhysicsJointGear","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointGear");
        tolua_function(tolua_S,"setRatio",lua_cocos2dx_physics_PhysicsJointGear_setRatio);
        tolua_function(tolua_S,"getPhase",lua_cocos2dx_physics_PhysicsJointGear_getPhase);
        tolua_function(tolua_S,"setPhase",lua_cocos2dx_physics_PhysicsJointGear_setPhase);
        tolua_function(tolua_S,"getRatio",lua_cocos2dx_physics_PhysicsJointGear_getRatio);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointGear_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointGear).name();
    g_luaType[typeName] = "cc.PhysicsJointGear";
    g_typeCast["PhysicsJointGear"] = "cc.PhysicsJointGear";
    return 1;
}

int lua_cocos2dx_physics_PhysicsJointMotor_setRate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointMotor* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointMotor",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointMotor*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointMotor_setRate'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setRate(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointMotor_setRate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointMotor_getRate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointMotor* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.PhysicsJointMotor",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::PhysicsJointMotor*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointMotor_getRate'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRate();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointMotor_getRate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_physics_PhysicsJointMotor_construct(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.PhysicsJointMotor",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        cocos2d::PhysicsBody* arg0;
        cocos2d::PhysicsBody* arg1;
        double arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"cc.PhysicsBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::PhysicsBody*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cocos2d::PhysicsJointMotor* ret = cocos2d::PhysicsJointMotor::construct(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "cc.PhysicsJointMotor";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::PhysicsJointMotor*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "construct",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_physics_PhysicsJointMotor_construct'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_physics_PhysicsJointMotor_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PhysicsJointMotor)");
    return 0;
}

int lua_register_cocos2dx_physics_PhysicsJointMotor(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.PhysicsJointMotor");
    tolua_cclass(tolua_S,"PhysicsJointMotor","cc.PhysicsJointMotor","cc.PhysicsJoint",NULL);

    tolua_beginmodule(tolua_S,"PhysicsJointMotor");
        tolua_function(tolua_S,"setRate",lua_cocos2dx_physics_PhysicsJointMotor_setRate);
        tolua_function(tolua_S,"getRate",lua_cocos2dx_physics_PhysicsJointMotor_getRate);
        tolua_function(tolua_S,"construct", lua_cocos2dx_physics_PhysicsJointMotor_construct);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsJointMotor).name();
    g_luaType[typeName] = "cc.PhysicsJointMotor";
    g_typeCast["PhysicsJointMotor"] = "cc.PhysicsJointMotor";
    return 1;
}
TOLUA_API int register_all_cocos2dx_physics(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_cocos2dx_physics_PhysicsBody(tolua_S);
	lua_register_cocos2dx_physics_PhysicsWorld(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJoint(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointLimit(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointFixed(tolua_S);
	lua_register_cocos2dx_physics_EventListenerPhysicsContact(tolua_S);
	lua_register_cocos2dx_physics_EventListenerPhysicsContactWithGroup(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShape(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapeBox(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointMotor(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointDistance(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapeCircle(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapeEdgePolygon(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointPin(tolua_S);
	lua_register_cocos2dx_physics_PhysicsContactPreSolve(tolua_S);
	lua_register_cocos2dx_physics_PhysicsDebugDraw(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapeEdgeChain(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapeEdgeSegment(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointGear(tolua_S);
	lua_register_cocos2dx_physics_PhysicsContact(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapePolygon(tolua_S);
	lua_register_cocos2dx_physics_EventListenerPhysicsContactWithBodies(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointRotarySpring(tolua_S);
	lua_register_cocos2dx_physics_PhysicsContactPostSolve(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointGroove(tolua_S);
	lua_register_cocos2dx_physics_PhysicsShapeEdgeBox(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointRotaryLimit(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointRatchet(tolua_S);
	lua_register_cocos2dx_physics_PhysicsJointSpring(tolua_S);
	lua_register_cocos2dx_physics_EventListenerPhysicsContactWithShapes(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

