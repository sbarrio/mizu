// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectLayer)
HX_DECLARE_CLASS2(haxe,xml,Fast)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledObjectLayer_obj : public  ::flixel::addons::editors::tiled::TiledLayer_obj
{
	public:
		typedef  ::flixel::addons::editors::tiled::TiledLayer_obj super;
		typedef TiledObjectLayer_obj OBJ_;
		TiledObjectLayer_obj();

	public:
		enum { _hx_ClassId = 0x0166ec83 };

		void __construct( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledObjectLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledObjectLayer"); }
		static hx::ObjectPtr< TiledObjectLayer_obj > __new( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent);
		static hx::ObjectPtr< TiledObjectLayer_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObjectLayer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TiledObjectLayer","\xdc","\xbc","\xfb","\x8e"); }

		::Array< ::Dynamic> objects;
		int color;
		void loadObjects( ::haxe::xml::Fast source);
		::Dynamic loadObjects_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer */ 
