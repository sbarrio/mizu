// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#define INCLUDED_flixel_animation_FlxBaseAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES FlxBaseAnimation_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxBaseAnimation_obj OBJ_;
		FlxBaseAnimation_obj();

	public:
		enum { _hx_ClassId = 0x53945929 };

		void __construct( ::flixel::animation::FlxAnimationController Parent,::String Name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxBaseAnimation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.animation.FlxBaseAnimation"); }
		static hx::ObjectPtr< FlxBaseAnimation_obj > __new( ::flixel::animation::FlxAnimationController Parent,::String Name);
		static hx::ObjectPtr< FlxBaseAnimation_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController Parent,::String Name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBaseAnimation_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxBaseAnimation","\x01","\xe5","\x0d","\x26"); }

		 ::flixel::animation::FlxAnimationController parent;
		::String name;
		int curIndex;
		virtual int set_curIndex(int Value);
		::Dynamic set_curIndex_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual void update(Float elapsed);
		::Dynamic update_dyn();

		virtual  ::flixel::animation::FlxBaseAnimation clone( ::flixel::animation::FlxAnimationController Parent);
		::Dynamic clone_dyn();

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxBaseAnimation */ 
