// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_IGraphicsData
#include <openfl/_legacy/display/IGraphicsData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ed6ca61e677a79ef_12_new,"openfl._legacy.display.IGraphicsData","new",0x66044ce0,"openfl._legacy.display.IGraphicsData.new","openfl/_legacy/display/IGraphicsData.hx",12,0x3af79f93)
namespace openfl{
namespace _legacy{
namespace display{

void IGraphicsData_obj::__construct( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_ed6ca61e677a79ef_12_new)
HXDLIN(  12)		this->_hx___handle = handle;
            	}

Dynamic IGraphicsData_obj::__CreateEmpty() { return new IGraphicsData_obj; }

void *IGraphicsData_obj::_hx_vtable = 0;

Dynamic IGraphicsData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IGraphicsData_obj > _hx_result = new IGraphicsData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IGraphicsData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0be93e14;
}


IGraphicsData_obj::IGraphicsData_obj()
{
}

void IGraphicsData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IGraphicsData);
	HX_MARK_MEMBER_NAME(_hx___handle,"__handle");
	HX_MARK_END_CLASS();
}

void IGraphicsData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___handle,"__handle");
}

hx::Val IGraphicsData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return hx::Val( _hx___handle ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IGraphicsData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { _hx___handle=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IGraphicsData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IGraphicsData_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(IGraphicsData_obj,_hx___handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IGraphicsData_obj_sStaticStorageInfo = 0;
#endif

static ::String IGraphicsData_obj_sMemberFields[] = {
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	::String(null()) };

static void IGraphicsData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IGraphicsData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsData_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsData_obj::__mClass;

void IGraphicsData_obj::__register()
{
	hx::Object *dummy = new IGraphicsData_obj;
	IGraphicsData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.IGraphicsData","\xee","\x9c","\x6c","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IGraphicsData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IGraphicsData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IGraphicsData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IGraphicsData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IGraphicsData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IGraphicsData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
