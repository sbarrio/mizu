// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_729ca37c5683ec35_51_new,"flixel.system.frontEnds.BitmapLogFrontEnd","new",0xa186019f,"flixel.system.frontEnds.BitmapLogFrontEnd.new","flixel/system/frontEnds/BitmapLogFrontEnd.hx",51,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_9_add,"flixel.system.frontEnds.BitmapLogFrontEnd","add",0xa17c2360,"flixel.system.frontEnds.BitmapLogFrontEnd.add","flixel/system/frontEnds/BitmapLogFrontEnd.hx",9,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_19_clear,"flixel.system.frontEnds.BitmapLogFrontEnd","clear",0x3f6bb08c,"flixel.system.frontEnds.BitmapLogFrontEnd.clear","flixel/system/frontEnds/BitmapLogFrontEnd.hx",19,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_30_clearAt,"flixel.system.frontEnds.BitmapLogFrontEnd","clearAt",0xb622249f,"flixel.system.frontEnds.BitmapLogFrontEnd.clearAt","flixel/system/frontEnds/BitmapLogFrontEnd.hx",30,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_40_viewCache,"flixel.system.frontEnds.BitmapLogFrontEnd","viewCache",0xebde341c,"flixel.system.frontEnds.BitmapLogFrontEnd.viewCache","flixel/system/frontEnds/BitmapLogFrontEnd.hx",40,0x20ede752)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void BitmapLogFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_51_new)
            	}

Dynamic BitmapLogFrontEnd_obj::__CreateEmpty() { return new BitmapLogFrontEnd_obj; }

void *BitmapLogFrontEnd_obj::_hx_vtable = 0;

Dynamic BitmapLogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapLogFrontEnd_obj > _hx_result = new BitmapLogFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapLogFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ee62c55;
}

void BitmapLogFrontEnd_obj::add( ::openfl::_legacy::display::BitmapData Data,::String __o_Name){
::String Name = __o_Name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_9_add)
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLogFrontEnd_obj,add,(void))

void BitmapLogFrontEnd_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_19_clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,clear,(void))

void BitmapLogFrontEnd_obj::clearAt(hx::Null< int >  __o_Index){
int Index = __o_Index.Default(-1);
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_30_clearAt)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLogFrontEnd_obj,clearAt,(void))

void BitmapLogFrontEnd_obj::viewCache(){
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_40_viewCache)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,viewCache,(void))


hx::ObjectPtr< BitmapLogFrontEnd_obj > BitmapLogFrontEnd_obj::__new() {
	hx::ObjectPtr< BitmapLogFrontEnd_obj > __this = new BitmapLogFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BitmapLogFrontEnd_obj > BitmapLogFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	BitmapLogFrontEnd_obj *__this = (BitmapLogFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BitmapLogFrontEnd_obj), false, "flixel.system.frontEnds.BitmapLogFrontEnd"));
	*(void **)__this = BitmapLogFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapLogFrontEnd_obj::BitmapLogFrontEnd_obj()
{
}

hx::Val BitmapLogFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clearAt") ) { return hx::Val( clearAt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewCache") ) { return hx::Val( viewCache_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BitmapLogFrontEnd_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BitmapLogFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapLogFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearAt","\xe0","\xe7","\x44","\xab"),
	HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"),
	::String(null()) };

static void BitmapLogFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapLogFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLogFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapLogFrontEnd_obj::__mClass;

void BitmapLogFrontEnd_obj::__register()
{
	hx::Object *dummy = new BitmapLogFrontEnd_obj;
	BitmapLogFrontEnd_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.BitmapLogFrontEnd","\x2d","\x46","\xa7","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapLogFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapLogFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapLogFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapLogFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapLogFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapLogFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
