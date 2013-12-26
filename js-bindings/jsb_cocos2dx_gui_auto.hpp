#ifndef __cocos2dx_gui_h__
#define __cocos2dx_gui_h__

#include "jsapi.h"
#include "jsfriendapi.h"


extern JSClass  *jsb_UIHelper_class;
extern JSObject *jsb_UIHelper_prototype;

JSBool js_cocos2dx_gui_UIHelper_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_gui_UIHelper_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_gui_UIHelper(JSContext *cx, JSObject *global);
void register_all_cocos2dx_gui(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_gui_UIHelper_seekActionWidgetByActionTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_gui_UIHelper_seekWidgetByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_gui_UIHelper_seekWidgetByRelativeName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_gui_UIHelper_seekWidgetByName(JSContext *cx, uint32_t argc, jsval *vp);
#endif

