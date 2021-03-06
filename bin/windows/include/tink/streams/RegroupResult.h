#ifndef INCLUDED_tink_streams_RegroupResult
#define INCLUDED_tink_streams_RegroupResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,RegroupResult)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace streams{


class RegroupResult_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RegroupResult_obj OBJ_;

	public:
		RegroupResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.RegroupResult",52,26,01,31); }
		::String __ToString() const { return HX_("RegroupResult.",85,7b,e0,be) + _hx_tag; }

		static ::tink::streams::RegroupResult Converted(::Dynamic data,::cpp::VirtualArray untouched);
		static ::Dynamic Converted_dyn();
		static ::tink::streams::RegroupResult Errored( ::tink::core::TypedError e);
		static ::Dynamic Errored_dyn();
		static ::tink::streams::RegroupResult Terminated( ::haxe::ds::Option data);
		static ::Dynamic Terminated_dyn();
		static ::tink::streams::RegroupResult Untouched;
		static inline ::tink::streams::RegroupResult Untouched_dyn() { return Untouched; }
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_RegroupResult */ 
