// Generated by Haxe 3.4.4
#ifndef INCLUDED_cpp_Lib
#define INCLUDED_cpp_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Lib)

namespace cpp{


class HXCPP_CLASS_ATTRIBUTES Lib_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();

	public:
		enum { _hx_ClassId = 0x09f990c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="cpp.Lib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"cpp.Lib"); }

		hx::ObjectPtr< Lib_obj > __new() {
			hx::ObjectPtr< Lib_obj > __this = new Lib_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Lib_obj > __alloc(hx::Ctx *_hx_ctx) {
			Lib_obj *__this = (Lib_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Lib_obj), false, "cpp.Lib"));
			*(void **)__this = Lib_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Lib","\x25","\x07","\x3a","\x00"); }

		static  ::Dynamic load(::String lib,::String prim,int nargs);
		static ::Dynamic load_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_Lib */ 
