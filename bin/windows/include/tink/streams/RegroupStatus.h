#ifndef INCLUDED_tink_streams_RegroupStatus
#define INCLUDED_tink_streams_RegroupStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,RegroupStatus)
namespace tink{
namespace streams{


class RegroupStatus_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RegroupStatus_obj OBJ_;

	public:
		RegroupStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.RegroupStatus",a7,a4,78,2e); }
		::String __ToString() const { return HX_("RegroupStatus.",90,87,f7,89) + _hx_tag; }

		static ::tink::streams::RegroupStatus Ended;
		static inline ::tink::streams::RegroupStatus Ended_dyn() { return Ended; }
		static ::tink::streams::RegroupStatus Errored( ::tink::core::TypedError e);
		static ::Dynamic Errored_dyn();
		static ::tink::streams::RegroupStatus Flowing;
		static inline ::tink::streams::RegroupStatus Flowing_dyn() { return Flowing; }
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_RegroupStatus */ 
