// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Button
#include <Button.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_11_new,"Button","new",0x9489e804,"Button.new","Button.hx",11,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_30_update,"Button","update",0x98decce5,"Button.update","Button.hx",30,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_34_destroy,"Button","destroy",0xb0cae69e,"Button.destroy","Button.hx",34,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_37_pressButton,"Button","pressButton",0x37458979,"Button.pressButton","Button.hx",37,0xf1be03ec)

void Button_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int identifier,Float w){
Float X = __o_X.Default(((Float)0.0));
Float Y = __o_Y.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_11_new)
HXLINE(  16)		this->pressed = false;
HXLINE(  15)		this->water = ((Float)0);
HXLINE(  14)		this->id = (int)0;
HXLINE(  20)		super::__construct(X,Y,null());
HXLINE(  22)		this->loadGraphic(HX_("assets/images/button.png",98,1b,b6,cd),true,(int)32,(int)16,null(),null());
HXLINE(  23)		this->set_immovable(true);
HXLINE(  24)		this->id = identifier;
HXLINE(  25)		this->water = w;
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e74d612) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x0e74d612;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

void Button_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_30_update)
HXDLIN(  30)		this->super::update(elapsed);
            	}


void Button_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_34_destroy)
HXDLIN(  34)		this->super::destroy();
            	}


void Button_obj::pressButton(){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_37_pressButton)
HXLINE(  38)		this->pressed = true;
HXLINE(  39)		Float _hx_tmp = this->x;
HXDLIN(  39)		::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this), ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)
            			->setFixed(1,HX_("y",79,00,00,00),(this->y + (int)16))),(int)1, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::bounceInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),(int)8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,pressButton,(void))


hx::ObjectPtr< Button_obj > Button_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int identifier,Float w) {
	hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct(__o_X,__o_Y,identifier,w);
	return __this;
}

hx::ObjectPtr< Button_obj > Button_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int identifier,Float w) {
	Button_obj *__this = (Button_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,identifier,w);
	return __this;
}

Button_obj::Button_obj()
{
}

hx::Val Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"water") ) { return hx::Val( water ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return hx::Val( pressed ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pressButton") ) { return hx::Val( pressButton_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Button_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"water") ) { water=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("water","\x17","\x18","\x25","\xc5"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Button_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Button_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Button_obj,water),HX_HCSTRING("water","\x17","\x18","\x25","\xc5")},
	{hx::fsBool,(int)offsetof(Button_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("water","\x17","\x18","\x25","\xc5"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("pressButton","\xd5","\x2d","\xf9","\xa9"),
	::String(null()) };

static void Button_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Button_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Object *dummy = new Button_obj;
	Button_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Button_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Button_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

