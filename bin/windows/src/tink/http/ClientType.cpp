#include <hxcpp.h>

#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_http_ClientType
#include <tink/http/ClientType.h>
#endif
#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
#ifndef INCLUDED_tink_http_containers_LocalContainer
#include <tink/http/containers/LocalContainer.h>
#endif
namespace tink{
namespace http{

::tink::http::ClientType ClientType_obj::Curl;

::tink::http::ClientType ClientType_obj::Custom(::Dynamic v)
{
	return ::hx::CreateEnum< ClientType_obj >(HX_("Custom",d1,fb,26,74),4,1)->_hx_init(0,v);
}

::tink::http::ClientType ClientType_obj::Default;

::tink::http::ClientType ClientType_obj::Local( ::tink::http::containers::LocalContainer container)
{
	return ::hx::CreateEnum< ClientType_obj >(HX_("Local",4b,39,1e,0c),1,1)->_hx_init(0,container);
}

::tink::http::ClientType ClientType_obj::StdLib;

bool ClientType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Curl",0c,77,a2,2c)) { outValue = ClientType_obj::Curl; return true; }
	if (inName==HX_("Custom",d1,fb,26,74)) { outValue = ClientType_obj::Custom_dyn(); return true; }
	if (inName==HX_("Default",a1,00,15,69)) { outValue = ClientType_obj::Default; return true; }
	if (inName==HX_("Local",4b,39,1e,0c)) { outValue = ClientType_obj::Local_dyn(); return true; }
	if (inName==HX_("StdLib",82,9a,6d,3c)) { outValue = ClientType_obj::StdLib; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ClientType_obj)

int ClientType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Curl",0c,77,a2,2c)) return 2;
	if (inName==HX_("Custom",d1,fb,26,74)) return 4;
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("Local",4b,39,1e,0c)) return 1;
	if (inName==HX_("StdLib",82,9a,6d,3c)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientType_obj,Custom,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientType_obj,Local,return)

int ClientType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Curl",0c,77,a2,2c)) return 0;
	if (inName==HX_("Custom",d1,fb,26,74)) return 1;
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("Local",4b,39,1e,0c)) return 1;
	if (inName==HX_("StdLib",82,9a,6d,3c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ClientType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Curl",0c,77,a2,2c)) return Curl;
	if (inName==HX_("Custom",d1,fb,26,74)) return Custom_dyn();
	if (inName==HX_("Default",a1,00,15,69)) return Default;
	if (inName==HX_("Local",4b,39,1e,0c)) return Local_dyn();
	if (inName==HX_("StdLib",82,9a,6d,3c)) return StdLib;
	return super::__Field(inName,inCallProp);
}

static ::String ClientType_obj_sStaticFields[] = {
	HX_("Default",a1,00,15,69),
	HX_("Local",4b,39,1e,0c),
	HX_("Curl",0c,77,a2,2c),
	HX_("StdLib",82,9a,6d,3c),
	HX_("Custom",d1,fb,26,74),
	::String(null())
};

::hx::Class ClientType_obj::__mClass;

Dynamic __Create_ClientType_obj() { return new ClientType_obj; }

void ClientType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.http.ClientType",6f,ea,c8,55), ::hx::TCanCast< ClientType_obj >,ClientType_obj_sStaticFields,0,
	&__Create_ClientType_obj, &__Create,
	&super::__SGetClass(), &CreateClientType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ClientType_obj::__GetStatic;
}

void ClientType_obj::__boot()
{
Curl = ::hx::CreateConstEnum< ClientType_obj >(HX_("Curl",0c,77,a2,2c),2);
Default = ::hx::CreateConstEnum< ClientType_obj >(HX_("Default",a1,00,15,69),0);
StdLib = ::hx::CreateConstEnum< ClientType_obj >(HX_("StdLib",82,9a,6d,3c),3);
}


} // end namespace tink
} // end namespace http
