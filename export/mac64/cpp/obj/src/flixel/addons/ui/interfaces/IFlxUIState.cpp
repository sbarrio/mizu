// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltipManager
#include <flixel/addons/ui/FlxUITooltipManager.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IFlxUIState_obj_sMemberFields[] = {
	HX_HCSTRING("forceFocus","\xed","\x49","\x5e","\x9b"),
	HX_HCSTRING("tooltips","\x10","\xb6","\x8a","\xd0"),
	HX_HCSTRING("_tongue","\x63","\x57","\x5b","\x02"),
	::String(null()) };

static void IFlxUIState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxUIState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFlxUIState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxUIState_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxUIState_obj::__mClass;

void IFlxUIState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.interfaces.IFlxUIState","\xb1","\x06","\xe1","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFlxUIState_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxUIState_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x0bdac137 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFlxUIState_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
