#ifndef INCLUDED_tink_http_BodyPart
#define INCLUDED_tink_http_BodyPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,http,BodyPart)
namespace tink{
namespace http{


class BodyPart_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BodyPart_obj OBJ_;

	public:
		BodyPart_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.http.BodyPart",ff,9c,21,13); }
		::String __ToString() const { return HX_("BodyPart.",b9,9a,30,1f) + _hx_tag; }

		static ::tink::http::BodyPart File( ::Dynamic handle);
		static ::Dynamic File_dyn();
		static ::tink::http::BodyPart Value(::String v);
		static ::Dynamic Value_dyn();
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_BodyPart */ 
