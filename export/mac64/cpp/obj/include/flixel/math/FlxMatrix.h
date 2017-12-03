// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_math_FlxMatrix
#define INCLUDED_flixel_math_FlxMatrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxMatrix_obj : public  ::openfl::_legacy::geom::Matrix_obj
{
	public:
		typedef  ::openfl::_legacy::geom::Matrix_obj super;
		typedef FlxMatrix_obj OBJ_;
		FlxMatrix_obj();

	public:
		enum { _hx_ClassId = 0x54fde40f };

		void __construct( ::Dynamic a, ::Dynamic b, ::Dynamic c, ::Dynamic d, ::Dynamic tx, ::Dynamic ty);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxMatrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.math.FlxMatrix"); }
		static hx::ObjectPtr< FlxMatrix_obj > __new( ::Dynamic a, ::Dynamic b, ::Dynamic c, ::Dynamic d, ::Dynamic tx, ::Dynamic ty);
		static hx::ObjectPtr< FlxMatrix_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic a, ::Dynamic b, ::Dynamic c, ::Dynamic d, ::Dynamic tx, ::Dynamic ty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMatrix_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxMatrix","\x33","\x30","\xb7","\x3d"); }

		 ::flixel::math::FlxMatrix rotateWithTrig(Float cos,Float sin);
		::Dynamic rotateWithTrig_dyn();

		 ::flixel::math::FlxMatrix rotateBy180();
		::Dynamic rotateBy180_dyn();

		 ::flixel::math::FlxMatrix rotateByPositive90();
		::Dynamic rotateByPositive90_dyn();

		 ::flixel::math::FlxMatrix rotateByNegative90();
		::Dynamic rotateByNegative90_dyn();

		Float transformX(Float px,Float py);
		::Dynamic transformX_dyn();

		Float transformY(Float px,Float py);
		::Dynamic transformY_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxMatrix */ 
