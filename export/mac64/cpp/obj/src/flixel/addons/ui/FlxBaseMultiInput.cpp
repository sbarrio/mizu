// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_496c6bf68154a4c5_32_new,"flixel.addons.ui.FlxBaseMultiInput","new",0x2c00bc55,"flixel.addons.ui.FlxBaseMultiInput.new","flixel/addons/ui/FlxBaseMultiInput.hx",32,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_37_destroy,"flixel.addons.ui.FlxBaseMultiInput","destroy",0xd1b0b76f,"flixel.addons.ui.FlxBaseMultiInput.destroy","flixel/addons/ui/FlxBaseMultiInput.hx",37,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_44_checkJustPressed,"flixel.addons.ui.FlxBaseMultiInput","checkJustPressed",0x0bc4b0d9,"flixel.addons.ui.FlxBaseMultiInput.checkJustPressed","flixel/addons/ui/FlxBaseMultiInput.hx",44,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_50_checkJustReleased,"flixel.addons.ui.FlxBaseMultiInput","checkJustReleased",0x472c1aa6,"flixel.addons.ui.FlxBaseMultiInput.checkJustReleased","flixel/addons/ui/FlxBaseMultiInput.hx",50,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_56_checkPressed,"flixel.addons.ui.FlxBaseMultiInput","checkPressed",0x898ff825,"flixel.addons.ui.FlxBaseMultiInput.checkPressed","flixel/addons/ui/FlxBaseMultiInput.hx",56,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_66_justPressed,"flixel.addons.ui.FlxBaseMultiInput","justPressed",0x26c076cb,"flixel.addons.ui.FlxBaseMultiInput.justPressed","flixel/addons/ui/FlxBaseMultiInput.hx",66,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_75_justReleased,"flixel.addons.ui.FlxBaseMultiInput","justReleased",0xc87d8874,"flixel.addons.ui.FlxBaseMultiInput.justReleased","flixel/addons/ui/FlxBaseMultiInput.hx",75,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_84_pressed,"flixel.addons.ui.FlxBaseMultiInput","pressed",0xe7115d17,"flixel.addons.ui.FlxBaseMultiInput.pressed","flixel/addons/ui/FlxBaseMultiInput.hx",84,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_88_equals,"flixel.addons.ui.FlxBaseMultiInput","equals",0x1edc296a,"flixel.addons.ui.FlxBaseMultiInput.equals","flixel/addons/ui/FlxBaseMultiInput.hx",88,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_137_passCombosAndForbiddens,"flixel.addons.ui.FlxBaseMultiInput","passCombosAndForbiddens",0x9987f990,"flixel.addons.ui.FlxBaseMultiInput.passCombosAndForbiddens","flixel/addons/ui/FlxBaseMultiInput.hx",137,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_150_checkCombos,"flixel.addons.ui.FlxBaseMultiInput","checkCombos",0xdd515842,"flixel.addons.ui.FlxBaseMultiInput.checkCombos","flixel/addons/ui/FlxBaseMultiInput.hx",150,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_156_checkForbiddens,"flixel.addons.ui.FlxBaseMultiInput","checkForbiddens",0x356abfb7,"flixel.addons.ui.FlxBaseMultiInput.checkForbiddens","flixel/addons/ui/FlxBaseMultiInput.hx",156,0x748f1d1c)
namespace flixel{
namespace addons{
namespace ui{

void FlxBaseMultiInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_32_new)
            	}

Dynamic FlxBaseMultiInput_obj::__CreateEmpty() { return new FlxBaseMultiInput_obj; }

void *FlxBaseMultiInput_obj::_hx_vtable = 0;

Dynamic FlxBaseMultiInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBaseMultiInput_obj > _hx_result = new FlxBaseMultiInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseMultiInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x193fb0b1;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_FlxBaseMultiInput__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::addons::ui::FlxBaseMultiInput_obj::destroy,
};

void *FlxBaseMultiInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_FlxBaseMultiInput__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxBaseMultiInput_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_37_destroy)
HXLINE(  38)		this->combos = null();
HXLINE(  39)		this->forbiddens = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,destroy,(void))

bool FlxBaseMultiInput_obj::checkJustPressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_44_checkJustPressed)
HXDLIN(  44)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,checkJustPressed,return )

bool FlxBaseMultiInput_obj::checkJustReleased(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_50_checkJustReleased)
HXDLIN(  50)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,checkJustReleased,return )

bool FlxBaseMultiInput_obj::checkPressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_56_checkPressed)
HXDLIN(  56)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,checkPressed,return )

bool FlxBaseMultiInput_obj::justPressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_66_justPressed)
HXDLIN(  66)		if (this->checkJustPressed()) {
HXDLIN(  66)			return this->passCombosAndForbiddens(null(),null());
            		}
            		else {
HXDLIN(  66)			return false;
            		}
HXDLIN(  66)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,justPressed,return )

bool FlxBaseMultiInput_obj::justReleased(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_75_justReleased)
HXDLIN(  75)		if (this->checkJustReleased()) {
HXDLIN(  75)			if (hx::IsNotNull( this->forbiddens )) {
HXDLIN(  75)				return this->checkForbiddens(false);
            			}
            			else {
HXDLIN(  75)				return true;
            			}
            		}
            		else {
HXDLIN(  75)			return false;
            		}
HXDLIN(  75)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,justReleased,return )

bool FlxBaseMultiInput_obj::pressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_84_pressed)
HXDLIN(  84)		if (this->checkPressed()) {
HXDLIN(  84)			return this->passCombosAndForbiddens(null(),null());
            		}
            		else {
HXDLIN(  84)			return false;
            		}
HXDLIN(  84)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,pressed,return )

bool FlxBaseMultiInput_obj::equals( ::flixel::addons::ui::FlxBaseMultiInput other){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_88_equals)
HXLINE(  89)		if (hx::IsNull( other )) {
HXLINE(  91)			return false;
            		}
HXLINE(  93)		 ::ValueType _hx_tmp = ::Type_obj::_hx_typeof(other);
HXDLIN(  93)		if (hx::IsNotEq( _hx_tmp,::Type_obj::_hx_typeof(hx::ObjectPtr<OBJ_>(this)) )) {
HXLINE(  95)			return false;
            		}
HXLINE(  97)		if ((this->input != other->input)) {
HXLINE(  99)			return false;
            		}
HXLINE( 101)		bool _hx_tmp1 = hx::IsNull( this->combos );
HXDLIN( 101)		if ((_hx_tmp1 != hx::IsNull( other->combos ))) {
HXLINE( 103)			return false;
            		}
HXLINE( 105)		bool _hx_tmp2 = hx::IsNull( this->forbiddens );
HXDLIN( 105)		if ((_hx_tmp2 != hx::IsNull( other->forbiddens ))) {
HXLINE( 107)			return false;
            		}
HXLINE( 109)		bool _hx_tmp3;
HXDLIN( 109)		if (hx::IsNotNull( this->combos )) {
HXLINE( 109)			_hx_tmp3 = hx::IsNotNull( other->combos );
            		}
            		else {
HXLINE( 109)			_hx_tmp3 = false;
            		}
HXDLIN( 109)		if (_hx_tmp3) {
HXLINE( 111)			int _g = (int)0;
HXDLIN( 111)			::Array< int > _g1 = this->combos;
HXDLIN( 111)			while((_g < _g1->length)){
HXLINE( 111)				int i = _g1->__get(_g);
HXDLIN( 111)				_g = (_g + (int)1);
HXLINE( 113)				if ((other->combos->indexOf(i,null()) == (int)-1)) {
HXLINE( 115)					return false;
            				}
            			}
            		}
HXLINE( 119)		bool _hx_tmp4;
HXDLIN( 119)		if (hx::IsNotNull( this->forbiddens )) {
HXLINE( 119)			_hx_tmp4 = hx::IsNotNull( other->forbiddens );
            		}
            		else {
HXLINE( 119)			_hx_tmp4 = false;
            		}
HXDLIN( 119)		if (_hx_tmp4) {
HXLINE( 121)			int _g2 = (int)0;
HXDLIN( 121)			::Array< int > _g11 = this->forbiddens;
HXDLIN( 121)			while((_g2 < _g11->length)){
HXLINE( 121)				int i1 = _g11->__get(_g2);
HXDLIN( 121)				_g2 = (_g2 + (int)1);
HXLINE( 123)				if ((other->forbiddens->indexOf(i1,null()) == (int)-1)) {
HXLINE( 125)					return false;
            				}
            			}
            		}
HXLINE( 129)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseMultiInput_obj,equals,return )

bool FlxBaseMultiInput_obj::passCombosAndForbiddens(hx::Null< bool >  __o_comboValue,hx::Null< bool >  __o_forbiddenValue){
bool comboValue = __o_comboValue.Default(true);
bool forbiddenValue = __o_forbiddenValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_137_passCombosAndForbiddens)
HXLINE( 139)		bool passCombos;
HXDLIN( 139)		if (hx::IsNotNull( this->combos )) {
HXLINE( 139)			passCombos = this->checkCombos(comboValue);
            		}
            		else {
HXLINE( 139)			passCombos = true;
            		}
HXLINE( 141)		bool passForbiddens;
HXDLIN( 141)		if (hx::IsNotNull( this->forbiddens )) {
HXLINE( 141)			passForbiddens = this->checkForbiddens(forbiddenValue);
            		}
            		else {
HXLINE( 141)			passForbiddens = true;
            		}
HXLINE( 144)		if (passCombos) {
HXLINE( 144)			return passForbiddens;
            		}
            		else {
HXLINE( 144)			return false;
            		}
HXDLIN( 144)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseMultiInput_obj,passCombosAndForbiddens,return )

bool FlxBaseMultiInput_obj::checkCombos(bool value){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_150_checkCombos)
HXDLIN( 150)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseMultiInput_obj,checkCombos,return )

bool FlxBaseMultiInput_obj::checkForbiddens(bool value){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_156_checkForbiddens)
HXDLIN( 156)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseMultiInput_obj,checkForbiddens,return )


hx::ObjectPtr< FlxBaseMultiInput_obj > FlxBaseMultiInput_obj::__new() {
	hx::ObjectPtr< FlxBaseMultiInput_obj > __this = new FlxBaseMultiInput_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxBaseMultiInput_obj > FlxBaseMultiInput_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxBaseMultiInput_obj *__this = (FlxBaseMultiInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseMultiInput_obj), true, "flixel.addons.ui.FlxBaseMultiInput"));
	*(void **)__this = FlxBaseMultiInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseMultiInput_obj::FlxBaseMultiInput_obj()
{
}

void FlxBaseMultiInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseMultiInput);
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(combos,"combos");
	HX_MARK_MEMBER_NAME(forbiddens,"forbiddens");
	HX_MARK_END_CLASS();
}

void FlxBaseMultiInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(combos,"combos");
	HX_VISIT_MEMBER_NAME(forbiddens,"forbiddens");
}

hx::Val FlxBaseMultiInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"combos") ) { return hx::Val( combos ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return hx::Val( pressed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forbiddens") ) { return hx::Val( forbiddens ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return hx::Val( justPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkCombos") ) { return hx::Val( checkCombos_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkPressed") ) { return hx::Val( checkPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return hx::Val( justReleased_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkForbiddens") ) { return hx::Val( checkForbiddens_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkJustPressed") ) { return hx::Val( checkJustPressed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkJustReleased") ) { return hx::Val( checkJustReleased_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"passCombosAndForbiddens") ) { return hx::Val( passCombosAndForbiddens_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBaseMultiInput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"combos") ) { combos=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forbiddens") ) { forbiddens=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseMultiInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("combos","\x65","\x1c","\x26","\xc7"));
	outFields->push(HX_HCSTRING("forbiddens","\x5a","\xd1","\xf7","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBaseMultiInput_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBaseMultiInput_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseMultiInput_obj,combos),HX_HCSTRING("combos","\x65","\x1c","\x26","\xc7")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseMultiInput_obj,forbiddens),HX_HCSTRING("forbiddens","\x5a","\xd1","\xf7","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBaseMultiInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseMultiInput_obj_sMemberFields[] = {
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("combos","\x65","\x1c","\x26","\xc7"),
	HX_HCSTRING("forbiddens","\x5a","\xd1","\xf7","\x49"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("checkJustPressed","\xee","\xb1","\x87","\xa7"),
	HX_HCSTRING("checkJustReleased","\xf1","\x0b","\x0a","\xf6"),
	HX_HCSTRING("checkPressed","\xba","\x8a","\x6d","\x27"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("passCombosAndForbiddens","\x1b","\x75","\xba","\x2f"),
	HX_HCSTRING("checkCombos","\x4d","\xef","\x37","\xa9"),
	HX_HCSTRING("checkForbiddens","\x42","\x38","\x51","\xc3"),
	::String(null()) };

static void FlxBaseMultiInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseMultiInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseMultiInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseMultiInput_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseMultiInput_obj::__mClass;

void FlxBaseMultiInput_obj::__register()
{
	hx::Object *dummy = new FlxBaseMultiInput_obj;
	FlxBaseMultiInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxBaseMultiInput","\xe3","\xed","\xd4","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBaseMultiInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBaseMultiInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseMultiInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseMultiInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseMultiInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseMultiInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
