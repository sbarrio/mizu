// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Memory
#include <openfl/_legacy/Memory.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_23_select,"openfl._legacy.Memory","select",0x0e2e4245,"openfl._legacy.Memory.select","openfl/_legacy/Memory.hx",23,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_220_getByte,"openfl._legacy.Memory","getByte",0xeb6d0755,"openfl._legacy.Memory.getByte","openfl/_legacy/Memory.hx",220,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_228_getDouble,"openfl._legacy.Memory","getDouble",0x7199809e,"openfl._legacy.Memory.getDouble","openfl/_legacy/Memory.hx",228,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_236_getFloat,"openfl._legacy.Memory","getFloat",0x58f820af,"openfl._legacy.Memory.getFloat","openfl/_legacy/Memory.hx",236,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_244_getI32,"openfl._legacy.Memory","getI32",0x471a399b,"openfl._legacy.Memory.getI32","openfl/_legacy/Memory.hx",244,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_252_getUI16,"openfl._legacy.Memory","getUI16",0xf7d76e66,"openfl._legacy.Memory.getUI16","openfl/_legacy/Memory.hx",252,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_260_setByte,"openfl._legacy.Memory","setByte",0xde6e9861,"openfl._legacy.Memory.setByte","openfl/_legacy/Memory.hx",260,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_268_setDouble,"openfl._legacy.Memory","setDouble",0x54ea6caa,"openfl._legacy.Memory.setDouble","openfl/_legacy/Memory.hx",268,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_276_setFloat,"openfl._legacy.Memory","setFloat",0x07557a23,"openfl._legacy.Memory.setFloat","openfl/_legacy/Memory.hx",276,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_284_setI16,"openfl._legacy.Memory","setI16",0x13628c55,"openfl._legacy.Memory.setI16","openfl/_legacy/Memory.hx",284,0x38405097)
HX_LOCAL_STACK_FRAME(_hx_pos_a67f1d75fce5f0f2_292_setI32,"openfl._legacy.Memory","setI32",0x13628e0f,"openfl._legacy.Memory.setI32","openfl/_legacy/Memory.hx",292,0x38405097)
namespace openfl{
namespace _legacy{

void Memory_obj::__construct() { }

Dynamic Memory_obj::__CreateEmpty() { return new Memory_obj; }

void *Memory_obj::_hx_vtable = 0;

Dynamic Memory_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Memory_obj > _hx_result = new Memory_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Memory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x147b4db1;
}

 ::openfl::_legacy::utils::ByteArray Memory_obj::gcRef;

int Memory_obj::len;

void Memory_obj::select( ::openfl::_legacy::utils::ByteArray bytes){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_23_select)
HXLINE(  38)		::openfl::_legacy::Memory_obj::gcRef = bytes;
HXLINE(  39)		if (hx::IsNull( bytes )) {
HXLINE(  41)			::__hxcpp_memory_clear();
            		}
            		else {
HXLINE(  45)			::__hxcpp_memory_select(bytes->b);
            		}
HXLINE(  50)		if (hx::IsNull( bytes )) {
HXLINE(  52)			::openfl::_legacy::Memory_obj::len = (int)0;
            		}
            		else {
HXLINE(  56)			::openfl::_legacy::Memory_obj::len = bytes->length;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,select,(void))

int Memory_obj::getByte(int addr){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_220_getByte)
HXDLIN( 220)		return ::__hxcpp_memory_get_byte(addr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getByte,return )

Float Memory_obj::getDouble(int addr){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_228_getDouble)
HXDLIN( 228)		return ::__hxcpp_memory_get_double(addr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getDouble,return )

Float Memory_obj::getFloat(int addr){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_236_getFloat)
HXDLIN( 236)		return ::__hxcpp_memory_get_float(addr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getFloat,return )

int Memory_obj::getI32(int addr){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_244_getI32)
HXDLIN( 244)		return ::__hxcpp_memory_get_i32(addr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getI32,return )

int Memory_obj::getUI16(int addr){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_252_getUI16)
HXDLIN( 252)		return ::__hxcpp_memory_get_ui16(addr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getUI16,return )

void Memory_obj::setByte(int addr,int v){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_260_setByte)
HXDLIN( 260)		::__hxcpp_memory_set_byte(addr,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setByte,(void))

void Memory_obj::setDouble(int addr,Float v){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_268_setDouble)
HXDLIN( 268)		::__hxcpp_memory_set_double(addr,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setDouble,(void))

void Memory_obj::setFloat(int addr,Float v){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_276_setFloat)
HXDLIN( 276)		::__hxcpp_memory_set_float(addr,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setFloat,(void))

void Memory_obj::setI16(int addr,int v){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_284_setI16)
HXDLIN( 284)		::__hxcpp_memory_set_i16(addr,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI16,(void))

void Memory_obj::setI32(int addr,int v){
            	HX_STACKFRAME(&_hx_pos_a67f1d75fce5f0f2_292_setI32)
HXDLIN( 292)		::__hxcpp_memory_set_i32(addr,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI32,(void))


Memory_obj::Memory_obj()
{
}

bool Memory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { outValue = ( len ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { outValue = ( gcRef ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getI32") ) { outValue = getI32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setI16") ) { outValue = setI16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setI32") ) { outValue = setI32_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { outValue = getByte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getUI16") ) { outValue = getUI16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setByte") ) { outValue = setByte_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setFloat") ) { outValue = setFloat_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setDouble") ) { outValue = setDouble_dyn(); return true; }
	}
	return false;
}

bool Memory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { gcRef=ioValue.Cast<  ::openfl::_legacy::utils::ByteArray >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Memory_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Memory_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(void *) &Memory_obj::gcRef,HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f")},
	{hx::fsInt,(void *) &Memory_obj::len,HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Memory_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_MARK_MEMBER_NAME(Memory_obj::len,"len");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Memory_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_VISIT_MEMBER_NAME(Memory_obj::len,"len");
};

#endif

hx::Class Memory_obj::__mClass;

static ::String Memory_obj_sStaticFields[] = {
	HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("getByte","\xbe","\xce","\xa5","\x13"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getI32","\x52","\x12","\x1f","\xa3"),
	HX_HCSTRING("getUI16","\xcf","\x35","\x10","\x20"),
	HX_HCSTRING("setByte","\xca","\x5f","\xa7","\x06"),
	HX_HCSTRING("setDouble","\x53","\xa0","\x72","\x92"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("setI16","\x0c","\x65","\x67","\x6f"),
	HX_HCSTRING("setI32","\xc6","\x66","\x67","\x6f"),
	::String(null())
};

void Memory_obj::__register()
{
	hx::Object *dummy = new Memory_obj;
	Memory_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Memory","\x05","\xaa","\x45","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Memory_obj::__GetStatic;
	__mClass->mSetStaticField = &Memory_obj::__SetStatic;
	__mClass->mMarkFunc = Memory_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Memory_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Memory_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Memory_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Memory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Memory_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
