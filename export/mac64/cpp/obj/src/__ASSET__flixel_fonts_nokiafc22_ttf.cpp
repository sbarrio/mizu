// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_fonts_nokiafc22_ttf
#include <__ASSET__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c395429170d5493_685_new,"__ASSET__flixel_fonts_nokiafc22_ttf","new",0x22f03f2a,"__ASSET__flixel_fonts_nokiafc22_ttf.new","DefaultAssetLibrary.hx",685,0x0fc48912)
HX_LOCAL_STACK_FRAME(_hx_pos_0014efcf238264cc_1_boot,"__ASSET__flixel_fonts_nokiafc22_ttf","boot",0x67600628,"__ASSET__flixel_fonts_nokiafc22_ttf.boot","?",1,0x0000003f)

void __ASSET__flixel_fonts_nokiafc22_ttf_obj::__construct(::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type){
::String filename = __o_filename.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_8c395429170d5493_685_new)
HXDLIN( 685)		super::__construct(filename,style,type);
            	}

Dynamic __ASSET__flixel_fonts_nokiafc22_ttf_obj::__CreateEmpty() { return new __ASSET__flixel_fonts_nokiafc22_ttf_obj; }

void *__ASSET__flixel_fonts_nokiafc22_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__flixel_fonts_nokiafc22_ttf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > _hx_result = new __ASSET__flixel_fonts_nokiafc22_ttf_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool __ASSET__flixel_fonts_nokiafc22_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3870f48c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3870f48c;
	} else {
		return inClassId==(int)0x67f42b74;
	}
}

::String __ASSET__flixel_fonts_nokiafc22_ttf_obj::resourceName;


hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > __ASSET__flixel_fonts_nokiafc22_ttf_obj::__new(::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type) {
	hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > __this = new __ASSET__flixel_fonts_nokiafc22_ttf_obj();
	__this->__construct(__o_filename,style,type);
	return __this;
}

hx::ObjectPtr< __ASSET__flixel_fonts_nokiafc22_ttf_obj > __ASSET__flixel_fonts_nokiafc22_ttf_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type) {
	__ASSET__flixel_fonts_nokiafc22_ttf_obj *__this = (__ASSET__flixel_fonts_nokiafc22_ttf_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__flixel_fonts_nokiafc22_ttf_obj), true, "__ASSET__flixel_fonts_nokiafc22_ttf"));
	*(void **)__this = __ASSET__flixel_fonts_nokiafc22_ttf_obj::_hx_vtable;
	__this->__construct(__o_filename,style,type);
	return __this;
}

__ASSET__flixel_fonts_nokiafc22_ttf_obj::__ASSET__flixel_fonts_nokiafc22_ttf_obj()
{
}

bool __ASSET__flixel_fonts_nokiafc22_ttf_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool __ASSET__flixel_fonts_nokiafc22_ttf_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__flixel_fonts_nokiafc22_ttf_obj_sMemberStorageInfo = 0;
static hx::StaticInfo __ASSET__flixel_fonts_nokiafc22_ttf_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &__ASSET__flixel_fonts_nokiafc22_ttf_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__flixel_fonts_nokiafc22_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_fonts_nokiafc22_ttf_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__flixel_fonts_nokiafc22_ttf_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__flixel_fonts_nokiafc22_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_fonts_nokiafc22_ttf_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_fonts_nokiafc22_ttf_obj::resourceName,"resourceName");
};

#endif

hx::Class __ASSET__flixel_fonts_nokiafc22_ttf_obj::__mClass;

static ::String __ASSET__flixel_fonts_nokiafc22_ttf_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void __ASSET__flixel_fonts_nokiafc22_ttf_obj::__register()
{
	hx::Object *dummy = new __ASSET__flixel_fonts_nokiafc22_ttf_obj;
	__ASSET__flixel_fonts_nokiafc22_ttf_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__flixel_fonts_nokiafc22_ttf","\x38","\x22","\x8b","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__flixel_fonts_nokiafc22_ttf_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__flixel_fonts_nokiafc22_ttf_obj::__SetStatic;
	__mClass->mMarkFunc = __ASSET__flixel_fonts_nokiafc22_ttf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(__ASSET__flixel_fonts_nokiafc22_ttf_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__flixel_fonts_nokiafc22_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__flixel_fonts_nokiafc22_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__flixel_fonts_nokiafc22_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__flixel_fonts_nokiafc22_ttf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__flixel_fonts_nokiafc22_ttf_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0014efcf238264cc_1_boot)
HXDLIN(   1)		resourceName = HX_("NME_font___ASSET__flixel_fonts_nokiafc22_ttf",01,0c,d5,08);
            	}
}

