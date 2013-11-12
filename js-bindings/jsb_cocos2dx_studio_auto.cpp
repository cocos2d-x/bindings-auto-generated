#include "jsb_cocos2dx_studio_auto.hpp"
#include "cocos2d_specifics.hpp"
#include "CocoStudio.h"

template<class T>
static JSBool dummy_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
	TypeTest<T> t;
	T* cobj = new T();
	cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
	if (_ccobj) {
		_ccobj->autorelease();
	}
	js_type_class_t *typeClass = nullptr;
	long typeId = t.s_id();
	auto typeMapIter = _js_global_type_map.find(typeId);
	CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
	typeClass = typeMapIter->second;
	CCASSERT(typeClass, "The value is null.");

	JSObject *_tmp = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
	js_proxy_t *pp = jsb_new_proxy(cobj, _tmp);
	JS_AddObjectRoot(cx, &pp->obj);
	JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(_tmp));

	return JS_TRUE;
}

static JSBool empty_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
	return JS_FALSE;
}


JSClass  *jsb_Bone_class;
JSObject *jsb_Bone_prototype;

JSBool js_cocos2dx_studio_Bone_isTransformDirty(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_isTransformDirty : Invalid Native Object");
	if (argc == 0) {
		bool ret = cobj->isTransformDirty();
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_isTransformDirty : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_isIgnoreMovementBoneData(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_isIgnoreMovementBoneData : Invalid Native Object");
	if (argc == 0) {
		bool ret = cobj->isIgnoreMovementBoneData();
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_isIgnoreMovementBoneData : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_updateZOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_updateZOrder : Invalid Native Object");
	if (argc == 0) {
		cobj->updateZOrder();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_updateZOrder : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setTransformDirty(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setTransformDirty : Invalid Native Object");
	if (argc == 1) {
		JSBool arg0;
		ok &= JS_ValueToBoolean(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setTransformDirty : Error processing arguments");
		cobj->setTransformDirty(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setTransformDirty : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getDisplayRenderNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getDisplayRenderNode : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Node* ret = cobj->getDisplayRenderNode();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::Node>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getDisplayRenderNode : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_addChildBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_addChildBone : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Bone* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_addChildBone : Error processing arguments");
		cobj->addChildBone(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_addChildBone : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getWorldInfo(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getWorldInfo : Invalid Native Object");
	if (argc == 0) {
		cocostudio::BaseData* ret = cobj->getWorldInfo();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::BaseData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getWorldInfo : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getTween(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getTween : Invalid Native Object");
	if (argc == 0) {
		cocostudio::Tween* ret = cobj->getTween();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Tween>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getTween : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getParentBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getParentBone : Invalid Native Object");
	if (argc == 0) {
		cocostudio::Bone* ret = cobj->getParentBone();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getParentBone : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getBlendType(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getBlendType : Invalid Native Object");
	if (argc == 0) {
		int ret = (int)cobj->getBlendType();
		jsval jsret;
		jsret = int32_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getBlendType : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_updateColor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_updateColor : Invalid Native Object");
	if (argc == 0) {
		cobj->updateColor();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_updateColor : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getName(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getName : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getName();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getName : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setOpacity(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setOpacity : Invalid Native Object");
	if (argc == 1) {
		uint16_t arg0;
		ok &= jsval_to_uint16(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setOpacity : Error processing arguments");
		cobj->setOpacity(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setOpacity : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getDisplayRenderNodeType(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getDisplayRenderNodeType : Invalid Native Object");
	if (argc == 0) {
		int ret = (int)cobj->getDisplayRenderNodeType();
		jsval jsret;
		jsret = int32_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getDisplayRenderNodeType : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_removeDisplay(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_removeDisplay : Invalid Native Object");
	if (argc == 1) {
		int arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_removeDisplay : Error processing arguments");
		cobj->removeDisplay(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_removeDisplay : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_updateDisplayedOpacity(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_updateDisplayedOpacity : Invalid Native Object");
	if (argc == 1) {
		uint16_t arg0;
		ok &= jsval_to_uint16(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_updateDisplayedOpacity : Error processing arguments");
		cobj->updateDisplayedOpacity(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_updateDisplayedOpacity : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_init(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;

	JSObject *obj = NULL;
	cocostudio::Bone* cobj = NULL;
	obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_init : Invalid Native Object");
	do {
		if (argc == 1) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			bool ret = cobj->init(arg0);
			jsval jsret;
			jsret = BOOLEAN_TO_JSVAL(ret);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	do {
		if (argc == 0) {
			bool ret = cobj->init();
			jsval jsret;
			jsret = BOOLEAN_TO_JSVAL(ret);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_init : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setParentBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setParentBone : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Bone* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setParentBone : Error processing arguments");
		cobj->setParentBone(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setParentBone : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setZOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setZOrder : Invalid Native Object");
	if (argc == 1) {
		int arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setZOrder : Error processing arguments");
		cobj->setZOrder(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setZOrder : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getColliderFilter(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getColliderFilter : Invalid Native Object");
	if (argc == 0) {
		cocostudio::ColliderFilter* ret = cobj->getColliderFilter();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::ColliderFilter>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getColliderFilter : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setIgnoreMovementBoneData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setIgnoreMovementBoneData : Invalid Native Object");
	if (argc == 1) {
		JSBool arg0;
		ok &= JS_ValueToBoolean(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setIgnoreMovementBoneData : Error processing arguments");
		cobj->setIgnoreMovementBoneData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setIgnoreMovementBoneData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setName : Error processing arguments");
		cobj->setName(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_removeFromParent(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_removeFromParent : Invalid Native Object");
	if (argc == 1) {
		JSBool arg0;
		ok &= JS_ValueToBoolean(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_removeFromParent : Error processing arguments");
		cobj->removeFromParent(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_removeFromParent : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getChildArmature(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getChildArmature : Invalid Native Object");
	if (argc == 0) {
		cocostudio::Armature* ret = cobj->getChildArmature();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Armature>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getChildArmature : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_update(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_update : Invalid Native Object");
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_update : Error processing arguments");
		cobj->update(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_update : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getTweenData(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getTweenData : Invalid Native Object");
	if (argc == 0) {
		cocostudio::FrameData* ret = cobj->getTweenData();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::FrameData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getTweenData : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setColliderFilter(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setColliderFilter : Invalid Native Object");
	if (argc == 1) {
		cocostudio::ColliderFilter* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::ColliderFilter*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setColliderFilter : Error processing arguments");
		cobj->setColliderFilter(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setColliderFilter : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getColliderBodyList(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getColliderBodyList : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Array* ret = cobj->getColliderBodyList();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getColliderBodyList : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setBoneData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setBoneData : Invalid Native Object");
	if (argc == 1) {
		cocostudio::BoneData* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::BoneData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setBoneData : Error processing arguments");
		cobj->setBoneData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setBoneData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setArmature(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setArmature : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Armature* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Armature*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setArmature : Error processing arguments");
		cobj->setArmature(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setArmature : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_addDisplay(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;

	JSObject *obj = NULL;
	cocostudio::Bone* cobj = NULL;
	obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_addDisplay : Invalid Native Object");
	do {
		if (argc == 2) {
			cocos2d::Node* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocos2d::Node*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			int arg1;
			ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
			if (!ok) { ok = JS_TRUE; break; }
			cobj->addDisplay(arg0, arg1);
			JS_SET_RVAL(cx, vp, JSVAL_VOID);
			return JS_TRUE;
		}
	} while(0);

	do {
		if (argc == 2) {
			cocostudio::DisplayData* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocostudio::DisplayData*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			int arg1;
			ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
			if (!ok) { ok = JS_TRUE; break; }
			cobj->addDisplay(arg0, arg1);
			JS_SET_RVAL(cx, vp, JSVAL_VOID);
			return JS_TRUE;
		}
	} while(0);

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_addDisplay : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getNodeToWorldTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getNodeToWorldTransform : Invalid Native Object");
	if (argc == 0) {
		cocos2d::AffineTransform ret = cobj->getNodeToWorldTransform();
		jsval jsret;
		jsret = ccaffinetransform_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getNodeToWorldTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setColor(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setColor : Invalid Native Object");
	if (argc == 1) {
		cocos2d::Color3B arg0;
		ok &= jsval_to_cccolor3b(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setColor : Error processing arguments");
		cobj->setColor(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setColor : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_removeChildBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_removeChildBone : Invalid Native Object");
	if (argc == 2) {
		cocostudio::Bone* arg0;
		JSBool arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		ok &= JS_ValueToBoolean(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_removeChildBone : Error processing arguments");
		cobj->removeChildBone(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_removeChildBone : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setChildArmature(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setChildArmature : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Armature* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Armature*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setChildArmature : Error processing arguments");
		cobj->setChildArmature(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setChildArmature : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getNodeToArmatureTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getNodeToArmatureTransform : Invalid Native Object");
	if (argc == 0) {
		cocos2d::AffineTransform ret = cobj->getNodeToArmatureTransform();
		jsval jsret;
		jsret = ccaffinetransform_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getNodeToArmatureTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getDisplayManager(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getDisplayManager : Invalid Native Object");
	if (argc == 0) {
		cocostudio::DisplayManager* ret = cobj->getDisplayManager();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::DisplayManager>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getDisplayManager : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getArmature(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getArmature : Invalid Native Object");
	if (argc == 0) {
		cocostudio::Armature* ret = cobj->getArmature();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Armature>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getArmature : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_setBlendType(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setBlendType : Invalid Native Object");
	if (argc == 1) {
		cocostudio::BlendType arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_setBlendType : Error processing arguments");
		cobj->setBlendType(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_setBlendType : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_changeDisplayByIndex(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_changeDisplayByIndex : Invalid Native Object");
	if (argc == 2) {
		int arg0;
		JSBool arg1;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		ok &= JS_ValueToBoolean(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_changeDisplayByIndex : Error processing arguments");
		cobj->changeDisplayByIndex(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_changeDisplayByIndex : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_updateDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_updateDisplayedColor : Invalid Native Object");
	if (argc == 1) {
		cocos2d::Color3B arg0;
		ok &= jsval_to_cccolor3b(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Bone_updateDisplayedColor : Error processing arguments");
		cobj->updateDisplayedColor(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_updateDisplayedColor : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_getBoneData(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Bone* cobj = (cocostudio::Bone *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Bone_getBoneData : Invalid Native Object");
	if (argc == 0) {
		cocostudio::BoneData* ret = cobj->getBoneData();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::BoneData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_getBoneData : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_create(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	
	do {
		if (argc == 1) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cocostudio::Bone* ret = cocostudio::Bone::create(arg0);
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	
	do {
		if (argc == 0) {
			cocostudio::Bone* ret = cocostudio::Bone::create();
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	JS_ReportError(cx, "js_cocos2dx_studio_Bone_create : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Bone_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocostudio::Bone* cobj = new cocostudio::Bone();
		cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
		if (_ccobj) {
			_ccobj->autorelease();
		}
		TypeTest<cocostudio::Bone> t;
		js_type_class_t *typeClass = nullptr;
		long typeId = t.s_id();
		auto typeMapIter = _js_global_type_map.find(typeId);
		CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
		typeClass = typeMapIter->second;
		CCASSERT(typeClass, "The value is null.");
		JSObject *obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(obj));
		// link the native object with the javascript object
		js_proxy_t* p = jsb_new_proxy(cobj, obj);
		JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::Bone");
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Bone_constructor : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}



extern JSObject *jsb_NodeRGBA_prototype;

void js_cocos2dx_studio_Bone_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (Bone)", obj);
}

static JSBool js_cocos2dx_studio_Bone_ctor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
    cocostudio::Bone *nobj = new cocostudio::Bone();
    js_proxy_t* p = jsb_new_proxy(nobj, obj);
    nobj->autorelease();
    JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::Bone");
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return JS_TRUE;
}

void js_register_cocos2dx_studio_Bone(JSContext *cx, JSObject *global) {
	jsb_Bone_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_Bone_class->name = "Bone";
	jsb_Bone_class->addProperty = JS_PropertyStub;
	jsb_Bone_class->delProperty = JS_DeletePropertyStub;
	jsb_Bone_class->getProperty = JS_PropertyStub;
	jsb_Bone_class->setProperty = JS_StrictPropertyStub;
	jsb_Bone_class->enumerate = JS_EnumerateStub;
	jsb_Bone_class->resolve = JS_ResolveStub;
	jsb_Bone_class->convert = JS_ConvertStub;
	jsb_Bone_class->finalize = js_cocos2dx_studio_Bone_finalize;
	jsb_Bone_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("isTransformDirty", js_cocos2dx_studio_Bone_isTransformDirty, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("isIgnoreMovementBoneData", js_cocos2dx_studio_Bone_isIgnoreMovementBoneData, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateZOrder", js_cocos2dx_studio_Bone_updateZOrder, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setTransformDirty", js_cocos2dx_studio_Bone_setTransformDirty, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDisplayRenderNode", js_cocos2dx_studio_Bone_getDisplayRenderNode, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addChildBone", js_cocos2dx_studio_Bone_addChildBone, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getWorldInfo", js_cocos2dx_studio_Bone_getWorldInfo, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getTween", js_cocos2dx_studio_Bone_getTween, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getParentBone", js_cocos2dx_studio_Bone_getParentBone, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getBlendType", js_cocos2dx_studio_Bone_getBlendType, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateColor", js_cocos2dx_studio_Bone_updateColor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getName", js_cocos2dx_studio_Bone_getName, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setOpacity", js_cocos2dx_studio_Bone_setOpacity, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDisplayRenderNodeType", js_cocos2dx_studio_Bone_getDisplayRenderNodeType, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeDisplay", js_cocos2dx_studio_Bone_removeDisplay, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateDisplayedOpacity", js_cocos2dx_studio_Bone_updateDisplayedOpacity, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("init", js_cocos2dx_studio_Bone_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setParentBone", js_cocos2dx_studio_Bone_setParentBone, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setZOrder", js_cocos2dx_studio_Bone_setZOrder, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getColliderFilter", js_cocos2dx_studio_Bone_getColliderFilter, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setIgnoreMovementBoneData", js_cocos2dx_studio_Bone_setIgnoreMovementBoneData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setName", js_cocos2dx_studio_Bone_setName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeFromParent", js_cocos2dx_studio_Bone_removeFromParent, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getChildArmature", js_cocos2dx_studio_Bone_getChildArmature, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("update", js_cocos2dx_studio_Bone_update, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getTweenData", js_cocos2dx_studio_Bone_getTweenData, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setColliderFilter", js_cocos2dx_studio_Bone_setColliderFilter, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getColliderBodyList", js_cocos2dx_studio_Bone_getColliderBodyList, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setBoneData", js_cocos2dx_studio_Bone_setBoneData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setArmature", js_cocos2dx_studio_Bone_setArmature, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDisplay", js_cocos2dx_studio_Bone_addDisplay, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getNodeToWorldTransform", js_cocos2dx_studio_Bone_getNodeToWorldTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setColor", js_cocos2dx_studio_Bone_setColor, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeChildBone", js_cocos2dx_studio_Bone_removeChildBone, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setChildArmature", js_cocos2dx_studio_Bone_setChildArmature, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getNodeToArmatureTransform", js_cocos2dx_studio_Bone_getNodeToArmatureTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDisplayManager", js_cocos2dx_studio_Bone_getDisplayManager, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getArmature", js_cocos2dx_studio_Bone_getArmature, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setBlendType", js_cocos2dx_studio_Bone_setBlendType, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("changeDisplayByIndex", js_cocos2dx_studio_Bone_changeDisplayByIndex, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateDisplayedColor", js_cocos2dx_studio_Bone_updateDisplayedColor, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getBoneData", js_cocos2dx_studio_Bone_getBoneData, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("ctor", js_cocos2dx_studio_Bone_ctor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	static JSFunctionSpec st_funcs[] = {
		JS_FN("create", js_cocos2dx_studio_Bone_create, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_Bone_prototype = JS_InitClass(
		cx, global,
		jsb_NodeRGBA_prototype,
		jsb_Bone_class,
		js_cocos2dx_studio_Bone_constructor, 0, // constructor
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "Bone", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocostudio::Bone> t;
	js_type_class_t *p;
	long typeId = t.s_id();
	if (_js_global_type_map.find(typeId) == _js_global_type_map.end())
	{
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->jsclass = jsb_Bone_class;
		p->proto = jsb_Bone_prototype;
		p->parentProto = jsb_NodeRGBA_prototype;
		_js_global_type_map.insert(std::make_pair(typeId, p));
	}
}


JSClass  *jsb_ArmatureAnimation_class;
JSObject *jsb_ArmatureAnimation_prototype;

JSBool js_cocos2dx_studio_ArmatureAnimation_getSpeedScale(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_getSpeedScale : Invalid Native Object");
	if (argc == 0) {
		float ret = cobj->getSpeedScale();
		jsval jsret;
		jsret = DOUBLE_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_getSpeedScale : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_play(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_play : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_play : Error processing arguments");
		cobj->play(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 2) {
		const char* arg0;
		int arg1;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_play : Error processing arguments");
		cobj->play(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 3) {
		const char* arg0;
		int arg1;
		int arg2;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		ok &= jsval_to_int32(cx, argv[2], (int32_t *)&arg2);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_play : Error processing arguments");
		cobj->play(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 4) {
		const char* arg0;
		int arg1;
		int arg2;
		int arg3;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		ok &= jsval_to_int32(cx, argv[2], (int32_t *)&arg2);
		ok &= jsval_to_int32(cx, argv[3], (int32_t *)&arg3);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_play : Error processing arguments");
		cobj->play(arg0, arg1, arg2, arg3);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 5) {
		const char* arg0;
		int arg1;
		int arg2;
		int arg3;
		int arg4;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		ok &= jsval_to_int32(cx, argv[2], (int32_t *)&arg2);
		ok &= jsval_to_int32(cx, argv[3], (int32_t *)&arg3);
		ok &= jsval_to_int32(cx, argv[4], (int32_t *)&arg4);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_play : Error processing arguments");
		cobj->play(arg0, arg1, arg2, arg3, arg4);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_play : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_pause(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_pause : Invalid Native Object");
	if (argc == 0) {
		cobj->pause();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_pause : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_getUserObject(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;

	JSObject *obj = NULL;
	cocostudio::ArmatureAnimation* cobj = NULL;
	obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_getUserObject : Invalid Native Object");
	do {
		if (argc == 0) {
			cocos2d::Object* ret = cobj->getUserObject();
			jsval jsret;
			do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::Object>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	do {
		if (argc == 0) {
			cocos2d::Object* ret = cobj->getUserObject();
			jsval jsret;
			do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::Object>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_getUserObject : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_setAnimationInternal(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setAnimationInternal : Invalid Native Object");
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setAnimationInternal : Error processing arguments");
		cobj->setAnimationInternal(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_setAnimationInternal : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_gotoAndPause(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_gotoAndPause : Invalid Native Object");
	if (argc == 1) {
		int arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_gotoAndPause : Error processing arguments");
		cobj->gotoAndPause(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_gotoAndPause : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_resume(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_resume : Invalid Native Object");
	if (argc == 0) {
		cobj->resume();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_resume : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_stop(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_stop : Invalid Native Object");
	if (argc == 0) {
		cobj->stop();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_stop : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_setAnimationData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setAnimationData : Invalid Native Object");
	if (argc == 1) {
		cocostudio::AnimationData* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::AnimationData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setAnimationData : Error processing arguments");
		cobj->setAnimationData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_setAnimationData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_setSpeedScale(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setSpeedScale : Invalid Native Object");
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setSpeedScale : Error processing arguments");
		cobj->setSpeedScale(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_setSpeedScale : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_update(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_update : Invalid Native Object");
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_update : Error processing arguments");
		cobj->update(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_update : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_getAnimationData(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_getAnimationData : Invalid Native Object");
	if (argc == 0) {
		cocostudio::AnimationData* ret = cobj->getAnimationData();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::AnimationData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_getAnimationData : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_playByIndex(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : Invalid Native Object");
	if (argc == 1) {
		int arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : Error processing arguments");
		cobj->playByIndex(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : Error processing arguments");
		cobj->playByIndex(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 3) {
		int arg0;
		int arg1;
		int arg2;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		ok &= jsval_to_int32(cx, argv[2], (int32_t *)&arg2);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : Error processing arguments");
		cobj->playByIndex(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 4) {
		int arg0;
		int arg1;
		int arg2;
		int arg3;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		ok &= jsval_to_int32(cx, argv[2], (int32_t *)&arg2);
		ok &= jsval_to_int32(cx, argv[3], (int32_t *)&arg3);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : Error processing arguments");
		cobj->playByIndex(arg0, arg1, arg2, arg3);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 5) {
		int arg0;
		int arg1;
		int arg2;
		int arg3;
		int arg4;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		ok &= jsval_to_int32(cx, argv[2], (int32_t *)&arg2);
		ok &= jsval_to_int32(cx, argv[3], (int32_t *)&arg3);
		ok &= jsval_to_int32(cx, argv[4], (int32_t *)&arg4);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : Error processing arguments");
		cobj->playByIndex(arg0, arg1, arg2, arg3, arg4);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_playByIndex : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_gotoAndPlay(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_gotoAndPlay : Invalid Native Object");
	if (argc == 1) {
		int arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_gotoAndPlay : Error processing arguments");
		cobj->gotoAndPlay(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_gotoAndPlay : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_init(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_init : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Armature* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Armature*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_init : Error processing arguments");
		bool ret = cobj->init(arg0);
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_init : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_getMovementCount(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_getMovementCount : Invalid Native Object");
	if (argc == 0) {
		int ret = cobj->getMovementCount();
		jsval jsret;
		jsret = int32_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_getMovementCount : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_setUserObject(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setUserObject : Invalid Native Object");
	if (argc == 1) {
		cocos2d::Object* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::Object*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_setUserObject : Error processing arguments");
		cobj->setUserObject(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_setUserObject : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureAnimation* cobj = (cocostudio::ArmatureAnimation *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getCurrentMovementID();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureAnimation_create(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 1) {
		cocostudio::Armature* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Armature*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureAnimation_create : Error processing arguments");
		cocostudio::ArmatureAnimation* ret = cocostudio::ArmatureAnimation::create(arg0);
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::ArmatureAnimation>(cx, ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_create : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_studio_ArmatureAnimation_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocostudio::ArmatureAnimation* cobj = new cocostudio::ArmatureAnimation();
		cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
		if (_ccobj) {
			_ccobj->autorelease();
		}
		TypeTest<cocostudio::ArmatureAnimation> t;
		js_type_class_t *typeClass = nullptr;
		long typeId = t.s_id();
		auto typeMapIter = _js_global_type_map.find(typeId);
		CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
		typeClass = typeMapIter->second;
		CCASSERT(typeClass, "The value is null.");
		JSObject *obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(obj));
		// link the native object with the javascript object
		js_proxy_t* p = jsb_new_proxy(cobj, obj);
		JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::ArmatureAnimation");
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureAnimation_constructor : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}




void js_cocos2dx_studio_ArmatureAnimation_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (ArmatureAnimation)", obj);
}

static JSBool js_cocos2dx_studio_ArmatureAnimation_ctor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
    cocostudio::ArmatureAnimation *nobj = new cocostudio::ArmatureAnimation();
    js_proxy_t* p = jsb_new_proxy(nobj, obj);
    nobj->autorelease();
    JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::ArmatureAnimation");
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return JS_TRUE;
}

void js_register_cocos2dx_studio_ArmatureAnimation(JSContext *cx, JSObject *global) {
	jsb_ArmatureAnimation_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_ArmatureAnimation_class->name = "ArmatureAnimation";
	jsb_ArmatureAnimation_class->addProperty = JS_PropertyStub;
	jsb_ArmatureAnimation_class->delProperty = JS_DeletePropertyStub;
	jsb_ArmatureAnimation_class->getProperty = JS_PropertyStub;
	jsb_ArmatureAnimation_class->setProperty = JS_StrictPropertyStub;
	jsb_ArmatureAnimation_class->enumerate = JS_EnumerateStub;
	jsb_ArmatureAnimation_class->resolve = JS_ResolveStub;
	jsb_ArmatureAnimation_class->convert = JS_ConvertStub;
	jsb_ArmatureAnimation_class->finalize = js_cocos2dx_studio_ArmatureAnimation_finalize;
	jsb_ArmatureAnimation_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("getSpeedScale", js_cocos2dx_studio_ArmatureAnimation_getSpeedScale, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("play", js_cocos2dx_studio_ArmatureAnimation_play, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("pause", js_cocos2dx_studio_ArmatureAnimation_pause, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getUserObject", js_cocos2dx_studio_ArmatureAnimation_getUserObject, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setAnimationInternal", js_cocos2dx_studio_ArmatureAnimation_setAnimationInternal, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("gotoAndPause", js_cocos2dx_studio_ArmatureAnimation_gotoAndPause, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("resume", js_cocos2dx_studio_ArmatureAnimation_resume, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("stop", js_cocos2dx_studio_ArmatureAnimation_stop, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setAnimationData", js_cocos2dx_studio_ArmatureAnimation_setAnimationData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setSpeedScale", js_cocos2dx_studio_ArmatureAnimation_setSpeedScale, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("update", js_cocos2dx_studio_ArmatureAnimation_update, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getAnimationData", js_cocos2dx_studio_ArmatureAnimation_getAnimationData, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("playByIndex", js_cocos2dx_studio_ArmatureAnimation_playByIndex, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("gotoAndPlay", js_cocos2dx_studio_ArmatureAnimation_gotoAndPlay, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("init", js_cocos2dx_studio_ArmatureAnimation_init, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getMovementCount", js_cocos2dx_studio_ArmatureAnimation_getMovementCount, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setUserObject", js_cocos2dx_studio_ArmatureAnimation_setUserObject, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getCurrentMovementID", js_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("ctor", js_cocos2dx_studio_ArmatureAnimation_ctor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	static JSFunctionSpec st_funcs[] = {
		JS_FN("create", js_cocos2dx_studio_ArmatureAnimation_create, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_ArmatureAnimation_prototype = JS_InitClass(
		cx, global,
		NULL, // parent proto
		jsb_ArmatureAnimation_class,
		js_cocos2dx_studio_ArmatureAnimation_constructor, 0, // constructor
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "ArmatureAnimation", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocostudio::ArmatureAnimation> t;
	js_type_class_t *p;
	long typeId = t.s_id();
	if (_js_global_type_map.find(typeId) == _js_global_type_map.end())
	{
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->jsclass = jsb_ArmatureAnimation_class;
		p->proto = jsb_ArmatureAnimation_prototype;
		p->parentProto = NULL;
		_js_global_type_map.insert(std::make_pair(typeId, p));
	}
}


JSClass  *jsb_ArmatureDataManager_class;
JSObject *jsb_ArmatureDataManager_prototype;

JSBool js_cocos2dx_studio_ArmatureDataManager_getAnimationDatas(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getAnimationDatas : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Dictionary* ret = cobj->getAnimationDatas();
		jsval jsret;
		jsret = ccdictionary_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getAnimationDatas : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_removeAnimationData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeAnimationData : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeAnimationData : Error processing arguments");
		cobj->removeAnimationData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_removeAnimationData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_addArmatureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addArmatureData : Invalid Native Object");
	if (argc == 2) {
		const char* arg0;
		cocostudio::ArmatureData* arg1;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		do {
			if (!argv[1].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg1 = (cocostudio::ArmatureData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addArmatureData : Error processing arguments");
		cobj->addArmatureData(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 3) {
		const char* arg0;
		cocostudio::ArmatureData* arg1;
		const char* arg2;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		do {
			if (!argv[1].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg1 = (cocostudio::ArmatureData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg2_tmp; ok &= jsval_to_std_string(cx, argv[2], &arg2_tmp); arg2 = arg2_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addArmatureData : Error processing arguments");
		cobj->addArmatureData(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_addArmatureData : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;

	JSObject *obj = NULL;
	cocostudio::ArmatureDataManager* cobj = NULL;
	obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo : Invalid Native Object");
	do {
		if (argc == 3) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			const char* arg1;
			std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			const char* arg2;
			std::string arg2_tmp; ok &= jsval_to_std_string(cx, argv[2], &arg2_tmp); arg2 = arg2_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cobj->addArmatureFileInfo(arg0, arg1, arg2);
			JS_SET_RVAL(cx, vp, JSVAL_VOID);
			return JS_TRUE;
		}
	} while(0);

	do {
		if (argc == 1) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cobj->addArmatureFileInfo(arg0);
			JS_SET_RVAL(cx, vp, JSVAL_VOID);
			return JS_TRUE;
		}
	} while(0);

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo : Error processing arguments");
		cobj->removeArmatureFileInfo(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_getTextureDatas(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getTextureDatas : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Dictionary* ret = cobj->getTextureDatas();
		jsval jsret;
		jsret = ccdictionary_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getTextureDatas : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_getTextureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getTextureData : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getTextureData : Error processing arguments");
		cocostudio::TextureData* ret = cobj->getTextureData(arg0);
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::TextureData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getTextureData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_getArmatureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getArmatureData : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getArmatureData : Error processing arguments");
		cocostudio::ArmatureData* ret = cobj->getArmatureData(arg0);
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::ArmatureData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getArmatureData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_getAnimationData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getAnimationData : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getAnimationData : Error processing arguments");
		cocostudio::AnimationData* ret = cobj->getAnimationData(arg0);
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::AnimationData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getAnimationData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_addAnimationData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addAnimationData : Invalid Native Object");
	if (argc == 2) {
		const char* arg0;
		cocostudio::AnimationData* arg1;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		do {
			if (!argv[1].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg1 = (cocostudio::AnimationData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addAnimationData : Error processing arguments");
		cobj->addAnimationData(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 3) {
		const char* arg0;
		cocostudio::AnimationData* arg1;
		const char* arg2;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		do {
			if (!argv[1].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg1 = (cocostudio::AnimationData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg2_tmp; ok &= jsval_to_std_string(cx, argv[2], &arg2_tmp); arg2 = arg2_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addAnimationData : Error processing arguments");
		cobj->addAnimationData(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_addAnimationData : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_init(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_init : Invalid Native Object");
	if (argc == 0) {
		bool ret = cobj->init();
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_init : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_removeArmatureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeArmatureData : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeArmatureData : Error processing arguments");
		cobj->removeArmatureData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_removeArmatureData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_getArmatureDatas(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_getArmatureDatas : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Dictionary* ret = cobj->getArmatureDatas();
		jsval jsret;
		jsret = ccdictionary_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getArmatureDatas : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_removeTextureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeTextureData : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_removeTextureData : Error processing arguments");
		cobj->removeTextureData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_removeTextureData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_addTextureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addTextureData : Invalid Native Object");
	if (argc == 2) {
		const char* arg0;
		cocostudio::TextureData* arg1;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		do {
			if (!argv[1].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg1 = (cocostudio::TextureData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addTextureData : Error processing arguments");
		cobj->addTextureData(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 3) {
		const char* arg0;
		cocostudio::TextureData* arg1;
		const char* arg2;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		do {
			if (!argv[1].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg1 = (cocostudio::TextureData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg2_tmp; ok &= jsval_to_std_string(cx, argv[2], &arg2_tmp); arg2 = arg2_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addTextureData : Error processing arguments");
		cobj->addTextureData(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_addTextureData : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile : Invalid Native Object");
	if (argc == 0) {
		bool ret = cobj->isAutoLoadSpriteFile();
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::ArmatureDataManager* cobj = (cocostudio::ArmatureDataManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile : Invalid Native Object");
	if (argc == 2) {
		const char* arg0;
		const char* arg1;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile : Error processing arguments");
		cobj->addSpriteFrameFromFile(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	if (argc == 3) {
		const char* arg0;
		const char* arg1;
		const char* arg2;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
		std::string arg2_tmp; ok &= jsval_to_std_string(cx, argv[2], &arg2_tmp); arg2 = arg2_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile : Error processing arguments");
		cobj->addSpriteFrameFromFile(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_ArmatureDataManager_destoryInstance(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocostudio::ArmatureDataManager::destoryInstance();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_destoryInstance : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_studio_ArmatureDataManager_getInstance(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocostudio::ArmatureDataManager* ret = cocostudio::ArmatureDataManager::getInstance();
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::ArmatureDataManager>(cx, ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_studio_ArmatureDataManager_getInstance : wrong number of arguments");
	return JS_FALSE;
}




void js_cocos2dx_studio_ArmatureDataManager_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (ArmatureDataManager)", obj);
}

void js_register_cocos2dx_studio_ArmatureDataManager(JSContext *cx, JSObject *global) {
	jsb_ArmatureDataManager_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_ArmatureDataManager_class->name = "ArmatureDataManager";
	jsb_ArmatureDataManager_class->addProperty = JS_PropertyStub;
	jsb_ArmatureDataManager_class->delProperty = JS_DeletePropertyStub;
	jsb_ArmatureDataManager_class->getProperty = JS_PropertyStub;
	jsb_ArmatureDataManager_class->setProperty = JS_StrictPropertyStub;
	jsb_ArmatureDataManager_class->enumerate = JS_EnumerateStub;
	jsb_ArmatureDataManager_class->resolve = JS_ResolveStub;
	jsb_ArmatureDataManager_class->convert = JS_ConvertStub;
	jsb_ArmatureDataManager_class->finalize = js_cocos2dx_studio_ArmatureDataManager_finalize;
	jsb_ArmatureDataManager_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("getAnimationDatas", js_cocos2dx_studio_ArmatureDataManager_getAnimationDatas, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeAnimationData", js_cocos2dx_studio_ArmatureDataManager_removeAnimationData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addArmatureData", js_cocos2dx_studio_ArmatureDataManager_addArmatureData, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addArmatureFileInfo", js_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeArmatureFileInfo", js_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getTextureDatas", js_cocos2dx_studio_ArmatureDataManager_getTextureDatas, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getTextureData", js_cocos2dx_studio_ArmatureDataManager_getTextureData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getArmatureData", js_cocos2dx_studio_ArmatureDataManager_getArmatureData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getAnimationData", js_cocos2dx_studio_ArmatureDataManager_getAnimationData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addAnimationData", js_cocos2dx_studio_ArmatureDataManager_addAnimationData, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("init", js_cocos2dx_studio_ArmatureDataManager_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeArmatureData", js_cocos2dx_studio_ArmatureDataManager_removeArmatureData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getArmatureDatas", js_cocos2dx_studio_ArmatureDataManager_getArmatureDatas, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeTextureData", js_cocos2dx_studio_ArmatureDataManager_removeTextureData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addTextureData", js_cocos2dx_studio_ArmatureDataManager_addTextureData, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("isAutoLoadSpriteFile", js_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addSpriteFrameFromFile", js_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	static JSFunctionSpec st_funcs[] = {
		JS_FN("destoryInstance", js_cocos2dx_studio_ArmatureDataManager_destoryInstance, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getInstance", js_cocos2dx_studio_ArmatureDataManager_getInstance, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_ArmatureDataManager_prototype = JS_InitClass(
		cx, global,
		NULL, // parent proto
		jsb_ArmatureDataManager_class,
		empty_constructor, 0,
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "ArmatureDataManager", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocostudio::ArmatureDataManager> t;
	js_type_class_t *p;
	long typeId = t.s_id();
	if (_js_global_type_map.find(typeId) == _js_global_type_map.end())
	{
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->jsclass = jsb_ArmatureDataManager_class;
		p->proto = jsb_ArmatureDataManager_prototype;
		p->parentProto = NULL;
		_js_global_type_map.insert(std::make_pair(typeId, p));
	}
}


JSClass  *jsb_Armature_class;
JSObject *jsb_Armature_prototype;

JSBool js_cocos2dx_studio_Armature_getBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBone : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBone : Error processing arguments");
		cocostudio::Bone* ret = cobj->getBone(arg0);
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getBone : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_changeBoneParent(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_changeBoneParent : Invalid Native Object");
	if (argc == 2) {
		cocostudio::Bone* arg0;
		const char* arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_changeBoneParent : Error processing arguments");
		cobj->changeBoneParent(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_changeBoneParent : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getTexureAtlasWithTexture(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getTexureAtlasWithTexture : Invalid Native Object");
	if (argc == 1) {
		cocos2d::Texture2D* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::Texture2D*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getTexureAtlasWithTexture : Error processing arguments");
		cocos2d::TextureAtlas* ret = cobj->getTexureAtlasWithTexture(arg0);
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::TextureAtlas>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getTexureAtlasWithTexture : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setAnimation(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setAnimation : Invalid Native Object");
	if (argc == 1) {
		cocostudio::ArmatureAnimation* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::ArmatureAnimation*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setAnimation : Error processing arguments");
		cobj->setAnimation(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setAnimation : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getBoneAtPoint(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBoneAtPoint : Invalid Native Object");
	if (argc == 2) {
		double arg0;
		double arg1;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		ok &= JS_ValueToNumber(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBoneAtPoint : Error processing arguments");
		cocostudio::Bone* ret = cobj->getBoneAtPoint(arg0, arg1);
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getBoneAtPoint : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getArmatureTransformDirty(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getArmatureTransformDirty : Invalid Native Object");
	if (argc == 0) {
		bool ret = cobj->getArmatureTransformDirty();
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getArmatureTransformDirty : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setVersion(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setVersion : Invalid Native Object");
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setVersion : Error processing arguments");
		cobj->setVersion(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setVersion : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_updateOffsetPoint(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_updateOffsetPoint : Invalid Native Object");
	if (argc == 0) {
		cobj->updateOffsetPoint();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_updateOffsetPoint : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setColliderFilter(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setColliderFilter : Invalid Native Object");
	if (argc == 1) {
		cocostudio::ColliderFilter* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::ColliderFilter*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setColliderFilter : Error processing arguments");
		cobj->setColliderFilter(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setColliderFilter : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setName : Error processing arguments");
		cobj->setName(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_removeBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_removeBone : Invalid Native Object");
	if (argc == 2) {
		cocostudio::Bone* arg0;
		JSBool arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		ok &= JS_ValueToBoolean(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_removeBone : Error processing arguments");
		cobj->removeBone(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_removeBone : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getBatchNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBatchNode : Invalid Native Object");
	if (argc == 0) {
		cocostudio::BatchNode* ret = cobj->getBatchNode();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::BatchNode>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getBatchNode : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getName(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getName : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getName();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getName : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_init(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;

	JSObject *obj = NULL;
	cocostudio::Armature* cobj = NULL;
	obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_init : Invalid Native Object");
	do {
		if (argc == 1) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			bool ret = cobj->init(arg0);
			jsval jsret;
			jsret = BOOLEAN_TO_JSVAL(ret);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	do {
		if (argc == 0) {
			bool ret = cobj->init();
			jsval jsret;
			jsret = BOOLEAN_TO_JSVAL(ret);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	do {
		if (argc == 2) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cocostudio::Bone* arg1;
			do {
				if (!argv[1].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg1 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			bool ret = cobj->init(arg0, arg1);
			jsval jsret;
			jsret = BOOLEAN_TO_JSVAL(ret);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while(0);

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_init : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getNodeToParentTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getNodeToParentTransform : Invalid Native Object");
	if (argc == 0) {
		cocos2d::AffineTransform ret = cobj->getNodeToParentTransform();
		jsval jsret;
		jsret = ccaffinetransform_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getNodeToParentTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setParentBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setParentBone : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Bone* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setParentBone : Error processing arguments");
		cobj->setParentBone(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setParentBone : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getBoundingBox(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBoundingBox : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Rect ret = cobj->getBoundingBox();
		jsval jsret;
		jsret = ccrect_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getBoundingBox : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setBatchNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setBatchNode : Invalid Native Object");
	if (argc == 1) {
		cocostudio::BatchNode* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::BatchNode*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setBatchNode : Error processing arguments");
		cobj->setBatchNode(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setBatchNode : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_draw(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_draw : Invalid Native Object");
	if (argc == 0) {
		cobj->draw();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_draw : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setArmatureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setArmatureData : Invalid Native Object");
	if (argc == 1) {
		cocostudio::ArmatureData* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::ArmatureData*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setArmatureData : Error processing arguments");
		cobj->setArmatureData(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setArmatureData : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setTextureAtlas : Invalid Native Object");
	if (argc == 1) {
		cocos2d::TextureAtlas* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::TextureAtlas*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_setTextureAtlas : Error processing arguments");
		cobj->setTextureAtlas(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_setTextureAtlas : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_addBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_addBone : Invalid Native Object");
	if (argc == 2) {
		cocostudio::Bone* arg0;
		const char* arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_addBone : Error processing arguments");
		cobj->addBone(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_addBone : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_update(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_update : Invalid Native Object");
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Armature_update : Error processing arguments");
		cobj->update(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_update : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getArmatureData(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getArmatureData : Invalid Native Object");
	if (argc == 0) {
		cocostudio::ArmatureData* ret = cobj->getArmatureData();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::ArmatureData>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getArmatureData : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getParentBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getParentBone : Invalid Native Object");
	if (argc == 0) {
		cocostudio::Bone* ret = cobj->getParentBone();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getParentBone : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getVersion(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getVersion : Invalid Native Object");
	if (argc == 0) {
		float ret = cobj->getVersion();
		jsval jsret;
		jsret = DOUBLE_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getVersion : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getAnimation(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getAnimation : Invalid Native Object");
	if (argc == 0) {
		cocostudio::ArmatureAnimation* ret = cobj->getAnimation();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::ArmatureAnimation>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getAnimation : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getBoneDic(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getBoneDic : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Dictionary* ret = cobj->getBoneDic();
		jsval jsret;
		jsret = ccdictionary_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getBoneDic : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Armature* cobj = (cocostudio::Armature *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Armature_getTextureAtlas : Invalid Native Object");
	if (argc == 0) {
		cocos2d::TextureAtlas* ret = cobj->getTextureAtlas();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::TextureAtlas>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_getTextureAtlas : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_create(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	
	do {
		if (argc == 1) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cocostudio::Armature* ret = cocostudio::Armature::create(arg0);
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Armature>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	
	do {
		if (argc == 0) {
			cocostudio::Armature* ret = cocostudio::Armature::create();
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Armature>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	
	do {
		if (argc == 2) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cocostudio::Bone* arg1;
			do {
				if (!argv[1].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg1 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocostudio::Armature* ret = cocostudio::Armature::create(arg0, arg1);
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Armature>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	JS_ReportError(cx, "js_cocos2dx_studio_Armature_create : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Armature_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocostudio::Armature* cobj = new cocostudio::Armature();
		cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
		if (_ccobj) {
			_ccobj->autorelease();
		}
		TypeTest<cocostudio::Armature> t;
		js_type_class_t *typeClass = nullptr;
		long typeId = t.s_id();
		auto typeMapIter = _js_global_type_map.find(typeId);
		CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
		typeClass = typeMapIter->second;
		CCASSERT(typeClass, "The value is null.");
		JSObject *obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(obj));
		// link the native object with the javascript object
		js_proxy_t* p = jsb_new_proxy(cobj, obj);
		JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::Armature");
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Armature_constructor : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}



extern JSObject *jsb_NodeRGBA_prototype;

void js_cocos2dx_studio_Armature_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (Armature)", obj);
}

static JSBool js_cocos2dx_studio_Armature_ctor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
    cocostudio::Armature *nobj = new cocostudio::Armature();
    js_proxy_t* p = jsb_new_proxy(nobj, obj);
    nobj->autorelease();
    JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::Armature");
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return JS_TRUE;
}

void js_register_cocos2dx_studio_Armature(JSContext *cx, JSObject *global) {
	jsb_Armature_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_Armature_class->name = "Armature";
	jsb_Armature_class->addProperty = JS_PropertyStub;
	jsb_Armature_class->delProperty = JS_DeletePropertyStub;
	jsb_Armature_class->getProperty = JS_PropertyStub;
	jsb_Armature_class->setProperty = JS_StrictPropertyStub;
	jsb_Armature_class->enumerate = JS_EnumerateStub;
	jsb_Armature_class->resolve = JS_ResolveStub;
	jsb_Armature_class->convert = JS_ConvertStub;
	jsb_Armature_class->finalize = js_cocos2dx_studio_Armature_finalize;
	jsb_Armature_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("getBone", js_cocos2dx_studio_Armature_getBone, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("changeBoneParent", js_cocos2dx_studio_Armature_changeBoneParent, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getTexureAtlasWithTexture", js_cocos2dx_studio_Armature_getTexureAtlasWithTexture, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setAnimation", js_cocos2dx_studio_Armature_setAnimation, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getBoneAtPoint", js_cocos2dx_studio_Armature_getBoneAtPoint, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getArmatureTransformDirty", js_cocos2dx_studio_Armature_getArmatureTransformDirty, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setVersion", js_cocos2dx_studio_Armature_setVersion, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateOffsetPoint", js_cocos2dx_studio_Armature_updateOffsetPoint, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setColliderFilter", js_cocos2dx_studio_Armature_setColliderFilter, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setName", js_cocos2dx_studio_Armature_setName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("removeBone", js_cocos2dx_studio_Armature_removeBone, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getBatchNode", js_cocos2dx_studio_Armature_getBatchNode, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getName", js_cocos2dx_studio_Armature_getName, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("init", js_cocos2dx_studio_Armature_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getNodeToParentTransform", js_cocos2dx_studio_Armature_getNodeToParentTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setParentBone", js_cocos2dx_studio_Armature_setParentBone, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getBoundingBox", js_cocos2dx_studio_Armature_getBoundingBox, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setBatchNode", js_cocos2dx_studio_Armature_setBatchNode, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("draw", js_cocos2dx_studio_Armature_draw, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setArmatureData", js_cocos2dx_studio_Armature_setArmatureData, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setTextureAtlas", js_cocos2dx_studio_Armature_setTextureAtlas, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addBone", js_cocos2dx_studio_Armature_addBone, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("update", js_cocos2dx_studio_Armature_update, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getArmatureData", js_cocos2dx_studio_Armature_getArmatureData, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getParentBone", js_cocos2dx_studio_Armature_getParentBone, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getVersion", js_cocos2dx_studio_Armature_getVersion, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getAnimation", js_cocos2dx_studio_Armature_getAnimation, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getBoneDic", js_cocos2dx_studio_Armature_getBoneDic, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getTextureAtlas", js_cocos2dx_studio_Armature_getTextureAtlas, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("ctor", js_cocos2dx_studio_Armature_ctor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	static JSFunctionSpec st_funcs[] = {
		JS_FN("create", js_cocos2dx_studio_Armature_create, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_Armature_prototype = JS_InitClass(
		cx, global,
		jsb_NodeRGBA_prototype,
		jsb_Armature_class,
		js_cocos2dx_studio_Armature_constructor, 0, // constructor
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "Armature", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocostudio::Armature> t;
	js_type_class_t *p;
	long typeId = t.s_id();
	if (_js_global_type_map.find(typeId) == _js_global_type_map.end())
	{
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->jsclass = jsb_Armature_class;
		p->proto = jsb_Armature_prototype;
		p->parentProto = jsb_NodeRGBA_prototype;
		_js_global_type_map.insert(std::make_pair(typeId, p));
	}
}


JSClass  *jsb_Skin_class;
JSObject *jsb_Skin_prototype;

JSBool js_cocos2dx_studio_Skin_getBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_getBone : Invalid Native Object");
	if (argc == 0) {
		cocostudio::Bone* ret = cobj->getBone();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Bone>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_getBone : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_getNodeToWorldTransformAR(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_getNodeToWorldTransformAR : Invalid Native Object");
	if (argc == 0) {
		cocos2d::AffineTransform ret = cobj->getNodeToWorldTransformAR();
		jsval jsret;
		jsret = ccaffinetransform_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_getNodeToWorldTransformAR : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_getNodeToWorldTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_getNodeToWorldTransform : Invalid Native Object");
	if (argc == 0) {
		cocos2d::AffineTransform ret = cobj->getNodeToWorldTransform();
		jsval jsret;
		jsret = ccaffinetransform_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_getNodeToWorldTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_updateTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_updateTransform : Invalid Native Object");
	if (argc == 0) {
		cobj->updateTransform();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_updateTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_getDisplayName(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_getDisplayName : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getDisplayName();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_getDisplayName : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_updateArmatureTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_updateArmatureTransform : Invalid Native Object");
	if (argc == 0) {
		cobj->updateArmatureTransform();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_updateArmatureTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_initWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_initWithSpriteFrameName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Skin_initWithSpriteFrameName : Error processing arguments");
		bool ret = cobj->initWithSpriteFrameName(arg0);
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_initWithSpriteFrameName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_initWithFile(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_initWithFile : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Skin_initWithFile : Error processing arguments");
		bool ret = cobj->initWithFile(arg0);
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_initWithFile : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_setBone(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocostudio::Skin* cobj = (cocostudio::Skin *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_studio_Skin_setBone : Invalid Native Object");
	if (argc == 1) {
		cocostudio::Bone* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocostudio::Bone*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Skin_setBone : Error processing arguments");
		cobj->setBone(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_setBone : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_create(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	
	do {
		if (argc == 1) {
			const char* arg0;
			std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
			if (!ok) { ok = JS_TRUE; break; }
			cocostudio::Skin* ret = cocostudio::Skin::create(arg0);
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Skin>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	
	do {
		if (argc == 0) {
			cocostudio::Skin* ret = cocostudio::Skin::create();
			jsval jsret;
			do {
				if (ret) {
					js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Skin>(cx, ret);
					jsret = OBJECT_TO_JSVAL(proxy->obj);
				} else {
					jsret = JSVAL_NULL;
				}
			} while (0);
			JS_SET_RVAL(cx, vp, jsret);
			return JS_TRUE;
		}
	} while (0);
	JS_ReportError(cx, "js_cocos2dx_studio_Skin_create : wrong number of arguments");
	return JS_FALSE;
}
JSBool js_cocos2dx_studio_Skin_createWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_studio_Skin_createWithSpriteFrameName : Error processing arguments");
		cocostudio::Skin* ret = cocostudio::Skin::createWithSpriteFrameName(arg0);
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocostudio::Skin>(cx, ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_studio_Skin_createWithSpriteFrameName : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_studio_Skin_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocostudio::Skin* cobj = new cocostudio::Skin();
		cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
		if (_ccobj) {
			_ccobj->autorelease();
		}
		TypeTest<cocostudio::Skin> t;
		js_type_class_t *typeClass = nullptr;
		long typeId = t.s_id();
		auto typeMapIter = _js_global_type_map.find(typeId);
		CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
		typeClass = typeMapIter->second;
		CCASSERT(typeClass, "The value is null.");
		JSObject *obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(obj));
		// link the native object with the javascript object
		js_proxy_t* p = jsb_new_proxy(cobj, obj);
		JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::Skin");
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_studio_Skin_constructor : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}



extern JSObject *jsb_Sprite_prototype;

void js_cocos2dx_studio_Skin_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (Skin)", obj);
}

static JSBool js_cocos2dx_studio_Skin_ctor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
    cocostudio::Skin *nobj = new cocostudio::Skin();
    js_proxy_t* p = jsb_new_proxy(nobj, obj);
    nobj->autorelease();
    JS_AddNamedObjectRoot(cx, &p->obj, "cocostudio::Skin");
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return JS_TRUE;
}

void js_register_cocos2dx_studio_Skin(JSContext *cx, JSObject *global) {
	jsb_Skin_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_Skin_class->name = "Skin";
	jsb_Skin_class->addProperty = JS_PropertyStub;
	jsb_Skin_class->delProperty = JS_DeletePropertyStub;
	jsb_Skin_class->getProperty = JS_PropertyStub;
	jsb_Skin_class->setProperty = JS_StrictPropertyStub;
	jsb_Skin_class->enumerate = JS_EnumerateStub;
	jsb_Skin_class->resolve = JS_ResolveStub;
	jsb_Skin_class->convert = JS_ConvertStub;
	jsb_Skin_class->finalize = js_cocos2dx_studio_Skin_finalize;
	jsb_Skin_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("getBone", js_cocos2dx_studio_Skin_getBone, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getNodeToWorldTransformAR", js_cocos2dx_studio_Skin_getNodeToWorldTransformAR, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getNodeToWorldTransform", js_cocos2dx_studio_Skin_getNodeToWorldTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateTransform", js_cocos2dx_studio_Skin_updateTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDisplayName", js_cocos2dx_studio_Skin_getDisplayName, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("updateArmatureTransform", js_cocos2dx_studio_Skin_updateArmatureTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("initWithSpriteFrameName", js_cocos2dx_studio_Skin_initWithSpriteFrameName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("initWithFile", js_cocos2dx_studio_Skin_initWithFile, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setBone", js_cocos2dx_studio_Skin_setBone, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("ctor", js_cocos2dx_studio_Skin_ctor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	static JSFunctionSpec st_funcs[] = {
		JS_FN("create", js_cocos2dx_studio_Skin_create, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("createWithSpriteFrameName", js_cocos2dx_studio_Skin_createWithSpriteFrameName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_Skin_prototype = JS_InitClass(
		cx, global,
		jsb_Sprite_prototype,
		jsb_Skin_class,
		js_cocos2dx_studio_Skin_constructor, 0, // constructor
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "Skin", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocostudio::Skin> t;
	js_type_class_t *p;
	long typeId = t.s_id();
	if (_js_global_type_map.find(typeId) == _js_global_type_map.end())
	{
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->jsclass = jsb_Skin_class;
		p->proto = jsb_Skin_prototype;
		p->parentProto = jsb_Sprite_prototype;
		_js_global_type_map.insert(std::make_pair(typeId, p));
	}
}

void register_all_cocos2dx_studio(JSContext* cx, JSObject* obj) {
	// first, try to get the ns
	JS::RootedValue nsval(cx);
	JSObject *ns;
	JS_GetProperty(cx, obj, "cc", &nsval);
	if (nsval == JSVAL_VOID) {
		ns = JS_NewObject(cx, NULL, NULL, NULL);
		nsval = OBJECT_TO_JSVAL(ns);
		JS_SetProperty(cx, obj, "cc", nsval);
	} else {
		JS_ValueToObject(cx, nsval, &ns);
	}
	obj = ns;

	js_register_cocos2dx_studio_Skin(cx, obj);
	js_register_cocos2dx_studio_ArmatureAnimation(cx, obj);
	js_register_cocos2dx_studio_Armature(cx, obj);
	js_register_cocos2dx_studio_ArmatureDataManager(cx, obj);
	js_register_cocos2dx_studio_Bone(cx, obj);
}

