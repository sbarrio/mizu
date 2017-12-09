// Generated by Haxe 3.4.4
#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x6c4d5f81 };

		void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y, ::PlayState state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Player"); }
		static hx::ObjectPtr< Player_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y, ::PlayState state);
		static hx::ObjectPtr< Player_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y, ::PlayState state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		Float MAX_VELOCITY;
		Float GRAVITY;
		Float JUMP_FACTOR;
		Float MAX_WATER;
		Float WATER_INCREASE;
		int THROW_WATER_COOLDOWN_TIME;
		Float WATER_LEVEL_0;
		Float WATER_LEVEL_1;
		Float WATER_LEVEL_2;
		Float WATER_LEVEL_3;
		Float WATER_LEVEL_4;
		Float DRAG_LEVEL_0;
		Float DRAG_LEVEL_1;
		Float DRAG_LEVEL_2;
		Float DRAG_LEVEL_3;
		Float DRAG_LEVEL_4;
		Float GRAVITY_LEVEL_0;
		Float GRAVITY_LEVEL_1;
		Float GRAVITY_LEVEL_2;
		Float GRAVITY_LEVEL_3;
		Float GRAVITY_LEVEL_4;
		Float JUMP_FACTOR_LEVEL_0;
		Float JUMP_FACTOR_LEVEL_1;
		Float JUMP_FACTOR_LEVEL_2;
		Float JUMP_FACTOR_LEVEL_3;
		Float JUMP_FACTOR_LEVEL_4;
		bool isReadyToJump;
		bool animFinished;
		int throwWaterCoolDownTime;
		bool isReadyToThrowWater;
		Float currentDrag;
		Float currentGravity;
		Float currentJumpFactor;
		Float water;
		 ::PlayState playState;
		 ::flixel::_hx_system::FlxSound sndJump;
		 ::flixel::_hx_system::FlxSound sndWaterOut;
		 ::flixel::_hx_system::FlxSound sndGrounded;
		void update(Float elapsed);

		void moveRight();
		::Dynamic moveRight_dyn();

		void moveLeft();
		::Dynamic moveLeft_dyn();

		void jump();
		::Dynamic jump_dyn();

		void throwWater();
		::Dynamic throwWater_dyn();

		void addWater();
		::Dynamic addWater_dyn();

		void destroy();

		void playIdleAnimation(Float w);
		::Dynamic playIdleAnimation_dyn();

		void playWalkAnimation(Float w);
		::Dynamic playWalkAnimation_dyn();

		void playJumpAnimation(Float w);
		::Dynamic playJumpAnimation_dyn();

		void playDeadAnimation();
		::Dynamic playDeadAnimation_dyn();

};


#endif /* INCLUDED_Player */ 