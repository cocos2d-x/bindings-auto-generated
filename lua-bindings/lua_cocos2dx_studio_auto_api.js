/**
 * @module cocos2dx_studio
 */
var ccs = ccs || {};

/**
 * @class LayoutParameter
 */
ccs.LayoutParameter = {

/**
 * @method getLayoutType
 * @return A value converted from C/C++ "cocos2d::gui::LayoutParameterType"
 */
getLayoutType : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::LayoutParameter*"
 */
create : function () {},

/**
 * @method LayoutParameter
 * @constructor
 */
LayoutParameter : function () {},

};

/**
 * @class LinearLayoutParameter
 */
ccs.LinearLayoutParameter = {

/**
 * @method setGravity
 * @param {cocos2d::gui::LinearGravity}
 */
setGravity : function () {},

/**
 * @method getGravity
 * @return A value converted from C/C++ "cocos2d::gui::LinearGravity"
 */
getGravity : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::LinearLayoutParameter*"
 */
create : function () {},

/**
 * @method LinearLayoutParameter
 * @constructor
 */
LinearLayoutParameter : function () {},

};

/**
 * @class RelativeLayoutParameter
 */
ccs.RelativeLayoutParameter = {

/**
 * @method setAlign
 * @param {cocos2d::gui::RelativeAlign}
 */
setAlign : function () {},

/**
 * @method setRelativeToWidgetName
 * @param {const char*}
 */
setRelativeToWidgetName : function () {},

/**
 * @method getRelativeName
 * @return A value converted from C/C++ "const char*"
 */
getRelativeName : function () {},

/**
 * @method getRelativeToWidgetName
 * @return A value converted from C/C++ "const char*"
 */
getRelativeToWidgetName : function () {},

/**
 * @method setRelativeName
 * @param {const char*}
 */
setRelativeName : function () {},

/**
 * @method getAlign
 * @return A value converted from C/C++ "cocos2d::gui::RelativeAlign"
 */
getAlign : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::RelativeLayoutParameter*"
 */
create : function () {},

/**
 * @method RelativeLayoutParameter
 * @constructor
 */
RelativeLayoutParameter : function () {},

};

/**
 * @class Widget
 */
ccs.Widget = {

/**
 * @method getVirtualRenderer
 * @return A value converted from C/C++ "cocos2d::Node*"
 */
getVirtualRenderer : function () {},

/**
 * @method setSizePercent
 * @param {const cocos2d::Point&}
 */
setSizePercent : function () {},

/**
 * @method isFlipX
 * @return A value converted from C/C++ "bool"
 */
isFlipX : function () {},

/**
 * @method setActionTag
 * @param {int}
 */
setActionTag : function () {},

/**
 * @method getLeftInParent
 * @return A value converted from C/C++ "float"
 */
getLeftInParent : function () {},

/**
 * @method setUpdateEnabled
 * @param {bool}
 */
setUpdateEnabled : function () {},

/**
 * @method getTouchEndPos
 * @return A value converted from C/C++ "const cocos2d::Point&"
 */
getTouchEndPos : function () {},

/**
 * @method setPositionPercent
 * @param {const cocos2d::Point&}
 */
setPositionPercent : function () {},

/**
 * @method setPositionType
 * @param {cocos2d::gui::PositionType}
 */
setPositionType : function () {},

/**
 * @method getName
 * @return A value converted from C/C++ "const char*"
 */
getName : function () {},

/**
 * @method isIgnoreContentAdaptWithSize
 * @return A value converted from C/C++ "bool"
 */
isIgnoreContentAdaptWithSize : function () {},

/**
 * @method updateSizeAndPosition
 */
updateSizeAndPosition : function () {},

/**
 * @method getBottomInParent
 * @return A value converted from C/C++ "float"
 */
getBottomInParent : function () {},

/**
 * @method getActionTag
 * @return A value converted from C/C++ "int"
 */
getActionTag : function () {},

/**
 * @method getLayoutParameter
 * @return A value converted from C/C++ "cocos2d::gui::LayoutParameter*"
 * @param {cocos2d::gui::LayoutParameterType}
 */
getLayoutParameter : function () {},

/**
 * @method hitTest
 * @return A value converted from C/C++ "bool"
 * @param {const cocos2d::Point&}
 */
hitTest : function () {},

/**
 * @method getPositionType
 * @return A value converted from C/C++ "cocos2d::gui::PositionType"
 */
getPositionType : function () {},

/**
 * @method getWidgetType
 * @return A value converted from C/C++ "cocos2d::gui::WidgetType"
 */
getWidgetType : function () {},

/**
 * @method getChildByName
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {const char*}
 */
getChildByName : function () {},

/**
 * @method isEnabled
 * @return A value converted from C/C++ "bool"
 */
isEnabled : function () {},

/**
 * @method isFlipY
 * @return A value converted from C/C++ "bool"
 */
isFlipY : function () {},

/**
 * @method isTouchEnabled
 * @return A value converted from C/C++ "bool"
 */
isTouchEnabled : function () {},

/**
 * @method getContentSize
 * @return A value converted from C/C++ "const cocos2d::Size&"
 */
getContentSize : function () {},

/**
 * @method getTouchStartPos
 * @return A value converted from C/C++ "const cocos2d::Point&"
 */
getTouchStartPos : function () {},

/**
 * @method didNotSelectSelf
 */
didNotSelectSelf : function () {},

/**
 * @method setFocused
 * @param {bool}
 */
setFocused : function () {},

/**
 * @method setTouchEnabled
 * @param {bool}
 */
setTouchEnabled : function () {},

/**
 * @method clone
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 */
clone : function () {},

/**
 * @method getTouchMovePos
 * @return A value converted from C/C++ "const cocos2d::Point&"
 */
getTouchMovePos : function () {},

/**
 * @method setEnabled
 * @param {bool}
 */
setEnabled : function () {},

/**
 * @method setBrightStyle
 * @param {cocos2d::gui::BrightStyle}
 */
setBrightStyle : function () {},

/**
 * @method setName
 * @param {const char*}
 */
setName : function () {},

/**
 * @method setLayoutParameter
 * @param {cocos2d::gui::LayoutParameter*}
 */
setLayoutParameter : function () {},

/**
 * @method setFlipY
 * @param {bool}
 */
setFlipY : function () {},

/**
 * @method setFlipX
 * @param {bool}
 */
setFlipX : function () {},

/**
 * @method isBright
 * @return A value converted from C/C++ "bool"
 */
isBright : function () {},

/**
 * @method clippingParentAreaContainPoint
 * @return A value converted from C/C++ "bool"
 * @param {const cocos2d::Point&}
 */
clippingParentAreaContainPoint : function () {},

/**
 * @method getSizePercent
 * @return A value converted from C/C++ "const cocos2d::Point&"
 */
getSizePercent : function () {},

/**
 * @method setPosition
 * @param {const cocos2d::Point&}
 */
setPosition : function () {},

/**
 * @method isUpdateEnabled
 * @return A value converted from C/C++ "bool"
 */
isUpdateEnabled : function () {},

/**
 * @method getSize
 * @return A value converted from C/C++ "const cocos2d::Size&"
 */
getSize : function () {},

/**
 * @method getRightInParent
 * @return A value converted from C/C++ "float"
 */
getRightInParent : function () {},

/**
 * @method getSizeType
 * @return A value converted from C/C++ "cocos2d::gui::SizeType"
 */
getSizeType : function () {},

/**
 * @method ignoreContentAdaptWithSize
 * @param {bool}
 */
ignoreContentAdaptWithSize : function () {},

/**
 * @method getWorldPosition
 * @return A value converted from C/C++ "cocos2d::Point"
 */
getWorldPosition : function () {},

/**
 * @method getPositionPercent
 * @return A value converted from C/C++ "const cocos2d::Point&"
 */
getPositionPercent : function () {},

/**
 * @method getTopInParent
 * @return A value converted from C/C++ "float"
 */
getTopInParent : function () {},

/**
 * @method isFocused
 * @return A value converted from C/C++ "bool"
 */
isFocused : function () {},

/**
 * @method setSizeType
 * @param {cocos2d::gui::SizeType}
 */
setSizeType : function () {},

/**
 * @method checkChildInfo
 * @param {int}
 * @param {cocos2d::gui::Widget*}
 * @param {const cocos2d::Point&}
 */
checkChildInfo : function () {},

/**
 * @method setSize
 * @param {const cocos2d::Size&}
 */
setSize : function () {},

/**
 * @method setBright
 * @param {bool}
 */
setBright : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 */
create : function () {},

/**
 * @method Widget
 * @constructor
 */
Widget : function () {},

};

/**
 * @class Layout
 */
ccs.Layout = {

/**
 * @method setBackGroundColorVector
 * @param {const cocos2d::Point&}
 */
setBackGroundColorVector : function () {},

/**
 * @method getBackGroundImageTextureSize
 * @return A value converted from C/C++ "const cocos2d::Size&"
 */
getBackGroundImageTextureSize : function () {},

/**
 * @method getLayoutType
 * @return A value converted from C/C++ "cocos2d::gui::LayoutType"
 */
getLayoutType : function () {},

/**
 * @method setClippingType
 * @param {cocos2d::gui::LayoutClippingType}
 */
setClippingType : function () {},

/**
 * @method setBackGroundColorType
 * @param {cocos2d::gui::LayoutBackGroundColorType}
 */
setBackGroundColorType : function () {},

/**
 * @method setBackGroundImage
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
setBackGroundImage : function () {},

/**
 * @method requestDoLayout
 */
requestDoLayout : function () {},

/**
 * @method isClippingEnabled
 * @return A value converted from C/C++ "bool"
 */
isClippingEnabled : function () {},

/**
 * @method setBackGroundColorOpacity
 * @param {int}
 */
setBackGroundColorOpacity : function () {},

/**
 * @method setBackGroundImageCapInsets
 * @param {const cocos2d::Rect&}
 */
setBackGroundImageCapInsets : function () {},

/**
 * @method removeBackGroundImage
 */
removeBackGroundImage : function () {},

/**
 * @method setBackGroundImageScale9Enabled
 * @param {bool}
 */
setBackGroundImageScale9Enabled : function () {},

/**
 * @method setClippingEnabled
 * @param {bool}
 */
setClippingEnabled : function () {},

/**
 * @method setLayoutType
 * @param {cocos2d::gui::LayoutType}
 */
setLayoutType : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::Layout*"
 */
create : function () {},

/**
 * @method Layout
 * @constructor
 */
Layout : function () {},

};

/**
 * @class Button
 */
ccs.Button = {

/**
 * @method getTitleText
 * @return A value converted from C/C++ "const std::string&"
 */
getTitleText : function () {},

/**
 * @method loadTextureNormal
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureNormal : function () {},

/**
 * @method setCapInsetsNormalRenderer
 * @param {const cocos2d::Rect&}
 */
setCapInsetsNormalRenderer : function () {},

/**
 * @method setCapInsetsPressedRenderer
 * @param {const cocos2d::Rect&}
 */
setCapInsetsPressedRenderer : function () {},

/**
 * @method loadTexturePressed
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTexturePressed : function () {},

/**
 * @method setTitleFontSize
 * @param {float}
 */
setTitleFontSize : function () {},

/**
 * @method setCapInsetsDisabledRenderer
 * @param {const cocos2d::Rect&}
 */
setCapInsetsDisabledRenderer : function () {},

/**
 * @method setTitleFontName
 * @param {const char*}
 */
setTitleFontName : function () {},

/**
 * @method getTitleColor
 * @return A value converted from C/C++ "const cocos2d::Color3B&"
 */
getTitleColor : function () {},

/**
 * @method loadTextureDisabled
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureDisabled : function () {},

/**
 * @method getTitleFontName
 * @return A value converted from C/C++ "const char*"
 */
getTitleFontName : function () {},

/**
 * @method setPressedActionEnabled
 * @param {bool}
 */
setPressedActionEnabled : function () {},

/**
 * @method setCapInsets
 * @param {const cocos2d::Rect&}
 */
setCapInsets : function () {},

/**
 * @method setScale9Enabled
 * @param {bool}
 */
setScale9Enabled : function () {},

/**
 * @method loadTextures
 * @param {const char*}
 * @param {const char*}
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextures : function () {},

/**
 * @method getTitleFontSize
 * @return A value converted from C/C++ "float"
 */
getTitleFontSize : function () {},

/**
 * @method setTitleText
 * @param {const std::string&}
 */
setTitleText : function () {},

/**
 * @method setTitleColor
 * @param {const cocos2d::Color3B&}
 */
setTitleColor : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::Button*"
 */
create : function () {},

/**
 * @method Button
 * @constructor
 */
Button : function () {},

};

/**
 * @class CheckBox
 */
ccs.CheckBox = {

/**
 * @method getSelectedState
 * @return A value converted from C/C++ "bool"
 */
getSelectedState : function () {},

/**
 * @method loadTextureBackGroundSelected
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureBackGroundSelected : function () {},

/**
 * @method loadTextureBackGroundDisabled
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureBackGroundDisabled : function () {},

/**
 * @method loadTextureFrontCross
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureFrontCross : function () {},

/**
 * @method loadTextures
 * @param {const char*}
 * @param {const char*}
 * @param {const char*}
 * @param {const char*}
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextures : function () {},

/**
 * @method loadTextureBackGround
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureBackGround : function () {},

/**
 * @method setSelectedState
 * @param {bool}
 */
setSelectedState : function () {},

/**
 * @method loadTextureFrontCrossDisabled
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTextureFrontCrossDisabled : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::CheckBox*"
 */
create : function () {},

/**
 * @method CheckBox
 * @constructor
 */
CheckBox : function () {},

};

/**
 * @class ImageView
 */
ccs.ImageView = {

/**
 * @method setTextureRect
 * @param {const cocos2d::Rect&}
 */
setTextureRect : function () {},

/**
 * @method setCapInsets
 * @param {const cocos2d::Rect&}
 */
setCapInsets : function () {},

/**
 * @method setScale9Enabled
 * @param {bool}
 */
setScale9Enabled : function () {},

/**
 * @method loadTexture
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTexture : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::ImageView*"
 */
create : function () {},

/**
 * @method ImageView
 * @constructor
 */
ImageView : function () {},

};

/**
 * @class Label
 */
ccs.Label = {

/**
 * @method getStringLength
 * @return A value converted from C/C++ "int"
 */
getStringLength : function () {},

/**
 * @method setFontName
 * @param {const std::string&}
 */
setFontName : function () {},

/**
 * @method setTouchScaleChangeEnabled
 * @param {bool}
 */
setTouchScaleChangeEnabled : function () {},

/**
 * @method getStringValue
 * @return A value converted from C/C++ "const std::string&"
 */
getStringValue : function () {},

/**
 * @method setText
 * @param {const std::string&}
 */
setText : function () {},

/**
 * @method setTextVerticalAlignment
 * @param {cocos2d::TextVAlignment}
 */
setTextVerticalAlignment : function () {},

/**
 * @method setFontSize
 * @param {int}
 */
setFontSize : function () {},

/**
 * @method isTouchScaleChangeEnabled
 * @return A value converted from C/C++ "bool"
 */
isTouchScaleChangeEnabled : function () {},

/**
 * @method setTextHorizontalAlignment
 * @param {cocos2d::TextHAlignment}
 */
setTextHorizontalAlignment : function () {},

/**
 * @method setTextAreaSize
 * @param {const cocos2d::Size&}
 */
setTextAreaSize : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::Label*"
 */
create : function () {},

/**
 * @method Label
 * @constructor
 */
Label : function () {},

};

/**
 * @class LabelAtlas
 */
ccs.LabelAtlas = {

/**
 * @method setProperty
 * @param {const std::string&}
 * @param {const std::string&}
 * @param {int}
 * @param {int}
 * @param {const std::string&}
 */
setProperty : function () {},

/**
 * @method getStringValue
 * @return A value converted from C/C++ "const std::string&"
 */
getStringValue : function () {},

/**
 * @method setStringValue
 * @param {const std::string&}
 */
setStringValue : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::LabelAtlas*"
 */
create : function () {},

/**
 * @method LabelAtlas
 * @constructor
 */
LabelAtlas : function () {},

};

/**
 * @class LoadingBar
 */
ccs.LoadingBar = {

/**
 * @method setPercent
 * @param {int}
 */
setPercent : function () {},

/**
 * @method loadTexture
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadTexture : function () {},

/**
 * @method setDirection
 * @param {cocos2d::gui::LoadingBarType}
 */
setDirection : function () {},

/**
 * @method setScale9Enabled
 * @param {bool}
 */
setScale9Enabled : function () {},

/**
 * @method setCapInsets
 * @param {const cocos2d::Rect&}
 */
setCapInsets : function () {},

/**
 * @method getDirection
 * @return A value converted from C/C++ "int"
 */
getDirection : function () {},

/**
 * @method getPercent
 * @return A value converted from C/C++ "int"
 */
getPercent : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::LoadingBar*"
 */
create : function () {},

/**
 * @method LoadingBar
 * @constructor
 */
LoadingBar : function () {},

};

/**
 * @class ScrollView
 */
ccs.ScrollView = {

/**
 * @method scrollToTop
 * @param {float}
 * @param {bool}
 */
scrollToTop : function () {},

/**
 * @method scrollToPercentHorizontal
 * @param {float}
 * @param {float}
 * @param {bool}
 */
scrollToPercentHorizontal : function () {},

/**
 * @method isInertiaScrollEnabled
 * @return A value converted from C/C++ "bool"
 */
isInertiaScrollEnabled : function () {},

/**
 * @method scrollToPercentBothDirection
 * @param {const cocos2d::Point&}
 * @param {float}
 * @param {bool}
 */
scrollToPercentBothDirection : function () {},

/**
 * @method getDirection
 * @return A value converted from C/C++ "cocos2d::gui::SCROLLVIEW_DIR"
 */
getDirection : function () {},

/**
 * @method scrollToBottomLeft
 * @param {float}
 * @param {bool}
 */
scrollToBottomLeft : function () {},

/**
 * @method getInnerContainer
 * @return A value converted from C/C++ "cocos2d::gui::Layout*"
 */
getInnerContainer : function () {},

/**
 * @method jumpToBottom
 */
jumpToBottom : function () {},

/**
 * @method setDirection
 * @param {cocos2d::gui::SCROLLVIEW_DIR}
 */
setDirection : function () {},

/**
 * @method scrollToTopLeft
 * @param {float}
 * @param {bool}
 */
scrollToTopLeft : function () {},

/**
 * @method jumpToTopRight
 */
jumpToTopRight : function () {},

/**
 * @method jumpToBottomLeft
 */
jumpToBottomLeft : function () {},

/**
 * @method setInnerContainerSize
 * @param {const cocos2d::Size&}
 */
setInnerContainerSize : function () {},

/**
 * @method getInnerContainerSize
 * @return A value converted from C/C++ "const cocos2d::Size&"
 */
getInnerContainerSize : function () {},

/**
 * @method isBounceEnabled
 * @return A value converted from C/C++ "bool"
 */
isBounceEnabled : function () {},

/**
 * @method jumpToPercentVertical
 * @param {float}
 */
jumpToPercentVertical : function () {},

/**
 * @method setInertiaScrollEnabled
 * @param {bool}
 */
setInertiaScrollEnabled : function () {},

/**
 * @method jumpToTopLeft
 */
jumpToTopLeft : function () {},

/**
 * @method jumpToPercentHorizontal
 * @param {float}
 */
jumpToPercentHorizontal : function () {},

/**
 * @method jumpToBottomRight
 */
jumpToBottomRight : function () {},

/**
 * @method setBounceEnabled
 * @param {bool}
 */
setBounceEnabled : function () {},

/**
 * @method jumpToTop
 */
jumpToTop : function () {},

/**
 * @method scrollToLeft
 * @param {float}
 * @param {bool}
 */
scrollToLeft : function () {},

/**
 * @method jumpToPercentBothDirection
 * @param {const cocos2d::Point&}
 */
jumpToPercentBothDirection : function () {},

/**
 * @method scrollToPercentVertical
 * @param {float}
 * @param {float}
 * @param {bool}
 */
scrollToPercentVertical : function () {},

/**
 * @method scrollToBottom
 * @param {float}
 * @param {bool}
 */
scrollToBottom : function () {},

/**
 * @method scrollToBottomRight
 * @param {float}
 * @param {bool}
 */
scrollToBottomRight : function () {},

/**
 * @method jumpToLeft
 */
jumpToLeft : function () {},

/**
 * @method scrollToRight
 * @param {float}
 * @param {bool}
 */
scrollToRight : function () {},

/**
 * @method jumpToRight
 */
jumpToRight : function () {},

/**
 * @method scrollToTopRight
 * @param {float}
 * @param {bool}
 */
scrollToTopRight : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::ScrollView*"
 */
create : function () {},

/**
 * @method ScrollView
 * @constructor
 */
ScrollView : function () {},

};

/**
 * @class ListView
 */
ccs.ListView = {

/**
 * @method getIndex
 * @return A value converted from C/C++ "unsigned int"
 * @param {cocos2d::gui::Widget*}
 */
getIndex : function () {},

/**
 * @method removeAllItems
 */
removeAllItems : function () {},

/**
 * @method setGravity
 * @param {cocos2d::gui::ListViewGravity}
 */
setGravity : function () {},

/**
 * @method pushBackCustomItem
 * @param {cocos2d::gui::Widget*}
 */
pushBackCustomItem : function () {},

/**
 * @method getItems
 * @return A value converted from C/C++ "cocos2d::Vector<cocos2d::gui::Widget *>&"
 */
getItems : function () {},

/**
 * @method removeItem
 * @param {int}
 */
removeItem : function () {},

/**
 * @method getCurSelectedIndex
 * @return A value converted from C/C++ "int"
 */
getCurSelectedIndex : function () {},

/**
 * @method insertDefaultItem
 * @param {int}
 */
insertDefaultItem : function () {},

/**
 * @method setItemsMargin
 * @param {float}
 */
setItemsMargin : function () {},

/**
 * @method removeLastItem
 */
removeLastItem : function () {},

/**
 * @method getItem
 * @return A value converted from C/C++ "cocos2d::gui::Widget*"
 * @param {unsigned int}
 */
getItem : function () {},

/**
 * @method setItemModel
 * @param {cocos2d::gui::Widget*}
 */
setItemModel : function () {},

/**
 * @method requestRefreshView
 */
requestRefreshView : function () {},

/**
 * @method pushBackDefaultItem
 */
pushBackDefaultItem : function () {},

/**
 * @method insertCustomItem
 * @param {cocos2d::gui::Widget*}
 * @param {int}
 */
insertCustomItem : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::ListView*"
 */
create : function () {},

/**
 * @method ListView
 * @constructor
 */
ListView : function () {},

};

/**
 * @class Slider
 */
ccs.Slider = {

/**
 * @method setPercent
 * @param {int}
 */
setPercent : function () {},

/**
 * @method loadSlidBallTextureNormal
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadSlidBallTextureNormal : function () {},

/**
 * @method loadBarTexture
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadBarTexture : function () {},

/**
 * @method loadProgressBarTexture
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadProgressBarTexture : function () {},

/**
 * @method loadSlidBallTextures
 * @param {const char*}
 * @param {const char*}
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadSlidBallTextures : function () {},

/**
 * @method setCapInsetProgressBarRebderer
 * @param {const cocos2d::Rect&}
 */
setCapInsetProgressBarRebderer : function () {},

/**
 * @method setCapInsetsBarRenderer
 * @param {const cocos2d::Rect&}
 */
setCapInsetsBarRenderer : function () {},

/**
 * @method setScale9Enabled
 * @param {bool}
 */
setScale9Enabled : function () {},

/**
 * @method setCapInsets
 * @param {const cocos2d::Rect&}
 */
setCapInsets : function () {},

/**
 * @method loadSlidBallTexturePressed
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadSlidBallTexturePressed : function () {},

/**
 * @method loadSlidBallTextureDisabled
 * @param {const char*}
 * @param {cocos2d::gui::TextureResType}
 */
loadSlidBallTextureDisabled : function () {},

/**
 * @method getPercent
 * @return A value converted from C/C++ "int"
 */
getPercent : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::Slider*"
 */
create : function () {},

/**
 * @method Slider
 * @constructor
 */
Slider : function () {},

};

/**
 * @class TextField
 */
ccs.TextField = {

/**
 * @method setAttachWithIME
 * @param {bool}
 */
setAttachWithIME : function () {},

/**
 * @method getStringValue
 * @return A value converted from C/C++ "const std::string&"
 */
getStringValue : function () {},

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
 * @method setFontName
 * @param {const std::string&}
 */
setFontName : function () {},

/**
 * @method getInsertText
 * @return A value converted from C/C++ "bool"
 */
getInsertText : function () {},

/**
 * @method initRenderer
 */
initRenderer : function () {},

/**
 * @method getDetachWithIME
 * @return A value converted from C/C++ "bool"
 */
getDetachWithIME : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method didNotSelectSelf
 */
didNotSelectSelf : function () {},

/**
 * @method attachWithIME
 */
attachWithIME : function () {},

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
 * @method setFontSize
 * @param {int}
 */
setFontSize : function () {},

/**
 * @method setPlaceHolder
 * @param {const std::string&}
 */
setPlaceHolder : function () {},

/**
 * @method setPasswordStyleText
 * @param {const char*}
 */
setPasswordStyleText : function () {},

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
 * @method setDetachWithIME
 * @param {bool}
 */
setDetachWithIME : function () {},

/**
 * @method setText
 * @param {const std::string&}
 */
setText : function () {},

/**
 * @method setInsertText
 * @param {bool}
 */
setInsertText : function () {},

/**
 * @method setMaxLength
 * @param {int}
 */
setMaxLength : function () {},

/**
 * @method setTouchSize
 * @param {const cocos2d::Size&}
 */
setTouchSize : function () {},

/**
 * @method setDeleteBackward
 * @param {bool}
 */
setDeleteBackward : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::TextField*"
 */
create : function () {},

/**
 * @method TextField
 * @constructor
 */
TextField : function () {},

};

/**
 * @class LabelBMFont
 */
ccs.LabelBMFont = {

/**
 * @method setFntFile
 * @param {const char*}
 */
setFntFile : function () {},

/**
 * @method getStringValue
 * @return A value converted from C/C++ "const char*"
 */
getStringValue : function () {},

/**
 * @method setText
 * @param {const char*}
 */
setText : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::LabelBMFont*"
 */
create : function () {},

/**
 * @method LabelBMFont
 * @constructor
 */
LabelBMFont : function () {},

};

/**
 * @class PageView
 */
ccs.PageView = {

/**
 * @method getCurPageIndex
 * @return A value converted from C/C++ "int"
 */
getCurPageIndex : function () {},

/**
 * @method addWidgetToPage
 * @param {cocos2d::gui::Widget*}
 * @param {int}
 * @param {bool}
 */
addWidgetToPage : function () {},

/**
 * @method getPage
 * @return A value converted from C/C++ "cocos2d::gui::Layout*"
 * @param {int}
 */
getPage : function () {},

/**
 * @method removePage
 * @param {cocos2d::gui::Layout*}
 */
removePage : function () {},

/**
 * @method insertPage
 * @param {cocos2d::gui::Layout*}
 * @param {int}
 */
insertPage : function () {},

/**
 * @method scrollToPage
 * @param {int}
 */
scrollToPage : function () {},

/**
 * @method removePageAtIndex
 * @param {int}
 */
removePageAtIndex : function () {},

/**
 * @method getPages
 * @return A value converted from C/C++ "cocos2d::Vector<cocos2d::gui::Layout *>&"
 */
getPages : function () {},

/**
 * @method removeAllPages
 */
removeAllPages : function () {},

/**
 * @method addPage
 * @param {cocos2d::gui::Layout*}
 */
addPage : function () {},

/**
 * @method create
 * @return A value converted from C/C++ "cocos2d::gui::PageView*"
 */
create : function () {},

/**
 * @method PageView
 * @constructor
 */
PageView : function () {},

};

/**
 * @class ActionManagerEx
 */
ccs.ActionManagerEx = {

/**
 * @method getActionByName
 * @return A value converted from C/C++ "cocostudio::ActionObject*"
 * @param {const char*}
 * @param {const char*}
 */
getActionByName : function () {},

/**
 * @method releaseActions
 */
releaseActions : function () {},

/**
 * @method destroyInstance
 */
destroyInstance : function () {},

/**
 * @method getInstance
 * @return A value converted from C/C++ "cocostudio::ActionManagerEx*"
 */
getInstance : function () {},

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
 * @return A value converted from C/C++ "const std::string"
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
 * @method setSpeedScale
 * @param {float}
 */
setSpeedScale : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 * @param {cocostudio::Armature*}
 */
init : function () {},

/**
 * @method playWithIndexes
 * @param {const std::vector<int, std::allocator<int> >&}
 * @param {int}
 * @param {bool}
 */
playWithIndexes : function () {},

/**
 * @method play
 * @param {const std::string&}
 * @param {int}
 * @param {int}
 */
play : function () {},

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
 * @method playWithIndex
 * @param {int}
 * @param {int}
 * @param {int}
 */
playWithIndex : function () {},

/**
 * @method getCurrentMovementID
 * @return A value converted from C/C++ "std::string"
 */
getCurrentMovementID : function () {},

/**
 * @method setAnimationData
 * @param {cocostudio::AnimationData*}
 */
setAnimationData : function () {},

/**
 * @method gotoAndPlay
 * @param {int}
 */
gotoAndPlay : function () {},

/**
 * @method playWithNames
 * @param {const std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >&}
 * @param {int}
 * @param {bool}
 */
playWithNames : function () {},

/**
 * @method getMovementCount
 * @return A value converted from C/C++ "long"
 */
getMovementCount : function () {},

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
 * @method destroyInstance
 */
destroyInstance : function () {},

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
 * @param {const std::string&}
 * @param {float}
 */
getFloat : function () {},

/**
 * @method getString
 * @return A value converted from C/C++ "std::string"
 * @param {const std::string&}
 * @param {const std::string&}
 */
getString : function () {},

/**
 * @method setFloat
 * @param {const std::string&}
 * @param {float}
 */
setFloat : function () {},

/**
 * @method setString
 * @param {const std::string&}
 * @param {const std::string&}
 */
setString : function () {},

/**
 * @method getBool
 * @return A value converted from C/C++ "bool"
 * @param {const std::string&}
 * @param {bool}
 */
getBool : function () {},

/**
 * @method setInt
 * @param {const std::string&}
 * @param {int}
 */
setInt : function () {},

/**
 * @method getInt
 * @return A value converted from C/C++ "int"
 * @param {const std::string&}
 * @param {int}
 */
getInt : function () {},

/**
 * @method init
 * @return A value converted from C/C++ "bool"
 */
init : function () {},

/**
 * @method setBool
 * @param {const std::string&}
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
 * @class SceneReader
 */
ccs.SceneReader = {

/**
 * @method getNodeByTag
 * @return A value converted from C/C++ "cocos2d::Node*"
 * @param {int}
 */
getNodeByTag : function () {},

/**
 * @method createNodeWithSceneFile
 * @return A value converted from C/C++ "cocos2d::Node*"
 * @param {const char*}
 */
createNodeWithSceneFile : function () {},

/**
 * @method destroyInstance
 */
destroyInstance : function () {},

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
