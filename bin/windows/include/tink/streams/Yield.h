#ifndef INCLUDED_tink_streams_Yield
#define INCLUDED_tink_streams_Yield

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,Yield)
namespace tink{
namespace streams{


class Yield_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Yield_obj OBJ_;

	public:
		Yield_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.Yield",f6,42,cf,21); }
		::String __ToString() const { return HX_("Yield.",61,dd,ea,4d) + _hx_tag; }

		static ::tink::streams::Yield Data( ::Dynamic data);
		static ::Dynamic Data_dyn();
		static ::tink::streams::Yield End;
		static inline ::tink::streams::Yield End_dyn() { return End; }
		static ::tink::streams::Yield Fail( ::tink::core::TypedError e);
		static ::Dynamic Fail_dyn();
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Yield */ 
