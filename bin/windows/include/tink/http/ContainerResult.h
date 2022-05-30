#ifndef INCLUDED_tink_http_ContainerResult
#define INCLUDED_tink_http_ContainerResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,http,ContainerResult)
namespace tink{
namespace http{


class ContainerResult_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ContainerResult_obj OBJ_;

	public:
		ContainerResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.http.ContainerResult",f4,3c,93,6c); }
		::String __ToString() const { return HX_("ContainerResult.",90,81,87,4b) + _hx_tag; }

		static ::tink::http::ContainerResult Failed( ::tink::core::TypedError e);
		static ::Dynamic Failed_dyn();
		static ::tink::http::ContainerResult Running( ::Dynamic running);
		static ::Dynamic Running_dyn();
		static ::tink::http::ContainerResult Shutdown;
		static inline ::tink::http::ContainerResult Shutdown_dyn() { return Shutdown; }
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ContainerResult */ 
