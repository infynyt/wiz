#ifndef INCLUDED_tink_streams_ReductionStep
#define INCLUDED_tink_streams_ReductionStep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,ReductionStep)
namespace tink{
namespace streams{


class ReductionStep_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ReductionStep_obj OBJ_;

	public:
		ReductionStep_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.ReductionStep",c8,c1,78,61); }
		::String __ToString() const { return HX_("ReductionStep.",4f,e7,10,f7) + _hx_tag; }

		static ::tink::streams::ReductionStep Crash( ::tink::core::TypedError e);
		static ::Dynamic Crash_dyn();
		static ::tink::streams::ReductionStep Progress( ::Dynamic result);
		static ::Dynamic Progress_dyn();
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_ReductionStep */ 
