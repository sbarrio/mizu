// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl__GL_Float32Data_Impl_
#include <openfl/_legacy/gl/_GL/Float32Data_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#include <openfl/_legacy/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_09fd790e687ef17b_1336__new,"openfl._legacy.gl._GL.Float32Data_Impl_","_new",0x6554cd59,"openfl._legacy.gl._GL.Float32Data_Impl_._new","openfl/_legacy/gl/GL.hx",1336,0x4e24c9f5)
HX_LOCAL_STACK_FRAME(_hx_pos_09fd790e687ef17b_1337_toDynamic,"openfl._legacy.gl._GL.Float32Data_Impl_","toDynamic",0x16de3c4c,"openfl._legacy.gl._GL.Float32Data_Impl_.toDynamic","openfl/_legacy/gl/GL.hx",1337,0x4e24c9f5)
HX_LOCAL_STACK_FRAME(_hx_pos_09fd790e687ef17b_1339_fromFloat32Array,"openfl._legacy.gl._GL.Float32Data_Impl_","fromFloat32Array",0xaf672ae0,"openfl._legacy.gl._GL.Float32Data_Impl_.fromFloat32Array","openfl/_legacy/gl/GL.hx",1339,0x4e24c9f5)
HX_LOCAL_STACK_FRAME(_hx_pos_09fd790e687ef17b_1341_fromArrayFloat,"openfl._legacy.gl._GL.Float32Data_Impl_","fromArrayFloat",0xa5888d45,"openfl._legacy.gl._GL.Float32Data_Impl_.fromArrayFloat","openfl/_legacy/gl/GL.hx",1341,0x4e24c9f5)
namespace openfl{
namespace _legacy{
namespace gl{
namespace _GL{

void Float32Data_Impl__obj::__construct() { }

Dynamic Float32Data_Impl__obj::__CreateEmpty() { return new Float32Data_Impl__obj; }

void *Float32Data_Impl__obj::_hx_vtable = 0;

Dynamic Float32Data_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Float32Data_Impl__obj > _hx_result = new Float32Data_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Float32Data_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75978f1a;
}

 ::Dynamic Float32Data_Impl__obj::_new( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_09fd790e687ef17b_1336__new)
HXDLIN(1336)		 ::Dynamic this1 = data;
HXDLIN(1336)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,_new,return )

 ::Dynamic Float32Data_Impl__obj::toDynamic( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_09fd790e687ef17b_1337_toDynamic)
HXDLIN(1337)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,toDynamic,return )

 ::Dynamic Float32Data_Impl__obj::fromFloat32Array( ::openfl::_legacy::utils::Float32Array f){
            	HX_STACKFRAME(&_hx_pos_09fd790e687ef17b_1339_fromFloat32Array)
HXDLIN(1339)		 ::Dynamic this1 = f->getByteBuffer();
HXDLIN(1339)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,fromFloat32Array,return )

 ::Dynamic Float32Data_Impl__obj::fromArrayFloat(::Array< Float > f){
            	HX_STACKFRAME(&_hx_pos_09fd790e687ef17b_1341_fromArrayFloat)
HXDLIN(1341)		 ::Dynamic this1 = f;
HXDLIN(1341)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,fromArrayFloat,return )


Float32Data_Impl__obj::Float32Data_Impl__obj()
{
}

bool Float32Data_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromArrayFloat") ) { outValue = fromArrayFloat_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromFloat32Array") ) { outValue = fromFloat32Array_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Float32Data_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Float32Data_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Float32Data_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Data_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float32Data_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Data_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Float32Data_Impl__obj::__mClass;

static ::String Float32Data_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromFloat32Array","\xe8","\x5e","\x81","\x61"),
	HX_HCSTRING("fromArrayFloat","\x4d","\x2f","\xf0","\xf4"),
	::String(null())
};

void Float32Data_Impl__obj::__register()
{
	hx::Object *dummy = new Float32Data_Impl__obj;
	Float32Data_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl._GL.Float32Data_Impl_","\x76","\xab","\x69","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Data_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float32Data_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Float32Data_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float32Data_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float32Data_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32Data_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32Data_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
} // end namespace _GL
