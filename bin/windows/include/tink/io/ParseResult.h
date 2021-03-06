#ifndef INCLUDED_tink_io_ParseResult
#define INCLUDED_tink_io_ParseResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,io,ParseResult)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace io{


class ParseResult_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ParseResult_obj OBJ_;

	public:
		ParseResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.io.ParseResult",c4,44,ed,6f); }
		::String __ToString() const { return HX_("ParseResult.",de,f8,43,8d) + _hx_tag; }

		static ::tink::io::ParseResult Broke( ::tink::core::TypedError e);
		static ::Dynamic Broke_dyn();
		static ::tink::io::ParseResult Invalid( ::tink::core::TypedError e,::Dynamic rest);
		static ::Dynamic Invalid_dyn();
		static ::tink::io::ParseResult Parsed( ::Dynamic data,::Dynamic rest);
		static ::Dynamic Parsed_dyn();
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_ParseResult */ 
