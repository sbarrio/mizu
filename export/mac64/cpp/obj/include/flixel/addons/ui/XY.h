// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_addons_ui_XY
#define INCLUDED_flixel_addons_ui_XY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,XY)
namespace flixel{
namespace addons{
namespace ui{


class XY_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef XY_obj OBJ_;

	public:
		XY_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.ui.XY","\x72","\x40","\xc5","\x68"); }
		::String __ToString() const { return HX_HCSTRING("XY.","\x0d","\x14","\x43","\x00") + _hx_tag; }

		static ::flixel::addons::ui::XY X;
		static inline ::flixel::addons::ui::XY X_dyn() { return X; }
		static ::flixel::addons::ui::XY Y;
		static inline ::flixel::addons::ui::XY Y_dyn() { return Y; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_XY */ 