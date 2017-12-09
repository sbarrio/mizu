// Generated by Haxe 3.4.4
#ifndef INCLUDED_Button
#define INCLUDED_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Button)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x0e74d612 };

		void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int identifier,Float w);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Button"); }
		static hx::ObjectPtr< Button_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int identifier,Float w);
		static hx::ObjectPtr< Button_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int identifier,Float w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		int id;
		Float water;
		bool pressed;
		void update(Float elapsed);

		void destroy();

		void pressButton();
		::Dynamic pressButton_dyn();

};


#endif /* INCLUDED_Button */ 