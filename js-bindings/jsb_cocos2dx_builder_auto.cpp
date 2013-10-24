#include "jsb_cocos2dx_builder_auto.hpp"
#include "cocos2d_specifics.hpp"
#include "CocosBuilder.h"

template<class T>
static JSBool dummy_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
	TypeTest<T> t;
	T* cobj = new T();
	cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
	if (_ccobj) {
		_ccobj->autorelease();
	}
	js_type_class_t *p;
	uint32_t typeId = t.s_id();
	HASH_FIND_INT(_js_global_type_ht, &typeId, p);
	assert(p);
	JSObject *_tmp = JS_NewObject(cx, p->jsclass, p->proto, p->parentProto);
	js_proxy_t *pp = jsb_new_proxy(cobj, _tmp);
	JS_AddObjectRoot(cx, &pp->obj);
	JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(_tmp));

	return JS_TRUE;
}

static JSBool empty_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
	return JS_FALSE;
}


JSClass  *jsb_CCBAnimationManager_class;
JSObject *jsb_CCBAnimationManager_prototype;

JSBool js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode : Invalid Native Object");
	if (argc == 2) {
		Node* arg0;
		Node* arg1;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode : Error processing arguments");
		cobj->moveAnimationsFromNode(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId : Invalid Native Object");
	if (argc == 1) {
		int arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId : Error processing arguments");
		cobj->setAutoPlaySequenceId(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getDocumentCallbackNames();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel : Invalid Native Object");
	if (argc == 1) {
		cocosbuilder::CCBSequenceProperty* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocosbuilder::CCBSequenceProperty*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel : Error processing arguments");
		Object* ret = cobj->actionForSoundChannel(arg0);
		jsval jsret;
		#pragma warning NO CONVERSION FROM NATIVE FOR Object*;
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setBaseValue : Invalid Native Object");
	if (argc == 3) {
		Object* arg0;
		Node* arg1;
		const char* arg2;
		#pragma warning NO CONVERSION TO NATIVE FOR Object*;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		std::string arg2_tmp; ok &= jsval_to_std_string(cx, argv[2], &arg2_tmp); arg2 = arg2_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setBaseValue : Error processing arguments");
		cobj->setBaseValue(arg0, arg1, arg2);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setBaseValue : wrong number of arguments: %d, was expecting %d", argc, 3);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getDocumentOutletNodes();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_addNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addNode : Invalid Native Object");
	if (argc == 2) {
		Node* arg0;
		Dictionary* arg1;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		ok &= jsval_to_ccdictionary(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addNode : Error processing arguments");
		cobj->addNode(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_addNode : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getLastCompletedSequenceName();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setRootNode : Invalid Native Object");
	if (argc == 1) {
		Node* arg0;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setRootNode : Error processing arguments");
		cobj->setRootNode(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setRootNode : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration : Invalid Native Object");
	if (argc == 2) {
		const char* arg0;
		double arg1;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		ok &= JS_ValueToNumber(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration : Error processing arguments");
		cobj->runAnimationsForSequenceNamedTweenDuration(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName : Error processing arguments");
		cobj->addDocumentOutletName(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getSequences(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getSequences : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getSequences();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getSequences : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize : Invalid Native Object");
	if (argc == 0) {
		cocos2d::Size ret = cobj->getRootContainerSize();
		jsval jsret;
		#pragma warning NO CONVERSION FROM NATIVE FOR const Size;
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName : Error processing arguments");
		cobj->setDocumentControllerName(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getContainerSize : Invalid Native Object");
	if (argc == 1) {
		Node* arg0;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getContainerSize : Error processing arguments");
		cocos2d::Size ret = cobj->getContainerSize(arg0);
		jsval jsret;
		#pragma warning NO CONVERSION FROM NATIVE FOR const Size;
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getContainerSize : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel : Invalid Native Object");
	if (argc == 1) {
		cocosbuilder::CCBSequenceProperty* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocosbuilder::CCBSequenceProperty*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel : Error processing arguments");
		Object* ret = cobj->actionForCallbackChannel(arg0);
		jsval jsret;
		#pragma warning NO CONVERSION FROM NATIVE FOR Object*;
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getDocumentOutletNames();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents : Invalid Native Object");
	if (argc == 1) {
		cocos2d::extension::Control::EventType arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents : Error processing arguments");
		cobj->addDocumentCallbackControlEvents(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_init : Invalid Native Object");
	if (argc == 0) {
		bool ret = cobj->init();
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_init : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getKeyframeCallbacks();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getDocumentCallbackControlEvents();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize : Invalid Native Object");
	if (argc == 1) {
		cocos2d::Size arg0;
		#pragma warning NO CONVERSION TO NATIVE FOR const Size;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize : Error processing arguments");
		cobj->setRootContainerSize(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration : Invalid Native Object");
	if (argc == 2) {
		int arg0;
		double arg1;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		ok &= JS_ValueToNumber(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration : Error processing arguments");
		cobj->runAnimationsForSequenceIdTweenDuration(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName : Invalid Native Object");
	if (argc == 0) {
		const char* ret = cobj->getRunningSequenceName();
		jsval jsret;
		jsret = c_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId : Invalid Native Object");
	if (argc == 0) {
		int ret = cobj->getAutoPlaySequenceId();
		jsval jsret;
		jsret = int32_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName : Error processing arguments");
		cobj->addDocumentCallbackName(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getRootNode : Invalid Native Object");
	if (argc == 0) {
		Node* ret = cobj->getRootNode();
		jsval jsret;
		#pragma warning NO CONVERSION FROM NATIVE FOR Node*;
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getRootNode : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode : Invalid Native Object");
	if (argc == 1) {
		Node* arg0;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode : Error processing arguments");
		cobj->addDocumentOutletNode(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setDelegate : Invalid Native Object");
	if (argc == 1) {
		cocosbuilder::CCBAnimationManagerDelegate* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocosbuilder::CCBAnimationManagerDelegate*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setDelegate : Error processing arguments");
		cobj->setDelegate(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setDelegate : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration : Error processing arguments");
		float ret = cobj->getSequenceDuration(arg0);
		jsval jsret;
		jsret = DOUBLE_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode : Invalid Native Object");
	if (argc == 1) {
		Node* arg0;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode : Error processing arguments");
		cobj->addDocumentCallbackNode(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDelegate(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDelegate : Invalid Native Object");
	if (argc == 0) {
		cocosbuilder::CCBAnimationManagerDelegate* ret = cobj->getDelegate();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocosbuilder::CCBAnimationManagerDelegate>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDelegate : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed : Error processing arguments");
		cobj->runAnimationsForSequenceNamed(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getSequenceId(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getSequenceId : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getSequenceId : Error processing arguments");
		int ret = cobj->getSequenceId(arg0);
		jsval jsret;
		jsret = int32_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getSequenceId : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setCallFunc(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setCallFunc : Invalid Native Object");
	if (argc == 2) {
		CallFunc* arg0;
		std::string arg1;
		#pragma warning NO CONVERSION TO NATIVE FOR CallFunc*;
		ok &= jsval_to_std_string(cx, argv[1], &arg1);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setCallFunc : Error processing arguments");
		cobj->setCallFunc(arg0, arg1);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setCallFunc : wrong number of arguments: %d, was expecting %d", argc, 2);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getDocumentCallbackNodes();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setSequences : Invalid Native Object");
	if (argc == 1) {
		Array* arg0;
		ok &= jsval_to_ccarray(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_setSequences : Error processing arguments");
		cobj->setSequences(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_setSequences : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_debug : Invalid Native Object");
	if (argc == 0) {
		cobj->debug();
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_debug : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBAnimationManager* cobj = (cocosbuilder::CCBAnimationManager *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getDocumentControllerName();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
	if (argc == 0) {
		cocosbuilder::CCBAnimationManager* cobj = new cocosbuilder::CCBAnimationManager();
		cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
		if (_ccobj) {
			_ccobj->autorelease();
		}
		TypeTest<cocosbuilder::CCBAnimationManager> t;
		js_type_class_t *typeClass;
		uint32_t typeId = t.s_id();
		HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
		assert(typeClass);
		JSObject *obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(obj));
		// link the native object with the javascript object
		js_proxy_t* p = jsb_new_proxy(cobj, obj);
		JS_AddNamedObjectRoot(cx, &p->obj, "cocosbuilder::CCBAnimationManager");
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBAnimationManager_constructor : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}




void js_cocos2dx_builder_CCBAnimationManager_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (CCBAnimationManager)", obj);
}

static JSBool js_cocos2dx_builder_CCBAnimationManager_ctor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
    cocosbuilder::CCBAnimationManager *nobj = new cocosbuilder::CCBAnimationManager();
    js_proxy_t* p = jsb_new_proxy(nobj, obj);
    nobj->autorelease();
    JS_AddNamedObjectRoot(cx, &p->obj, "cocosbuilder::CCBAnimationManager");
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return JS_TRUE;
}

void js_register_cocos2dx_builder_CCBAnimationManager(JSContext *cx, JSObject *global) {
	jsb_CCBAnimationManager_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_CCBAnimationManager_class->name = "BuilderAnimationManager";
	jsb_CCBAnimationManager_class->addProperty = JS_PropertyStub;
	jsb_CCBAnimationManager_class->delProperty = JS_DeletePropertyStub;
	jsb_CCBAnimationManager_class->getProperty = JS_PropertyStub;
	jsb_CCBAnimationManager_class->setProperty = JS_StrictPropertyStub;
	jsb_CCBAnimationManager_class->enumerate = JS_EnumerateStub;
	jsb_CCBAnimationManager_class->resolve = JS_ResolveStub;
	jsb_CCBAnimationManager_class->convert = JS_ConvertStub;
	jsb_CCBAnimationManager_class->finalize = js_cocos2dx_builder_CCBAnimationManager_finalize;
	jsb_CCBAnimationManager_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("moveAnimationsFromNode", js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setAutoPlaySequenceId", js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDocumentCallbackNames", js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("actionForSoundChannel", js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setBaseValue", js_cocos2dx_builder_CCBAnimationManager_setBaseValue, 3, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDocumentOutletNodes", js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addNode", js_cocos2dx_builder_CCBAnimationManager_addNode, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getLastCompletedSequenceName", js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setRootNode", js_cocos2dx_builder_CCBAnimationManager_setRootNode, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("runAnimationsForSequenceNamedTweenDuration", js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDocumentOutletName", js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getSequences", js_cocos2dx_builder_CCBAnimationManager_getSequences, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getRootContainerSize", js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setDocumentControllerName", js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getContainerSize", js_cocos2dx_builder_CCBAnimationManager_getContainerSize, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("actionForCallbackChannel", js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDocumentOutletNames", js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDocumentCallbackControlEvents", js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("init", js_cocos2dx_builder_CCBAnimationManager_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getKeyframeCallbacks", js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDocumentCallbackControlEvents", js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setRootContainerSize", js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("runAnimationsForSequenceIdTweenDuration", js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getRunningSequenceName", js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getAutoPlaySequenceId", js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDocumentCallbackName", js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getRootNode", js_cocos2dx_builder_CCBAnimationManager_getRootNode, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDocumentOutletNode", js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setDelegate", js_cocos2dx_builder_CCBAnimationManager_setDelegate, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getSequenceDuration", js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDocumentCallbackNode", js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDelegate", js_cocos2dx_builder_CCBAnimationManager_getDelegate, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("runAnimationsForSequenceNamed", js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getSequenceId", js_cocos2dx_builder_CCBAnimationManager_getSequenceId, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setCallFunc", js_cocos2dx_builder_CCBAnimationManager_setCallFunc, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDocumentCallbackNodes", js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setSequences", js_cocos2dx_builder_CCBAnimationManager_setSequences, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("debug", js_cocos2dx_builder_CCBAnimationManager_debug, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getDocumentControllerName", js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("ctor", js_cocos2dx_builder_CCBAnimationManager_ctor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	JSFunctionSpec *st_funcs = NULL;

	jsb_CCBAnimationManager_prototype = JS_InitClass(
		cx, global,
		NULL, // parent proto
		jsb_CCBAnimationManager_class,
		js_cocos2dx_builder_CCBAnimationManager_constructor, 0, // constructor
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "BuilderAnimationManager", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocosbuilder::CCBAnimationManager> t;
	js_type_class_t *p;
	uint32_t typeId = t.s_id();
	HASH_FIND_INT(_js_global_type_ht, &typeId, p);
	if (!p) {
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->type = typeId;
		p->jsclass = jsb_CCBAnimationManager_class;
		p->proto = jsb_CCBAnimationManager_prototype;
		p->parentProto = NULL;
		HASH_ADD_INT(_js_global_type_ht, type, p);
	}
}


JSClass  *jsb_CCBReader_class;
JSObject *jsb_CCBReader_prototype;

JSBool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getAnimationManager : Invalid Native Object");
	if (argc == 0) {
		cocosbuilder::CCBAnimationManager* ret = cobj->getAnimationManager();
		jsval jsret;
		do {
			if (ret) {
				js_proxy_t *proxy = js_get_or_create_proxy<cocosbuilder::CCBAnimationManager>(cx, ret);
				jsret = OBJECT_TO_JSVAL(proxy->obj);
			} else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getAnimationManager : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_setAnimationManager : Invalid Native Object");
	if (argc == 1) {
		cocosbuilder::CCBAnimationManager* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocosbuilder::CCBAnimationManager*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_setAnimationManager : Error processing arguments");
		cobj->setAnimationManager(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_setAnimationManager : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addOwnerOutletName : Invalid Native Object");
	if (argc == 1) {
		std::string arg0;
		ok &= jsval_to_std_string(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addOwnerOutletName : Error processing arguments");
		cobj->addOwnerOutletName(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_addOwnerOutletName : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getOwnerCallbackNames : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getOwnerCallbackNames();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getOwnerCallbackNames : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents : Invalid Native Object");
	if (argc == 1) {
		cocos2d::extension::Control::EventType arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents : Error processing arguments");
		cobj->addDocumentCallbackControlEvents(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_setCCBRootPath : Invalid Native Object");
	if (argc == 1) {
		const char* arg0;
		std::string arg0_tmp; ok &= jsval_to_std_string(cx, argv[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_setCCBRootPath : Error processing arguments");
		cobj->setCCBRootPath(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_setCCBRootPath : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addOwnerOutletNode : Invalid Native Object");
	if (argc == 1) {
		Node* arg0;
		#pragma warning NO CONVERSION TO NATIVE FOR Node*;
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addOwnerOutletNode : Error processing arguments");
		cobj->addOwnerOutletNode(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_addOwnerOutletNode : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getOwnerCallbackNodes();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq : Invalid Native Object");
	if (argc == 1) {
		cocosbuilder::CCBSequence* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocosbuilder::CCBSequence*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq : Error processing arguments");
		bool ret = cobj->readSoundKeyframesForSeq(arg0);
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getCCBRootPath : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->getCCBRootPath();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getCCBRootPath : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getOwnerCallbackControlEvents();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getOwnerOutletNodes : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getOwnerOutletNodes();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getOwnerOutletNodes : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_readUTF8 : Invalid Native Object");
	if (argc == 0) {
		std::string ret = cobj->readUTF8();
		jsval jsret;
		jsret = std_string_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_readUTF8 : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents : Invalid Native Object");
	if (argc == 1) {
		cocos2d::extension::Control::EventType arg0;
		ok &= jsval_to_int32(cx, argv[0], (int32_t *)&arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents : Error processing arguments");
		cobj->addOwnerCallbackControlEvents(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getOwnerOutletNames : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getOwnerOutletNames();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getOwnerOutletNames : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq : Invalid Native Object");
	if (argc == 1) {
		cocosbuilder::CCBSequence* arg0;
		do {
			if (!argv[0].isObject()) { ok = JS_FALSE; break; }
			js_proxy_t *proxy;
			JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
			proxy = jsb_get_js_proxy(tmpObj);
			arg0 = (cocosbuilder::CCBSequence*)(proxy ? proxy->ptr : NULL);
			JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq : Error processing arguments");
		bool ret = cobj->readCallbackKeyframesForSeq(arg0);
		jsval jsret;
		jsret = BOOLEAN_TO_JSVAL(ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq : wrong number of arguments: %d, was expecting %d", argc, 1);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getAnimationManagersForNodes();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	cocosbuilder::CCBReader* cobj = (cocosbuilder::CCBReader *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2( cobj, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers : Invalid Native Object");
	if (argc == 0) {
		Array* ret = cobj->getNodesWithAnimationManagers();
		jsval jsret;
		jsret = ccarray_to_jsval(cx, ret);
		JS_SET_RVAL(cx, vp, jsret);
		return JS_TRUE;
	}

	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers : wrong number of arguments: %d, was expecting %d", argc, 0);
	return JS_FALSE;
}
JSBool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;
	if (argc == 1) {
		double arg0;
		ok &= JS_ValueToNumber(cx, argv[0], &arg0);
		JSB_PRECONDITION2(ok, cx, JS_FALSE, "js_cocos2dx_builder_CCBReader_setResolutionScale : Error processing arguments");
		cocosbuilder::CCBReader::setResolutionScale(arg0);
		JS_SET_RVAL(cx, vp, JSVAL_VOID);
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_setResolutionScale : wrong number of arguments");
	return JS_FALSE;
}

JSBool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
	jsval *argv = JS_ARGV(cx, vp);
	JSBool ok = JS_TRUE;

	JSObject *obj = NULL;
	cocosbuilder::CCBReader* cobj = NULL;
	do {
		if (argc == 1) {
			cocosbuilder::CCBReader* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocosbuilder::CCBReader*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cobj = new cocosbuilder::CCBReader(arg0);
			cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
			if (_ccobj) {
				_ccobj->autorelease();
			}
			TypeTest<cocosbuilder::CCBReader> t;
			js_type_class_t *typeClass;
			uint32_t typeId = t.s_id();
			HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
			assert(typeClass);
			obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
			js_proxy_t* proxy = jsb_new_proxy(cobj, obj);
			JS_AddNamedObjectRoot(cx, &proxy->obj, "cocosbuilder::CCBReader");
		}
	} while(0);

	do {
		if (argc == 1) {
			cocosbuilder::NodeLoaderLibrary* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocosbuilder::NodeLoaderLibrary*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cobj = new cocosbuilder::CCBReader(arg0);
			cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
			if (_ccobj) {
				_ccobj->autorelease();
			}
			TypeTest<cocosbuilder::CCBReader> t;
			js_type_class_t *typeClass;
			uint32_t typeId = t.s_id();
			HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
			assert(typeClass);
			obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
			js_proxy_t* proxy = jsb_new_proxy(cobj, obj);
			JS_AddNamedObjectRoot(cx, &proxy->obj, "cocosbuilder::CCBReader");
		}
	} while(0);

	do {
		if (argc == 2) {
			cocosbuilder::NodeLoaderLibrary* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocosbuilder::NodeLoaderLibrary*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocosbuilder::CCBMemberVariableAssigner* arg1;
			do {
				if (!argv[1].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg1 = (cocosbuilder::CCBMemberVariableAssigner*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cobj = new cocosbuilder::CCBReader(arg0, arg1);
			cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
			if (_ccobj) {
				_ccobj->autorelease();
			}
			TypeTest<cocosbuilder::CCBReader> t;
			js_type_class_t *typeClass;
			uint32_t typeId = t.s_id();
			HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
			assert(typeClass);
			obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
			js_proxy_t* proxy = jsb_new_proxy(cobj, obj);
			JS_AddNamedObjectRoot(cx, &proxy->obj, "cocosbuilder::CCBReader");
		}
	} while(0);

	do {
		if (argc == 3) {
			cocosbuilder::NodeLoaderLibrary* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocosbuilder::NodeLoaderLibrary*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocosbuilder::CCBMemberVariableAssigner* arg1;
			do {
				if (!argv[1].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg1 = (cocosbuilder::CCBMemberVariableAssigner*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocosbuilder::CCBSelectorResolver* arg2;
			do {
				if (!argv[2].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[2]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg2 = (cocosbuilder::CCBSelectorResolver*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg2, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cobj = new cocosbuilder::CCBReader(arg0, arg1, arg2);
			cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
			if (_ccobj) {
				_ccobj->autorelease();
			}
			TypeTest<cocosbuilder::CCBReader> t;
			js_type_class_t *typeClass;
			uint32_t typeId = t.s_id();
			HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
			assert(typeClass);
			obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
			js_proxy_t* proxy = jsb_new_proxy(cobj, obj);
			JS_AddNamedObjectRoot(cx, &proxy->obj, "cocosbuilder::CCBReader");
		}
	} while(0);

	do {
		if (argc == 4) {
			cocosbuilder::NodeLoaderLibrary* arg0;
			do {
				if (!argv[0].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[0]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg0 = (cocosbuilder::NodeLoaderLibrary*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg0, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocosbuilder::CCBMemberVariableAssigner* arg1;
			do {
				if (!argv[1].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[1]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg1 = (cocosbuilder::CCBMemberVariableAssigner*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg1, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocosbuilder::CCBSelectorResolver* arg2;
			do {
				if (!argv[2].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[2]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg2 = (cocosbuilder::CCBSelectorResolver*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg2, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cocosbuilder::NodeLoaderListener* arg3;
			do {
				if (!argv[3].isObject()) { ok = JS_FALSE; break; }
				js_proxy_t *proxy;
				JSObject *tmpObj = JSVAL_TO_OBJECT(argv[3]);
				proxy = jsb_get_js_proxy(tmpObj);
				arg3 = (cocosbuilder::NodeLoaderListener*)(proxy ? proxy->ptr : NULL);
				JSB_PRECONDITION2( arg3, cx, JS_FALSE, "Invalid Native Object");
			} while (0);
			if (!ok) { ok = JS_TRUE; break; }
			cobj = new cocosbuilder::CCBReader(arg0, arg1, arg2, arg3);
			cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
			if (_ccobj) {
				_ccobj->autorelease();
			}
			TypeTest<cocosbuilder::CCBReader> t;
			js_type_class_t *typeClass;
			uint32_t typeId = t.s_id();
			HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
			assert(typeClass);
			obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
			js_proxy_t* proxy = jsb_new_proxy(cobj, obj);
			JS_AddNamedObjectRoot(cx, &proxy->obj, "cocosbuilder::CCBReader");
		}
	} while(0);

	do {
		if (argc == 0) {
			cobj = new cocosbuilder::CCBReader();
			cocos2d::Object *_ccobj = dynamic_cast<cocos2d::Object *>(cobj);
			if (_ccobj) {
				_ccobj->autorelease();
			}
			TypeTest<cocosbuilder::CCBReader> t;
			js_type_class_t *typeClass;
			uint32_t typeId = t.s_id();
			HASH_FIND_INT(_js_global_type_ht, &typeId, typeClass);
			assert(typeClass);
			obj = JS_NewObject(cx, typeClass->jsclass, typeClass->proto, typeClass->parentProto);
			js_proxy_t* proxy = jsb_new_proxy(cobj, obj);
			JS_AddNamedObjectRoot(cx, &proxy->obj, "cocosbuilder::CCBReader");
		}
	} while(0);

	if (cobj) {
		JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(obj));
		return JS_TRUE;
	}
	JS_ReportError(cx, "js_cocos2dx_builder_CCBReader_constructor : wrong number of arguments");
	return JS_FALSE;
}




void js_cocos2dx_builder_CCBReader_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (CCBReader)", obj);
}

static JSBool js_cocos2dx_builder_CCBReader_ctor(JSContext *cx, uint32_t argc, jsval *vp)
{
	JSObject *obj = JS_THIS_OBJECT(cx, vp);
    cocosbuilder::CCBReader *nobj = new cocosbuilder::CCBReader();
    js_proxy_t* p = jsb_new_proxy(nobj, obj);
    nobj->autorelease();
    JS_AddNamedObjectRoot(cx, &p->obj, "cocosbuilder::CCBReader");
    JS_SET_RVAL(cx, vp, JSVAL_VOID);
    return JS_TRUE;
}

void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JSObject *global) {
	jsb_CCBReader_class = (JSClass *)calloc(1, sizeof(JSClass));
	jsb_CCBReader_class->name = "_Reader";
	jsb_CCBReader_class->addProperty = JS_PropertyStub;
	jsb_CCBReader_class->delProperty = JS_DeletePropertyStub;
	jsb_CCBReader_class->getProperty = JS_PropertyStub;
	jsb_CCBReader_class->setProperty = JS_StrictPropertyStub;
	jsb_CCBReader_class->enumerate = JS_EnumerateStub;
	jsb_CCBReader_class->resolve = JS_ResolveStub;
	jsb_CCBReader_class->convert = JS_ConvertStub;
	jsb_CCBReader_class->finalize = js_cocos2dx_builder_CCBReader_finalize;
	jsb_CCBReader_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

	static JSPropertySpec properties[] = {
		{0, 0, 0, JSOP_NULLWRAPPER, JSOP_NULLWRAPPER}
	};

	static JSFunctionSpec funcs[] = {
		JS_FN("getAnimationManager", js_cocos2dx_builder_CCBReader_getAnimationManager, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setAnimationManager", js_cocos2dx_builder_CCBReader_setAnimationManager, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addOwnerOutletName", js_cocos2dx_builder_CCBReader_addOwnerOutletName, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getOwnerCallbackNames", js_cocos2dx_builder_CCBReader_getOwnerCallbackNames, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addDocumentCallbackControlEvents", js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("setCCBRootPath", js_cocos2dx_builder_CCBReader_setCCBRootPath, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addOwnerOutletNode", js_cocos2dx_builder_CCBReader_addOwnerOutletNode, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getOwnerCallbackNodes", js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("readSoundKeyframesForSeq", js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getCCBRootPath", js_cocos2dx_builder_CCBReader_getCCBRootPath, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getOwnerCallbackControlEvents", js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getOwnerOutletNodes", js_cocos2dx_builder_CCBReader_getOwnerOutletNodes, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("readUTF8", js_cocos2dx_builder_CCBReader_readUTF8, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("addOwnerCallbackControlEvents", js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getOwnerOutletNames", js_cocos2dx_builder_CCBReader_getOwnerOutletNames, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("readCallbackKeyframesForSeq", js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getAnimationManagersForNodes", js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FN("getNodesWithAnimationManagers", js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("ctor", js_cocos2dx_builder_CCBReader_ctor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
	};

	static JSFunctionSpec st_funcs[] = {
		JS_FN("setResolutionScale", js_cocos2dx_builder_CCBReader_setResolutionScale, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
		JS_FS_END
	};

	jsb_CCBReader_prototype = JS_InitClass(
		cx, global,
		NULL, // parent proto
		jsb_CCBReader_class,
		js_cocos2dx_builder_CCBReader_constructor, 0, // constructor
		properties,
		funcs,
		NULL, // no static properties
		st_funcs);
	// make the class enumerable in the registered namespace
	JSBool found;
	JS_SetPropertyAttributes(cx, global, "_Reader", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

	// add the proto and JSClass to the type->js info hash table
	TypeTest<cocosbuilder::CCBReader> t;
	js_type_class_t *p;
	uint32_t typeId = t.s_id();
	HASH_FIND_INT(_js_global_type_ht, &typeId, p);
	if (!p) {
		p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
		p->type = typeId;
		p->jsclass = jsb_CCBReader_class;
		p->proto = jsb_CCBReader_prototype;
		p->parentProto = NULL;
		HASH_ADD_INT(_js_global_type_ht, type, p);
	}
}

void register_all_cocos2dx_builder(JSContext* cx, JSObject* obj) {
	// first, try to get the ns
	jsval nsval;
	JSObject *ns;
	JS_GetProperty(cx, obj, "cc", &nsval);
	if (nsval == JSVAL_VOID) {
		ns = JS_NewObject(cx, NULL, NULL, NULL);
		nsval = OBJECT_TO_JSVAL(ns);
		JS_SetProperty(cx, obj, "cc", &nsval);
	} else {
		JS_ValueToObject(cx, nsval, &ns);
	}
	obj = ns;

	js_register_cocos2dx_builder_CCBAnimationManager(cx, obj);
	js_register_cocos2dx_builder_CCBReader(cx, obj);
}

