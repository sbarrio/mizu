// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_Rounding
#include <flixel/addons/ui/Rounding.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::Rounding Rounding_obj::Ceil;

::flixel::addons::ui::Rounding Rounding_obj::Floor;

::flixel::addons::ui::Rounding Rounding_obj::None;

::flixel::addons::ui::Rounding Rounding_obj::Round;

bool Rounding_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) { outValue = Rounding_obj::Ceil; return true; }
	if (inName==HX_("Floor",ac,41,c4,95)) { outValue = Rounding_obj::Floor; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = Rounding_obj::None; return true; }
	if (inName==HX_("Round",2e,68,93,80)) { outValue = Rounding_obj::Round; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Rounding_obj)

int Rounding_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) return 1;
	if (inName==HX_("Floor",ac,41,c4,95)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 3;
	if (inName==HX_("Round",2e,68,93,80)) return 2;
	return super::__FindIndex(inName);
}

int Rounding_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) return 0;
	if (inName==HX_("Floor",ac,41,c4,95)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Round",2e,68,93,80)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Rounding_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) return Ceil;
	if (inName==HX_("Floor",ac,41,c4,95)) return Floor;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("Round",2e,68,93,80)) return Round;
	return super::__Field(inName,inCallProp);
}

static ::String Rounding_obj_sStaticFields[] = {
	HX_("Floor",ac,41,c4,95),
	HX_("Ceil",25,4b,96,2c),
	HX_("Round",2e,68,93,80),
	HX_("None",d8,3e,e3,33),
	::String(null())
};

static void Rounding_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rounding_obj::Ceil,"Ceil");
	HX_MARK_MEMBER_NAME(Rounding_obj::Floor,"Floor");
	HX_MARK_MEMBER_NAME(Rounding_obj::None,"None");
	HX_MARK_MEMBER_NAME(Rounding_obj::Round,"Round");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rounding_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rounding_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Rounding_obj::Ceil,"Ceil");
	HX_VISIT_MEMBER_NAME(Rounding_obj::Floor,"Floor");
	HX_VISIT_MEMBER_NAME(Rounding_obj::None,"None");
	HX_VISIT_MEMBER_NAME(Rounding_obj::Round,"Round");
};
#endif

hx::Class Rounding_obj::__mClass;

Dynamic __Create_Rounding_obj() { return new Rounding_obj; }

void Rounding_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.addons.ui.Rounding","\xa5","\x13","\xac","\x48"), hx::TCanCast< Rounding_obj >,Rounding_obj_sStaticFields,0,
	&__Create_Rounding_obj, &__Create,
	&super::__SGetClass(), &CreateRounding_obj, Rounding_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Rounding_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Rounding_obj::__GetStatic;
}

void Rounding_obj::__boot()
{
Ceil = hx::CreateEnum< Rounding_obj >(HX_HCSTRING("Ceil","\x25","\x4b","\x96","\x2c"),1,0);
Floor = hx::CreateEnum< Rounding_obj >(HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"),0,0);
None = hx::CreateEnum< Rounding_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),3,0);
Round = hx::CreateEnum< Rounding_obj >(HX_HCSTRING("Round","\x2e","\x68","\x93","\x80"),2,0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui