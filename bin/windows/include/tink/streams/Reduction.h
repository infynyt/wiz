#ifndef INCLUDED_tink_streams_Reduction
#define INCLUDED_tink_streams_Reduction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,Reduction)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace streams{


class Reduction_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Reduction_obj OBJ_;

	public:
		Reduction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.Reduction",5c,50,fe,4b); }
		::String __ToString() const { return HX_("Reduction.",bb,b1,a8,cf) + _hx_tag; }

		static ::tink::streams::Reduction Crashed( ::tink::core::TypedError error,::Dynamic at);
		static ::Dynamic Crashed_dyn();
		static ::tink::streams::Reduction Failed( ::tink::core::TypedError error);
		static ::Dynamic Failed_dyn();
		static ::tink::streams::Reduction Reduced( ::Dynamic result);
		static ::Dynamic Reduced_dyn();
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Reduction */ 
