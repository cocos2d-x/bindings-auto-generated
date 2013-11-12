/**
 * @module cocos2dx_studio
 */
var cc = cc || {};

/**
 * @class Bone
 */
cc.Bone = {

/**
 * @method isTransformDirty
 * @return A value converted from C/C++ "bool"
 */
isTransformDirty : function () {},

/**
 * @method isIgnoreMovementBoneData
 * @return A value converted from C/C++ "bool"
 */
isIgnoreMovementBoneData : function () {},

/**
 * @method updateZOrder
 */
updateZOrder : function () {},

/**
 * @method setTransformDirty
 * @param {bool}
 */
setTransformDirty : function () {},

/**
 * @method getDisplayRenderNode
 * @return A value converted from C/C++ "cocos2d::Node*"
 */
getDisplayRenderNode : function () {},

/**
 * @method addChildBone
 * @param {cocostudio::Bone*}
 */
addChildBone : function () {},

/**
 * @method getWorldInfo
 * @return A value converted from C/C++ "cocostudio::BaseData*"
 */
getWorldInfo : function () {},

/**
 * @method getTween
 * @return A value converted from C/C++ "cocostudio::Tween*"
 */
getTween : function () {},

/**
 * @method getParentBone
 * @return A value converted from C/C++ "cocostudio::Bone*"
 */
getParentBone : function () {},

/**
 * @method getBlendType
 * @return A value converted from C/C++ "cocostudio::BlendType"
 */
getBlendType : function () {},

/**
 * @method updateColor
 */
updateColor : function () {},

/**
 * @method getName
 * @return A value converted from C/C++ "std::string"
 */
getName : function () {},

/**
 * @method setOpacity
 * @param {unsigned char}
 */
setOpacity : function () {},

/**
 * @method getDisplayRenderNodeType
 * @return A value converted from C/C++ "cocostudio::DisplayType"
 */
getDisplayRenderNodeType : function () {},

/**
 * @method removeDisplay
 * @param {int}
 */
removeDisplay : function () {},

/**
 * @method updateDisplayedOpacity
 * @param {unsigned char}
 */
updateDisplayedOpacity : function () {},

/**
 * @method setParentBone
 * @param {cocostudio::Bone*}
 */
setParentBone : function () {},

/**
 * @method setZOrder
 * @param {int}
 */
setZOrder : function () {},

/**
 * @method getColliderFilter
 * @return A value converted from C/C++ "cocostudio::ColliderFilter*"
 */
getColliderFilter : function () {},

/**
 * @method setIgnoreMovementBoneData
 * @param {bool}
 */
setIgnoreMovementBoneData : function () {},

/**
 * @method setName
 * @param {std::string}
 */
setName : function () {},

/**
 * @method removeFromParent
 * @param {bool}
 */
removeFromParent : function () {},

/**
 * @method getChildArmature
 * @return A value converted from C/C++ "cocostudio::Armature*"
 */
getChildArmature : function () {},

/**
 * @method update
 * @param {float}
 */
update : function () {},

/**
 * @method getTweenData
 * @return A value converted from C/C++ "cocostudio::FrameData*"
 */
getTweenData : function () {},

/**
 * @method setColliderFilter
 * @param {cocostudio::ColliderFilter*}
 */
setColliderFilter : function () {},

/**
 * @method getColliderBodyList
 * @return A value converted from C/C++ "cocos2d::Array*"
 */
getColliderBodyList : function () {},

/**
 * @method setBoneData
 * @param {cocostudio::BoneData*}
 */
setBoneData : function () {},

/**
 * @method setArmature
 * @param {cocostudio::Armature*}
 */
setArmature : function () {},

/**
 * @method getNodeToWorldTransform
 * @return A value converted from C/C++ "cocos2d::AffineTransform"
 */
getNodeToWorldTransform : function () {},

/**
 * @method setColor
 * @param {cocos2d::Color3B}
 */
setColor : function () {},

/**
 * @method removeChildBone
 * @param {cocostudio::Bone*}
 * @param {bool}
 */
removeChildBone : function () {},

/**
 * @method setChildArmature
 * @param {cocostudio::Armature*}
 */
setChildArmature : function () {},

/**
 * @method getNodeToArmatureTransform
 * @return A value converted from C/C++ "cocos2d::AffineTransform"
 */
getNodeToArmatureTransform : function () {},

/**
 * @method getDisplayManager
 * @return A value converted from C/C++ "cocostudio::DisplayManager*"
 */
getDisplayManager : function () {},

/**
 * @method getArmature
 * @return A value converted from C/C++ "cocostudio::Armature*"
 */
getArmature : function () {},

/**
 * @method setBlendType
 * @param {cocostudio::BlendType}
 */
setBlendType : function () {},

/**
 * @method changeDisplayByIndex
 * @param {int}
 * @param {bool}
 */
changeDisplayByIndex : function () {},

/**
 * @method updateDisplayedColor
 * @param {cocos2d::Color3B}
 */
updateDisplayedColor : function () {},

/**
 * @method getBoneData
 * @return A value converted from C/C++ "cocostudio::BoneData*"
 */
getBoneData : function () {},

/**
 * @method Bone
 * @constructor
 */
Bone : function () {},

};

/**
 * @class ArmatureAnimation
 */
cc.ArmatureAnimation = {

/**
 * @method getSpeedScale
 * @return A value converted from C/C++ "float"
 */
getSpeedScale : function () {},

/**
 * @method play
 * @param {const char*}
 * @param {int}
 * @param {int}
 * @param {int}
 * @param {int}
 */
play : function () {},

/**
 * @method pause
 */
pause : function () {},

/**
 * @method setAnimationInternal
 * @param {float}
 */
setAnimationInternal : function () {},

/**
 * @method gotoAndPause
 * @param {int}
 */
gotoAndPause : function () {},

/**
 * @method resume
 */
resume : function () {},

/**
 * @method stop
 */
stop : function () {},

/**
 * @method setAnimationData
 * @param {cocostudio::AnimationData*}
 */
setAnimationData : function () {},

/**
 * @method setSpeedScale
 * @param {float}
 */
setSpeedScale : function () {},

/**
 * @method update
 * @param {float}
 */
update : function () {},

/**
 * @method getAnimationData
 * @return A value converted from C/C++ "cocostudio::AnimationData*"
 */
getAnimationData : function () {},

/**
 * @method playByIndex
 * @param {int}
 * @param {int}
 * @param {int}
 * @param {int}
 * @param {int}
 */
playByIndex : function () {},

/**
 * @method gotoAndPlay
 * @param {int}
 */
gotoAndPlay : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 * @param {cocostudio::Armature*}
 */
init : function () {},

/**
 * @method getMovementCount
 * @return A value converted from C/C++ "int"
 */
getMovementCount : function () {},

/**
 * @method setUserObject
 * @param {cocos2d::Object*}
 */
setUserObject : function () {},

/**
 * @method getCurrentMovementID
 * @return A value converted from C/C++ "std::string"
 */
getCurrentMovementID : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ArmatureAnimation*"
 * @param {cocostudio::Armature*}
 */
create : function () {},

/**
 * @method ArmatureAnimation
 * @constructor
 */
ArmatureAnimation : function () {},

};

/**
 * @class ArmatureDataManager
 */
cc.ArmatureDataManager = {

/**
 * @method getAnimationDatas
 * @return A value converted from C/C++ "cocos2d::Dictionary*"
 */
getAnimationDatas : function () {},

/**
 * @method removeAnimationData
 * @param {const char*}
 */
removeAnimationData : function () {},

/**
 * @method addArmatureData
 * @param {const char*}
 * @param {cocostudio::ArmatureData*}
 * @param {const char*}
 */
addArmatureData : function () {},

/**
 * @method removeArmatureFileInfo
 * @param {const char*}
 */
removeArmatureFileInfo : function () {},

/**
 * @method getTextureDatas
 * @return A value converted from C/C++ "cocos2d::Dictionary*"
 */
getTextureDatas : function () {},

/**
 * @method getTextureData
 * @return A value converted from C/C++ "cocostudio::TextureData*"
 * @param {const char*}
 */
getTextureData : function () {},

/**
 * @method getArmatureData
 * @return A value converted from C/C++ "cocostudio::ArmatureData*"
 * @param {const char*}
 */
getArmatureData : function () {},

/**
 * @method getAnimationData
 * @return A value converted from C/C++ "cocostudio::AnimationData*"
 * @param {const char*}
 */
getAnimationData : function () {},

/**
 * @method addAnimationData
 * @param {const char*}
 * @param {cocostudio::AnimationData*}
 * @param {const char*}
 */
addAnimationData : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method removeArmatureData
 * @param {const char*}
 */
removeArmatureData : function () {},

/**
 * @method getArmatureDatas
 * @return A value converted from C/C++ "cocos2d::Dictionary*"
 */
getArmatureDatas : function () {},

/**
 * @method removeTextureData
 * @param {const char*}
 */
removeTextureData : function () {},

/**
 * @method addTextureData
 * @param {const char*}
 * @param {cocostudio::TextureData*}
 * @param {const char*}
 */
addTextureData : function () {},

/**
 * @method isAutoLoadSpriteFile
 * @return A value converted from C/C++ "bool"
 */
isAutoLoadSpriteFile : function () {},

/**
 * @method addSpriteFrameFromFile
 * @param {const char*}
 * @param {const char*}
 * @param {const char*}
 */
addSpriteFrameFromFile : function () {},

/**
 * @method destoryInstance
 */
destoryInstance : function () {},

/**
 * @method getInstance
 * @return A value converted from C/C++ "cocostudio::ArmatureDataManager*"
 */
getInstance : function () {},

};

/**
 * @class Armature
 */
cc.Armature = {

/**
 * @method getBone
 * @return A value converted from C/C++ "cocostudio::Bone*"
 * @param {const char*}
 */
getBone : function () {},

/**
 * @method changeBoneParent
 * @param {cocostudio::Bone*}
 * @param {const char*}
 */
changeBoneParent : function () {},

/**
 * @method getTexureAtlasWithTexture
 * @return A value converted from C/C++ "cocos2d::TextureAtlas*"
 * @param {cocos2d::Texture2D*}
 */
getTexureAtlasWithTexture : function () {},

/**
 * @method setAnimation
 * @param {cocostudio::ArmatureAnimation*}
 */
setAnimation : function () {},

/**
 * @method getBoneAtPoint
 * @return A value converted from C/C++ "cocostudio::Bone*"
 * @param {float}
 * @param {float}
 */
getBoneAtPoint : function () {},

/**
 * @method getArmatureTransformDirty
 * @return A value converted from C/C++ "bool"
 */
getArmatureTransformDirty : function () {},

/**
 * @method setVersion
 * @param {float}
 */
setVersion : function () {},

/**
 * @method updateOffsetPoint
 */
updateOffsetPoint : function () {},

/**
 * @method setColliderFilter
 * @param {cocostudio::ColliderFilter*}
 */
setColliderFilter : function () {},

/**
 * @method setName
 * @param {std::string}
 */
setName : function () {},

/**
 * @method removeBone
 * @param {cocostudio::Bone*}
 * @param {bool}
 */
removeBone : function () {},

/**
 * @method getBatchNode
 * @return A value converted from C/C++ "cocostudio::BatchNode*"
 */
getBatchNode : function () {},

/**
 * @method getName
 * @return A value converted from C/C++ "std::string"
 */
getName : function () {},

/**
 * @method getNodeToParentTransform
 * @return A value converted from C/C++ "cocos2d::AffineTransform"
 */
getNodeToParentTransform : function () {},

/**
 * @method setParentBone
 * @param {cocostudio::Bone*}
 */
setParentBone : function () {},

/**
 * @method getBoundingBox
 * @return A value converted from C/C++ "cocos2d::Rect"
 */
getBoundingBox : function () {},

/**
 * @method setBatchNode
 * @param {cocostudio::BatchNode*}
 */
setBatchNode : function () {},

/**
 * @method draw
 */
draw : function () {},

/**
 * @method setArmatureData
 * @param {cocostudio::ArmatureData*}
 */
setArmatureData : function () {},

/**
 * @method setTextureAtlas
 * @param {cocos2d::TextureAtlas*}
 */
setTextureAtlas : function () {},

/**
 * @method addBone
 * @param {cocostudio::Bone*}
 * @param {const char*}
 */
addBone : function () {},

/**
 * @method update
 * @param {float}
 */
update : function () {},

/**
 * @method getArmatureData
 * @return A value converted from C/C++ "cocostudio::ArmatureData*"
 */
getArmatureData : function () {},

/**
 * @method getParentBone
 * @return A value converted from C/C++ "cocostudio::Bone*"
 */
getParentBone : function () {},

/**
 * @method getVersion
 * @return A value converted from C/C++ "float"
 */
getVersion : function () {},

/**
 * @method getAnimation
 * @return A value converted from C/C++ "cocostudio::ArmatureAnimation*"
 */
getAnimation : function () {},

/**
 * @method getBoneDic
 * @return A value converted from C/C++ "cocos2d::Dictionary*"
 */
getBoneDic : function () {},

/**
 * @method getTextureAtlas
 * @return A value converted from C/C++ "cocos2d::TextureAtlas*"
 */
getTextureAtlas : function () {},

/**
 * @method Armature
 * @constructor
 */
Armature : function () {},

};

/**
 * @class Skin
 */
cc.Skin = {

/**
 * @method getBone
 * @return A value converted from C/C++ "cocostudio::Bone*"
 */
getBone : function () {},

/**
 * @method getNodeToWorldTransformAR
 * @return A value converted from C/C++ "cocos2d::AffineTransform"
 */
getNodeToWorldTransformAR : function () {},

/**
 * @method getNodeToWorldTransform
 * @return A value converted from C/C++ "cocos2d::AffineTransform"
 */
getNodeToWorldTransform : function () {},

/**
 * @method updateTransform
 */
updateTransform : function () {},

/**
 * @method getDisplayName
 * @return A value converted from C/C++ "std::string"
 */
getDisplayName : function () {},

/**
 * @method updateArmatureTransform
 */
updateArmatureTransform : function () {},

/**
 * @method initWithSpriteFrameName
 * @return A value converted from C/C++ "bool"
 * @param {std::string}
 */
initWithSpriteFrameName : function () {},

/**
 * @method initWithFile
 * @return A value converted from C/C++ "bool"
 * @param {std::string}
 */
initWithFile : function () {},

/**
 * @method setBone
 * @param {cocostudio::Bone*}
 */
setBone : function () {},

/**
 * @method createWithSpriteFrameName
 * @return A value converted from C/C++ "cocostudio::Skin*"
 * @param {const char*}
 */
createWithSpriteFrameName : function () {},

/**
 * @method Skin
 * @constructor
 */
Skin : function () {},

};
