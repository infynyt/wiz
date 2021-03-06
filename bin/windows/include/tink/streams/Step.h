#ifndef INCLUDED_tink_streams_Step
#define INCLUDED_tink_streams_Step

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,Step)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace streams{


class Step_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Step_obj OBJ_;

	public:
		Step_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.Step",c3,c6,00,cc); }
		::String __ToString() const { return HX_("Step.",42,eb,3b,17) + _hx_tag; }

		static ::tink::streams::Step End;
		static inline ::tink::streams::Step End_dyn() { return End; }
		static ::tink::streams::Step Fail( ::tink::core::TypedError e);
		static ::Dynamic Fail_dyn();
		static ::tink::streams::Step Link( ::Dynamic value,::Dynamic next);
		static ::Dynamic Link_dyn();
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Step */ 
