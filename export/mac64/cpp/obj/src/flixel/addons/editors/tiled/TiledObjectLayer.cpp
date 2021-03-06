// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e42a345368be2532_18_new,"flixel.addons.editors.tiled.TiledObjectLayer","new",0x50dc6117,"flixel.addons.editors.tiled.TiledObjectLayer.new","flixel/addons/editors/tiled/TiledObjectLayer.hx",18,0xb63a8297)
HX_LOCAL_STACK_FRAME(_hx_pos_e42a345368be2532_28_loadObjects,"flixel.addons.editors.tiled.TiledObjectLayer","loadObjects",0x0117c705,"flixel.addons.editors.tiled.TiledObjectLayer.loadObjects","flixel/addons/editors/tiled/TiledObjectLayer.hx",28,0xb63a8297)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledObjectLayer_obj::__construct( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent){
            	HX_STACKFRAME(&_hx_pos_e42a345368be2532_18_new)
HXLINE(  19)		super::__construct(source,parent);
HXLINE(  20)		this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::OBJECT_dyn();
HXLINE(  21)		this->objects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  22)		int _hx_tmp;
HXDLIN(  22)		if (source->has->resolve(HX_("color",63,71,5c,4a))) {
HXLINE(  22)			_hx_tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(source->att->resolve(HX_("color",63,71,5c,4a)));
            		}
            		else {
HXLINE(  22)			_hx_tmp = (int)0;
            		}
HXDLIN(  22)		this->color = _hx_tmp;
HXLINE(  23)		this->loadObjects(source);
            	}

Dynamic TiledObjectLayer_obj::__CreateEmpty() { return new TiledObjectLayer_obj; }

void *TiledObjectLayer_obj::_hx_vtable = 0;

Dynamic TiledObjectLayer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TiledObjectLayer_obj > _hx_result = new TiledObjectLayer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledObjectLayer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0166ec83) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0166ec83;
	} else {
		return inClassId==(int)0x6b7893fa;
	}
}

void TiledObjectLayer_obj::loadObjects( ::haxe::xml::Fast source){
            	HX_GC_STACKFRAME(&_hx_pos_e42a345368be2532_28_loadObjects)
HXDLIN(  28)		 ::_List::ListNode _g_head = source->nodes->resolve(HX_("object",bf,7e,3f,15))->h;
HXDLIN(  28)		while(hx::IsNotNull( _g_head )){
HXDLIN(  28)			 ::haxe::xml::Fast val = ( ( ::haxe::xml::Fast)(_g_head->item) );
HXDLIN(  28)			_g_head = _g_head->next;
HXDLIN(  28)			 ::haxe::xml::Fast node = val;
HXLINE(  30)			::Array< ::Dynamic> _hx_tmp = this->objects;
HXDLIN(  30)			_hx_tmp->push( ::flixel::addons::editors::tiled::TiledObject_obj::__alloc( HX_CTX ,node,hx::ObjectPtr<OBJ_>(this)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledObjectLayer_obj,loadObjects,(void))


hx::ObjectPtr< TiledObjectLayer_obj > TiledObjectLayer_obj::__new( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent) {
	hx::ObjectPtr< TiledObjectLayer_obj > __this = new TiledObjectLayer_obj();
	__this->__construct(source,parent);
	return __this;
}

hx::ObjectPtr< TiledObjectLayer_obj > TiledObjectLayer_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent) {
	TiledObjectLayer_obj *__this = (TiledObjectLayer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TiledObjectLayer_obj), true, "flixel.addons.editors.tiled.TiledObjectLayer"));
	*(void **)__this = TiledObjectLayer_obj::_hx_vtable;
	__this->__construct(source,parent);
	return __this;
}

TiledObjectLayer_obj::TiledObjectLayer_obj()
{
}

void TiledObjectLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectLayer);
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(color,"color");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledObjectLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(color,"color");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TiledObjectLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return hx::Val( objects ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return hx::Val( loadObjects_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TiledObjectLayer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TiledObjectLayer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObjectLayer_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{hx::fsInt,(int)offsetof(TiledObjectLayer_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TiledObjectLayer_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledObjectLayer_obj_sMemberFields[] = {
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("loadObjects","\x4e","\x27","\xed","\x52"),
	::String(null()) };

static void TiledObjectLayer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledObjectLayer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledObjectLayer_obj::__mClass;

void TiledObjectLayer_obj::__register()
{
	hx::Object *dummy = new TiledObjectLayer_obj;
	TiledObjectLayer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledObjectLayer","\xa5","\x89","\x8a","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledObjectLayer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TiledObjectLayer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledObjectLayer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledObjectLayer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledObjectLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledObjectLayer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
