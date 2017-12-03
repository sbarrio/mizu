// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#define INCLUDED_openfl__legacy_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)

namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectContainer_obj : public  ::openfl::_legacy::display::InteractiveObject_obj
{
	public:
		typedef  ::openfl::_legacy::display::InteractiveObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();

	public:
		enum { _hx_ClassId = 0x306ae42a };

		void __construct( ::Dynamic handle,::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.DisplayObjectContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.display.DisplayObjectContainer"); }
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new( ::Dynamic handle,::String type);
		static hx::ObjectPtr< DisplayObjectContainer_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic handle,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DisplayObjectContainer","\x80","\xf2","\x98","\xea"); }

		static void __boot();
		static  ::Dynamic lime_create_display_object_container;
		static Dynamic lime_create_display_object_container_dyn() { return lime_create_display_object_container;}
		static  ::Dynamic lime_doc_add_child;
		static Dynamic lime_doc_add_child_dyn() { return lime_doc_add_child;}
		static  ::Dynamic lime_doc_remove_child;
		static Dynamic lime_doc_remove_child_dyn() { return lime_doc_remove_child;}
		static  ::Dynamic lime_doc_set_child_index;
		static Dynamic lime_doc_set_child_index_dyn() { return lime_doc_set_child_index;}
		static  ::Dynamic lime_doc_get_mouse_children;
		static Dynamic lime_doc_get_mouse_children_dyn() { return lime_doc_get_mouse_children;}
		static  ::Dynamic lime_doc_set_mouse_children;
		static Dynamic lime_doc_set_mouse_children_dyn() { return lime_doc_set_mouse_children;}
		static  ::Dynamic lime_doc_swap_children;
		static Dynamic lime_doc_swap_children_dyn() { return lime_doc_swap_children;}
		int numChildren;
		::Array< ::Dynamic> _hx___children;
		 ::openfl::_legacy::display::DisplayObject addChild( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic addChild_dyn();

		 ::openfl::_legacy::display::DisplayObject addChildAt( ::openfl::_legacy::display::DisplayObject child,int index);
		::Dynamic addChildAt_dyn();

		bool areInaccessibleObjectsUnderPoint( ::openfl::_legacy::geom::Point point);
		::Dynamic areInaccessibleObjectsUnderPoint_dyn();

		bool contains( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic contains_dyn();

		 ::openfl::_legacy::display::DisplayObject getChildAt(int index);
		::Dynamic getChildAt_dyn();

		 ::openfl::_legacy::display::DisplayObject getChildByName(::String name);
		::Dynamic getChildByName_dyn();

		int getChildIndex( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic getChildIndex_dyn();

		::Array< ::Dynamic> getObjectsUnderPoint( ::openfl::_legacy::geom::Point point);
		::Dynamic getObjectsUnderPoint_dyn();

		 ::openfl::_legacy::display::DisplayObject removeChild( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic removeChild_dyn();

		 ::openfl::_legacy::display::DisplayObject removeChildAt(int index);
		::Dynamic removeChildAt_dyn();

		void removeChildren(hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		::Dynamic removeChildren_dyn();

		void setChildIndex( ::openfl::_legacy::display::DisplayObject child,int index);
		::Dynamic setChildIndex_dyn();

		void swapChildren( ::openfl::_legacy::display::DisplayObject child1, ::openfl::_legacy::display::DisplayObject child2);
		::Dynamic swapChildren_dyn();

		void swapChildrenAt(int index1,int index2);
		::Dynamic swapChildrenAt_dyn();

		void _hx___addChild( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic _hx___addChild_dyn();

		void _hx___broadcast( ::openfl::_legacy::events::Event event);

		bool _hx___contains( ::openfl::_legacy::display::DisplayObject child);

		 ::openfl::_legacy::display::DisplayObject _hx___findByID(int id);

		int _hx___getChildIndex( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic _hx___getChildIndex_dyn();

		void _hx___getObjectsUnderPoint( ::openfl::_legacy::geom::Point point,::Array< ::Dynamic> result);

		void _hx___onAdded( ::openfl::_legacy::display::DisplayObject object,bool isOnStage);

		void _hx___onRemoved( ::openfl::_legacy::display::DisplayObject object,bool wasOnStage);

		void _hx___removeChildFromArray( ::openfl::_legacy::display::DisplayObject child);
		::Dynamic _hx___removeChildFromArray_dyn();

		void _hx___setChildIndex( ::openfl::_legacy::display::DisplayObject child,int index);
		::Dynamic _hx___setChildIndex_dyn();

		void _hx___swapChildrenAt(int index1,int index2);
		::Dynamic _hx___swapChildrenAt_dyn();

		bool get_mouseChildren();
		::Dynamic get_mouseChildren_dyn();

		bool set_mouseChildren(bool value);
		::Dynamic set_mouseChildren_dyn();

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		bool get_tabChildren();
		::Dynamic get_tabChildren_dyn();

		bool set_tabChildren(bool value);
		::Dynamic set_tabChildren_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_DisplayObjectContainer */ 
