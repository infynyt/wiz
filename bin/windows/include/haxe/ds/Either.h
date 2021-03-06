#ifndef INCLUDED_haxe_ds_Either
#define INCLUDED_haxe_ds_Either

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Either)
namespace haxe{
namespace ds{


class Either_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Either_obj OBJ_;

	public:
		Either_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ds.Either",1c,1a,b7,a4); }
		::String __ToString() const { return HX_("Either.",29,67,48,40) + _hx_tag; }

		static ::haxe::ds::Either Left( ::Dynamic v);
		static ::Dynamic Left_dyn();
		static ::haxe::ds::Either Right( ::Dynamic v);
		static ::Dynamic Right_dyn();
};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_Either */ 
