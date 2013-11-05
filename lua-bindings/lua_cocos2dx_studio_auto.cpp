#include "lua_cocos2dx_studio_auto.hpp"
#include "CocoStudio.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_studio_BaseData_getColor(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BaseData_getColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Color4B ret = cobj->getColor();
        color4b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColor",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_getColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BaseData_copy(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BaseData_copy'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BaseData_subtract(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BaseData_subtract'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_subtract'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BaseData_setColor(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BaseData_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4B arg0;
        ok &=luaval_to_color4b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_setColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BaseData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BaseData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_BaseData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BaseData)");
    return 0;
}

int lua_register_cocos2dx_studio_BaseData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BaseData");
    tolua_cclass(tolua_S,"BaseData","BaseData","",NULL);

    tolua_beginmodule(tolua_S,"BaseData");
        tolua_function(tolua_S,"getColor",lua_cocos2dx_studio_BaseData_getColor);
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_BaseData_copy);
        tolua_function(tolua_S,"subtract",lua_cocos2dx_studio_BaseData_subtract);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_studio_BaseData_setColor);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_BaseData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_BaseData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::BaseData).hash_code();
    g_luaType[typeId] = "BaseData";
    return 1;
}

int lua_cocos2dx_studio_DisplayData_changeDisplayToTexture(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_changeDisplayToTexture'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_DisplayData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_DisplayData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_DisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_DisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DisplayData");
    tolua_cclass(tolua_S,"DisplayData","DisplayData","",NULL);

    tolua_beginmodule(tolua_S,"DisplayData");
        tolua_function(tolua_S,"changeDisplayToTexture", lua_cocos2dx_studio_DisplayData_changeDisplayToTexture);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_DisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::DisplayData).hash_code();
    g_luaType[typeId] = "DisplayData";
    return 1;
}

int lua_cocos2dx_studio_SpriteDisplayData_copy(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_SpriteDisplayData_copy'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_SpriteDisplayData_setParam(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_SpriteDisplayData_setParam'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_setParam'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_SpriteDisplayData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_SpriteDisplayData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_SpriteDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SpriteDisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_SpriteDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SpriteDisplayData");
    tolua_cclass(tolua_S,"SpriteDisplayData","SpriteDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"SpriteDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_SpriteDisplayData_copy);
        tolua_function(tolua_S,"setParam",lua_cocos2dx_studio_SpriteDisplayData_setParam);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_SpriteDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_SpriteDisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::SpriteDisplayData).hash_code();
    g_luaType[typeId] = "SpriteDisplayData";
    return 1;
}

int lua_cocos2dx_studio_ArmatureDisplayData_copy(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDisplayData_copy'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDisplayData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDisplayData_setParam(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDisplayData_setParam'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDisplayData_setParam'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDisplayData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDisplayData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_ArmatureDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureDisplayData");
    tolua_cclass(tolua_S,"ArmatureDisplayData","ArmatureDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"ArmatureDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_ArmatureDisplayData_copy);
        tolua_function(tolua_S,"setParam",lua_cocos2dx_studio_ArmatureDisplayData_setParam);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ArmatureDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureDisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureDisplayData).hash_code();
    g_luaType[typeId] = "ArmatureDisplayData";
    return 1;
}

int lua_cocos2dx_studio_ParticleDisplayData_copy(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ParticleDisplayData_copy'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ParticleDisplayData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ParticleDisplayData_setParam(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ParticleDisplayData_setParam'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ParticleDisplayData_setParam'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ParticleDisplayData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ParticleDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ParticleDisplayData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ParticleDisplayData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_ParticleDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ParticleDisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_ParticleDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ParticleDisplayData");
    tolua_cclass(tolua_S,"ParticleDisplayData","ParticleDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"ParticleDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_ParticleDisplayData_copy);
        tolua_function(tolua_S,"setParam",lua_cocos2dx_studio_ParticleDisplayData_setParam);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ParticleDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ParticleDisplayData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ParticleDisplayData).hash_code();
    g_luaType[typeId] = "ParticleDisplayData";
    return 1;
}

int lua_cocos2dx_studio_BoneData_getDisplayData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BoneData_getDisplayData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_getDisplayData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BoneData_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BoneData_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BoneData_addDisplayData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BoneData_addDisplayData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_addDisplayData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BoneData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BoneData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_BoneData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BoneData)");
    return 0;
}

int lua_register_cocos2dx_studio_BoneData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BoneData");
    tolua_cclass(tolua_S,"BoneData","BoneData","BaseData",NULL);

    tolua_beginmodule(tolua_S,"BoneData");
        tolua_function(tolua_S,"getDisplayData",lua_cocos2dx_studio_BoneData_getDisplayData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_BoneData_init);
        tolua_function(tolua_S,"addDisplayData",lua_cocos2dx_studio_BoneData_addDisplayData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_BoneData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_BoneData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::BoneData).hash_code();
    g_luaType[typeId] = "BoneData";
    return 1;
}

int lua_cocos2dx_studio_ArmatureData_addBoneData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureData_addBoneData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_addBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureData_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureData_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureData_getBoneData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureData_getBoneData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_getBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_ArmatureData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureData)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureData");
    tolua_cclass(tolua_S,"ArmatureData","ArmatureData","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureData");
        tolua_function(tolua_S,"addBoneData",lua_cocos2dx_studio_ArmatureData_addBoneData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureData_init);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_studio_ArmatureData_getBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ArmatureData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureData).hash_code();
    g_luaType[typeId] = "ArmatureData";
    return 1;
}

int lua_cocos2dx_studio_FrameData_copy(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_FrameData_copy'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_FrameData_copy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_FrameData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_FrameData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_FrameData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_FrameData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_FrameData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FrameData)");
    return 0;
}

int lua_register_cocos2dx_studio_FrameData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"FrameData");
    tolua_cclass(tolua_S,"FrameData","FrameData","BaseData",NULL);

    tolua_beginmodule(tolua_S,"FrameData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_FrameData_copy);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_FrameData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_FrameData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::FrameData).hash_code();
    g_luaType[typeId] = "FrameData";
    return 1;
}

int lua_cocos2dx_studio_MovementBoneData_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementBoneData_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_getFrameData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementBoneData_getFrameData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_getFrameData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_addFrameData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementBoneData_addFrameData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_addFrameData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_MovementBoneData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MovementBoneData)");
    return 0;
}

int lua_register_cocos2dx_studio_MovementBoneData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MovementBoneData");
    tolua_cclass(tolua_S,"MovementBoneData","MovementBoneData","",NULL);

    tolua_beginmodule(tolua_S,"MovementBoneData");
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_MovementBoneData_init);
        tolua_function(tolua_S,"getFrameData",lua_cocos2dx_studio_MovementBoneData_getFrameData);
        tolua_function(tolua_S,"addFrameData",lua_cocos2dx_studio_MovementBoneData_addFrameData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_MovementBoneData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_MovementBoneData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::MovementBoneData).hash_code();
    g_luaType[typeId] = "MovementBoneData";
    return 1;
}

int lua_cocos2dx_studio_MovementData_getMovementBoneData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementData_getMovementBoneData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_getMovementBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementData_addMovementBoneData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementData_addMovementBoneData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_addMovementBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_MovementData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MovementData)");
    return 0;
}

int lua_register_cocos2dx_studio_MovementData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MovementData");
    tolua_cclass(tolua_S,"MovementData","MovementData","",NULL);

    tolua_beginmodule(tolua_S,"MovementData");
        tolua_function(tolua_S,"getMovementBoneData",lua_cocos2dx_studio_MovementData_getMovementBoneData);
        tolua_function(tolua_S,"addMovementBoneData",lua_cocos2dx_studio_MovementData_addMovementBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_MovementData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_MovementData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::MovementData).hash_code();
    g_luaType[typeId] = "MovementData";
    return 1;
}

int lua_cocos2dx_studio_AnimationData_getMovement(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_AnimationData_getMovement'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_getMovement'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_AnimationData_getMovementCount(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_AnimationData_getMovementCount'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_getMovementCount'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_AnimationData_addMovement(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_AnimationData_addMovement'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_addMovement'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_AnimationData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_AnimationData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_AnimationData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AnimationData)");
    return 0;
}

int lua_register_cocos2dx_studio_AnimationData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"AnimationData");
    tolua_cclass(tolua_S,"AnimationData","AnimationData","",NULL);

    tolua_beginmodule(tolua_S,"AnimationData");
        tolua_function(tolua_S,"getMovement",lua_cocos2dx_studio_AnimationData_getMovement);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_studio_AnimationData_getMovementCount);
        tolua_function(tolua_S,"addMovement",lua_cocos2dx_studio_AnimationData_addMovement);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_AnimationData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_AnimationData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::AnimationData).hash_code();
    g_luaType[typeId] = "AnimationData";
    return 1;
}

int lua_cocos2dx_studio_ContourData_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ContourData_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ContourData_addVertex(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ContourData_addVertex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Point",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Point*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addVertex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addVertex",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_addVertex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ContourData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ContourData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_ContourData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ContourData)");
    return 0;
}

int lua_register_cocos2dx_studio_ContourData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ContourData");
    tolua_cclass(tolua_S,"ContourData","ContourData","",NULL);

    tolua_beginmodule(tolua_S,"ContourData");
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ContourData_init);
        tolua_function(tolua_S,"addVertex",lua_cocos2dx_studio_ContourData_addVertex);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ContourData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ContourData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ContourData).hash_code();
    g_luaType[typeId] = "ContourData";
    return 1;
}

int lua_cocos2dx_studio_TextureData_getContourData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_TextureData_getContourData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_getContourData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_TextureData_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_TextureData_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_TextureData_addContourData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_TextureData_addContourData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_addContourData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_TextureData_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_TextureData_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_TextureData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TextureData)");
    return 0;
}

int lua_register_cocos2dx_studio_TextureData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"TextureData");
    tolua_cclass(tolua_S,"TextureData","TextureData","",NULL);

    tolua_beginmodule(tolua_S,"TextureData");
        tolua_function(tolua_S,"getContourData",lua_cocos2dx_studio_TextureData_getContourData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_TextureData_init);
        tolua_function(tolua_S,"addContourData",lua_cocos2dx_studio_TextureData_addContourData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_TextureData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_TextureData_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::TextureData).hash_code();
    g_luaType[typeId] = "TextureData";
    return 1;
}

int lua_cocos2dx_studio_Bone_isTransformDirty(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isTransformDirty'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isTransformDirty'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_updateZOrder(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateZOrder'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateZOrder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayRenderNode(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNode'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getTween(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getTween'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getTween'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getParentBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getParentBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getBlendType(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getBlendType'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getBlendType'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_updateColor(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateColor'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getName(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getName'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setTransformDirty(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setTransformDirty'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setTransformDirty'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_addChildBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_addChildBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_addChildBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_updateDisplayedOpacity(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateDisplayedOpacity'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateDisplayedOpacity'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setParentBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setParentBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setZOrder(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setZOrder'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setZOrder'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setName(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setName'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_removeFromParent(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeFromParent'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeFromParent'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getChildArmature(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getChildArmature'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getChildArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_update(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_update'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setDisplayManager(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setDisplayManager'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setDisplayManager'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getTweenData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getTweenData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getTweenData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getColliderBodyList(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getColliderBodyList'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Array* ret = cobj->getColliderBodyList();
        array_to_luaval(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColliderBodyList",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getColliderBodyList'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setBoneData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setBoneData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setArmature(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setArmature'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_addDisplay(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_addDisplay'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_addDisplay'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getNodeToWorldTransform(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getNodeToWorldTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::AffineTransform ret = cobj->getNodeToWorldTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getNodeToWorldTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_removeChildBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeChildBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeChildBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setChildArmature(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setChildArmature'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setChildArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getNodeToArmatureTransform(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getNodeToArmatureTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::AffineTransform ret = cobj->getNodeToArmatureTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToArmatureTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getNodeToArmatureTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayManager(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayManager'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayManager'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getArmature(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getArmature'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getArmature'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_setBlendType(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setBlendType'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setBlendType'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_changeDisplayByIndex(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_changeDisplayByIndex'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_changeDisplayByIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_updateDisplayedColor(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateDisplayedColor'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateDisplayedColor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_getBoneData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getBoneData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getBoneData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_Bone_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Bone)");
    return 0;
}

int lua_register_cocos2dx_studio_Bone(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Bone");
    tolua_cclass(tolua_S,"Bone","Bone","NodeRGBA",NULL);

    tolua_beginmodule(tolua_S,"Bone");
        tolua_function(tolua_S,"isTransformDirty",lua_cocos2dx_studio_Bone_isTransformDirty);
        tolua_function(tolua_S,"updateZOrder",lua_cocos2dx_studio_Bone_updateZOrder);
        tolua_function(tolua_S,"getDisplayRenderNode",lua_cocos2dx_studio_Bone_getDisplayRenderNode);
        tolua_function(tolua_S,"getTween",lua_cocos2dx_studio_Bone_getTween);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_studio_Bone_getParentBone);
        tolua_function(tolua_S,"getBlendType",lua_cocos2dx_studio_Bone_getBlendType);
        tolua_function(tolua_S,"updateColor",lua_cocos2dx_studio_Bone_updateColor);
        tolua_function(tolua_S,"getName",lua_cocos2dx_studio_Bone_getName);
        tolua_function(tolua_S,"setTransformDirty",lua_cocos2dx_studio_Bone_setTransformDirty);
        tolua_function(tolua_S,"addChildBone",lua_cocos2dx_studio_Bone_addChildBone);
        tolua_function(tolua_S,"updateDisplayedOpacity",lua_cocos2dx_studio_Bone_updateDisplayedOpacity);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Bone_init);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_studio_Bone_setParentBone);
        tolua_function(tolua_S,"setZOrder",lua_cocos2dx_studio_Bone_setZOrder);
        tolua_function(tolua_S,"setName",lua_cocos2dx_studio_Bone_setName);
        tolua_function(tolua_S,"removeFromParent",lua_cocos2dx_studio_Bone_removeFromParent);
        tolua_function(tolua_S,"getChildArmature",lua_cocos2dx_studio_Bone_getChildArmature);
        tolua_function(tolua_S,"update",lua_cocos2dx_studio_Bone_update);
        tolua_function(tolua_S,"setDisplayManager",lua_cocos2dx_studio_Bone_setDisplayManager);
        tolua_function(tolua_S,"getTweenData",lua_cocos2dx_studio_Bone_getTweenData);
        tolua_function(tolua_S,"getColliderBodyList",lua_cocos2dx_studio_Bone_getColliderBodyList);
        tolua_function(tolua_S,"setBoneData",lua_cocos2dx_studio_Bone_setBoneData);
        tolua_function(tolua_S,"setArmature",lua_cocos2dx_studio_Bone_setArmature);
        tolua_function(tolua_S,"addDisplay",lua_cocos2dx_studio_Bone_addDisplay);
        tolua_function(tolua_S,"getNodeToWorldTransform",lua_cocos2dx_studio_Bone_getNodeToWorldTransform);
        tolua_function(tolua_S,"removeChildBone",lua_cocos2dx_studio_Bone_removeChildBone);
        tolua_function(tolua_S,"setChildArmature",lua_cocos2dx_studio_Bone_setChildArmature);
        tolua_function(tolua_S,"getNodeToArmatureTransform",lua_cocos2dx_studio_Bone_getNodeToArmatureTransform);
        tolua_function(tolua_S,"getDisplayManager",lua_cocos2dx_studio_Bone_getDisplayManager);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_studio_Bone_getArmature);
        tolua_function(tolua_S,"setBlendType",lua_cocos2dx_studio_Bone_setBlendType);
        tolua_function(tolua_S,"changeDisplayByIndex",lua_cocos2dx_studio_Bone_changeDisplayByIndex);
        tolua_function(tolua_S,"updateDisplayedColor",lua_cocos2dx_studio_Bone_updateDisplayedColor);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_studio_Bone_getBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Bone_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Bone_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::Bone).hash_code();
    g_luaType[typeId] = "Bone";
    return 1;
}

int lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getAnimationScale(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationScale'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_play(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_play'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_play'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_pause(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_pause'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_pause'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setAnimationScale(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationScale'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_resume(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_resume'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_resume'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_stop(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_stop'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_stop'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setAnimationData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_update(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_update'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getAnimationData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playByIndex(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playByIndex'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playByIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getMovementCount(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getMovementCount'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getMovementCount'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setAnimationInternal(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationInternal'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationInternal'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_ArmatureAnimation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureAnimation)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureAnimation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureAnimation");
    tolua_cclass(tolua_S,"ArmatureAnimation","ArmatureAnimation","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureAnimation");
        tolua_function(tolua_S,"getSpeedScale",lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale);
        tolua_function(tolua_S,"getAnimationScale",lua_cocos2dx_studio_ArmatureAnimation_getAnimationScale);
        tolua_function(tolua_S,"play",lua_cocos2dx_studio_ArmatureAnimation_play);
        tolua_function(tolua_S,"pause",lua_cocos2dx_studio_ArmatureAnimation_pause);
        tolua_function(tolua_S,"setAnimationScale",lua_cocos2dx_studio_ArmatureAnimation_setAnimationScale);
        tolua_function(tolua_S,"resume",lua_cocos2dx_studio_ArmatureAnimation_resume);
        tolua_function(tolua_S,"stop",lua_cocos2dx_studio_ArmatureAnimation_stop);
        tolua_function(tolua_S,"setAnimationData",lua_cocos2dx_studio_ArmatureAnimation_setAnimationData);
        tolua_function(tolua_S,"setSpeedScale",lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale);
        tolua_function(tolua_S,"update",lua_cocos2dx_studio_ArmatureAnimation_update);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_studio_ArmatureAnimation_getAnimationData);
        tolua_function(tolua_S,"playByIndex",lua_cocos2dx_studio_ArmatureAnimation_playByIndex);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureAnimation_init);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_studio_ArmatureAnimation_getMovementCount);
        tolua_function(tolua_S,"getCurrentMovementID",lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID);
        tolua_function(tolua_S,"setAnimationInternal",lua_cocos2dx_studio_ArmatureAnimation_setAnimationInternal);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ArmatureAnimation_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureAnimation_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureAnimation).hash_code();
    g_luaType[typeId] = "ArmatureAnimation";
    return 1;
}

int lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getAnimationDatas();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationDatas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addArmatureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getTextureDatas();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureDatas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getTextureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getArmatureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getAnimationData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeAll(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAll'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAll'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addAnimationData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addAnimationData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addAnimationData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getArmatureDatas();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureDatas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeTextureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeTextureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeTextureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addTextureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addTextureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addTextureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_destoryInstance(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_destoryInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getInstance(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ArmatureDataManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDataManager)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureDataManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureDataManager");
    tolua_cclass(tolua_S,"ArmatureDataManager","ArmatureDataManager","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureDataManager");
        tolua_function(tolua_S,"getAnimationDatas",lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas);
        tolua_function(tolua_S,"removeAnimationData",lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData);
        tolua_function(tolua_S,"addArmatureData",lua_cocos2dx_studio_ArmatureDataManager_addArmatureData);
        tolua_function(tolua_S,"addArmatureFileInfo",lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo);
        tolua_function(tolua_S,"getTextureDatas",lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas);
        tolua_function(tolua_S,"getTextureData",lua_cocos2dx_studio_ArmatureDataManager_getTextureData);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_studio_ArmatureDataManager_getArmatureData);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_studio_ArmatureDataManager_getAnimationData);
        tolua_function(tolua_S,"removeAll",lua_cocos2dx_studio_ArmatureDataManager_removeAll);
        tolua_function(tolua_S,"addAnimationData",lua_cocos2dx_studio_ArmatureDataManager_addAnimationData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureDataManager_init);
        tolua_function(tolua_S,"removeArmatureData",lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData);
        tolua_function(tolua_S,"getArmatureDatas",lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas);
        tolua_function(tolua_S,"removeTextureData",lua_cocos2dx_studio_ArmatureDataManager_removeTextureData);
        tolua_function(tolua_S,"addTextureData",lua_cocos2dx_studio_ArmatureDataManager_addTextureData);
        tolua_function(tolua_S,"isAutoLoadSpriteFile",lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile);
        tolua_function(tolua_S,"addSpriteFrameFromFile",lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile);
        tolua_function(tolua_S,"destoryInstance", lua_cocos2dx_studio_ArmatureDataManager_destoryInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_studio_ArmatureDataManager_getInstance);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::ArmatureDataManager).hash_code();
    g_luaType[typeId] = "ArmatureDataManager";
    return 1;
}

int lua_cocos2dx_studio_Armature_getBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_changeBoneParent(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_changeBoneParent'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_changeBoneParent'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setAnimation(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setAnimation'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setAnimation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getBoneAtPoint(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoneAtPoint'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoneAtPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getArmatureTransformDirty(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getArmatureTransformDirty'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getArmatureTransformDirty'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setVersion(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setVersion'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_updateOffsetPoint(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_updateOffsetPoint'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_updateOffsetPoint'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getParentBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getParentBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setName(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setName'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_removeBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_removeBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_removeBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getBatchNode(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBatchNode'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBatchNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getName(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getName'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_init(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_init'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_init'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getNodeToParentTransform(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getNodeToParentTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::AffineTransform ret = cobj->getNodeToParentTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToParentTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getNodeToParentTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setParentBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setParentBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setParentBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getBoundingBox(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoundingBox'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Rect ret = cobj->getBoundingBox();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoundingBox",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoundingBox'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setBatchNode(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setBatchNode'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setBatchNode'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_draw(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_draw'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_draw'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setArmatureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setArmatureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setTextureAtlas(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setTextureAtlas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::TextureAtlas* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"TextureAtlas",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::TextureAtlas*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setTextureAtlas(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTextureAtlas",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setTextureAtlas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_addBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_addBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_addBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_update(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_update'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_update'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getArmatureData(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getArmatureData'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getArmatureData'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_setBody(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setBody'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cpBody* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR cpBody*;
        if(!ok)
            return 0;
        cobj->setBody(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBody",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setBody'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getVersion(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getVersion'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getAnimation(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getAnimation'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getAnimation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getBoneDic(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoneDic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Dictionary* ret = cobj->getBoneDic();
        dictionary_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneDic",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoneDic'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_getTextureAtlas(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getTextureAtlas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::TextureAtlas* ret = cobj->getTextureAtlas();
        do {
			if (NULL != ret){
				cocos2d::Object *cobj = dynamic_cast<cocos2d::Object *>(ret);
				if (NULL != cobj) {
					int ID = ret ? (int)(cobj->_ID) : -1;
					int* luaID = ret ? &(cobj->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,"TextureAtlas");
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,"TextureAtlas");
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureAtlas",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getTextureAtlas'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_Armature_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Armature)");
    return 0;
}

int lua_register_cocos2dx_studio_Armature(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Armature");
    tolua_cclass(tolua_S,"Armature","Armature","NodeRGBA",NULL);

    tolua_beginmodule(tolua_S,"Armature");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_studio_Armature_getBone);
        tolua_function(tolua_S,"changeBoneParent",lua_cocos2dx_studio_Armature_changeBoneParent);
        tolua_function(tolua_S,"setAnimation",lua_cocos2dx_studio_Armature_setAnimation);
        tolua_function(tolua_S,"getBoneAtPoint",lua_cocos2dx_studio_Armature_getBoneAtPoint);
        tolua_function(tolua_S,"getArmatureTransformDirty",lua_cocos2dx_studio_Armature_getArmatureTransformDirty);
        tolua_function(tolua_S,"setVersion",lua_cocos2dx_studio_Armature_setVersion);
        tolua_function(tolua_S,"updateOffsetPoint",lua_cocos2dx_studio_Armature_updateOffsetPoint);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_studio_Armature_getParentBone);
        tolua_function(tolua_S,"setName",lua_cocos2dx_studio_Armature_setName);
        tolua_function(tolua_S,"removeBone",lua_cocos2dx_studio_Armature_removeBone);
        tolua_function(tolua_S,"getBatchNode",lua_cocos2dx_studio_Armature_getBatchNode);
        tolua_function(tolua_S,"getName",lua_cocos2dx_studio_Armature_getName);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Armature_init);
        tolua_function(tolua_S,"getNodeToParentTransform",lua_cocos2dx_studio_Armature_getNodeToParentTransform);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_studio_Armature_setParentBone);
        tolua_function(tolua_S,"getBoundingBox",lua_cocos2dx_studio_Armature_getBoundingBox);
        tolua_function(tolua_S,"setBatchNode",lua_cocos2dx_studio_Armature_setBatchNode);
        tolua_function(tolua_S,"draw",lua_cocos2dx_studio_Armature_draw);
        tolua_function(tolua_S,"setArmatureData",lua_cocos2dx_studio_Armature_setArmatureData);
        tolua_function(tolua_S,"setTextureAtlas",lua_cocos2dx_studio_Armature_setTextureAtlas);
        tolua_function(tolua_S,"addBone",lua_cocos2dx_studio_Armature_addBone);
        tolua_function(tolua_S,"update",lua_cocos2dx_studio_Armature_update);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_studio_Armature_getArmatureData);
        tolua_function(tolua_S,"setBody",lua_cocos2dx_studio_Armature_setBody);
        tolua_function(tolua_S,"getVersion",lua_cocos2dx_studio_Armature_getVersion);
        tolua_function(tolua_S,"getAnimation",lua_cocos2dx_studio_Armature_getAnimation);
        tolua_function(tolua_S,"getBoneDic",lua_cocos2dx_studio_Armature_getBoneDic);
        tolua_function(tolua_S,"getTextureAtlas",lua_cocos2dx_studio_Armature_getTextureAtlas);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Armature_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Armature_create);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::Armature).hash_code();
    g_luaType[typeId] = "Armature";
    return 1;
}

int lua_cocos2dx_studio_Skin_getBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::AffineTransform ret = cobj->getNodeToWorldTransformAR();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransformAR",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_getNodeToWorldTransform(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::AffineTransform ret = cobj->getNodeToWorldTransform();
        affinetransform_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransform",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_updateTransform(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_updateTransform'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_updateTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_getDisplayName(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getDisplayName'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getDisplayName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_updateArmatureTransform(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_updateArmatureTransform'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_updateArmatureTransform'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_initWithSpriteFrameName(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_initWithSpriteFrameName'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_initWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_initWithFile(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_initWithFile'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_initWithFile'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_setBone(lua_State* tolua_S)
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
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_setBone'", NULL);
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_setBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_create(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_createWithSpriteFrameName(lua_State* tolua_S)
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_constructor(lua_State* tolua_S)
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
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
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
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_constructor'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_studio_Skin_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Skin)");
    return 0;
}

int lua_register_cocos2dx_studio_Skin(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Skin");
    tolua_cclass(tolua_S,"Skin","Skin","Sprite",NULL);

    tolua_beginmodule(tolua_S,"Skin");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_studio_Skin_getBone);
        tolua_function(tolua_S,"getNodeToWorldTransformAR",lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR);
        tolua_function(tolua_S,"getNodeToWorldTransform",lua_cocos2dx_studio_Skin_getNodeToWorldTransform);
        tolua_function(tolua_S,"updateTransform",lua_cocos2dx_studio_Skin_updateTransform);
        tolua_function(tolua_S,"getDisplayName",lua_cocos2dx_studio_Skin_getDisplayName);
        tolua_function(tolua_S,"updateArmatureTransform",lua_cocos2dx_studio_Skin_updateArmatureTransform);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_studio_Skin_initWithSpriteFrameName);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_studio_Skin_initWithFile);
        tolua_function(tolua_S,"setBone",lua_cocos2dx_studio_Skin_setBone);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Skin_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Skin_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_studio_Skin_createWithSpriteFrameName);
    tolua_endmodule(tolua_S);
    uint32_t typeId = typeid(cocostudio::Skin).hash_code();
    g_luaType[typeId] = "Skin";
    return 1;
}
TOLUA_API int register_all_cocos2dx_studio(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccs",0);
	tolua_beginmodule(tolua_S,"ccs");

	lua_register_cocos2dx_studio_ContourData(tolua_S);
	lua_register_cocos2dx_studio_DisplayData(tolua_S);
	lua_register_cocos2dx_studio_ArmatureDisplayData(tolua_S);
	lua_register_cocos2dx_studio_MovementData(tolua_S);
	lua_register_cocos2dx_studio_ArmatureDataManager(tolua_S);
	lua_register_cocos2dx_studio_BaseData(tolua_S);
	lua_register_cocos2dx_studio_FrameData(tolua_S);
	lua_register_cocos2dx_studio_BoneData(tolua_S);
	lua_register_cocos2dx_studio_ParticleDisplayData(tolua_S);
	lua_register_cocos2dx_studio_ArmatureData(tolua_S);
	lua_register_cocos2dx_studio_Skin(tolua_S);
	lua_register_cocos2dx_studio_MovementBoneData(tolua_S);
	lua_register_cocos2dx_studio_ArmatureAnimation(tolua_S);
	lua_register_cocos2dx_studio_Armature(tolua_S);
	lua_register_cocos2dx_studio_SpriteDisplayData(tolua_S);
	lua_register_cocos2dx_studio_Bone(tolua_S);
	lua_register_cocos2dx_studio_TextureData(tolua_S);
	lua_register_cocos2dx_studio_AnimationData(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

