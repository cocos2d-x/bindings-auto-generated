#include "jsb_cocos2dx_gui_auto.hpp"
#include "cocos2d_specifics.hpp"
#include "CocosGUI.h"

template<class T>
static JSBool dummy_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
    JS::RootedValue initializing(cx);
    JSBool isNewValid = JS_TRUE;
    JSObject* global = ScriptingCore::getInstance()->getGlobalObject();
	isNewValid = JS_GetProperty(cx, global, "initializing", &initializing) && JSVAL_TO_BOOLEAN(initializing);
	if (isNewValid)
	{
		TypeTest<T> t;
		js_type_class_t *typeClass = nullptr;
		std::string typeName = t.s_name();
		auto typeMapIter = _js_global_type_map.find(typeName);
		CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
		typeClass = typeMapIter->second;
		CCASSERT(typeClass, "The value is null.");

		JSObject *_tmp = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(_tmp));
		return JS_TRUE;
	}

    JS_ReportError(cx, "Don't use `new cc.XXX`, please use `cc.XXX.create` instead! ");
    return JS_FALSE;
}

static JSBool empty_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
	return JS_FALSE;
}


JSClass  *jsb_UIHelper_class;
JSObject *jsb_UIHelper_prototype;

JSBool js_cocos2dx_gui_UIHelper_seekActionWidgetByActionTag(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 2) {
		cocos2d::gui::Widget* arg0;
		int arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::gui::Widget*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_gui_UIHelper_seekActionWidgetByActionTag : Error processing arguments");
		cocos2d::gui::Widget* ret = cocos2d::gui::UIHelper::seekActionWidgetByActionTag(arg0, arg1);
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::gui::Widget>(cx, (cocos2d::gui::Widget*)ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_gui_UIHelper_seekActionWidgetByActionTag : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_gui_UIHelper_seekWidgetByTag(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 2) {
		cocos2d::gui::Widget* arg0;
		int arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::gui::Widget*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		ok &= jsval_to_int32(cx, argv[1], (int32_t *)&arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_gui_UIHelper_seekWidgetByTag : Error processing arguments");
		cocos2d::gui::Widget* ret = cocos2d::gui::UIHelper::seekWidgetByTag(arg0, arg1);
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::gui::Widget>(cx, (cocos2d::gui::Widget*)ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_gui_UIHelper_seekWidgetByTag : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_gui_UIHelper_seekWidgetByRelativeName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 2) {
		cocos2d::gui::Widget* arg0;
		const char* arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::gui::Widget*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_gui_UIHelper_seekWidgetByRelativeName : Error processing arguments");
		cocos2d::gui::Widget* ret = cocos2d::gui::UIHelper::seekWidgetByRelativeName(arg0, arg1);
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::gui::Widget>(cx, (cocos2d::gui::Widget*)ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_gui_UIHelper_seekWidgetByRelativeName : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_gui_UIHelper_seekWidgetByName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 2) {
		cocos2d::gui::Widget* arg0;
		const char* arg1;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocos2d::gui::Widget*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		std::string arg1_tmp; ok &= jsval_to_std_string(cx, argv[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_gui_UIHelper_seekWidgetByName : Error processing arguments");
		cocos2d::gui::Widget* ret = cocos2d::gui::UIHelper::seekWidgetByName(arg0, arg1);
		jsval jsret;
		do {
		if (ret) {
			js_proxy_t *proxy = js_get_or_create_proxy<cocos2d::gui::Widget>(cx, (cocos2d::gui::Widget*)ret);
			jsret = OBJECT_TO_JSVAL(proxy->obj);
		} else {
			jsret = JSVAL_NULL;
		}
	} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_gui_UIHelper_seekWidgetByName : wrong number of arguments");
	return JS_FALSE;
}



void js_cocos2dx_gui_UIHelper_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (UIHelper)", obj);
}

void js_register_cocos2dx_gui_UIHelper(JSContext *cx, JSObject *global) {
	jsb_UIHelper_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_UIHelper_class->name = "UIHelper";
	jsb_UIHelper_class->addProperty = JS_PropertyStub;
	jsb_UIHelper_class->delProperty = JS_DeletePropertyStub;
	jsb_UIHelper_class->getProperty = JS_PropertyStub;
	jsb_UIHelper_class->setProperty = JS_StrictPropertyStub;
	jsb_UIHelper_class->enumerate = JS_EnumerateStub;
	jsb_UIHelper_class->resolve = JS_ResolveStub;
	jsb_UIHelper_class->convert = JS_ConvertStub;
	jsb_UIHelper_class->finalize = js_cocos2dx_gui_UIHelper_finalize;
	jsb_UIHelper_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	JSPropertySpec *properties = NULL;

	JSFunctionSpec *funcs = NULL;

	static JSFunctionSpec st_funcs[] = {
		JS_FN("seekActionWidgetByActionTag", js_cocos2dx_gui_UIHelper_seekActionWidgetByActionTag, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("seekWidgetByTag", js_cocos2dx_gui_UIHelper_seekWidgetByTag, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("seekWidgetByRelativeName", js_cocos2dx_gui_UIHelper_seekWidgetByRelativeName, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("seekWidgetByName", js_cocos2dx_gui_UIHelper_seekWidgetByName, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_UIHelper_prototype = JS_InitClass(
		cx, global,
		NULL, // parent proto
		jsb_UIHelper_class,
		empty_constructor, 0,
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "UIHelper", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocos2d::gui::UIHelper> t;
	js_type_class_t *p;
	std::string typeName = t.s_name();
	if (_js_global_type_map.find(typeName) == _js_global_type_map.end())
	{
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->jsclass = jsb_UIHelper_class;
		p->proto = jsb_UIHelper_prototype;
		p->parentProto = NULL;
		_js_global_type_map.insert(std::make_pair(typeName, p));
	}
}

void register_all_cocos2dx_gui(JSContext* cx, JSObject* obj) {
	// first, try to get the ns
	JS::RootedValue nsval(cx);
	JSObject *ns;
	JS_GetProperty(cx, obj, "ccs", &nsval);
	if (nsval == JSVAL_VOID) {
		ns = JS_NewObject(cx, NULL, NULL, NULL);
		nsval = OBJECT_TO_JSVAL(ns);
		JS_SetProperty(cx, obj, "ccs", nsval);
	} else {
		JS_ValueToObject(cx, nsval, &ns);
	}
	obj = ns;

	js_register_cocos2dx_gui_UIHelper(cx, obj);
}

