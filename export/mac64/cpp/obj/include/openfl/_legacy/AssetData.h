// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__legacy_AssetData
#define INCLUDED_openfl__legacy_AssetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2a68107957d8ea1b_1654_new)
HX_DECLARE_CLASS2(openfl,_legacy,AssetData)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)

namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES AssetData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetData_obj OBJ_;
		AssetData_obj();

	public:
		enum { _hx_ClassId = 0x15470226 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.AssetData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.AssetData"); }

		hx::ObjectPtr< AssetData_obj > __new() {
			hx::ObjectPtr< AssetData_obj > __this = new AssetData_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AssetData_obj > __alloc(hx::Ctx *_hx_ctx) {
			AssetData_obj *__this = (AssetData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetData_obj), true, "openfl._legacy.AssetData"));
			*(void **)__this = AssetData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2a68107957d8ea1b_1654_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetData","\x1a","\x84","\xdc","\x48"); }

		::String id;
		::String path;
		 ::openfl::_legacy::AssetType type;
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_AssetData */ 
