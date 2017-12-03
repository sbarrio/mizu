// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

::openfl::_legacy::text::FontType FontType_obj::DEVICE;

::openfl::_legacy::text::FontType FontType_obj::EMBEDDED;

::openfl::_legacy::text::FontType FontType_obj::EMBEDDED_CFF;

bool FontType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEVICE",96,88,fa,23)) { outValue = FontType_obj::DEVICE; return true; }
	if (inName==HX_("EMBEDDED",8a,a9,e7,37)) { outValue = FontType_obj::EMBEDDED; return true; }
	if (inName==HX_("EMBEDDED_CFF",ce,8f,ba,23)) { outValue = FontType_obj::EMBEDDED_CFF; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FontType_obj)

int FontType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DEVICE",96,88,fa,23)) return 0;
	if (inName==HX_("EMBEDDED",8a,a9,e7,37)) return 1;
	if (inName==HX_("EMBEDDED_CFF",ce,8f,ba,23)) return 2;
	return super::__FindIndex(inName);
}

int FontType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DEVICE",96,88,fa,23)) return 0;
	if (inName==HX_("EMBEDDED",8a,a9,e7,37)) return 0;
	if (inName==HX_("EMBEDDED_CFF",ce,8f,ba,23)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FontType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEVICE",96,88,fa,23)) return DEVICE;
	if (inName==HX_("EMBEDDED",8a,a9,e7,37)) return EMBEDDED;
	if (inName==HX_("EMBEDDED_CFF",ce,8f,ba,23)) return EMBEDDED_CFF;
	return super::__Field(inName,inCallProp);
}

static ::String FontType_obj_sStaticFields[] = {
	HX_("DEVICE",96,88,fa,23),
	HX_("EMBEDDED",8a,a9,e7,37),
	HX_("EMBEDDED_CFF",ce,8f,ba,23),
	::String(null())
};

static void FontType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontType_obj::DEVICE,"DEVICE");
	HX_MARK_MEMBER_NAME(FontType_obj::EMBEDDED,"EMBEDDED");
	HX_MARK_MEMBER_NAME(FontType_obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontType_obj::DEVICE,"DEVICE");
	HX_VISIT_MEMBER_NAME(FontType_obj::EMBEDDED,"EMBEDDED");
	HX_VISIT_MEMBER_NAME(FontType_obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};
#endif

hx::Class FontType_obj::__mClass;

Dynamic __Create_FontType_obj() { return new FontType_obj; }

void FontType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.text.FontType","\xc6","\xd9","\xb6","\xae"), hx::TCanCast< FontType_obj >,FontType_obj_sStaticFields,0,
	&__Create_FontType_obj, &__Create,
	&super::__SGetClass(), &CreateFontType_obj, FontType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FontType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FontType_obj::__GetStatic;
}

void FontType_obj::__boot()
{
DEVICE = hx::CreateEnum< FontType_obj >(HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23"),0,0);
EMBEDDED = hx::CreateEnum< FontType_obj >(HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37"),1,0);
EMBEDDED_CFF = hx::CreateEnum< FontType_obj >(HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23"),2,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace text
