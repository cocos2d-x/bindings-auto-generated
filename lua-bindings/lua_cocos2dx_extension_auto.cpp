#include "lua_cocos2dx_extension_auto.hpp"
#include "cocos-ext.h"
#include "CocosBuilder.h"
#include "CocoStudio.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;
        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::extension::Scale9Sprite* ret = cobj->resizableSpriteWithCapInsets(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resizableSpriteWithCapInsets",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithSpriteFrameName(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithSpriteFrameName(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrameName",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setOpacityModifyRGB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setOpacityModifyRGB'", NULL);
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
        cobj->setOpacityModifyRGB(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setOpacityModifyRGB",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setOpacityModifyRGB'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setContentSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContentSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setContentSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'", NULL);
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
        cobj->setInsetBottom(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetBottom",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_isOpacityModifyRGB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_isOpacityModifyRGB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isOpacityModifyRGB();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isOpacityModifyRGB",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_isOpacityModifyRGB'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;
        ok &= luaval_to_uint16(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setOpacity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setOpacity",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'", NULL);
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
        cobj->setInsetTop(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetTop",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_updateDisplayedOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_updateDisplayedOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;
        ok &= luaval_to_uint16(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->updateDisplayedOpacity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateDisplayedOpacity",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_updateDisplayedOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPreferredSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPreferredSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        unsigned char ret = cobj->getOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOpacity",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::SpriteFrame* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setSpriteFrame(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Color3B ret = cobj->getColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            cocos2d::SpriteBatchNode* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteBatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteBatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithBatchNode(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 4) {
            cocos2d::SpriteBatchNode* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteBatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteBatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2);

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg3;
            ok &= luaval_to_rect(tolua_S, 5, &arg3);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithBatchNode(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithBatchNode",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getInsetBottom();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetBottom",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Rect ret = cobj->getCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsets",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::SpriteBatchNode* arg0;
        cocos2d::Rect arg1;
        bool arg2;
        cocos2d::Rect arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteBatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteBatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_rect(tolua_S, 3, &arg1);
        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        ok &= luaval_to_rect(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        bool ret = cobj->updateWithBatchNode(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateWithBatchNode",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getInsetRight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetRight",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getOriginalSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getOriginalSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOriginalSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithFile'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 3) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithFile(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 2) {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0);

            if (!ok) { ok = true; break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithFile(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithFile",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getInsetTop();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetTop",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'", NULL);
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
        cobj->setInsetLeft(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetLeft",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithSpriteFrame(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 2) {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithSpriteFrame(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrame",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getPreferredSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPreferredSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;
        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsets",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getInsetLeft();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetLeft",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_updateDisplayedColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_updateDisplayedColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->updateDisplayedColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateDisplayedColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_updateDisplayedColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'", NULL);
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
        cobj->setInsetRight(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetRight",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { ok = true; break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2);
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create();
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 2)
        {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0);
            if (!ok) { ok = true; break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrameName(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrameName(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrame(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 1)
        {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrame(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::Scale9Sprite();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Scale9Sprite");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Scale9Sprite");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Scale9Sprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_Scale9Sprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Scale9Sprite)");
    return 0;
}

int lua_register_cocos2dx_extension_Scale9Sprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Scale9Sprite");
    tolua_cclass(tolua_S,"Scale9Sprite","Scale9Sprite","NodeRGBA",NULL);

    tolua_beginmodule(tolua_S,"Scale9Sprite");
        tolua_function(tolua_S,"resizableSpriteWithCapInsets",lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName);
        tolua_function(tolua_S,"setOpacityModifyRGB",lua_cocos2dx_extension_Scale9Sprite_setOpacityModifyRGB);
        tolua_function(tolua_S,"setContentSize",lua_cocos2dx_extension_Scale9Sprite_setContentSize);
        tolua_function(tolua_S,"setInsetBottom",lua_cocos2dx_extension_Scale9Sprite_setInsetBottom);
        tolua_function(tolua_S,"isOpacityModifyRGB",lua_cocos2dx_extension_Scale9Sprite_isOpacityModifyRGB);
        tolua_function(tolua_S,"setOpacity",lua_cocos2dx_extension_Scale9Sprite_setOpacity);
        tolua_function(tolua_S,"setInsetTop",lua_cocos2dx_extension_Scale9Sprite_setInsetTop);
        tolua_function(tolua_S,"updateDisplayedOpacity",lua_cocos2dx_extension_Scale9Sprite_updateDisplayedOpacity);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_Scale9Sprite_init);
        tolua_function(tolua_S,"setPreferredSize",lua_cocos2dx_extension_Scale9Sprite_setPreferredSize);
        tolua_function(tolua_S,"getOpacity",lua_cocos2dx_extension_Scale9Sprite_getOpacity);
        tolua_function(tolua_S,"setSpriteFrame",lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame);
        tolua_function(tolua_S,"getColor",lua_cocos2dx_extension_Scale9Sprite_getColor);
        tolua_function(tolua_S,"initWithBatchNode",lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode);
        tolua_function(tolua_S,"getInsetBottom",lua_cocos2dx_extension_Scale9Sprite_getInsetBottom);
        tolua_function(tolua_S,"getCapInsets",lua_cocos2dx_extension_Scale9Sprite_getCapInsets);
        tolua_function(tolua_S,"updateWithBatchNode",lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode);
        tolua_function(tolua_S,"getInsetRight",lua_cocos2dx_extension_Scale9Sprite_getInsetRight);
        tolua_function(tolua_S,"getOriginalSize",lua_cocos2dx_extension_Scale9Sprite_getOriginalSize);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_extension_Scale9Sprite_initWithFile);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_extension_Scale9Sprite_setColor);
        tolua_function(tolua_S,"getInsetTop",lua_cocos2dx_extension_Scale9Sprite_getInsetTop);
        tolua_function(tolua_S,"setInsetLeft",lua_cocos2dx_extension_Scale9Sprite_setInsetLeft);
        tolua_function(tolua_S,"initWithSpriteFrame",lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame);
        tolua_function(tolua_S,"getPreferredSize",lua_cocos2dx_extension_Scale9Sprite_getPreferredSize);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_extension_Scale9Sprite_setCapInsets);
        tolua_function(tolua_S,"getInsetLeft",lua_cocos2dx_extension_Scale9Sprite_getInsetLeft);
        tolua_function(tolua_S,"updateDisplayedColor",lua_cocos2dx_extension_Scale9Sprite_updateDisplayedColor);
        tolua_function(tolua_S,"setInsetRight",lua_cocos2dx_extension_Scale9Sprite_setInsetRight);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Scale9Sprite_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Scale9Sprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::Scale9Sprite).hash_code();
    g_luaType[typeId] = "Scale9Sprite";
    return 1;
}

int lua_cocos2dx_extension_Control_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_setSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setSelected'", NULL);
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
        cobj->setSelected(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSelected",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setSelected'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_hasVisibleParents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_hasVisibleParents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->hasVisibleParents();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hasVisibleParents",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_hasVisibleParents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setHighlighted'", NULL);
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
        cobj->setHighlighted(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHighlighted",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setHighlighted'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_isHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isHighlighted'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isHighlighted();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isHighlighted",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isHighlighted'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_isOpacityModifyRGB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isOpacityModifyRGB'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isOpacityModifyRGB();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isOpacityModifyRGB",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isOpacityModifyRGB'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isEnabled'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_sendActionsForControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->sendActionsForControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "sendActionsForControlEvents",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_setOpacityModifyRGB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setOpacityModifyRGB'", NULL);
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
        cobj->setOpacityModifyRGB(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setOpacityModifyRGB",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setOpacityModifyRGB'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_isSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isSelected'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isSelected();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isSelected",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isSelected'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_getState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_getState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getState();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getState",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_getState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchCancelled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchCancelled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchCancelled",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchCancelled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_needsLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->needsLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "needsLayout",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_needsLayout'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_getTouchLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_getTouchLocation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getTouchLocation(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTouchLocation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_getTouchLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_isTouchInside(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isTouchInside'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->isTouchInside(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchInside",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isTouchInside'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::extension::Control* ret = cocos2d::extension::Control::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Control");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Control");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Control_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::Control();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Control");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Control");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Control",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_Control_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Control)");
    return 0;
}

int lua_register_cocos2dx_extension_Control(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Control");
    tolua_cclass(tolua_S,"Control","Control","LayerRGBA",NULL);

    tolua_beginmodule(tolua_S,"Control");
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_Control_onTouchEnded);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_Control_onTouchMoved);
        tolua_function(tolua_S,"setSelected",lua_cocos2dx_extension_Control_setSelected);
        tolua_function(tolua_S,"hasVisibleParents",lua_cocos2dx_extension_Control_hasVisibleParents);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_extension_Control_setHighlighted);
        tolua_function(tolua_S,"isHighlighted",lua_cocos2dx_extension_Control_isHighlighted);
        tolua_function(tolua_S,"isOpacityModifyRGB",lua_cocos2dx_extension_Control_isOpacityModifyRGB);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_extension_Control_isEnabled);
        tolua_function(tolua_S,"sendActionsForControlEvents",lua_cocos2dx_extension_Control_sendActionsForControlEvents);
        tolua_function(tolua_S,"setOpacityModifyRGB",lua_cocos2dx_extension_Control_setOpacityModifyRGB);
        tolua_function(tolua_S,"isSelected",lua_cocos2dx_extension_Control_isSelected);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_Control_init);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_Control_setEnabled);
        tolua_function(tolua_S,"getState",lua_cocos2dx_extension_Control_getState);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_Control_onTouchCancelled);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_Control_needsLayout);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_Control_onTouchBegan);
        tolua_function(tolua_S,"getTouchLocation",lua_cocos2dx_extension_Control_getTouchLocation);
        tolua_function(tolua_S,"isTouchInside",lua_cocos2dx_extension_Control_isTouchInside);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Control_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Control_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::Control).hash_code();
    g_luaType[typeId] = "Control";
    return 1;
}

int lua_cocos2dx_extension_ControlButton_setTitleColorDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleColorDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Dictionary* arg0;
        ok &= luaval_to_dictionary(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTitleColorDispatchTable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleColorDispatchTable",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleColorDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_isPushed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_isPushed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isPushed();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isPushed",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_isPushed'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setSelected'", NULL);
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
        cobj->setSelected(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSelected",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setSelected'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabelForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleLabelForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleLabelForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'", NULL);
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
        cobj->setAdjustBackgroundImage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAdjustBackgroundImage",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getLabelAnchorPoint();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLabelAnchorPoint",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'", NULL);
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
        cobj->setHighlighted(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHighlighted",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'", NULL);
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
        cobj->setZoomOnTouchDown(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setZoomOnTouchDown",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Dictionary* arg0;
        ok &= luaval_to_dictionary(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setBackgroundSpriteDispatchTable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSpriteDispatchTable",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::String* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"String",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::String*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getTitleDispatchTable();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleDispatchTable",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'", NULL);
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
        cobj->setLabelAnchorPoint(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLabelAnchorPoint",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Scale9Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithBackgroundSprite(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithBackgroundSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        float ret = cobj->getTitleTTFSizeForState(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleTTFSizeForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Dictionary* arg0;
        ok &= luaval_to_dictionary(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTitleDispatchTable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleDispatchTable",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;
        ok &= luaval_to_uint16(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setOpacity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setOpacity",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleTTFForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::extension::Control::State arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleTTFForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleTTFForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleTTFSizeForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleTTFSizeForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setTitleLabel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleLabel",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        unsigned char ret = cobj->getOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOpacity",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getCurrentTitleColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Color3B ret = cobj->getCurrentTitleColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentTitleColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleColorDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleColorDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getTitleColorDispatchTable();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleColorDispatchTable",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleColorDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Scale9Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackgroundSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::extension::Scale9Sprite* ret = cobj->getBackgroundSpriteForState(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSpriteForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Color3B ret = cobj->getColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setMargins(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setMargins'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setMargins(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMargins",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setMargins'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_onTouchCancelled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchCancelled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchCancelled",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_onTouchCancelled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_needsLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->needsLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "needsLayout",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_needsLayout'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_initWithTitleAndFontNameAndFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_initWithTitleAndFontNameAndFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        std::string arg0;
        const char* arg1;
        double arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTitleAndFontNameAndFontSize(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTitleAndFontNameAndFontSize",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_initWithTitleAndFontNameAndFontSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getCurrentTitle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitle'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::String* ret = cobj->getCurrentTitle();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"String");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"String");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentTitle",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitle'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getHorizontalOrigin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getHorizontalOrigin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHorizontalOrigin",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleTTFForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        const char* ret = cobj->getTitleTTFForState(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleTTFForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::Scale9Sprite* ret = cobj->getBackgroundSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Scale9Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Scale9Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleColorForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Color3B ret = cobj->getTitleColorForState(arg0);
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleColorForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleColorForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Color3B arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleColorForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleColorForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->doesAdjustBackgroundImage();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "doesAdjustBackgroundImage",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::SpriteFrame* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setBackgroundSpriteFrameForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSpriteFrameForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::extension::Scale9Sprite* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setBackgroundSpriteForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSpriteForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabelDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getTitleLabelDispatchTable();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleLabelDispatchTable",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithLabelAndBackgroundSprite(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithLabelAndBackgroundSprite",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPreferredSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPreferredSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabelDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Dictionary* arg0;
        ok &= luaval_to_dictionary(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTitleLabelDispatchTable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleLabelDispatchTable",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getTitleLabel();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Node");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Node");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleLabel",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getPreferredSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPreferredSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getVerticalMargin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getVerticalMargin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVerticalMargin",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSpriteDispatchTable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteDispatchTable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getBackgroundSpriteDispatchTable();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSpriteDispatchTable",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteDispatchTable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabelForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getTitleLabelForState(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Node");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Node");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleLabelForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleBMFontForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::extension::Control::State arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleBMFontForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleBMFontForState",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleBMFontForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        const char* ret = cobj->getTitleBMFontForState(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleBMFontForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getZoomOnTouchDown();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getZoomOnTouchDown",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::String* ret = cobj->getTitleForState(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"String");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"String");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleForState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            cocos2d::extension::Scale9Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlButton");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlButton");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create();
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlButton");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlButton");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 2)
        {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::Scale9Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlButton");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlButton");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlButton");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlButton");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlButton_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlButton();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlButton");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlButton");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlButton",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlButton_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlButton)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlButton(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlButton");
    tolua_cclass(tolua_S,"ControlButton","ControlButton","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlButton");
        tolua_function(tolua_S,"setTitleColorDispatchTable",lua_cocos2dx_extension_ControlButton_setTitleColorDispatchTable);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_ControlButton_onTouchEnded);
        tolua_function(tolua_S,"isPushed",lua_cocos2dx_extension_ControlButton_isPushed);
        tolua_function(tolua_S,"setSelected",lua_cocos2dx_extension_ControlButton_setSelected);
        tolua_function(tolua_S,"setTitleLabelForState",lua_cocos2dx_extension_ControlButton_setTitleLabelForState);
        tolua_function(tolua_S,"setAdjustBackgroundImage",lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage);
        tolua_function(tolua_S,"getLabelAnchorPoint",lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_extension_ControlButton_setHighlighted);
        tolua_function(tolua_S,"setZoomOnTouchDown",lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown);
        tolua_function(tolua_S,"setBackgroundSpriteDispatchTable",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteDispatchTable);
        tolua_function(tolua_S,"setTitleForState",lua_cocos2dx_extension_ControlButton_setTitleForState);
        tolua_function(tolua_S,"getTitleDispatchTable",lua_cocos2dx_extension_ControlButton_getTitleDispatchTable);
        tolua_function(tolua_S,"setLabelAnchorPoint",lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ControlButton_onTouchMoved);
        tolua_function(tolua_S,"initWithBackgroundSprite",lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite);
        tolua_function(tolua_S,"getTitleTTFSizeForState",lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState);
        tolua_function(tolua_S,"setTitleDispatchTable",lua_cocos2dx_extension_ControlButton_setTitleDispatchTable);
        tolua_function(tolua_S,"setOpacity",lua_cocos2dx_extension_ControlButton_setOpacity);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ControlButton_init);
        tolua_function(tolua_S,"setTitleTTFForState",lua_cocos2dx_extension_ControlButton_setTitleTTFForState);
        tolua_function(tolua_S,"setTitleTTFSizeForState",lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState);
        tolua_function(tolua_S,"setTitleLabel",lua_cocos2dx_extension_ControlButton_setTitleLabel);
        tolua_function(tolua_S,"getOpacity",lua_cocos2dx_extension_ControlButton_getOpacity);
        tolua_function(tolua_S,"getCurrentTitleColor",lua_cocos2dx_extension_ControlButton_getCurrentTitleColor);
        tolua_function(tolua_S,"getTitleColorDispatchTable",lua_cocos2dx_extension_ControlButton_getTitleColorDispatchTable);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlButton_setEnabled);
        tolua_function(tolua_S,"setBackgroundSprite",lua_cocos2dx_extension_ControlButton_setBackgroundSprite);
        tolua_function(tolua_S,"getBackgroundSpriteForState",lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState);
        tolua_function(tolua_S,"getColor",lua_cocos2dx_extension_ControlButton_getColor);
        tolua_function(tolua_S,"setMargins",lua_cocos2dx_extension_ControlButton_setMargins);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_ControlButton_onTouchCancelled);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_ControlButton_needsLayout);
        tolua_function(tolua_S,"initWithTitleAndFontNameAndFontSize",lua_cocos2dx_extension_ControlButton_initWithTitleAndFontNameAndFontSize);
        tolua_function(tolua_S,"getCurrentTitle",lua_cocos2dx_extension_ControlButton_getCurrentTitle);
        tolua_function(tolua_S,"getHorizontalOrigin",lua_cocos2dx_extension_ControlButton_getHorizontalOrigin);
        tolua_function(tolua_S,"getTitleTTFForState",lua_cocos2dx_extension_ControlButton_getTitleTTFForState);
        tolua_function(tolua_S,"getBackgroundSprite",lua_cocos2dx_extension_ControlButton_getBackgroundSprite);
        tolua_function(tolua_S,"getTitleColorForState",lua_cocos2dx_extension_ControlButton_getTitleColorForState);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ControlButton_onTouchBegan);
        tolua_function(tolua_S,"setTitleColorForState",lua_cocos2dx_extension_ControlButton_setTitleColorForState);
        tolua_function(tolua_S,"doesAdjustBackgroundImage",lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage);
        tolua_function(tolua_S,"setBackgroundSpriteFrameForState",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState);
        tolua_function(tolua_S,"setBackgroundSpriteForState",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_extension_ControlButton_setColor);
        tolua_function(tolua_S,"getTitleLabelDispatchTable",lua_cocos2dx_extension_ControlButton_getTitleLabelDispatchTable);
        tolua_function(tolua_S,"initWithLabelAndBackgroundSprite",lua_cocos2dx_extension_ControlButton_initWithLabelAndBackgroundSprite);
        tolua_function(tolua_S,"setPreferredSize",lua_cocos2dx_extension_ControlButton_setPreferredSize);
        tolua_function(tolua_S,"setTitleLabelDispatchTable",lua_cocos2dx_extension_ControlButton_setTitleLabelDispatchTable);
        tolua_function(tolua_S,"getTitleLabel",lua_cocos2dx_extension_ControlButton_getTitleLabel);
        tolua_function(tolua_S,"getPreferredSize",lua_cocos2dx_extension_ControlButton_getPreferredSize);
        tolua_function(tolua_S,"getVerticalMargin",lua_cocos2dx_extension_ControlButton_getVerticalMargin);
        tolua_function(tolua_S,"getBackgroundSpriteDispatchTable",lua_cocos2dx_extension_ControlButton_getBackgroundSpriteDispatchTable);
        tolua_function(tolua_S,"getTitleLabelForState",lua_cocos2dx_extension_ControlButton_getTitleLabelForState);
        tolua_function(tolua_S,"setTitleBMFontForState",lua_cocos2dx_extension_ControlButton_setTitleBMFontForState);
        tolua_function(tolua_S,"getTitleBMFontForState",lua_cocos2dx_extension_ControlButton_getTitleBMFontForState);
        tolua_function(tolua_S,"getZoomOnTouchDown",lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown);
        tolua_function(tolua_S,"getTitleForState",lua_cocos2dx_extension_ControlButton_getTitleForState);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlButton_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlButton_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlButton).hash_code();
    g_luaType[typeId] = "ControlButton";
    return 1;
}

int lua_cocos2dx_extension_ControlHuePicker_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTargetAndPos(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTargetAndPos",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setHue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setHue'", NULL);
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
        cobj->setHue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setHue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getStartPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getStartPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getStartPos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStartPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getStartPos'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getHue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getHue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getHue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getHue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getSlider(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getSlider'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getSlider();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSlider",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getSlider'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackground(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackground",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setBackground'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setHuePercentage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setHuePercentage'", NULL);
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
        cobj->setHuePercentage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHuePercentage",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setHuePercentage'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackground();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackground",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getBackground'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getHuePercentage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getHuePercentage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getHuePercentage();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHuePercentage",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getHuePercentage'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setSlider(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setSlider'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setSlider(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSlider",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setSlider'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::extension::ControlHuePicker* ret = cocos2d::extension::ControlHuePicker::create(arg0, arg1);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlHuePicker");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlHuePicker");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlHuePicker();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlHuePicker");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlHuePicker");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlHuePicker",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlHuePicker_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlHuePicker)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlHuePicker(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlHuePicker");
    tolua_cclass(tolua_S,"ControlHuePicker","ControlHuePicker","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlHuePicker");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlHuePicker_setEnabled);
        tolua_function(tolua_S,"initWithTargetAndPos",lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos);
        tolua_function(tolua_S,"setHue",lua_cocos2dx_extension_ControlHuePicker_setHue);
        tolua_function(tolua_S,"getStartPos",lua_cocos2dx_extension_ControlHuePicker_getStartPos);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ControlHuePicker_onTouchMoved);
        tolua_function(tolua_S,"getHue",lua_cocos2dx_extension_ControlHuePicker_getHue);
        tolua_function(tolua_S,"getSlider",lua_cocos2dx_extension_ControlHuePicker_getSlider);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ControlHuePicker_onTouchBegan);
        tolua_function(tolua_S,"setBackground",lua_cocos2dx_extension_ControlHuePicker_setBackground);
        tolua_function(tolua_S,"setHuePercentage",lua_cocos2dx_extension_ControlHuePicker_setHuePercentage);
        tolua_function(tolua_S,"getBackground",lua_cocos2dx_extension_ControlHuePicker_getBackground);
        tolua_function(tolua_S,"getHuePercentage",lua_cocos2dx_extension_ControlHuePicker_getHuePercentage);
        tolua_function(tolua_S,"setSlider",lua_cocos2dx_extension_ControlHuePicker_setSlider);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlHuePicker_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlHuePicker_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlHuePicker).hash_code();
    g_luaType[typeId] = "ControlHuePicker";
    return 1;
}

int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getShadow();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShadow",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTargetAndPos(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTargetAndPos",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getStartPos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStartPos",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getOverlay();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOverlay",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getSlider();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSlider",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackground();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackground",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getSaturation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSaturation",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getBrightness();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBrightness",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::extension::ControlSaturationBrightnessPicker* ret = cocos2d::extension::ControlSaturationBrightnessPicker::create(arg0, arg1);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlSaturationBrightnessPicker");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlSaturationBrightnessPicker");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlSaturationBrightnessPicker();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlSaturationBrightnessPicker");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlSaturationBrightnessPicker");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlSaturationBrightnessPicker",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlSaturationBrightnessPicker)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlSaturationBrightnessPicker");
    tolua_cclass(tolua_S,"ControlSaturationBrightnessPicker","ControlSaturationBrightnessPicker","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlSaturationBrightnessPicker");
        tolua_function(tolua_S,"getShadow",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow);
        tolua_function(tolua_S,"initWithTargetAndPos",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos);
        tolua_function(tolua_S,"getStartPos",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos);
        tolua_function(tolua_S,"getOverlay",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled);
        tolua_function(tolua_S,"getSlider",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider);
        tolua_function(tolua_S,"getBackground",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground);
        tolua_function(tolua_S,"getSaturation",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation);
        tolua_function(tolua_S,"getBrightness",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlSaturationBrightnessPicker).hash_code();
    g_luaType[typeId] = "ControlSaturationBrightnessPicker";
    return 1;
}

int lua_cocos2dx_extension_ControlColourPicker_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_getHuePicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_getHuePicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::ControlHuePicker* ret = cobj->getHuePicker();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlHuePicker");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlHuePicker");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHuePicker",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_getHuePicker'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Object* arg0;
        cocos2d::extension::Control::EventType arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->hueSliderValueChanged(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hueSliderValueChanged",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_getcolourPicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_getcolourPicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::ControlSaturationBrightnessPicker* ret = cobj->getcolourPicker();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlSaturationBrightnessPicker");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlSaturationBrightnessPicker");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getcolourPicker",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_getcolourPicker'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackground(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackground",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setBackground'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setcolourPicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setcolourPicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ControlSaturationBrightnessPicker* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ControlSaturationBrightnessPicker",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setcolourPicker(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setcolourPicker",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setcolourPicker'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Object* arg0;
        cocos2d::extension::Control::EventType arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->colourSliderValueChanged(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "colourSliderValueChanged",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setHuePicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setHuePicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ControlHuePicker* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ControlHuePicker",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setHuePicker(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHuePicker",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setHuePicker'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_getBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_getBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackground();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackground",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_getBackground'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::extension::ControlColourPicker* ret = cocos2d::extension::ControlColourPicker::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlColourPicker");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlColourPicker");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlColourPicker();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlColourPicker");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlColourPicker");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlColourPicker",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlColourPicker_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlColourPicker)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlColourPicker(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlColourPicker");
    tolua_cclass(tolua_S,"ControlColourPicker","ControlColourPicker","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlColourPicker");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlColourPicker_setEnabled);
        tolua_function(tolua_S,"getHuePicker",lua_cocos2dx_extension_ControlColourPicker_getHuePicker);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_extension_ControlColourPicker_setColor);
        tolua_function(tolua_S,"hueSliderValueChanged",lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged);
        tolua_function(tolua_S,"getcolourPicker",lua_cocos2dx_extension_ControlColourPicker_getcolourPicker);
        tolua_function(tolua_S,"setBackground",lua_cocos2dx_extension_ControlColourPicker_setBackground);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ControlColourPicker_init);
        tolua_function(tolua_S,"setcolourPicker",lua_cocos2dx_extension_ControlColourPicker_setcolourPicker);
        tolua_function(tolua_S,"colourSliderValueChanged",lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged);
        tolua_function(tolua_S,"setHuePicker",lua_cocos2dx_extension_ControlColourPicker_setHuePicker);
        tolua_function(tolua_S,"getBackground",lua_cocos2dx_extension_ControlColourPicker_getBackground);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlColourPicker_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlColourPicker_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlColourPicker).hash_code();
    g_luaType[typeId] = "ControlColourPicker";
    return 1;
}

int lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation'", NULL);
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
        cobj->setPreviousLocation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPreviousLocation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ProgressTimer* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ProgressTimer",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::ProgressTimer*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setProgressTimer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProgressTimer",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved'", NULL);
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
        cobj->potentiometerMoved(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "potentiometerMoved",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getMinimumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinimumValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setThumbSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setThumbSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue'", NULL);
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
        cobj->setMinimumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getPreviousLocation();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPreviousLocation",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setValue'", NULL);
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
        cobj->setValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue'", NULL);
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
        cobj->setMaximumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        cocos2d::Point arg2;
        cocos2d::Point arg3;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        float ret = cobj->angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(arg0, arg1, arg2, arg3);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded'", NULL);
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
        cobj->potentiometerEnded(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "potentiometerEnded",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        float ret = cobj->distanceBetweenPointAndPoint(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "distanceBetweenPointAndPoint",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ProgressTimer* ret = cobj->getProgressTimer();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ProgressTimer");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ProgressTimer");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProgressTimer",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getMaximumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaximumValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_isTouchInside(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_isTouchInside'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->isTouchInside(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchInside",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_isTouchInside'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan'", NULL);
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
        cobj->potentiometerBegan(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "potentiometerBegan",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getThumbSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getThumbSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::ProgressTimer* arg1;
        cocos2d::Sprite* arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"ProgressTimer",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::ProgressTimer*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTrackSprite_ProgressTimer_ThumbSprite(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTrackSprite_ProgressTimer_ThumbSprite",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cocos2d::extension::ControlPotentiometer* ret = cocos2d::extension::ControlPotentiometer::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlPotentiometer");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlPotentiometer");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlPotentiometer();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlPotentiometer");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlPotentiometer");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlPotentiometer",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlPotentiometer_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlPotentiometer)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlPotentiometer(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlPotentiometer");
    tolua_cclass(tolua_S,"ControlPotentiometer","ControlPotentiometer","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlPotentiometer");
        tolua_function(tolua_S,"setPreviousLocation",lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_ControlPotentiometer_onTouchEnded);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ControlPotentiometer_onTouchMoved);
        tolua_function(tolua_S,"setProgressTimer",lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer);
        tolua_function(tolua_S,"potentiometerMoved",lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved);
        tolua_function(tolua_S,"getMinimumValue",lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue);
        tolua_function(tolua_S,"setThumbSprite",lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite);
        tolua_function(tolua_S,"setMinimumValue",lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue);
        tolua_function(tolua_S,"getPreviousLocation",lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlPotentiometer_setEnabled);
        tolua_function(tolua_S,"setValue",lua_cocos2dx_extension_ControlPotentiometer_setValue);
        tolua_function(tolua_S,"setMaximumValue",lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ControlPotentiometer_onTouchBegan);
        tolua_function(tolua_S,"angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint",lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint);
        tolua_function(tolua_S,"potentiometerEnded",lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded);
        tolua_function(tolua_S,"distanceBetweenPointAndPoint",lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint);
        tolua_function(tolua_S,"getProgressTimer",lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer);
        tolua_function(tolua_S,"getMaximumValue",lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue);
        tolua_function(tolua_S,"isTouchInside",lua_cocos2dx_extension_ControlPotentiometer_isTouchInside);
        tolua_function(tolua_S,"getValue",lua_cocos2dx_extension_ControlPotentiometer_getValue);
        tolua_function(tolua_S,"potentiometerBegan",lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan);
        tolua_function(tolua_S,"getThumbSprite",lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite);
        tolua_function(tolua_S,"initWithTrackSprite_ProgressTimer_ThumbSprite",lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlPotentiometer_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlPotentiometer_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlPotentiometer).hash_code();
    g_luaType[typeId] = "ControlPotentiometer";
    return 1;
}

int lua_cocos2dx_extension_ControlSlider_locationFromTouch(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_locationFromTouch'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->locationFromTouch(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "locationFromTouch",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_locationFromTouch'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setProgressSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setProgressSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setProgressSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProgressSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setProgressSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getMaximumAllowedValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaximumAllowedValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getMinimumAllowedValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinimumAllowedValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getMinimumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinimumValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMinimumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setThumbSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setThumbSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setThumbSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMinimumValue'", NULL);
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
        cobj->setMinimumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMinimumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue'", NULL);
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
        cobj->setMinimumAllowedValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumAllowedValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setValue'", NULL);
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
        cobj->setValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMaximumValue'", NULL);
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
        cobj->setMaximumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMaximumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_needsLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->needsLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "needsLayout",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_needsLayout'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackgroundSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_initWithSprites(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_initWithSprites'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::Sprite* arg1;
        cocos2d::Sprite* arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithSprites(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSprites",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_initWithSprites'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getMaximumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaximumValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMaximumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_isTouchInside(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_isTouchInside'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->isTouchInside(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchInside",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_isTouchInside'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getThumbSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getThumbSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getThumbSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getProgressSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getProgressSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getProgressSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProgressSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getProgressSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackgroundSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue'", NULL);
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
        cobj->setMaximumAllowedValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumAllowedValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlSlider* ret = cocos2d::extension::ControlSlider::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlSlider");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlSlider");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 3)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlSlider* ret = cocos2d::extension::ControlSlider::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlSlider");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlSlider");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlSlider();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlSlider");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlSlider");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlSlider",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlSlider_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlSlider)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlSlider(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlSlider");
    tolua_cclass(tolua_S,"ControlSlider","ControlSlider","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlSlider");
        tolua_function(tolua_S,"locationFromTouch",lua_cocos2dx_extension_ControlSlider_locationFromTouch);
        tolua_function(tolua_S,"setProgressSprite",lua_cocos2dx_extension_ControlSlider_setProgressSprite);
        tolua_function(tolua_S,"getMaximumAllowedValue",lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue);
        tolua_function(tolua_S,"getMinimumAllowedValue",lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue);
        tolua_function(tolua_S,"getMinimumValue",lua_cocos2dx_extension_ControlSlider_getMinimumValue);
        tolua_function(tolua_S,"setThumbSprite",lua_cocos2dx_extension_ControlSlider_setThumbSprite);
        tolua_function(tolua_S,"setMinimumValue",lua_cocos2dx_extension_ControlSlider_setMinimumValue);
        tolua_function(tolua_S,"setMinimumAllowedValue",lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlSlider_setEnabled);
        tolua_function(tolua_S,"setValue",lua_cocos2dx_extension_ControlSlider_setValue);
        tolua_function(tolua_S,"setMaximumValue",lua_cocos2dx_extension_ControlSlider_setMaximumValue);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_ControlSlider_needsLayout);
        tolua_function(tolua_S,"getBackgroundSprite",lua_cocos2dx_extension_ControlSlider_getBackgroundSprite);
        tolua_function(tolua_S,"initWithSprites",lua_cocos2dx_extension_ControlSlider_initWithSprites);
        tolua_function(tolua_S,"getMaximumValue",lua_cocos2dx_extension_ControlSlider_getMaximumValue);
        tolua_function(tolua_S,"isTouchInside",lua_cocos2dx_extension_ControlSlider_isTouchInside);
        tolua_function(tolua_S,"getValue",lua_cocos2dx_extension_ControlSlider_getValue);
        tolua_function(tolua_S,"getThumbSprite",lua_cocos2dx_extension_ControlSlider_getThumbSprite);
        tolua_function(tolua_S,"getProgressSprite",lua_cocos2dx_extension_ControlSlider_getProgressSprite);
        tolua_function(tolua_S,"setBackgroundSprite",lua_cocos2dx_extension_ControlSlider_setBackgroundSprite);
        tolua_function(tolua_S,"setMaximumAllowedValue",lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlSlider_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlSlider_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlSlider).hash_code();
    g_luaType[typeId] = "ControlSlider";
    return 1;
}

int lua_cocos2dx_extension_ControlStepper_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMinusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMinusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setMinusSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinusSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMinusSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getMinusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getMinusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::LabelTTF* ret = cobj->getMinusLabel();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"LabelTTF");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"LabelTTF");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinusLabel",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getMinusLabel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setWraps(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setWraps'", NULL);
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
        cobj->setWraps(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setWraps",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setWraps'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_isContinuous(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_isContinuous'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isContinuous();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isContinuous",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_isContinuous'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getMinusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getMinusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getMinusSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinusSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getMinusSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation'", NULL);
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
        cobj->updateLayoutUsingTouchLocation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateLayoutUsingTouchLocation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setValueWithSendingEvent(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValueWithSendingEvent",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getPlusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getPlusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::LabelTTF* ret = cobj->getPlusLabel();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"LabelTTF");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"LabelTTF");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlusLabel",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getPlusLabel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_stopAutorepeat(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_stopAutorepeat'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stopAutorepeat();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stopAutorepeat",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_stopAutorepeat'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMinimumValue'", NULL);
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
        cobj->setMinimumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMinimumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getPlusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getPlusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getPlusSprite();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Sprite");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Sprite");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlusSprite",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getPlusSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setPlusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setPlusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setPlusSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlusSprite",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setPlusSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMinusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMinusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::LabelTTF* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setMinusLabel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinusLabel",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMinusLabel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setValue'", NULL);
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
        cobj->setValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setStepValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setStepValue'", NULL);
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
        cobj->setStepValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setStepValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setStepValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMaximumValue'", NULL);
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
        cobj->setMaximumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumValue",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMaximumValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_update(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_update'", NULL);
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
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_startAutorepeat(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_startAutorepeat'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->startAutorepeat();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "startAutorepeat",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_startAutorepeat'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::Sprite* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithMinusSpriteAndPlusSprite(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithMinusSpriteAndPlusSprite",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getValue",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setPlusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setPlusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::LabelTTF* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setPlusLabel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlusLabel",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setPlusLabel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Sprite* arg0;
        cocos2d::Sprite* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::ControlStepper* ret = cocos2d::extension::ControlStepper::create(arg0, arg1);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlStepper");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlStepper");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlStepper();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlStepper");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlStepper");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlStepper",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlStepper_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlStepper)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlStepper(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlStepper");
    tolua_cclass(tolua_S,"ControlStepper","ControlStepper","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlStepper");
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_ControlStepper_onTouchEnded);
        tolua_function(tolua_S,"setMinusSprite",lua_cocos2dx_extension_ControlStepper_setMinusSprite);
        tolua_function(tolua_S,"getMinusLabel",lua_cocos2dx_extension_ControlStepper_getMinusLabel);
        tolua_function(tolua_S,"setWraps",lua_cocos2dx_extension_ControlStepper_setWraps);
        tolua_function(tolua_S,"isContinuous",lua_cocos2dx_extension_ControlStepper_isContinuous);
        tolua_function(tolua_S,"getMinusSprite",lua_cocos2dx_extension_ControlStepper_getMinusSprite);
        tolua_function(tolua_S,"updateLayoutUsingTouchLocation",lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation);
        tolua_function(tolua_S,"setValueWithSendingEvent",lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent);
        tolua_function(tolua_S,"getPlusLabel",lua_cocos2dx_extension_ControlStepper_getPlusLabel);
        tolua_function(tolua_S,"stopAutorepeat",lua_cocos2dx_extension_ControlStepper_stopAutorepeat);
        tolua_function(tolua_S,"setMinimumValue",lua_cocos2dx_extension_ControlStepper_setMinimumValue);
        tolua_function(tolua_S,"getPlusSprite",lua_cocos2dx_extension_ControlStepper_getPlusSprite);
        tolua_function(tolua_S,"setPlusSprite",lua_cocos2dx_extension_ControlStepper_setPlusSprite);
        tolua_function(tolua_S,"setMinusLabel",lua_cocos2dx_extension_ControlStepper_setMinusLabel);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ControlStepper_onTouchMoved);
        tolua_function(tolua_S,"setValue",lua_cocos2dx_extension_ControlStepper_setValue);
        tolua_function(tolua_S,"setStepValue",lua_cocos2dx_extension_ControlStepper_setStepValue);
        tolua_function(tolua_S,"setMaximumValue",lua_cocos2dx_extension_ControlStepper_setMaximumValue);
        tolua_function(tolua_S,"update",lua_cocos2dx_extension_ControlStepper_update);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ControlStepper_onTouchBegan);
        tolua_function(tolua_S,"startAutorepeat",lua_cocos2dx_extension_ControlStepper_startAutorepeat);
        tolua_function(tolua_S,"initWithMinusSpriteAndPlusSprite",lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite);
        tolua_function(tolua_S,"getValue",lua_cocos2dx_extension_ControlStepper_getValue);
        tolua_function(tolua_S,"setPlusLabel",lua_cocos2dx_extension_ControlStepper_setPlusLabel);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlStepper_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlStepper_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlStepper).hash_code();
    g_luaType[typeId] = "ControlStepper";
    return 1;
}

int lua_cocos2dx_extension_ControlSwitch_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_setEnabled'", NULL);
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
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_setEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_setOn(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_setOn'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0);

            if (!ok) { ok = true; break; }
            cobj->setOn(arg0);
            return 0;
        }
    }while(0);
    do{
        if (argc == 2) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0);

            if (!ok) { ok = true; break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { ok = true; break; }
            cobj->setOn(arg0, arg1);
            return 0;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setOn",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_setOn'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_onTouchCancelled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchCancelled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchCancelled",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_onTouchCancelled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_isOn(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_isOn'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isOn();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isOn",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_isOn'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 6) {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::LabelTTF* arg4;
            do {
				if (!luaval_is_usertype(tolua_S,6,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg4 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,6,0);
					if (nullptr == arg4){
						LUA_PRECONDITION( arg4, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::LabelTTF* arg5;
            do {
				if (!luaval_is_usertype(tolua_S,7,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg5 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,7,0);
					if (nullptr == arg5){
						LUA_PRECONDITION( arg5, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithMaskSprite(arg0, arg1, arg2, arg3, arg4, arg5);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 4) {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            bool ret = cobj->initWithMaskSprite(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithMaskSprite",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_hasMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_hasMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->hasMoved();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hasMoved",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_hasMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_locationFromTouch(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_locationFromTouch'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->locationFromTouch(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "locationFromTouch",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_locationFromTouch'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 4)
        {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlSwitch* ret = cocos2d::extension::ControlSwitch::create(arg0, arg1, arg2, arg3);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlSwitch");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlSwitch");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 6)
        {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::LabelTTF* arg4;
            do {
				if (!luaval_is_usertype(tolua_S,6,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg4 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,6,0);
					if (nullptr == arg4){
						LUA_PRECONDITION( arg4, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::LabelTTF* arg5;
            do {
				if (!luaval_is_usertype(tolua_S,7,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg5 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,7,0);
					if (nullptr == arg5){
						LUA_PRECONDITION( arg5, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ControlSwitch* ret = cocos2d::extension::ControlSwitch::create(arg0, arg1, arg2, arg3, arg4, arg5);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ControlSwitch");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ControlSwitch");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlSwitch();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlSwitch");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlSwitch");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlSwitch",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ControlSwitch_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlSwitch)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlSwitch(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlSwitch");
    tolua_cclass(tolua_S,"ControlSwitch","ControlSwitch","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlSwitch");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlSwitch_setEnabled);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_ControlSwitch_onTouchEnded);
        tolua_function(tolua_S,"setOn",lua_cocos2dx_extension_ControlSwitch_setOn);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ControlSwitch_onTouchMoved);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_ControlSwitch_onTouchCancelled);
        tolua_function(tolua_S,"isOn",lua_cocos2dx_extension_ControlSwitch_isOn);
        tolua_function(tolua_S,"initWithMaskSprite",lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite);
        tolua_function(tolua_S,"hasMoved",lua_cocos2dx_extension_ControlSwitch_hasMoved);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ControlSwitch_onTouchBegan);
        tolua_function(tolua_S,"locationFromTouch",lua_cocos2dx_extension_ControlSwitch_locationFromTouch);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlSwitch_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlSwitch_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ControlSwitch).hash_code();
    g_luaType[typeId] = "ControlSwitch";
    return 1;
}

int lua_cocos2dx_extension_ScrollView_isClippingToBounds(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isClippingToBounds'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isClippingToBounds();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isClippingToBounds",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isClippingToBounds'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContainer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContainer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setContainer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContainer",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContainer'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Point arg0;
        double arg1;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setContentOffsetInDuration(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContentOffsetInDuration",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setZoomScaleInDuration(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setZoomScaleInDuration",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_addChild(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_addChild'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { ok = true; break; }
            cobj->addChild(arg0, arg1);
            return 0;
        }
    }while(0);
    do{
        if (argc == 3) {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { ok = true; break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);

            if (!ok) { ok = true; break; }
            cobj->addChild(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    do{
        if (argc == 1) {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cobj->addChild(arg0);
            return 0;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addChild",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_addChild'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_getContainer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getContainer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getContainer();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Node");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Node");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContainer",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getContainer'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_getDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getDirection();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDirection",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getDirection'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_getZoomScale(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getZoomScale'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getZoomScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getZoomScale",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getZoomScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_updateInset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_updateInset'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateInset();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateInset",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_updateInset'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_initWithViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_initWithViewSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithViewSize(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2) 
    {
        cocos2d::Size arg0;
        cocos2d::Node* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Node*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithViewSize(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithViewSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_initWithViewSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_pause'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Object* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->pause(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pause",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_pause'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ScrollView::Direction arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setDirection(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDirection",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setDirection'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setBounceable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setBounceable'", NULL);
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
        cobj->setBounceable(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBounceable",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setBounceable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContentOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContentOffset'", NULL);
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
        cobj->setContentOffset(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        cocos2d::Point arg0;
        bool arg1;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setContentOffset(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContentOffset",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContentOffset'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_isDragging(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isDragging'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isDragging();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isDragging",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isDragging'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_isBounceable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isBounceable'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBounceable();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBounceable",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isBounceable'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_getContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getContentSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContentSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getContentSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setTouchEnabled'", NULL);
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
        cobj->setTouchEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTouchEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setTouchEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_getContentOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getContentOffset'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getContentOffset();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContentOffset",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getContentOffset'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_resume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Object* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->resume(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resume",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_resume'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setClippingToBounds(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setClippingToBounds'", NULL);
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
        cobj->setClippingToBounds(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setClippingToBounds",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setClippingToBounds'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setViewSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setViewSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setViewSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setViewSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchCancelled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchCancelled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchCancelled",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchCancelled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_getViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getViewSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getViewSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getViewSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getViewSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_maxContainerOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_maxContainerOffset'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->maxContainerOffset();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "maxContainerOffset",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_maxContainerOffset'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setContentSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContentSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContentSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_isTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isTouchMoved();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchMoved",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_isNodeVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isNodeVisible'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->isNodeVisible(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isNodeVisible",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isNodeVisible'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_minContainerOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_minContainerOffset'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->minContainerOffset();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "minContainerOffset",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_minContainerOffset'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_setZoomScale(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setZoomScale'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0);

            if (!ok) { ok = true; break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { ok = true; break; }
            cobj->setZoomScale(arg0, arg1);
            return 0;
        }
    }while(0);
    do{
        if (argc == 1) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0);

            if (!ok) { ok = true; break; }
            cobj->setZoomScale(arg0);
            return 0;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setZoomScale",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setZoomScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::ScrollView* ret = cocos2d::extension::ScrollView::create();
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ScrollView");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ScrollView");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 1)
        {
            cocos2d::Size arg0;
            ok &= luaval_to_size(tolua_S, 2, &arg0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ScrollView* ret = cocos2d::extension::ScrollView::create(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ScrollView");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ScrollView");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 2)
        {
            cocos2d::Size arg0;
            ok &= luaval_to_size(tolua_S, 2, &arg0);
            if (!ok) { ok = true; break; }
            cocos2d::Node* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Node*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocos2d::extension::ScrollView* ret = cocos2d::extension::ScrollView::create(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ScrollView");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ScrollView");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ScrollView();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ScrollView");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ScrollView");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ScrollView",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ScrollView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ScrollView)");
    return 0;
}

int lua_register_cocos2dx_extension_ScrollView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ScrollView");
    tolua_cclass(tolua_S,"ScrollView","ScrollView","Layer",NULL);

    tolua_beginmodule(tolua_S,"ScrollView");
        tolua_function(tolua_S,"isClippingToBounds",lua_cocos2dx_extension_ScrollView_isClippingToBounds);
        tolua_function(tolua_S,"setContainer",lua_cocos2dx_extension_ScrollView_setContainer);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_ScrollView_onTouchEnded);
        tolua_function(tolua_S,"setContentOffsetInDuration",lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration);
        tolua_function(tolua_S,"setZoomScaleInDuration",lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration);
        tolua_function(tolua_S,"addChild",lua_cocos2dx_extension_ScrollView_addChild);
        tolua_function(tolua_S,"getContainer",lua_cocos2dx_extension_ScrollView_getContainer);
        tolua_function(tolua_S,"getDirection",lua_cocos2dx_extension_ScrollView_getDirection);
        tolua_function(tolua_S,"getZoomScale",lua_cocos2dx_extension_ScrollView_getZoomScale);
        tolua_function(tolua_S,"updateInset",lua_cocos2dx_extension_ScrollView_updateInset);
        tolua_function(tolua_S,"initWithViewSize",lua_cocos2dx_extension_ScrollView_initWithViewSize);
        tolua_function(tolua_S,"pause",lua_cocos2dx_extension_ScrollView_pause);
        tolua_function(tolua_S,"setDirection",lua_cocos2dx_extension_ScrollView_setDirection);
        tolua_function(tolua_S,"setBounceable",lua_cocos2dx_extension_ScrollView_setBounceable);
        tolua_function(tolua_S,"setContentOffset",lua_cocos2dx_extension_ScrollView_setContentOffset);
        tolua_function(tolua_S,"isDragging",lua_cocos2dx_extension_ScrollView_isDragging);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ScrollView_init);
        tolua_function(tolua_S,"isBounceable",lua_cocos2dx_extension_ScrollView_isBounceable);
        tolua_function(tolua_S,"getContentSize",lua_cocos2dx_extension_ScrollView_getContentSize);
        tolua_function(tolua_S,"setTouchEnabled",lua_cocos2dx_extension_ScrollView_setTouchEnabled);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ScrollView_onTouchMoved);
        tolua_function(tolua_S,"getContentOffset",lua_cocos2dx_extension_ScrollView_getContentOffset);
        tolua_function(tolua_S,"resume",lua_cocos2dx_extension_ScrollView_resume);
        tolua_function(tolua_S,"setClippingToBounds",lua_cocos2dx_extension_ScrollView_setClippingToBounds);
        tolua_function(tolua_S,"setViewSize",lua_cocos2dx_extension_ScrollView_setViewSize);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_ScrollView_onTouchCancelled);
        tolua_function(tolua_S,"getViewSize",lua_cocos2dx_extension_ScrollView_getViewSize);
        tolua_function(tolua_S,"maxContainerOffset",lua_cocos2dx_extension_ScrollView_maxContainerOffset);
        tolua_function(tolua_S,"setContentSize",lua_cocos2dx_extension_ScrollView_setContentSize);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ScrollView_onTouchBegan);
        tolua_function(tolua_S,"isTouchMoved",lua_cocos2dx_extension_ScrollView_isTouchMoved);
        tolua_function(tolua_S,"isNodeVisible",lua_cocos2dx_extension_ScrollView_isNodeVisible);
        tolua_function(tolua_S,"minContainerOffset",lua_cocos2dx_extension_ScrollView_minContainerOffset);
        tolua_function(tolua_S,"setZoomScale",lua_cocos2dx_extension_ScrollView_setZoomScale);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ScrollView_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ScrollView_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::ScrollView).hash_code();
    g_luaType[typeId] = "ScrollView";
    return 1;
}

int lua_cocos2dx_extension_TableViewCell_reset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableViewCell* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableViewCell",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableViewCell*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableViewCell_reset'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->reset();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "reset",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableViewCell_reset'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableViewCell_setIdx(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableViewCell* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableViewCell",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableViewCell*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableViewCell_setIdx'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setIdx(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setIdx",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableViewCell_setIdx'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableViewCell_setObjectID(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableViewCell* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableViewCell",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableViewCell*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableViewCell_setObjectID'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setObjectID(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setObjectID",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableViewCell_setObjectID'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableViewCell_getObjectID(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableViewCell* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableViewCell",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableViewCell*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableViewCell_getObjectID'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        unsigned int ret = cobj->getObjectID();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getObjectID",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableViewCell_getObjectID'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableViewCell_getIdx(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableViewCell* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableViewCell",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableViewCell*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableViewCell_getIdx'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        unsigned int ret = cobj->getIdx();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIdx",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableViewCell_getIdx'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableViewCell_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableViewCell* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::TableViewCell();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"TableViewCell");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"TableViewCell");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TableViewCell",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableViewCell_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_TableViewCell_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TableViewCell)");
    return 0;
}

int lua_register_cocos2dx_extension_TableViewCell(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"TableViewCell");
    tolua_cclass(tolua_S,"TableViewCell","TableViewCell","Node",NULL);

    tolua_beginmodule(tolua_S,"TableViewCell");
        tolua_function(tolua_S,"reset",lua_cocos2dx_extension_TableViewCell_reset);
        tolua_function(tolua_S,"setIdx",lua_cocos2dx_extension_TableViewCell_setIdx);
        tolua_function(tolua_S,"setObjectID",lua_cocos2dx_extension_TableViewCell_setObjectID);
        tolua_function(tolua_S,"getObjectID",lua_cocos2dx_extension_TableViewCell_getObjectID);
        tolua_function(tolua_S,"getIdx",lua_cocos2dx_extension_TableViewCell_getIdx);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_TableViewCell_constructor);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::TableViewCell).hash_code();
    g_luaType[typeId] = "TableViewCell";
    return 1;
}

int lua_cocos2dx_extension_TableView_updateCellAtIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_updateCellAtIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->updateCellAtIndex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateCellAtIndex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_updateCellAtIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_onTouchEnded'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_setVerticalFillOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_setVerticalFillOrder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::TableView::VerticalFillOrder arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setVerticalFillOrder(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVerticalFillOrder",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_setVerticalFillOrder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_scrollViewDidZoom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_scrollViewDidZoom'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ScrollView* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ScrollView",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->scrollViewDidZoom(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollViewDidZoom",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_scrollViewDidZoom'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView__updateContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView__updateContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->_updateContentSize();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "_updateContentSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView__updateContentSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_getVerticalFillOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_getVerticalFillOrder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getVerticalFillOrder();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVerticalFillOrder",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_getVerticalFillOrder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_removeCellAtIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_removeCellAtIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeCellAtIndex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeCellAtIndex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_removeCellAtIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_initWithViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_initWithViewSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithViewSize(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2) 
    {
        cocos2d::Size arg0;
        cocos2d::Node* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Node*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithViewSize(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithViewSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_initWithViewSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_scrollViewDidScroll(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_scrollViewDidScroll'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ScrollView* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ScrollView",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->scrollViewDidScroll(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollViewDidScroll",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_scrollViewDidScroll'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_reloadData(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_reloadData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->reloadData();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "reloadData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_reloadData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_onTouchMoved'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_onTouchCancelled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchCancelled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchCancelled",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_onTouchCancelled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_onTouchBegan'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_insertCellAtIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_insertCellAtIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->insertCellAtIndex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "insertCellAtIndex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_insertCellAtIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_cellAtIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_cellAtIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::extension::TableViewCell* ret = cobj->cellAtIndex(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"TableViewCell");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"TableViewCell");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "cellAtIndex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_cellAtIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_dequeueCell(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TableView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::TableView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TableView_dequeueCell'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::TableViewCell* ret = cobj->dequeueCell();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"TableViewCell");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"TableViewCell");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "dequeueCell",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_dequeueCell'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TableView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::TableView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::TableView();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"TableView");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"TableView");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TableView",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TableView_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_TableView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TableView)");
    return 0;
}

int lua_register_cocos2dx_extension_TableView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"TableView");
    tolua_cclass(tolua_S,"TableView","TableView","ScrollView",NULL);

    tolua_beginmodule(tolua_S,"TableView");
        tolua_function(tolua_S,"updateCellAtIndex",lua_cocos2dx_extension_TableView_updateCellAtIndex);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_TableView_onTouchEnded);
        tolua_function(tolua_S,"setVerticalFillOrder",lua_cocos2dx_extension_TableView_setVerticalFillOrder);
        tolua_function(tolua_S,"scrollViewDidZoom",lua_cocos2dx_extension_TableView_scrollViewDidZoom);
        tolua_function(tolua_S,"_updateContentSize",lua_cocos2dx_extension_TableView__updateContentSize);
        tolua_function(tolua_S,"getVerticalFillOrder",lua_cocos2dx_extension_TableView_getVerticalFillOrder);
        tolua_function(tolua_S,"removeCellAtIndex",lua_cocos2dx_extension_TableView_removeCellAtIndex);
        tolua_function(tolua_S,"initWithViewSize",lua_cocos2dx_extension_TableView_initWithViewSize);
        tolua_function(tolua_S,"scrollViewDidScroll",lua_cocos2dx_extension_TableView_scrollViewDidScroll);
        tolua_function(tolua_S,"reloadData",lua_cocos2dx_extension_TableView_reloadData);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_TableView_onTouchMoved);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_TableView_onTouchCancelled);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_TableView_onTouchBegan);
        tolua_function(tolua_S,"insertCellAtIndex",lua_cocos2dx_extension_TableView_insertCellAtIndex);
        tolua_function(tolua_S,"cellAtIndex",lua_cocos2dx_extension_TableView_cellAtIndex);
        tolua_function(tolua_S,"dequeueCell",lua_cocos2dx_extension_TableView_dequeueCell);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_TableView_constructor);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::TableView).hash_code();
    g_luaType[typeId] = "TableView";
    return 1;
}

int lua_cocos2dx_extension_EditBox_setAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setAnchorPoint'", NULL);
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
        cobj->setAnchorPoint(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnchorPoint",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setAnchorPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_getText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getText();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getText",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getText'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setPlaceholderFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFontName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_getPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getPlaceHolder();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlaceHolder",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'", NULL);
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
        cobj->setPlaceholderFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFontSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setInputMode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setInputMode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::InputMode arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setInputMode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInputMode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setInputMode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPlaceholderFontColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFontColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setFontColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFont(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setPlaceholderFont(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFont",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontSize'", NULL);
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
        cobj->setFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithSizeAndBackgroundSprite(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSizeAndBackgroundSprite",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setPlaceHolder(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceHolder",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPosition'", NULL);
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
        cobj->setPosition(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPosition",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPosition'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setReturnType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setReturnType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::KeyboardReturnType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setReturnType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setReturnType",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setReturnType'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setInputFlag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setInputFlag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::InputFlag arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setInputFlag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInputFlag",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setInputFlag'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_getMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getMaxLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getMaxLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaxLength",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getMaxLength'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setText",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setText'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setMaxLength'", NULL);
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
        cobj->setMaxLength(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaxLength",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setMaxLength'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setContentSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setContentSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setContentSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setFont(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFont'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setFont(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFont",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFont'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_setVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setVisible'", NULL);
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
        cobj->setVisible(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVisible",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setVisible'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"EditBox");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"EditBox");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        cocos2d::extension::Scale9Sprite* arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"EditBox");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"EditBox");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        cocos2d::extension::Scale9Sprite* arg2;
        cocos2d::extension::Scale9Sprite* arg3;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,5,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"EditBox");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"EditBox");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::EditBox();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"EditBox");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"EditBox");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "EditBox",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_EditBox_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EditBox)");
    return 0;
}

int lua_register_cocos2dx_extension_EditBox(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"EditBox");
    tolua_cclass(tolua_S,"EditBox","EditBox","ControlButton",NULL);

    tolua_beginmodule(tolua_S,"EditBox");
        tolua_function(tolua_S,"setAnchorPoint",lua_cocos2dx_extension_EditBox_setAnchorPoint);
        tolua_function(tolua_S,"getText",lua_cocos2dx_extension_EditBox_getText);
        tolua_function(tolua_S,"setPlaceholderFontName",lua_cocos2dx_extension_EditBox_setPlaceholderFontName);
        tolua_function(tolua_S,"getPlaceHolder",lua_cocos2dx_extension_EditBox_getPlaceHolder);
        tolua_function(tolua_S,"setFontName",lua_cocos2dx_extension_EditBox_setFontName);
        tolua_function(tolua_S,"setPlaceholderFontSize",lua_cocos2dx_extension_EditBox_setPlaceholderFontSize);
        tolua_function(tolua_S,"setInputMode",lua_cocos2dx_extension_EditBox_setInputMode);
        tolua_function(tolua_S,"setPlaceholderFontColor",lua_cocos2dx_extension_EditBox_setPlaceholderFontColor);
        tolua_function(tolua_S,"setFontColor",lua_cocos2dx_extension_EditBox_setFontColor);
        tolua_function(tolua_S,"setPlaceholderFont",lua_cocos2dx_extension_EditBox_setPlaceholderFont);
        tolua_function(tolua_S,"setFontSize",lua_cocos2dx_extension_EditBox_setFontSize);
        tolua_function(tolua_S,"initWithSizeAndBackgroundSprite",lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite);
        tolua_function(tolua_S,"setPlaceHolder",lua_cocos2dx_extension_EditBox_setPlaceHolder);
        tolua_function(tolua_S,"setPosition",lua_cocos2dx_extension_EditBox_setPosition);
        tolua_function(tolua_S,"setReturnType",lua_cocos2dx_extension_EditBox_setReturnType);
        tolua_function(tolua_S,"setInputFlag",lua_cocos2dx_extension_EditBox_setInputFlag);
        tolua_function(tolua_S,"getMaxLength",lua_cocos2dx_extension_EditBox_getMaxLength);
        tolua_function(tolua_S,"setText",lua_cocos2dx_extension_EditBox_setText);
        tolua_function(tolua_S,"setMaxLength",lua_cocos2dx_extension_EditBox_setMaxLength);
        tolua_function(tolua_S,"setContentSize",lua_cocos2dx_extension_EditBox_setContentSize);
        tolua_function(tolua_S,"setFont",lua_cocos2dx_extension_EditBox_setFont);
        tolua_function(tolua_S,"setVisible",lua_cocos2dx_extension_EditBox_setVisible);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_EditBox_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_EditBox_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocos2d::extension::EditBox).hash_code();
    g_luaType[typeId] = "EditBox";
    return 1;
}

int lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        Node* arg0;
        Node* arg1;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        if(!ok)
            return 0;
        cobj->moveAnimationsFromNode(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "moveAnimationsFromNode",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId'", NULL);
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
        cobj->setAutoPlaySequenceId(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAutoPlaySequenceId",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getDocumentCallbackNames();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentCallbackNames",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequenceProperty* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequenceProperty",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequenceProperty*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        Object* ret = cobj->actionForSoundChannel(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR Object*;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "actionForSoundChannel",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setBaseValue(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setBaseValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        Object* arg0;
        Node* arg1;
        const char* arg2;
        #pragma warning NO CONVERSION TO NATIVE FOR Object*;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setBaseValue(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBaseValue",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setBaseValue'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getDocumentOutletNodes();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentOutletNodes",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        Node* arg0;
        Dictionary* arg1;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        ok &= luaval_to_dictionary(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cobj->addNode(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addNode",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getLastCompletedSequenceName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLastCompletedSequenceName",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setRootNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Node* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        if(!ok)
            return 0;
        cobj->setRootNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRootNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        double arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->runAnimationsForSequenceNamedTweenDuration(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "runAnimationsForSequenceNamedTweenDuration",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentOutletName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentOutletName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getSequences(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequences'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getSequences();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSequences",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequences'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getRootContainerSize();
        #pragma warning NO CONVERSION FROM NATIVE FOR const Size;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRootContainerSize",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDocumentControllerName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDocumentControllerName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Node* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getContainerSize(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR const Size;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContainerSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getContainerSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequenceProperty* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequenceProperty",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequenceProperty*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        Object* ret = cobj->actionForCallbackChannel(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR Object*;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "actionForCallbackChannel",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getDocumentOutletNames();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentOutletNames",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackControlEvents",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_init(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getKeyframeCallbacks();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getKeyframeCallbacks",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getDocumentCallbackControlEvents();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentCallbackControlEvents",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR const Size;
        if(!ok)
            return 0;
        cobj->setRootContainerSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRootContainerSize",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->runAnimationsForSequenceIdTweenDuration(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "runAnimationsForSequenceIdTweenDuration",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getRunningSequenceName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRunningSequenceName",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getAutoPlaySequenceId();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAutoPlaySequenceId",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getRootNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Node* ret = cobj->getRootNode();
        #pragma warning NO CONVERSION FROM NATIVE FOR Node*;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRootNode",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Node* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        if(!ok)
            return 0;
        cobj->addDocumentOutletNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentOutletNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        float ret = cobj->getSequenceDuration(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSequenceDuration",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Node* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        if(!ok)
            return 0;
        cobj->addDocumentCallbackNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->runAnimationsForSequenceNamed(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "runAnimationsForSequenceNamed",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getSequenceId(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceId'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        int ret = cobj->getSequenceId(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSequenceId",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceId'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getDocumentCallbackNodes();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentCallbackNodes",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setSequences(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setSequences'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Array* arg0;
        ok &= luaval_to_array(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setSequences(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSequences",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setSequences'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_debug(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_debug'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->debug();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "debug",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_debug'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getDocumentControllerName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentControllerName",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocosbuilder::CCBAnimationManager();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBAnimationManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"CCBAnimationManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "CCBAnimationManager",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_CCBAnimationManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CCBAnimationManager)");
    return 0;
}

int lua_register_cocos2dx_extension_CCBAnimationManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"CCBAnimationManager");
    tolua_cclass(tolua_S,"CCBAnimationManager","CCBAnimationManager","",NULL);

    tolua_beginmodule(tolua_S,"CCBAnimationManager");
        tolua_function(tolua_S,"moveAnimationsFromNode",lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode);
        tolua_function(tolua_S,"setAutoPlaySequenceId",lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId);
        tolua_function(tolua_S,"getDocumentCallbackNames",lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames);
        tolua_function(tolua_S,"actionForSoundChannel",lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel);
        tolua_function(tolua_S,"setBaseValue",lua_cocos2dx_extension_CCBAnimationManager_setBaseValue);
        tolua_function(tolua_S,"getDocumentOutletNodes",lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes);
        tolua_function(tolua_S,"addNode",lua_cocos2dx_extension_CCBAnimationManager_addNode);
        tolua_function(tolua_S,"getLastCompletedSequenceName",lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName);
        tolua_function(tolua_S,"setRootNode",lua_cocos2dx_extension_CCBAnimationManager_setRootNode);
        tolua_function(tolua_S,"runAnimationsForSequenceNamedTweenDuration",lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration);
        tolua_function(tolua_S,"addDocumentOutletName",lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName);
        tolua_function(tolua_S,"getSequences",lua_cocos2dx_extension_CCBAnimationManager_getSequences);
        tolua_function(tolua_S,"getRootContainerSize",lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize);
        tolua_function(tolua_S,"setDocumentControllerName",lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName);
        tolua_function(tolua_S,"getContainerSize",lua_cocos2dx_extension_CCBAnimationManager_getContainerSize);
        tolua_function(tolua_S,"actionForCallbackChannel",lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel);
        tolua_function(tolua_S,"getDocumentOutletNames",lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames);
        tolua_function(tolua_S,"addDocumentCallbackControlEvents",lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_CCBAnimationManager_init);
        tolua_function(tolua_S,"getKeyframeCallbacks",lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks);
        tolua_function(tolua_S,"getDocumentCallbackControlEvents",lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents);
        tolua_function(tolua_S,"setRootContainerSize",lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize);
        tolua_function(tolua_S,"runAnimationsForSequenceIdTweenDuration",lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration);
        tolua_function(tolua_S,"getRunningSequenceName",lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName);
        tolua_function(tolua_S,"getAutoPlaySequenceId",lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId);
        tolua_function(tolua_S,"addDocumentCallbackName",lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName);
        tolua_function(tolua_S,"getRootNode",lua_cocos2dx_extension_CCBAnimationManager_getRootNode);
        tolua_function(tolua_S,"addDocumentOutletNode",lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode);
        tolua_function(tolua_S,"getSequenceDuration",lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration);
        tolua_function(tolua_S,"addDocumentCallbackNode",lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode);
        tolua_function(tolua_S,"runAnimationsForSequenceNamed",lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed);
        tolua_function(tolua_S,"getSequenceId",lua_cocos2dx_extension_CCBAnimationManager_getSequenceId);
        tolua_function(tolua_S,"getDocumentCallbackNodes",lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes);
        tolua_function(tolua_S,"setSequences",lua_cocos2dx_extension_CCBAnimationManager_setSequences);
        tolua_function(tolua_S,"debug",lua_cocos2dx_extension_CCBAnimationManager_debug);
        tolua_function(tolua_S,"getDocumentControllerName",lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_CCBAnimationManager_constructor);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocosbuilder::CCBAnimationManager).hash_code();
    g_luaType[typeId] = "CCBAnimationManager";
    return 1;
}

int lua_cocos2dx_extension_CCBReader_addOwnerOutletName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addOwnerOutletName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addOwnerOutletName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getOwnerCallbackNames();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerCallbackNames",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackControlEvents",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_setCCBRootPath(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_setCCBRootPath'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setCCBRootPath(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCCBRootPath",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_setCCBRootPath'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_addOwnerOutletNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Node* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR Node*;
        if(!ok)
            return 0;
        cobj->addOwnerOutletNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addOwnerOutletNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getOwnerCallbackNodes();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerCallbackNodes",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequence* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequence",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequence*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->readSoundKeyframesForSeq(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "readSoundKeyframesForSeq",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getCCBRootPath(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getCCBRootPath'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getCCBRootPath();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCCBRootPath",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getCCBRootPath'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getOwnerCallbackControlEvents();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerCallbackControlEvents",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getOwnerOutletNodes();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerOutletNodes",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_readUTF8(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_readUTF8'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->readUTF8();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "readUTF8",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_readUTF8'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->addOwnerCallbackControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addOwnerCallbackControlEvents",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerOutletNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getOwnerOutletNames();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerOutletNames",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNames'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_setAnimationManager(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_setAnimationManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBAnimationManager* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBAnimationManager",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimationManager(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationManager",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_setAnimationManager'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequence* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequence",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequence*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->readCallbackKeyframesForSeq(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "readCallbackKeyframesForSeq",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getAnimationManagersForNodes();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationManagersForNodes",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getNodesWithAnimationManagers();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodesWithAnimationManagers",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_getAnimationManager(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getAnimationManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocosbuilder::CCBAnimationManager* ret = cobj->getAnimationManager();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"CCBAnimationManager");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"CCBAnimationManager");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationManager",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getAnimationManager'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_setResolutionScale(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocosbuilder::CCBReader::setResolutionScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "setResolutionScale",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_setResolutionScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocosbuilder::CCBReader* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"CCBReader",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cobj = new cocosbuilder::CCBReader(arg0);
            if (NULL != dynamic_cast<cocos2d::Object *>(cobj) ) 
            {
                cobj->autorelease();
                int ID = (cobj) ? (int)cobj->_ID : -1;
                int* luaID = (cobj) ? &cobj->_luaID : NULL;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    do{
        if (argc == 1) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cobj = new cocosbuilder::CCBReader(arg0);
            if (NULL != dynamic_cast<cocos2d::Object *>(cobj) ) 
            {
                cobj->autorelease();
                int ID = (cobj) ? (int)cobj->_ID : -1;
                int* luaID = (cobj) ? &cobj->_luaID : NULL;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    do{
        if (argc == 2) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocosbuilder::CCBMemberVariableAssigner* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"CCBMemberVariableAssigner",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocosbuilder::CCBMemberVariableAssigner*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cobj = new cocosbuilder::CCBReader(arg0, arg1);
            if (NULL != dynamic_cast<cocos2d::Object *>(cobj) ) 
            {
                cobj->autorelease();
                int ID = (cobj) ? (int)cobj->_ID : -1;
                int* luaID = (cobj) ? &cobj->_luaID : NULL;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    do{
        if (argc == 3) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocosbuilder::CCBMemberVariableAssigner* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"CCBMemberVariableAssigner",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocosbuilder::CCBMemberVariableAssigner*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocosbuilder::CCBSelectorResolver* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"CCBSelectorResolver",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocosbuilder::CCBSelectorResolver*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cobj = new cocosbuilder::CCBReader(arg0, arg1, arg2);
            if (NULL != dynamic_cast<cocos2d::Object *>(cobj) ) 
            {
                cobj->autorelease();
                int ID = (cobj) ? (int)cobj->_ID : -1;
                int* luaID = (cobj) ? &cobj->_luaID : NULL;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    do{
        if (argc == 4) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocosbuilder::CCBMemberVariableAssigner* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"CCBMemberVariableAssigner",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocosbuilder::CCBMemberVariableAssigner*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocosbuilder::CCBSelectorResolver* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"CCBSelectorResolver",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocosbuilder::CCBSelectorResolver*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cocosbuilder::NodeLoaderListener* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"NodeLoaderListener",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocosbuilder::NodeLoaderListener*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            cobj = new cocosbuilder::CCBReader(arg0, arg1, arg2, arg3);
            if (NULL != dynamic_cast<cocos2d::Object *>(cobj) ) 
            {
                cobj->autorelease();
                int ID = (cobj) ? (int)cobj->_ID : -1;
                int* luaID = (cobj) ? &cobj->_luaID : NULL;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    do{
        if (argc == 0) {
            cobj = new cocosbuilder::CCBReader();
            if (NULL != dynamic_cast<cocos2d::Object *>(cobj) ) 
            {
                cobj->autorelease();
                int ID = (cobj) ? (int)cobj->_ID : -1;
                int* luaID = (cobj) ? &cobj->_luaID : NULL;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "CCBReader",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_CCBReader_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CCBReader)");
    return 0;
}

int lua_register_cocos2dx_extension_CCBReader(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"CCBReader");
    tolua_cclass(tolua_S,"CCBReader","CCBReader","",NULL);

    tolua_beginmodule(tolua_S,"CCBReader");
        tolua_function(tolua_S,"addOwnerOutletName",lua_cocos2dx_extension_CCBReader_addOwnerOutletName);
        tolua_function(tolua_S,"getOwnerCallbackNames",lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames);
        tolua_function(tolua_S,"addDocumentCallbackControlEvents",lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents);
        tolua_function(tolua_S,"setCCBRootPath",lua_cocos2dx_extension_CCBReader_setCCBRootPath);
        tolua_function(tolua_S,"addOwnerOutletNode",lua_cocos2dx_extension_CCBReader_addOwnerOutletNode);
        tolua_function(tolua_S,"getOwnerCallbackNodes",lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes);
        tolua_function(tolua_S,"readSoundKeyframesForSeq",lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq);
        tolua_function(tolua_S,"getCCBRootPath",lua_cocos2dx_extension_CCBReader_getCCBRootPath);
        tolua_function(tolua_S,"getOwnerCallbackControlEvents",lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents);
        tolua_function(tolua_S,"getOwnerOutletNodes",lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes);
        tolua_function(tolua_S,"readUTF8",lua_cocos2dx_extension_CCBReader_readUTF8);
        tolua_function(tolua_S,"addOwnerCallbackControlEvents",lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents);
        tolua_function(tolua_S,"getOwnerOutletNames",lua_cocos2dx_extension_CCBReader_getOwnerOutletNames);
        tolua_function(tolua_S,"setActionManager",lua_cocos2dx_extension_CCBReader_setAnimationManager);
        tolua_function(tolua_S,"readCallbackKeyframesForSeq",lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq);
        tolua_function(tolua_S,"getAnimationManagersForNodes",lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes);
        tolua_function(tolua_S,"getNodesWithAnimationManagers",lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers);
        tolua_function(tolua_S,"getActionManager",lua_cocos2dx_extension_CCBReader_getAnimationManager);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_CCBReader_constructor);
        tolua_function(tolua_S,"setResolutionScale", lua_cocos2dx_extension_CCBReader_setResolutionScale);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocosbuilder::CCBReader).hash_code();
    g_luaType[typeId] = "CCBReader";
    return 1;
}

int lua_cocos2dx_extension_BaseData_getColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BaseData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BaseData_getColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Color4B ret = cobj->getColor();
        color4b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BaseData_getColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BaseData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BaseData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BaseData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BaseData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BaseData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BaseData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BaseData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BaseData_subtract(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BaseData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BaseData_subtract'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocostudio::BaseData* arg0;
        cocostudio::BaseData* arg1;
        bool arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BaseData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BaseData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"BaseData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::BaseData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->subtract(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "subtract",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BaseData_subtract'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BaseData_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BaseData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BaseData_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4B arg0;
        ok &= luaval_to_color4b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BaseData_setColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BaseData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::BaseData* ret = cocostudio::BaseData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"BaseData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"BaseData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BaseData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BaseData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::BaseData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"BaseData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"BaseData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "BaseData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BaseData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_BaseData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BaseData)");
    return 0;
}

int lua_register_cocos2dx_extension_BaseData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BaseData");
    tolua_cclass(tolua_S,"BaseData","BaseData","",NULL);

    tolua_beginmodule(tolua_S,"BaseData");
        tolua_function(tolua_S,"getColor",lua_cocos2dx_extension_BaseData_getColor);
        tolua_function(tolua_S,"copy",lua_cocos2dx_extension_BaseData_copy);
        tolua_function(tolua_S,"subtract",lua_cocos2dx_extension_BaseData_subtract);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_extension_BaseData_setColor);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_BaseData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_BaseData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::BaseData).hash_code();
    g_luaType[typeId] = "BaseData";
    return 1;
}

int lua_cocos2dx_extension_DisplayData_changeDisplayToTexture(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        const char* ret = cocostudio::DisplayData::changeDisplayToTexture(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "changeDisplayToTexture",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_DisplayData_changeDisplayToTexture'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_DisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::DisplayData* ret = cocostudio::DisplayData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"DisplayData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"DisplayData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_DisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_DisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::DisplayData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"DisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"DisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "DisplayData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_DisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_DisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DisplayData)");
    return 0;
}

int lua_register_cocos2dx_extension_DisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DisplayData");
    tolua_cclass(tolua_S,"DisplayData","DisplayData","",NULL);

    tolua_beginmodule(tolua_S,"DisplayData");
        tolua_function(tolua_S,"changeDisplayToTexture", lua_cocos2dx_extension_DisplayData_changeDisplayToTexture);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_DisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::DisplayData).hash_code();
    g_luaType[typeId] = "DisplayData";
    return 1;
}

int lua_cocos2dx_extension_SpriteDisplayData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SpriteDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SpriteDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::SpriteDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_SpriteDisplayData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::SpriteDisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteDisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::SpriteDisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_SpriteDisplayData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_SpriteDisplayData_setParam(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SpriteDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SpriteDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::SpriteDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_SpriteDisplayData_setParam'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setParam(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParam",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_SpriteDisplayData_setParam'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_SpriteDisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SpriteDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::SpriteDisplayData* ret = cocostudio::SpriteDisplayData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"SpriteDisplayData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"SpriteDisplayData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_SpriteDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_SpriteDisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SpriteDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::SpriteDisplayData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"SpriteDisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"SpriteDisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "SpriteDisplayData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_SpriteDisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_SpriteDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SpriteDisplayData)");
    return 0;
}

int lua_register_cocos2dx_extension_SpriteDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SpriteDisplayData");
    tolua_cclass(tolua_S,"SpriteDisplayData","SpriteDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"SpriteDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_extension_SpriteDisplayData_copy);
        tolua_function(tolua_S,"setParam",lua_cocos2dx_extension_SpriteDisplayData_setParam);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_SpriteDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_SpriteDisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::SpriteDisplayData).hash_code();
    g_luaType[typeId] = "SpriteDisplayData";
    return 1;
}

int lua_cocos2dx_extension_ArmatureDisplayData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDisplayData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureDisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ArmatureDisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ArmatureDisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDisplayData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDisplayData_setParam(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDisplayData_setParam'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setParam(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParam",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDisplayData_setParam'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDisplayData* ret = cocostudio::ArmatureDisplayData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureDisplayData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureDisplayData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureDisplayData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ArmatureDisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ArmatureDisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureDisplayData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ArmatureDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDisplayData)");
    return 0;
}

int lua_register_cocos2dx_extension_ArmatureDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureDisplayData");
    tolua_cclass(tolua_S,"ArmatureDisplayData","ArmatureDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"ArmatureDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_extension_ArmatureDisplayData_copy);
        tolua_function(tolua_S,"setParam",lua_cocos2dx_extension_ArmatureDisplayData_setParam);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ArmatureDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ArmatureDisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureDisplayData).hash_code();
    g_luaType[typeId] = "ArmatureDisplayData";
    return 1;
}

int lua_cocos2dx_extension_ParticleDisplayData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ParticleDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ParticleDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ParticleDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ParticleDisplayData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ParticleDisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ParticleDisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ParticleDisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ParticleDisplayData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ParticleDisplayData_setParam(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ParticleDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ParticleDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ParticleDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ParticleDisplayData_setParam'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setParam(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParam",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ParticleDisplayData_setParam'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ParticleDisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ParticleDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ParticleDisplayData* ret = cocostudio::ParticleDisplayData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ParticleDisplayData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ParticleDisplayData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ParticleDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ParticleDisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ParticleDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ParticleDisplayData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ParticleDisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ParticleDisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ParticleDisplayData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ParticleDisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ParticleDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ParticleDisplayData)");
    return 0;
}

int lua_register_cocos2dx_extension_ParticleDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ParticleDisplayData");
    tolua_cclass(tolua_S,"ParticleDisplayData","ParticleDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"ParticleDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_extension_ParticleDisplayData_copy);
        tolua_function(tolua_S,"setParam",lua_cocos2dx_extension_ParticleDisplayData_setParam);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ParticleDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ParticleDisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ParticleDisplayData).hash_code();
    g_luaType[typeId] = "ParticleDisplayData";
    return 1;
}

int lua_cocos2dx_extension_BoneData_getDisplayData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BoneData_getDisplayData'", NULL);
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
        cocostudio::DisplayData* ret = cobj->getDisplayData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"DisplayData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"DisplayData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BoneData_getDisplayData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BoneData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BoneData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BoneData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BoneData_addDisplayData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_BoneData_addDisplayData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::DisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addDisplayData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDisplayData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BoneData_addDisplayData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BoneData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cocostudio::BoneData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"BoneData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"BoneData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BoneData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_BoneData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::BoneData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"BoneData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"BoneData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "BoneData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_BoneData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_BoneData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BoneData)");
    return 0;
}

int lua_register_cocos2dx_extension_BoneData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BoneData");
    tolua_cclass(tolua_S,"BoneData","BoneData","BaseData",NULL);

    tolua_beginmodule(tolua_S,"BoneData");
        tolua_function(tolua_S,"getDisplayData",lua_cocos2dx_extension_BoneData_getDisplayData);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_BoneData_init);
        tolua_function(tolua_S,"addDisplayData",lua_cocos2dx_extension_BoneData_addDisplayData);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_BoneData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_BoneData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::BoneData).hash_code();
    g_luaType[typeId] = "BoneData";
    return 1;
}

int lua_cocos2dx_extension_ArmatureData_addBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureData_addBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BoneData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBoneData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureData_addBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureData_getBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureData_getBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cobj->getBoneData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"BoneData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"BoneData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureData_getBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cocostudio::ArmatureData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ArmatureData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ArmatureData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ArmatureData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureData)");
    return 0;
}

int lua_register_cocos2dx_extension_ArmatureData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureData");
    tolua_cclass(tolua_S,"ArmatureData","ArmatureData","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureData");
        tolua_function(tolua_S,"addBoneData",lua_cocos2dx_extension_ArmatureData_addBoneData);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ArmatureData_init);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_extension_ArmatureData_getBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ArmatureData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ArmatureData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureData).hash_code();
    g_luaType[typeId] = "ArmatureData";
    return 1;
}

int lua_cocos2dx_extension_FrameData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::FrameData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FrameData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::FrameData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_FrameData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BaseData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BaseData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BaseData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_FrameData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_FrameData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"FrameData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::FrameData* ret = cocostudio::FrameData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"FrameData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"FrameData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_FrameData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_FrameData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::FrameData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::FrameData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"FrameData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"FrameData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "FrameData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_FrameData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_FrameData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FrameData)");
    return 0;
}

int lua_register_cocos2dx_extension_FrameData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"FrameData");
    tolua_cclass(tolua_S,"FrameData","FrameData","BaseData",NULL);

    tolua_beginmodule(tolua_S,"FrameData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_extension_FrameData_copy);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_FrameData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_FrameData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::FrameData).hash_code();
    g_luaType[typeId] = "FrameData";
    return 1;
}

int lua_cocos2dx_extension_MovementBoneData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_MovementBoneData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementBoneData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementBoneData_getFrameData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_MovementBoneData_getFrameData'", NULL);
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
        cocostudio::FrameData* ret = cobj->getFrameData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"FrameData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"FrameData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFrameData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementBoneData_getFrameData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementBoneData_addFrameData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_MovementBoneData_addFrameData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::FrameData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"FrameData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::FrameData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addFrameData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addFrameData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementBoneData_addFrameData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementBoneData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::MovementBoneData* ret = cocostudio::MovementBoneData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"MovementBoneData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"MovementBoneData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementBoneData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementBoneData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::MovementBoneData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"MovementBoneData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"MovementBoneData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "MovementBoneData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementBoneData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_MovementBoneData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MovementBoneData)");
    return 0;
}

int lua_register_cocos2dx_extension_MovementBoneData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MovementBoneData");
    tolua_cclass(tolua_S,"MovementBoneData","MovementBoneData","",NULL);

    tolua_beginmodule(tolua_S,"MovementBoneData");
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_MovementBoneData_init);
        tolua_function(tolua_S,"getFrameData",lua_cocos2dx_extension_MovementBoneData_getFrameData);
        tolua_function(tolua_S,"addFrameData",lua_cocos2dx_extension_MovementBoneData_addFrameData);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_MovementBoneData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_MovementBoneData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::MovementBoneData).hash_code();
    g_luaType[typeId] = "MovementBoneData";
    return 1;
}

int lua_cocos2dx_extension_MovementData_getMovementBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_MovementData_getMovementBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::MovementBoneData* ret = cobj->getMovementBoneData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"MovementBoneData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"MovementBoneData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementBoneData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementData_getMovementBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementData_addMovementBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_MovementData_addMovementBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::MovementBoneData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"MovementBoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addMovementBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMovementBoneData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementData_addMovementBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"MovementData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::MovementData* ret = cocostudio::MovementData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"MovementData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"MovementData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_MovementData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::MovementData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"MovementData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"MovementData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "MovementData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_MovementData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_MovementData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MovementData)");
    return 0;
}

int lua_register_cocos2dx_extension_MovementData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MovementData");
    tolua_cclass(tolua_S,"MovementData","MovementData","",NULL);

    tolua_beginmodule(tolua_S,"MovementData");
        tolua_function(tolua_S,"getMovementBoneData",lua_cocos2dx_extension_MovementData_getMovementBoneData);
        tolua_function(tolua_S,"addMovementBoneData",lua_cocos2dx_extension_MovementData_addMovementBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_MovementData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_MovementData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::MovementData).hash_code();
    g_luaType[typeId] = "MovementData";
    return 1;
}

int lua_cocos2dx_extension_AnimationData_getMovement(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AnimationData_getMovement'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::MovementData* ret = cobj->getMovement(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"MovementData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"MovementData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovement",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AnimationData_getMovement'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_AnimationData_getMovementCount(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AnimationData_getMovementCount'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getMovementCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementCount",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AnimationData_getMovementCount'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_AnimationData_addMovement(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AnimationData_addMovement'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::MovementData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"MovementData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::MovementData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addMovement(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMovement",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AnimationData_addMovement'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_AnimationData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cocostudio::AnimationData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"AnimationData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"AnimationData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AnimationData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_AnimationData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::AnimationData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"AnimationData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"AnimationData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "AnimationData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AnimationData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_AnimationData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AnimationData)");
    return 0;
}

int lua_register_cocos2dx_extension_AnimationData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"AnimationData");
    tolua_cclass(tolua_S,"AnimationData","AnimationData","",NULL);

    tolua_beginmodule(tolua_S,"AnimationData");
        tolua_function(tolua_S,"getMovement",lua_cocos2dx_extension_AnimationData_getMovement);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_extension_AnimationData_getMovementCount);
        tolua_function(tolua_S,"addMovement",lua_cocos2dx_extension_AnimationData_addMovement);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_AnimationData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_AnimationData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::AnimationData).hash_code();
    g_luaType[typeId] = "AnimationData";
    return 1;
}

int lua_cocos2dx_extension_ContourData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ContourData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ContourData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ContourData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ContourData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ContourData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ContourData_addVertex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ContourData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ContourData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ContourData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ContourData_addVertex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        Point* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR Point*;
        if(!ok)
            return 0;
        cobj->addVertex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addVertex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ContourData_addVertex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ContourData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ContourData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ContourData* ret = cocostudio::ContourData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ContourData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ContourData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ContourData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ContourData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ContourData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ContourData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ContourData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ContourData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ContourData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ContourData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ContourData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ContourData)");
    return 0;
}

int lua_register_cocos2dx_extension_ContourData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ContourData");
    tolua_cclass(tolua_S,"ContourData","ContourData","",NULL);

    tolua_beginmodule(tolua_S,"ContourData");
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ContourData_init);
        tolua_function(tolua_S,"addVertex",lua_cocos2dx_extension_ContourData_addVertex);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ContourData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ContourData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ContourData).hash_code();
    g_luaType[typeId] = "ContourData";
    return 1;
}

int lua_cocos2dx_extension_TextureData_getContourData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::TextureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TextureData_getContourData'", NULL);
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
        cocostudio::ContourData* ret = cobj->getContourData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ContourData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ContourData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContourData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TextureData_getContourData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TextureData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::TextureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TextureData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TextureData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TextureData_addContourData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::TextureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_TextureData_addContourData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ContourData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ContourData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ContourData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addContourData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addContourData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TextureData_addContourData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TextureData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::TextureData* ret = cocostudio::TextureData::create();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"TextureData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"TextureData");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TextureData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_TextureData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::TextureData();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"TextureData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"TextureData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TextureData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_TextureData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_TextureData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TextureData)");
    return 0;
}

int lua_register_cocos2dx_extension_TextureData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"TextureData");
    tolua_cclass(tolua_S,"TextureData","TextureData","",NULL);

    tolua_beginmodule(tolua_S,"TextureData");
        tolua_function(tolua_S,"getContourData",lua_cocos2dx_extension_TextureData_getContourData);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_TextureData_init);
        tolua_function(tolua_S,"addContourData",lua_cocos2dx_extension_TextureData_addContourData);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_TextureData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_TextureData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::TextureData).hash_code();
    g_luaType[typeId] = "TextureData";
    return 1;
}

int lua_cocos2dx_extension_Bone_isTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_isTransformDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isTransformDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTransformDirty",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_isTransformDirty'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_updateZOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_updateZOrder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateZOrder();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateZOrder",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_updateZOrder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getDisplayRenderNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getDisplayRenderNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getDisplayRenderNode();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Node");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Node");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNode",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getDisplayRenderNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getTween(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getTween'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Tween* ret = cobj->getTween();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Tween");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Tween");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTween",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getTween'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getParentBone();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getParentBone",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getBlendType(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getBlendType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getBlendType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBlendType",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getBlendType'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_updateColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_updateColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateColor();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_updateColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getName",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setTransformDirty'", NULL);
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
        cobj->setTransformDirty(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTransformDirty",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setTransformDirty'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_addChildBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_addChildBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addChildBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addChildBone",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_addChildBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_updateDisplayedOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_updateDisplayedOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;
        ok &= luaval_to_uint16(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->updateDisplayedOpacity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateDisplayedOpacity",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_updateDisplayedOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_init'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 0) {
            bool ret = cobj->init();
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setParentBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParentBone",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setZOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setZOrder'", NULL);
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
        cobj->setZOrder(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setZOrder",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setZOrder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_removeFromParent(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_removeFromParent'", NULL);
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
        cobj->removeFromParent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeFromParent",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_removeFromParent'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getChildArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getChildArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Armature* ret = cobj->getChildArmature();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Armature");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Armature");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getChildArmature",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getChildArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_update(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_update'", NULL);
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
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setDisplayManager(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setDisplayManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::DisplayManager* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayManager",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setDisplayManager(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDisplayManager",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setDisplayManager'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getTweenData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getTweenData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::FrameData* ret = cobj->getTweenData();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"FrameData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"FrameData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTweenData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getTweenData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getColliderBodyList(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getColliderBodyList'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Array* ret = cobj->getColliderBodyList();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColliderBodyList",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getColliderBodyList'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BoneData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBoneData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setArmature(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setArmature",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_addDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_addDisplay'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            Node* arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR Node*;

            if (!ok) { ok = true; break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { ok = true; break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    do{
        if (argc == 2) {
            cocostudio::DisplayData* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { ok = true; break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDisplay",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_addDisplay'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getNodeToWorldTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getNodeToWorldTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        AffineTransform ret = cobj->getNodeToWorldTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getNodeToWorldTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_removeChildBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_removeChildBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        bool arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeChildBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeChildBone",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_removeChildBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setChildArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setChildArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setChildArmature(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setChildArmature",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setChildArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getNodeToArmatureTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getNodeToArmatureTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        AffineTransform ret = cobj->getNodeToArmatureTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToArmatureTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getNodeToArmatureTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getDisplayManager(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getDisplayManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::DisplayManager* ret = cobj->getDisplayManager();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"DisplayManager");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"DisplayManager");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayManager",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getDisplayManager'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Armature* ret = cobj->getArmature();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Armature");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Armature");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmature",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_setBlendType(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_setBlendType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BlendType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setBlendType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBlendType",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_setBlendType'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_changeDisplayByIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_changeDisplayByIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        bool arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayByIndex(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayByIndex",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_changeDisplayByIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_updateDisplayedColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_updateDisplayedColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->updateDisplayedColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateDisplayedColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_updateDisplayedColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_getBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Bone_getBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cobj->getBoneData();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"BoneData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"BoneData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_getBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocostudio::Bone* ret = cocostudio::Bone::create(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 0)
        {
            cocostudio::Bone* ret = cocostudio::Bone::create();
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Bone_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Bone();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Bone");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Bone");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Bone",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Bone_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_Bone_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Bone)");
    return 0;
}

int lua_register_cocos2dx_extension_Bone(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Bone");
    tolua_cclass(tolua_S,"Bone","Bone","NodeRGBA",NULL);

    tolua_beginmodule(tolua_S,"Bone");
        tolua_function(tolua_S,"isTransformDirty",lua_cocos2dx_extension_Bone_isTransformDirty);
        tolua_function(tolua_S,"updateZOrder",lua_cocos2dx_extension_Bone_updateZOrder);
        tolua_function(tolua_S,"getDisplayRenderNode",lua_cocos2dx_extension_Bone_getDisplayRenderNode);
        tolua_function(tolua_S,"getTween",lua_cocos2dx_extension_Bone_getTween);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_extension_Bone_getParentBone);
        tolua_function(tolua_S,"getBlendType",lua_cocos2dx_extension_Bone_getBlendType);
        tolua_function(tolua_S,"updateColor",lua_cocos2dx_extension_Bone_updateColor);
        tolua_function(tolua_S,"getName",lua_cocos2dx_extension_Bone_getName);
        tolua_function(tolua_S,"setTransformDirty",lua_cocos2dx_extension_Bone_setTransformDirty);
        tolua_function(tolua_S,"addChildBone",lua_cocos2dx_extension_Bone_addChildBone);
        tolua_function(tolua_S,"updateDisplayedOpacity",lua_cocos2dx_extension_Bone_updateDisplayedOpacity);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_Bone_init);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_extension_Bone_setParentBone);
        tolua_function(tolua_S,"setZOrder",lua_cocos2dx_extension_Bone_setZOrder);
        tolua_function(tolua_S,"setName",lua_cocos2dx_extension_Bone_setName);
        tolua_function(tolua_S,"removeFromParent",lua_cocos2dx_extension_Bone_removeFromParent);
        tolua_function(tolua_S,"getChildArmature",lua_cocos2dx_extension_Bone_getChildArmature);
        tolua_function(tolua_S,"update",lua_cocos2dx_extension_Bone_update);
        tolua_function(tolua_S,"setDisplayManager",lua_cocos2dx_extension_Bone_setDisplayManager);
        tolua_function(tolua_S,"getTweenData",lua_cocos2dx_extension_Bone_getTweenData);
        tolua_function(tolua_S,"getColliderBodyList",lua_cocos2dx_extension_Bone_getColliderBodyList);
        tolua_function(tolua_S,"setBoneData",lua_cocos2dx_extension_Bone_setBoneData);
        tolua_function(tolua_S,"setArmature",lua_cocos2dx_extension_Bone_setArmature);
        tolua_function(tolua_S,"addDisplay",lua_cocos2dx_extension_Bone_addDisplay);
        tolua_function(tolua_S,"getNodeToWorldTransform",lua_cocos2dx_extension_Bone_getNodeToWorldTransform);
        tolua_function(tolua_S,"removeChildBone",lua_cocos2dx_extension_Bone_removeChildBone);
        tolua_function(tolua_S,"setChildArmature",lua_cocos2dx_extension_Bone_setChildArmature);
        tolua_function(tolua_S,"getNodeToArmatureTransform",lua_cocos2dx_extension_Bone_getNodeToArmatureTransform);
        tolua_function(tolua_S,"getDisplayManager",lua_cocos2dx_extension_Bone_getDisplayManager);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_extension_Bone_getArmature);
        tolua_function(tolua_S,"setBlendType",lua_cocos2dx_extension_Bone_setBlendType);
        tolua_function(tolua_S,"changeDisplayByIndex",lua_cocos2dx_extension_Bone_changeDisplayByIndex);
        tolua_function(tolua_S,"updateDisplayedColor",lua_cocos2dx_extension_Bone_updateDisplayedColor);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_extension_Bone_getBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Bone_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Bone_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::Bone).hash_code();
    g_luaType[typeId] = "Bone";
    return 1;
}

int lua_cocos2dx_extension_ArmatureAnimation_getSpeedScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_getSpeedScale'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getSpeedScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSpeedScale",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_getSpeedScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_getAnimationScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_getAnimationScale'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getAnimationScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationScale",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_getAnimationScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_play(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_play'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->play(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        const char* arg0;
        int arg1;
        int arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1, arg2);
        return 0;
    }
    if (argc == 4) 
    {
        const char* arg0;
        int arg1;
        int arg2;
        int arg3;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1, arg2, arg3);
        return 0;
    }
    if (argc == 5) 
    {
        const char* arg0;
        int arg1;
        int arg2;
        int arg3;
        int arg4;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_play'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_pause'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pause();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pause",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_pause'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_setAnimationScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_setAnimationScale'", NULL);
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
        cobj->setAnimationScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationScale",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_setAnimationScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_resume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resume();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resume",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_resume'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_stop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_stop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_stop'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_setAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_setAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::AnimationData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"AnimationData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimationData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_setAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_setSpeedScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_setSpeedScale'", NULL);
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
        cobj->setSpeedScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSpeedScale",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_setSpeedScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_update(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_update'", NULL);
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
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_getAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_getAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cobj->getAnimationData();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"AnimationData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"AnimationData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_getAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_playByIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_playByIndex'", NULL);
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
        cobj->playByIndex(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        int arg0;
        int arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playByIndex(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        int arg0;
        int arg1;
        int arg2;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->playByIndex(arg0, arg1, arg2);
        return 0;
    }
    if (argc == 4) 
    {
        int arg0;
        int arg1;
        int arg2;
        int arg3;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        if(!ok)
            return 0;
        cobj->playByIndex(arg0, arg1, arg2, arg3);
        return 0;
    }
    if (argc == 5) 
    {
        int arg0;
        int arg1;
        int arg2;
        int arg3;
        int arg4;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4);
        if(!ok)
            return 0;
        cobj->playByIndex(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playByIndex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_playByIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->init(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_getMovementCount(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_getMovementCount'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getMovementCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementCount",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_getMovementCount'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_getCurrentMovementID(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_getCurrentMovementID'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getCurrentMovementID();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentMovementID",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_getCurrentMovementID'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_setAnimationInternal(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureAnimation_setAnimationInternal'", NULL);
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
        cobj->setAnimationInternal(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationInternal",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_setAnimationInternal'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cocostudio::ArmatureAnimation::create(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureAnimation");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureAnimation");
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureAnimation_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureAnimation();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ArmatureAnimation");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ArmatureAnimation");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureAnimation",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureAnimation_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_ArmatureAnimation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureAnimation)");
    return 0;
}

int lua_register_cocos2dx_extension_ArmatureAnimation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureAnimation");
    tolua_cclass(tolua_S,"ArmatureAnimation","ArmatureAnimation","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureAnimation");
        tolua_function(tolua_S,"getSpeedScale",lua_cocos2dx_extension_ArmatureAnimation_getSpeedScale);
        tolua_function(tolua_S,"getAnimationScale",lua_cocos2dx_extension_ArmatureAnimation_getAnimationScale);
        tolua_function(tolua_S,"play",lua_cocos2dx_extension_ArmatureAnimation_play);
        tolua_function(tolua_S,"pause",lua_cocos2dx_extension_ArmatureAnimation_pause);
        tolua_function(tolua_S,"setAnimationScale",lua_cocos2dx_extension_ArmatureAnimation_setAnimationScale);
        tolua_function(tolua_S,"resume",lua_cocos2dx_extension_ArmatureAnimation_resume);
        tolua_function(tolua_S,"stop",lua_cocos2dx_extension_ArmatureAnimation_stop);
        tolua_function(tolua_S,"setAnimationData",lua_cocos2dx_extension_ArmatureAnimation_setAnimationData);
        tolua_function(tolua_S,"setSpeedScale",lua_cocos2dx_extension_ArmatureAnimation_setSpeedScale);
        tolua_function(tolua_S,"update",lua_cocos2dx_extension_ArmatureAnimation_update);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_extension_ArmatureAnimation_getAnimationData);
        tolua_function(tolua_S,"playByIndex",lua_cocos2dx_extension_ArmatureAnimation_playByIndex);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ArmatureAnimation_init);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_extension_ArmatureAnimation_getMovementCount);
        tolua_function(tolua_S,"getCurrentMovementID",lua_cocos2dx_extension_ArmatureAnimation_getCurrentMovementID);
        tolua_function(tolua_S,"setAnimationInternal",lua_cocos2dx_extension_ArmatureAnimation_setAnimationInternal);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ArmatureAnimation_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ArmatureAnimation_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureAnimation).hash_code();
    g_luaType[typeId] = "ArmatureAnimation";
    return 1;
}

int lua_cocos2dx_extension_ArmatureDataManager_getAnimationDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_getAnimationDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Dictionary* ret = cobj->getAnimationDatas();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationDatas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getAnimationDatas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_removeAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_removeAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->removeAnimationData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAnimationData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_removeAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_addArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_addArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        cocostudio::ArmatureData* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        do {
				if (!luaval_is_usertype(tolua_S,3,"ArmatureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addArmatureData(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addArmatureData",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_addArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_addArmatureFileInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_addArmatureFileInfo'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

            if (!ok) { ok = true; break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

            if (!ok) { ok = true; break; }
            cobj->addArmatureFileInfo(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            cobj->addArmatureFileInfo(arg0);
            return 0;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addArmatureFileInfo",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_addArmatureFileInfo'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_getTextureDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_getTextureDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Dictionary* ret = cobj->getTextureDatas();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureDatas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getTextureDatas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_getTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_getTextureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::TextureData* ret = cobj->getTextureData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"TextureData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"TextureData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getTextureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_getArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_getArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cobj->getArmatureData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_getAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_getAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cobj->getAnimationData(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"AnimationData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"AnimationData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_removeAll(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_removeAll'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeAll();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAll",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_removeAll'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_addAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_addAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        cocostudio::AnimationData* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        do {
				if (!luaval_is_usertype(tolua_S,3,"AnimationData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addAnimationData(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addAnimationData",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_addAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_removeArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_removeArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->removeArmatureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeArmatureData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_removeArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_getArmatureDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_getArmatureDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Dictionary* ret = cobj->getArmatureDatas();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureDatas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getArmatureDatas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_removeTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_removeTextureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->removeTextureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeTextureData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_removeTextureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_addTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_addTextureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        cocostudio::TextureData* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        do {
				if (!luaval_is_usertype(tolua_S,3,"TextureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::TextureData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addTextureData(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addTextureData",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_addTextureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_isAutoLoadSpriteFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_isAutoLoadSpriteFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isAutoLoadSpriteFile();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isAutoLoadSpriteFile",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_isAutoLoadSpriteFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_addSpriteFrameFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ArmatureDataManager_addSpriteFrameFromFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->addSpriteFrameFromFile(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addSpriteFrameFromFile",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_addSpriteFrameFromFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_destoryInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDataManager::destoryInstance();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destoryInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_destoryInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ArmatureDataManager_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDataManager* ret = cocostudio::ArmatureDataManager::getInstance();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureDataManager");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureDataManager");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ArmatureDataManager_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_extension_ArmatureDataManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDataManager)");
    return 0;
}

int lua_register_cocos2dx_extension_ArmatureDataManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureDataManager");
    tolua_cclass(tolua_S,"ArmatureDataManager","ArmatureDataManager","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureDataManager");
        tolua_function(tolua_S,"getAnimationDatas",lua_cocos2dx_extension_ArmatureDataManager_getAnimationDatas);
        tolua_function(tolua_S,"removeAnimationData",lua_cocos2dx_extension_ArmatureDataManager_removeAnimationData);
        tolua_function(tolua_S,"addArmatureData",lua_cocos2dx_extension_ArmatureDataManager_addArmatureData);
        tolua_function(tolua_S,"addArmatureFileInfo",lua_cocos2dx_extension_ArmatureDataManager_addArmatureFileInfo);
        tolua_function(tolua_S,"getTextureDatas",lua_cocos2dx_extension_ArmatureDataManager_getTextureDatas);
        tolua_function(tolua_S,"getTextureData",lua_cocos2dx_extension_ArmatureDataManager_getTextureData);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_extension_ArmatureDataManager_getArmatureData);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_extension_ArmatureDataManager_getAnimationData);
        tolua_function(tolua_S,"removeAll",lua_cocos2dx_extension_ArmatureDataManager_removeAll);
        tolua_function(tolua_S,"addAnimationData",lua_cocos2dx_extension_ArmatureDataManager_addAnimationData);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ArmatureDataManager_init);
        tolua_function(tolua_S,"removeArmatureData",lua_cocos2dx_extension_ArmatureDataManager_removeArmatureData);
        tolua_function(tolua_S,"getArmatureDatas",lua_cocos2dx_extension_ArmatureDataManager_getArmatureDatas);
        tolua_function(tolua_S,"removeTextureData",lua_cocos2dx_extension_ArmatureDataManager_removeTextureData);
        tolua_function(tolua_S,"addTextureData",lua_cocos2dx_extension_ArmatureDataManager_addTextureData);
        tolua_function(tolua_S,"isAutoLoadSpriteFile",lua_cocos2dx_extension_ArmatureDataManager_isAutoLoadSpriteFile);
        tolua_function(tolua_S,"addSpriteFrameFromFile",lua_cocos2dx_extension_ArmatureDataManager_addSpriteFrameFromFile);
        tolua_function(tolua_S,"destoryInstance", lua_cocos2dx_extension_ArmatureDataManager_destoryInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_extension_ArmatureDataManager_getInstance);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureDataManager).hash_code();
    g_luaType[typeId] = "ArmatureDataManager";
    return 1;
}

int lua_cocos2dx_extension_Armature_getBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBone(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_changeBoneParent(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_changeBoneParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        const char* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->changeBoneParent(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeBoneParent",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_changeBoneParent'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setAnimation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureAnimation* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ArmatureAnimation",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setAnimation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getBoneAtPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getBoneAtPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBoneAtPoint(arg0, arg1);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneAtPoint",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getBoneAtPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getArmatureTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getArmatureTransformDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getArmatureTransformDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureTransformDirty",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getArmatureTransformDirty'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setVersion'", NULL);
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
        cobj->setVersion(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVersion",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_updateOffsetPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_updateOffsetPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateOffsetPoint();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateOffsetPoint",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_updateOffsetPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getParentBone();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getParentBone",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_removeBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_removeBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        bool arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBone",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_removeBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getBatchNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BatchNode* ret = cobj->getBatchNode();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"BatchNode");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"BatchNode");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBatchNode",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getBatchNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getName",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_init'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 0) {
            bool ret = cobj->init();
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { ok = true; break; }
            cocostudio::Bone* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::Bone*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { ok = true; break; }
            bool ret = cobj->init(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getNodeToParentTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getNodeToParentTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::AffineTransform ret = cobj->getNodeToParentTransform();
        #pragma warning NO CONVERSION FROM NATIVE FOR const AffineTransform;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToParentTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getNodeToParentTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setParentBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParentBone",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getBoundingBox(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getBoundingBox'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Rect ret = cobj->getBoundingBox();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoundingBox",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getBoundingBox'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setBatchNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BatchNode* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBatchNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBatchNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setBatchNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_draw(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_draw'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->draw();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "draw",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_draw'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ArmatureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setArmatureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setArmatureData",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setTextureAtlas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        TextureAtlas* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR TextureAtlas*;
        if(!ok)
            return 0;
        cobj->setTextureAtlas(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTextureAtlas",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setTextureAtlas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_addBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_addBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        const char* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->addBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBone",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_addBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_update(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_update'", NULL);
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
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cobj->getArmatureData();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureData");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureData");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureData",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_setBody(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_setBody'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cpBody* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"cpBody",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cpBody*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBody(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBody",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_setBody'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getVersion'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        float ret = cobj->getVersion();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVersion",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getAnimation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cobj->getAnimation();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"ArmatureAnimation");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"ArmatureAnimation");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimation",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getAnimation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getBoneDic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getBoneDic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        Dictionary* ret = cobj->getBoneDic();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneDic",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getBoneDic'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_getTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Armature_getTextureAtlas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        TextureAtlas* ret = cobj->getTextureAtlas();
        #pragma warning NO CONVERSION FROM NATIVE FOR TextureAtlas*;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureAtlas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_getTextureAtlas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocostudio::Armature* ret = cocostudio::Armature::create(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Armature");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Armature");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 0)
        {
            cocostudio::Armature* ret = cocostudio::Armature::create();
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Armature");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Armature");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocostudio::Bone* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::Bone*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { ok = true; break; }
            cocostudio::Armature* ret = cocostudio::Armature::create(arg0, arg1);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Armature");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Armature");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Armature_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Armature();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Armature");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Armature");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Armature",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Armature_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_Armature_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Armature)");
    return 0;
}

int lua_register_cocos2dx_extension_Armature(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Armature");
    tolua_cclass(tolua_S,"Armature","Armature","NodeRGBA",NULL);

    tolua_beginmodule(tolua_S,"Armature");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_extension_Armature_getBone);
        tolua_function(tolua_S,"changeBoneParent",lua_cocos2dx_extension_Armature_changeBoneParent);
        tolua_function(tolua_S,"setAnimation",lua_cocos2dx_extension_Armature_setAnimation);
        tolua_function(tolua_S,"getBoneAtPoint",lua_cocos2dx_extension_Armature_getBoneAtPoint);
        tolua_function(tolua_S,"getArmatureTransformDirty",lua_cocos2dx_extension_Armature_getArmatureTransformDirty);
        tolua_function(tolua_S,"setVersion",lua_cocos2dx_extension_Armature_setVersion);
        tolua_function(tolua_S,"updateOffsetPoint",lua_cocos2dx_extension_Armature_updateOffsetPoint);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_extension_Armature_getParentBone);
        tolua_function(tolua_S,"setName",lua_cocos2dx_extension_Armature_setName);
        tolua_function(tolua_S,"removeBone",lua_cocos2dx_extension_Armature_removeBone);
        tolua_function(tolua_S,"getBatchNode",lua_cocos2dx_extension_Armature_getBatchNode);
        tolua_function(tolua_S,"getName",lua_cocos2dx_extension_Armature_getName);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_Armature_init);
        tolua_function(tolua_S,"getNodeToParentTransform",lua_cocos2dx_extension_Armature_getNodeToParentTransform);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_extension_Armature_setParentBone);
        tolua_function(tolua_S,"getBoundingBox",lua_cocos2dx_extension_Armature_getBoundingBox);
        tolua_function(tolua_S,"setBatchNode",lua_cocos2dx_extension_Armature_setBatchNode);
        tolua_function(tolua_S,"draw",lua_cocos2dx_extension_Armature_draw);
        tolua_function(tolua_S,"setArmatureData",lua_cocos2dx_extension_Armature_setArmatureData);
        tolua_function(tolua_S,"setTextureAtlas",lua_cocos2dx_extension_Armature_setTextureAtlas);
        tolua_function(tolua_S,"addBone",lua_cocos2dx_extension_Armature_addBone);
        tolua_function(tolua_S,"update",lua_cocos2dx_extension_Armature_update);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_extension_Armature_getArmatureData);
        tolua_function(tolua_S,"setBody",lua_cocos2dx_extension_Armature_setBody);
        tolua_function(tolua_S,"getVersion",lua_cocos2dx_extension_Armature_getVersion);
        tolua_function(tolua_S,"getAnimation",lua_cocos2dx_extension_Armature_getAnimation);
        tolua_function(tolua_S,"getBoneDic",lua_cocos2dx_extension_Armature_getBoneDic);
        tolua_function(tolua_S,"getTextureAtlas",lua_cocos2dx_extension_Armature_getTextureAtlas);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Armature_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Armature_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::Armature).hash_code();
    g_luaType[typeId] = "Armature";
    return 1;
}

int lua_cocos2dx_extension_Skin_getBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_getBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBone();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Bone");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Bone");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_getBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_getNodeToWorldTransformAR(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_getNodeToWorldTransformAR'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        AffineTransform ret = cobj->getNodeToWorldTransformAR();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransformAR",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_getNodeToWorldTransformAR'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_getNodeToWorldTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_getNodeToWorldTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        AffineTransform ret = cobj->getNodeToWorldTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_getNodeToWorldTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_updateTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_updateTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateTransform();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_updateTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_getDisplayName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_getDisplayName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getDisplayName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayName",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_getDisplayName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_updateArmatureTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_updateArmatureTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateArmatureTransform();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateArmatureTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_updateArmatureTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_initWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_initWithSpriteFrameName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        bool ret = cobj->initWithSpriteFrameName(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_initWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_initWithFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_initWithFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        bool ret = cobj->initWithFile(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithFile",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_initWithFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_setBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Skin_setBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBone",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_setBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cocostudio::Skin* ret = cocostudio::Skin::create(arg0);
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Skin");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Skin");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    do 
    {
        if (argc == 0)
        {
            cocostudio::Skin* ret = cocostudio::Skin::create();
            do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Skin");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Skin");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::Skin* ret = cocostudio::Skin::createWithSpriteFrameName(arg0);
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"Skin");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"Skin");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Skin_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Skin();
        if (nullptr != dynamic_cast<cocos2d::Object *>(cobj)) 
        {
            cobj->autorelease();
            int ID = (cobj) ? (int)cobj->_ID : -1;
            int* luaID = (cobj) ? &cobj->_luaID : NULL;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Skin");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Skin");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Skin",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Skin_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_extension_Skin_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Skin)");
    return 0;
}

int lua_register_cocos2dx_extension_Skin(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Skin");
    tolua_cclass(tolua_S,"Skin","Skin","Sprite",NULL);

    tolua_beginmodule(tolua_S,"Skin");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_extension_Skin_getBone);
        tolua_function(tolua_S,"getNodeToWorldTransformAR",lua_cocos2dx_extension_Skin_getNodeToWorldTransformAR);
        tolua_function(tolua_S,"getNodeToWorldTransform",lua_cocos2dx_extension_Skin_getNodeToWorldTransform);
        tolua_function(tolua_S,"updateTransform",lua_cocos2dx_extension_Skin_updateTransform);
        tolua_function(tolua_S,"getDisplayName",lua_cocos2dx_extension_Skin_getDisplayName);
        tolua_function(tolua_S,"updateArmatureTransform",lua_cocos2dx_extension_Skin_updateArmatureTransform);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_extension_Skin_initWithSpriteFrameName);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_extension_Skin_initWithFile);
        tolua_function(tolua_S,"setBone",lua_cocos2dx_extension_Skin_setBone);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Skin_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Skin_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_extension_Skin_createWithSpriteFrameName);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::Skin).hash_code();
    g_luaType[typeId] = "Skin";
    return 1;
}
TOLUA_API int register_all_cocos2dx_extension(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_cocos2dx_extension_ContourData(tolua_S);
	lua_register_cocos2dx_extension_Armature(tolua_S);
	lua_register_cocos2dx_extension_Control(tolua_S);
	lua_register_cocos2dx_extension_ControlHuePicker(tolua_S);
	lua_register_cocos2dx_extension_DisplayData(tolua_S);
	lua_register_cocos2dx_extension_ArmatureDisplayData(tolua_S);
	lua_register_cocos2dx_extension_MovementData(tolua_S);
	lua_register_cocos2dx_extension_ArmatureDataManager(tolua_S);
	lua_register_cocos2dx_extension_ArmatureData(tolua_S);
	lua_register_cocos2dx_extension_TableViewCell(tolua_S);
	lua_register_cocos2dx_extension_Scale9Sprite(tolua_S);
	lua_register_cocos2dx_extension_ControlColourPicker(tolua_S);
	lua_register_cocos2dx_extension_BaseData(tolua_S);
	lua_register_cocos2dx_extension_BoneData(tolua_S);
	lua_register_cocos2dx_extension_Bone(tolua_S);
	lua_register_cocos2dx_extension_ParticleDisplayData(tolua_S);
	lua_register_cocos2dx_extension_CCBAnimationManager(tolua_S);
	lua_register_cocos2dx_extension_ControlSwitch(tolua_S);
	lua_register_cocos2dx_extension_ControlSlider(tolua_S);
	lua_register_cocos2dx_extension_Skin(tolua_S);
	lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(tolua_S);
	lua_register_cocos2dx_extension_ScrollView(tolua_S);
	lua_register_cocos2dx_extension_ControlPotentiometer(tolua_S);
	lua_register_cocos2dx_extension_ArmatureAnimation(tolua_S);
	lua_register_cocos2dx_extension_ControlStepper(tolua_S);
	lua_register_cocos2dx_extension_SpriteDisplayData(tolua_S);
	lua_register_cocos2dx_extension_MovementBoneData(tolua_S);
	lua_register_cocos2dx_extension_FrameData(tolua_S);
	lua_register_cocos2dx_extension_TableView(tolua_S);
	lua_register_cocos2dx_extension_ControlButton(tolua_S);
	lua_register_cocos2dx_extension_EditBox(tolua_S);
	lua_register_cocos2dx_extension_TextureData(tolua_S);
	lua_register_cocos2dx_extension_CCBReader(tolua_S);
	lua_register_cocos2dx_extension_AnimationData(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

