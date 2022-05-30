#ifndef INCLUDED_tink_http_Authorization
#define INCLUDED_tink_http_Authorization

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,http,Authorization)
namespace tink{
namespace http{


class Authorization_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Authorization_obj OBJ_;

	public:
		Authorization_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.http.Authorization",6f,14,8e,92); }
		::String __ToString() const { return HX_("Authorization.",35,34,a0,e3) + _hx_tag; }

		static ::tink::http::Authorization Basic(::String user,::String pass);
		static ::Dynamic Basic_dyn();
		static ::tink::http::Authorization Bearer(::String token);
		static ::Dynamic Bearer_dyn();
		static ::tink::http::Authorization Others(::String scheme,::String param);
		static ::Dynamic Others_dyn();
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_Authorization */ 
