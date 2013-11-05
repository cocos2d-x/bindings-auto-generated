/**
 * @module cocos2dx_studio
 */
var ccs = ccs || {};

/**
 * @class BaseData
 */
ccs.BaseData = {

/**
 * @method getColor
 * @return A value converted from C/C++ "cocos2d::Color4B"
 */
getColor : function () {},

/**
 * @method copy
 * @param {cocostudio::BaseData*}
 */
copy : function () {},

/**
 * @method subtract
 * @param {cocostudio::BaseData*}
 * @param {cocostudio::BaseData*}
 * @param {bool}
 */
subtract : function () {},

/**
 * @method setColor
 * @param {cocos2d::Color4B}
 */
setColor : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::BaseData*"
 */
create : function () {},

/**
 * @method BaseData
 * @constructor
 */
BaseData : function () {},

};

/**
 * @class DisplayData
 */
ccs.DisplayData = {

/**
 * @method changeDisplayToTexture
 * @return A value converted from C/C++ "const char*"
 * @param {const char*}
 */
changeDisplayToTexture : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::DisplayData*"
 */
create : function () {},

/**
 * @method DisplayData
 * @constructor
 */
DisplayData : function () {},

};

/**
 * @class SpriteDisplayData
 */
ccs.SpriteDisplayData = {

/**
 * @method copy
 * @param {cocostudio::SpriteDisplayData*}
 */
copy : function () {},

/**
 * @method setParam
 * @param {const char*}
 */
setParam : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::SpriteDisplayData*"
 */
create : function () {},

/**
 * @method SpriteDisplayData
 * @constructor
 */
SpriteDisplayData : function () {},

};

/**
 * @class ArmatureDisplayData
 */
ccs.ArmatureDisplayData = {

/**
 * @method copy
 * @param {cocostudio::ArmatureDisplayData*}
 */
copy : function () {},

/**
 * @method setParam
 * @param {const char*}
 */
setParam : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ArmatureDisplayData*"
 */
create : function () {},

/**
 * @method ArmatureDisplayData
 * @constructor
 */
ArmatureDisplayData : function () {},

};

/**
 * @class ParticleDisplayData
 */
ccs.ParticleDisplayData = {

/**
 * @method copy
 * @param {cocostudio::ParticleDisplayData*}
 */
copy : function () {},

/**
 * @method setParam
 * @param {const char*}
 */
setParam : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ParticleDisplayData*"
 */
create : function () {},

/**
 * @method ParticleDisplayData
 * @constructor
 */
ParticleDisplayData : function () {},

};

/**
 * @class BoneData
 */
ccs.BoneData = {

/**
 * @method getDisplayData
 * @return A value converted from C/C++ "cocostudio::DisplayData*"
 * @param {int}
 */
getDisplayData : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method addDisplayData
 * @param {cocostudio::DisplayData*}
 */
addDisplayData : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::BoneData*"
 */
create : function () {},

/**
 * @method BoneData
 * @constructor
 */
BoneData : function () {},

};

/**
 * @class ArmatureData
 */
ccs.ArmatureData = {

/**
 * @method addBoneData
 * @param {cocostudio::BoneData*}
 */
addBoneData : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method getBoneData
 * @return A value converted from C/C++ "cocostudio::BoneData*"
 * @param {const char*}
 */
getBoneData : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ArmatureData*"
 */
create : function () {},

/**
 * @method ArmatureData
 * @constructor
 */
ArmatureData : function () {},

};

/**
 * @class FrameData
 */
ccs.FrameData = {

/**
 * @method copy
 * @param {cocostudio::BaseData*}
 */
copy : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::FrameData*"
 */
create : function () {},

/**
 * @method FrameData
 * @constructor
 */
FrameData : function () {},

};

/**
 * @class MovementBoneData
 */
ccs.MovementBoneData = {

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method getFrameData
 * @return A value converted from C/C++ "cocostudio::FrameData*"
 * @param {int}
 */
getFrameData : function () {},

/**
 * @method addFrameData
 * @param {cocostudio::FrameData*}
 */
addFrameData : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::MovementBoneData*"
 */
create : function () {},

/**
 * @method MovementBoneData
 * @constructor
 */
MovementBoneData : function () {},

};

/**
 * @class MovementData
 */
ccs.MovementData = {

/**
 * @method getMovementBoneData
 * @return A value converted from C/C++ "cocostudio::MovementBoneData*"
 * @param {const char*}
 */
getMovementBoneData : function () {},

/**
 * @method addMovementBoneData
 * @param {cocostudio::MovementBoneData*}
 */
addMovementBoneData : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::MovementData*"
 */
create : function () {},

/**
 * @method MovementData
 * @constructor
 */
MovementData : function () {},

};

/**
 * @class AnimationData
 */
ccs.AnimationData = {

/**
 * @method getMovement
 * @return A value converted from C/C++ "cocostudio::MovementData*"
 * @param {const char*}
 */
getMovement : function () {},

/**
 * @method getMovementCount
 * @return A value converted from C/C++ "int"
 */
getMovementCount : function () {},

/**
 * @method addMovement
 * @param {cocostudio::MovementData*}
 */
addMovement : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::AnimationData*"
 */
create : function () {},

/**
 * @method AnimationData
 * @constructor
 */
AnimationData : function () {},

};

/**
 * @class ContourData
 */
ccs.ContourData = {

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method addVertex
 * @param {cocos2d::Point*}
 */
addVertex : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ContourData*"
 */
create : function () {},

/**
 * @method ContourData
 * @constructor
 */
ContourData : function () {},

};

/**
 * @class TextureData
 */
ccs.TextureData = {

/**
 * @method getContourData
 * @return A value converted from C/C++ "cocostudio::ContourData*"
 * @param {int}
 */
getContourData : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method addContourData
 * @param {cocostudio::ContourData*}
 */
addContourData : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::TextureData*"
 */
create : function () {},

/**
 * @method TextureData
 * @constructor
 */
TextureData : function () {},

};

/**
 * @class Bone
 */
ccs.Bone = {

/**
 * @method isTransformDirty
 * @return A value converted from C/C++ "bool"
 */
isTransformDirty : function () {},

/**
 * @method updateZOrder
 */
updateZOrder : function () {},

/**
 * @method getDisplayRenderNode
 * @return A value converted from C/C++ "cocos2d::Node*"
 */
getDisplayRenderNode : function () {},

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
 * @method setTransformDirty
 * @param {bool}
 */
setTransformDirty : function () {},

/**
 * @method addChildBone
 * @param {cocostudio::Bone*}
 */
addChildBone : function () {},

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
 * @method setDisplayManager
 * @param {cocostudio::DisplayManager*}
 */
setDisplayManager : function () {},

/**
 * @method getTweenData
 * @return A value converted from C/C++ "cocostudio::FrameData*"
 */
getTweenData : function () {},

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
ccs.ArmatureAnimation = {

/**
 * @method getSpeedScale
 * @return A value converted from C/C++ "float"
 */
getSpeedScale : function () {},

/**
 * @method getAnimationScale
 * @return A value converted from C/C++ "float"
 */
getAnimationScale : function () {},

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
 * @method setAnimationScale
 * @param {float}
 */
setAnimationScale : function () {},

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
 * @method getCurrentMovementID
 * @return A value converted from C/C++ "std::string"
 */
getCurrentMovementID : function () {},

/**
 * @method setAnimationInternal
 * @param {float}
 */
setAnimationInternal : function () {},

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
ccs.ArmatureDataManager = {

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
 */
addArmatureData : function () {},

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
 * @method removeAll
 */
removeAll : function () {},

/**
 * @method addAnimationData
 * @param {const char*}
 * @param {cocostudio::AnimationData*}
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
ccs.Armature = {

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
 * @method getParentBone
 * @return A value converted from C/C++ "cocostudio::Bone*"
 */
getParentBone : function () {},

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
 * @method setBody
 * @param {cpBody*}
 */
setBody : function () {},

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
ccs.Skin = {

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
 * @param {const char*}
 */
initWithSpriteFrameName : function () {},

/**
 * @method initWithFile
 * @return A value converted from C/C++ "bool"
 * @param {const char*}
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
