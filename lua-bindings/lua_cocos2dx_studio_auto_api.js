/**
 * @module cocos2dx_studio
 */
var ccs = ccs || {};

/**
 * @class UICCLabelAtlas
 */
ccs.UICCLabelAtlas = {

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::UICCLabelAtlas*"
 */
create : function () {},

/**
 * @method UICCLabelAtlas
 * @constructor
 */
UICCLabelAtlas : function () {},

};

/**
 * @class UICCTextField
 */
ccs.UICCTextField = {

/**
 * @method onTextFieldAttachWithIME
 * @return A value converted from C/C++ "bool"
 * @param {cocos2d::TextFieldTTF*}
 */
onTextFieldAttachWithIME : function () {},

/**
 * @method setPasswordText
 * @param {const char*}
 */
setPasswordText : function () {},

/**
 * @method setAttachWithIME
 * @param {bool}
 */
setAttachWithIME : function () {},

/**
 * @method getDeleteBackward
 * @return A value converted from C/C++ "bool"
 */
getDeleteBackward : function () {},

/**
 * @method getAttachWithIME
 * @return A value converted from C/C++ "bool"
 */
getAttachWithIME : function () {},

/**
 * @method onTextFieldDeleteBackward
 * @return A value converted from C/C++ "bool"
 * @param {cocos2d::TextFieldTTF*}
 * @param {const char*}
 * @param {int}
 */
onTextFieldDeleteBackward : function () {},

/**
 * @method getInsertText
 * @return A value converted from C/C++ "bool"
 */
getInsertText : function () {},

/**
 * @method deleteBackward
 */
deleteBackward : function () {},

/**
 * @method setInsertText
 * @param {bool}
 */
setInsertText : function () {},

/**
 * @method getDetachWithIME
 * @return A value converted from C/C++ "bool"
 */
getDetachWithIME : function () {},

/**
 * @method getCharCount
 * @return A value converted from C/C++ "int"
 */
getCharCount : function () {},

/**
 * @method closeIME
 */
closeIME : function () {},

/**
 * @method setPasswordEnabled
 * @param {bool}
 */
setPasswordEnabled : function () {},

/**
 * @method setMaxLengthEnabled
 * @param {bool}
 */
setMaxLengthEnabled : function () {},

/**
 * @method isPasswordEnabled
 * @return A value converted from C/C++ "bool"
 */
isPasswordEnabled : function () {},

/**
 * @method insertText
 * @param {const char*}
 * @param {int}
 */
insertText : function () {},

/**
 * @method setPasswordStyleText
 * @param {const char*}
 */
setPasswordStyleText : function () {},

/**
 * @method onTextFieldInsertText
 * @return A value converted from C/C++ "bool"
 * @param {cocos2d::TextFieldTTF*}
 * @param {const char*}
 * @param {int}
 */
onTextFieldInsertText : function () {},

/**
 * @method onTextFieldDetachWithIME
 * @return A value converted from C/C++ "bool"
 * @param {cocos2d::TextFieldTTF*}
 */
onTextFieldDetachWithIME : function () {},

/**
 * @method getMaxLength
 * @return A value converted from C/C++ "int"
 */
getMaxLength : function () {},

/**
 * @method isMaxLengthEnabled
 * @return A value converted from C/C++ "bool"
 */
isMaxLengthEnabled : function () {},

/**
 * @method openIME
 */
openIME : function () {},

/**
 * @method setDetachWithIME
 * @param {bool}
 */
setDetachWithIME : function () {},

/**
 * @method setMaxLength
 * @param {int}
 */
setMaxLength : function () {},

/**
 * @method setDeleteBackward
 * @param {bool}
 */
setDeleteBackward : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::UICCTextField*"
 * @param {const char*}
 * @param {const char*}
 * @param {float}
 */
create : function () {},

/**
 * @method UICCTextField
 * @constructor
 */
UICCTextField : function () {},

};

/**
 * @class UIHelper
 */
ccs.UIHelper = {

/**
 * @method seekActionWidgetByActionTag
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {cocos2d::gui::Widget*}
 * @param {int}
 */
seekActionWidgetByActionTag : function () {},

/**
 * @method seekWidgetByTag
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {cocos2d::gui::Widget*}
 * @param {int}
 */
seekWidgetByTag : function () {},

/**
 * @method seekWidgetByRelativeName
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {cocos2d::gui::Widget*}
 * @param {const char*}
 */
seekWidgetByRelativeName : function () {},

/**
 * @method seekWidgetByName
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {cocos2d::gui::Widget*}
 * @param {const char*}
 */
seekWidgetByName : function () {},

};

/**
 * @class ActionManagerEx
 */
ccs.ActionManagerEx = {

/**
 * @method playActionByName
 * @return A value converted from C/C++ "cocostudio::ActionObject*"
 * @param {const char*}
 * @param {const char*}
 */
playActionByName : function () {},

/**
 * @method getActionByName
 * @return A value converted from C/C++ "cocostudio::ActionObject*"
 * @param {const char*}
 * @param {const char*}
 */
getActionByName : function () {},

/**
 * @method initWithDictionary
 * @param {const char*}
 * @param {cocostudio::JsonDictionary*}
 * @param {cocos2d::Object*}
 */
initWithDictionary : function () {},

/**
 * @method releaseActions
 */
releaseActions : function () {},

/**
 * @method purgeActionManager
 */
purgeActionManager : function () {},

/**
 * @method shareManager
 * @return A value converted from C/C++ "cocostudio::ActionManagerEx*"
 */
shareManager : function () {},

/**
 * @method ActionManagerEx
 * @constructor
 */
ActionManagerEx : function () {},

};

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
 * @param {const cocostudio::BaseData*}
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
 * @param {const cocos2d::Color4B&}
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
 * @method copy
 * @param {cocostudio::DisplayData*}
 */
copy : function () {},

/**
 * @method changeDisplayToTexture
 * @return A value converted from C/C++ "const std::string&"
 * @param {const std::string&}
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
 * @param {cocostudio::DisplayData*}
 */
copy : function () {},

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
 * @param {const std::string&}
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
 * @param {const cocostudio::BaseData*}
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
 * @param {const std::string&}
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
 * @param {const std::string&}
 */
getMovement : function () {},

/**
 * @method getMovementCount
 * @return A value converted from C/C++ "ssize_t"
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
 * @param {cocos2d::Point&}
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
 * @method isIgnoreMovementBoneData
 * @return A value converted from C/C++ "bool"
 */
isIgnoreMovementBoneData : function () {},

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
 * @method isBlendDirty
 * @return A value converted from C/C++ "bool"
 */
isBlendDirty : function () {},

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
 * @method updateColor
 */
updateColor : function () {},

/**
 * @method getName
 * @return A value converted from C/C++ "const std::string"
 */
getName : function () {},

/**
 * @method setTransformDirty
 * @param {bool}
 */
setTransformDirty : function () {},

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
 * @method setBoneData
 * @param {cocostudio::BoneData*}
 */
setBoneData : function () {},

/**
 * @method changeDisplayByName
 * @param {const std::string&}
 * @param {bool}
 */
changeDisplayByName : function () {},

/**
 * @method setName
 * @param {const std::string&}
 */
setName : function () {},

/**
 * @method removeFromParent
 * @param {bool}
 */
removeFromParent : function () {},

/**
 * @method getColliderDetector
 * @return A value converted from C/C++ "cocostudio::ColliderDetector*"
 */
getColliderDetector : function () {},

/**
 * @method setParentBone
 * @param {cocostudio::Bone*}
 */
setParentBone : function () {},

/**
 * @method getTweenData
 * @return A value converted from C/C++ "cocostudio::FrameData*"
 */
getTweenData : function () {},

/**
 * @method getChildArmature
 * @return A value converted from C/C++ "cocostudio::Armature*"
 */
getChildArmature : function () {},

/**
 * @method setArmature
 * @param {cocostudio::Armature*}
 */
setArmature : function () {},

/**
 * @method setBlendDirty
 * @param {bool}
 */
setBlendDirty : function () {},

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
 * @return A value converted from C/C++ "kmMat4"
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
 * @method changeDisplayByIndex
 * @param {int}
 * @param {bool}
 */
changeDisplayByIndex : function () {},

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
 * @class BatchNode
 */
ccs.BatchNode = {

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method setPopGroupCommand
 * @param {bool}
 */
setPopGroupCommand : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::BatchNode*"
 */
create : function () {},

/**
 * @method BatchNode
 * @constructor
 */
BatchNode : function () {},

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
 * @method pause
 */
pause : function () {},

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
 * @return A value converted from C/C++ "long"
 */
getMovementCount : function () {},

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
ccs.ArmatureDataManager = {

/**
 * @method getAnimationDatas
 * @return A value converted from C/C++ "const cocos2d::Map<std::basic_string<char>, cocostudio::AnimationData *>&"
 */
getAnimationDatas : function () {},

/**
 * @method removeAnimationData
 * @param {const std::string&}
 */
removeAnimationData : function () {},

/**
 * @method addArmatureData
 * @param {const std::string&}
 * @param {cocostudio::ArmatureData*}
 * @param {const std::string&}
 */
addArmatureData : function () {},

/**
 * @method removeArmatureFileInfo
 * @param {const std::string&}
 */
removeArmatureFileInfo : function () {},

/**
 * @method getTextureDatas
 * @return A value converted from C/C++ "const cocos2d::Map<std::basic_string<char>, cocostudio::TextureData *>&"
 */
getTextureDatas : function () {},

/**
 * @method getTextureData
 * @return A value converted from C/C++ "cocostudio::TextureData*"
 * @param {const std::string&}
 */
getTextureData : function () {},

/**
 * @method getArmatureData
 * @return A value converted from C/C++ "cocostudio::ArmatureData*"
 * @param {const std::string&}
 */
getArmatureData : function () {},

/**
 * @method getAnimationData
 * @return A value converted from C/C++ "cocostudio::AnimationData*"
 * @param {const std::string&}
 */
getAnimationData : function () {},

/**
 * @method addAnimationData
 * @param {const std::string&}
 * @param {cocostudio::AnimationData*}
 * @param {const std::string&}
 */
addAnimationData : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method removeArmatureData
 * @param {const std::string&}
 */
removeArmatureData : function () {},

/**
 * @method getArmatureDatas
 * @return A value converted from C/C++ "const cocos2d::Map<std::basic_string<char>, cocostudio::ArmatureData *>&"
 */
getArmatureDatas : function () {},

/**
 * @method removeTextureData
 * @param {const std::string&}
 */
removeTextureData : function () {},

/**
 * @method addTextureData
 * @param {const std::string&}
 * @param {cocostudio::TextureData*}
 * @param {const std::string&}
 */
addTextureData : function () {},

/**
 * @method isAutoLoadSpriteFile
 * @return A value converted from C/C++ "bool"
 */
isAutoLoadSpriteFile : function () {},

/**
 * @method addSpriteFrameFromFile
 * @param {const std::string&}
 * @param {const std::string&}
 * @param {const std::string&}
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
 * @param {const std::string&}
 */
getBone : function () {},

/**
 * @method changeBoneParent
 * @param {cocostudio::Bone*}
 * @param {const std::string&}
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
 * @method setArmatureData
 * @param {cocostudio::ArmatureData*}
 */
setArmatureData : function () {},

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
 * @return A value converted from C/C++ "const std::string&"
 */
getName : function () {},

/**
 * @method setParentBone
 * @param {cocostudio::Bone*}
 */
setParentBone : function () {},

/**
 * @method drawContour
 */
drawContour : function () {},

/**
 * @method setBatchNode
 * @param {cocostudio::BatchNode*}
 */
setBatchNode : function () {},

/**
 * @method setName
 * @param {const std::string&}
 */
setName : function () {},

/**
 * @method addBone
 * @param {cocostudio::Bone*}
 * @param {const std::string&}
 */
addBone : function () {},

/**
 * @method getArmatureData
 * @return A value converted from C/C++ "cocostudio::ArmatureData*"
 */
getArmatureData : function () {},

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
 * @return A value converted from C/C++ "const cocos2d::Map<std::basic_string<char>, cocostudio::Bone *>&"
 */
getBoneDic : function () {},

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
 * @return A value converted from C/C++ "kmMat4"
 */
getNodeToWorldTransformAR : function () {},

/**
 * @method initWithFile
 * @return A value converted from C/C++ "bool"
 * @param {const std::string&}
 */
initWithFile : function () {},

/**
 * @method getDisplayName
 * @return A value converted from C/C++ "const std::string&"
 */
getDisplayName : function () {},

/**
 * @method updateArmatureTransform
 */
updateArmatureTransform : function () {},

/**
 * @method initWithSpriteFrameName
 * @return A value converted from C/C++ "bool"
 * @param {const std::string&}
 */
initWithSpriteFrameName : function () {},

/**
 * @method setBone
 * @param {cocostudio::Bone*}
 */
setBone : function () {},

/**
 * @method createWithSpriteFrameName
 * @return A value converted from C/C++ "cocostudio::Skin*"
 * @param {const std::string&}
 */
createWithSpriteFrameName : function () {},

/**
 * @method Skin
 * @constructor
 */
Skin : function () {},

};

/**
 * @class ComAttribute
 */
ccs.ComAttribute = {

/**
 * @method getFloat
 * @return A value converted from C/C++ "float"
 * @param {const char*}
 */
getFloat : function () {},

/**
 * @method getDict
 * @return A value converted from C/C++ "cocostudio::JsonDictionary*"
 */
getDict : function () {},

/**
 * @method setFloat
 * @param {const char*}
 * @param {float}
 */
setFloat : function () {},

/**
 * @method setCString
 * @param {const char*}
 * @param {const char*}
 */
setCString : function () {},

/**
 * @method getCString
 * @return A value converted from C/C++ "const char*"
 * @param {const char*}
 */
getCString : function () {},

/**
 * @method getBool
 * @return A value converted from C/C++ "bool"
 * @param {const char*}
 */
getBool : function () {},

/**
 * @method setInt
 * @param {const char*}
 * @param {int}
 */
setInt : function () {},

/**
 * @method getInt
 * @return A value converted from C/C++ "int"
 * @param {const char*}
 */
getInt : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method setBool
 * @param {const char*}
 * @param {bool}
 */
setBool : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ComAttribute*"
 */
create : function () {},

};

/**
 * @class ComAudio
 */
ccs.ComAudio = {

/**
 * @method stopAllEffects
 */
stopAllEffects : function () {},

/**
 * @method getEffectsVolume
 * @return A value converted from C/C++ "float"
 */
getEffectsVolume : function () {},

/**
 * @method stopEffect
 * @param {unsigned int}
 */
stopEffect : function () {},

/**
 * @method getBackgroundMusicVolume
 * @return A value converted from C/C++ "float"
 */
getBackgroundMusicVolume : function () {},

/**
 * @method willPlayBackgroundMusic
 * @return A value converted from C/C++ "bool"
 */
willPlayBackgroundMusic : function () {},

/**
 * @method setBackgroundMusicVolume
 * @param {float}
 */
setBackgroundMusicVolume : function () {},

/**
 * @method end
 */
end : function () {},

/**
 * @method isEnabled
 * @return A value converted from C/C++ "bool"
 */
isEnabled : function () {},

/**
 * @method pauseBackgroundMusic
 */
pauseBackgroundMusic : function () {},

/**
 * @method isBackgroundMusicPlaying
 * @return A value converted from C/C++ "bool"
 */
isBackgroundMusicPlaying : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method isLoop
 * @return A value converted from C/C++ "bool"
 */
isLoop : function () {},

/**
 * @method pauseAllEffects
 */
pauseAllEffects : function () {},

/**
 * @method setEnabled
 * @param {bool}
 */
setEnabled : function () {},

/**
 * @method preloadBackgroundMusic
 * @param {const char*}
 */
preloadBackgroundMusic : function () {},

/**
 * @method resumeAllEffects
 */
resumeAllEffects : function () {},

/**
 * @method setLoop
 * @param {bool}
 */
setLoop : function () {},

/**
 * @method unloadEffect
 * @param {const char*}
 */
unloadEffect : function () {},

/**
 * @method rewindBackgroundMusic
 */
rewindBackgroundMusic : function () {},

/**
 * @method preloadEffect
 * @param {const char*}
 */
preloadEffect : function () {},

/**
 * @method pauseEffect
 * @param {unsigned int}
 */
pauseEffect : function () {},

/**
 * @method resumeBackgroundMusic
 */
resumeBackgroundMusic : function () {},

/**
 * @method setFile
 * @param {const char*}
 */
setFile : function () {},

/**
 * @method setEffectsVolume
 * @param {float}
 */
setEffectsVolume : function () {},

/**
 * @method getFile
 * @return A value converted from C/C++ "const char*"
 */
getFile : function () {},

/**
 * @method resumeEffect
 * @param {unsigned int}
 */
resumeEffect : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ComAudio*"
 */
create : function () {},

};

/**
 * @class ComController
 */
ccs.ComController = {

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ComController*"
 */
create : function () {},

/**
 * @method ComController
 * @constructor
 */
ComController : function () {},

};

/**
 * @class ComRender
 */
ccs.ComRender = {

/**
 * @method getNode
 * @return A value converted from C/C++ "cocos2d::Node*"
 */
getNode : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocostudio::ComRender*"
 * @param {cocos2d::Node*}
 * @param {const char*}
 */
create : function () {},

};

/**
 * @class GUIReader
 */
ccs.GUIReader = {

/**
 * @method widgetFromJsonFile
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {const char*}
 */
widgetFromJsonFile : function () {},

/**
 * @method getVersionInteger
 * @return A value converted from C/C++ "int"
 * @param {const char*}
 */
getVersionInteger : function () {},

/**
 * @method getFileDesignSize
 * @return A value converted from C/C++ "cocos2d::Size"
 * @param {const char*}
 */
getFileDesignSize : function () {},

/**
 * @method storeFileDesignSize
 * @param {const char*}
 * @param {const cocos2d::Size&}
 */
storeFileDesignSize : function () {},

/**
 * @method purgeGUIReader
 */
purgeGUIReader : function () {},

/**
 * @method shareReader
 * @return A value converted from C/C++ "cocostudio::GUIReader*"
 */
shareReader : function () {},

/**
 * @method GUIReader
 * @constructor
 */
GUIReader : function () {},

};

/**
 * @class SceneReader
 */
ccs.SceneReader = {

/**
 * @method purgeSceneReader
 */
purgeSceneReader : function () {},

/**
 * @method createNodeWithSceneFile
 * @return A value converted from C/C++ "cocos2d::Node*"
 * @param {const char*}
 */
createNodeWithSceneFile : function () {},

/**
 * @method sceneReaderVersion
 * @return A value converted from C/C++ "const char*"
 */
sceneReaderVersion : function () {},

/**
 * @method getInstance
 * @return A value converted from C/C++ "cocostudio::SceneReader*"
 */
getInstance : function () {},

/**
 * @method SceneReader
 * @constructor
 */
SceneReader : function () {},

};
