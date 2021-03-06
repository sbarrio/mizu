// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IFlxUIButton_obj_sMemberFields[] = {
	HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"),
	HX_HCSTRING("set_toggle_label","\xc6","\xd5","\xfc","\x37"),
	HX_HCSTRING("get_justMousedOver","\xa8","\xe1","\x12","\x50"),
	HX_HCSTRING("get_mouseIsOver","\xfa","\x41","\x89","\x1d"),
	HX_HCSTRING("get_mouseIsOut","\xa8","\x46","\x15","\x55"),
	HX_HCSTRING("get_justMousedOut","\xba","\xb6","\xed","\x9f"),
	HX_HCSTRING("set_status","\x6f","\xf5","\x00","\xfa"),
	HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"),
	HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"),
	HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e"),
	HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd"),
	HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa"),
	HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06"),
	HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08"),
	HX_HCSTRING("over_visible","\x47","\xd7","\x44","\x92"),
	HX_HCSTRING("down_visible","\x55","\xfc","\x6c","\x72"),
	HX_HCSTRING("up_toggle_visible","\x2b","\x86","\xe9","\x3f"),
	HX_HCSTRING("over_toggle_visible","\x52","\x9b","\xc8","\x49"),
	HX_HCSTRING("down_toggle_visible","\x04","\x54","\xe1","\xa9"),
	HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"),
	HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"),
	HX_HCSTRING("has_toggle","\x19","\x91","\x1d","\xbb"),
	HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"),
	HX_HCSTRING("toggle_label","\xc9","\xfb","\x1b","\xdd"),
	HX_HCSTRING("autoResizeLabel","\x31","\x30","\xad","\x1c"),
	HX_HCSTRING("autoCenterLabel","\xb0","\xb4","\x79","\xaf"),
	HX_HCSTRING("loadGraphicSlice9","\x69","\x16","\x70","\x91"),
	HX_HCSTRING("loadGraphicsMultiple","\x41","\x7c","\x04","\x85"),
	HX_HCSTRING("loadGraphicsUpOverDown","\xc2","\xad","\x54","\x5b"),
	HX_HCSTRING("forceStateHandler","\x44","\x68","\x8f","\x7c"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	::String(null()) };

static void IFlxUIButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxUIButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFlxUIButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxUIButton_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxUIButton_obj::__mClass;

void IFlxUIButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.interfaces.IFlxUIButton","\x52","\x5d","\xe9","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFlxUIButton_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxUIButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x2772d80c >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFlxUIButton_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
