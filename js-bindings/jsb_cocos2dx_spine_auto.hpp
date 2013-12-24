#ifndef __cocos2dx_spine_h__
#define __cocos2dx_spine_h__

#include "jsapi.h"
#include "jsfriendapi.h"


extern JSClass  *jsb_CCSkeleton_class;
extern JSObject *jsb_CCSkeleton_prototype;

JSBool js_cocos2dx_spine_CCSkeleton_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_spine_CCSkeleton_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_spine_CCSkeleton(JSContext *cx, JSObject *global);
void register_all_cocos2dx_spine(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_spine_CCSkeleton_setSlotsToSetupPose(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_setToSetupPose(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_getAttachment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_setAttachment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_setSkin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_findSlot(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_updateWorldTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_setBonesToSetupPose(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_findBone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_createWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeleton_CCSkeleton(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CCSkeletonAnimation_class;
extern JSObject *jsb_CCSkeletonAnimation_prototype;

JSBool js_cocos2dx_spine_CCSkeletonAnimation_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_spine_CCSkeletonAnimation_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_spine_CCSkeletonAnimation(JSContext *cx, JSObject *global);
void register_all_cocos2dx_spine(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_addAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_getCurrent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_setAnimationStateData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_setMix(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_setAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_clearTracks(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_clearTrack(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_onAnimationStateEvent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_createWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_spine_CCSkeletonAnimation_CCSkeletonAnimation(JSContext *cx, uint32_t argc, jsval *vp);
#endif

