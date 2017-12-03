// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_events_ProgressEvent
#define INCLUDED_openfl_events_ProgressEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ProgressEvent_obj : public  ::openfl::_legacy::events::Event_obj
{
	public:
		typedef  ::openfl::_legacy::events::Event_obj super;
		typedef ProgressEvent_obj OBJ_;
		ProgressEvent_obj();

	public:
		enum { _hx_ClassId = 0x64ebab04 };

		void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.ProgressEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.ProgressEvent"); }
		static hx::ObjectPtr< ProgressEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal);
		static hx::ObjectPtr< ProgressEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProgressEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ProgressEvent","\x0d","\x9d","\x55","\x84"); }

		static void __boot();
		static ::String PROGRESS;
		static ::String SOCKET_DATA;
		Float bytesLoaded;
		Float bytesTotal;
		 ::openfl::_legacy::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ProgressEvent */ 
