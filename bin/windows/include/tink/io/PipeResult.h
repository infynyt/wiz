#ifndef INCLUDED_tink_io_PipeResult
#define INCLUDED_tink_io_PipeResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,io,PipeResult)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace io{


class PipeResult_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef PipeResult_obj OBJ_;

	public:
		PipeResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.io.PipeResult",d7,3e,a3,6f); }
		::String __ToString() const { return HX_("PipeResult.",03,26,3a,37) + _hx_tag; }

		static ::tink::io::PipeResult AllWritten;
		static inline ::tink::io::PipeResult AllWritten_dyn() { return AllWritten; }
		static ::tink::io::PipeResult SinkEnded( ::Dynamic result,::Dynamic rest);
		static ::Dynamic SinkEnded_dyn();
		static ::tink::io::PipeResult SinkFailed( ::tink::core::TypedError e,::Dynamic rest);
		static ::Dynamic SinkFailed_dyn();
		static ::tink::io::PipeResult SourceFailed( ::tink::core::TypedError e);
		static ::Dynamic SourceFailed_dyn();
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_PipeResult */ 
