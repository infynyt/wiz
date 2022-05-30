#include <hxcpp.h>

#ifndef INCLUDED_tink_http_Authorization
#include <tink/http/Authorization.h>
#endif
namespace tink{
namespace http{

::tink::http::Authorization Authorization_obj::Basic(::String user,::String pass)
{
	return ::hx::CreateEnum< Authorization_obj >(HX_("Basic",8e,9a,e7,40),0,2)->_hx_init(0,user)->_hx_init(1,pass);
}

::tink::http::Authorization Authorization_obj::Bearer(::String token)
{
	return ::hx::CreateEnum< Authorization_obj >(HX_("Bearer",01,f3,7a,cb),1,1)->_hx_init(0,token);
}

::tink::http::Authorization Authorization_obj::Others(::String scheme,::String param)
{
	return ::hx::CreateEnum< Authorization_obj >(HX_("Others",c3,03,b8,a5),2,2)->_hx_init(0,scheme)->_hx_init(1,param);
}

bool Authorization_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Basic",8e,9a,e7,40)) { outValue = Authorization_obj::Basic_dyn(); return true; }
	if (inName==HX_("Bearer",01,f3,7a,cb)) { outValue = Authorization_obj::Bearer_dyn(); return true; }
	if (inName==HX_("Others",c3,03,b8,a5)) { outValue = Authorization_obj::Others_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Authorization_obj)

int Authorization_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Basic",8e,9a,e7,40)) return 0;
	if (inName==HX_("Bearer",01,f3,7a,cb)) return 1;
	if (inName==HX_("Others",c3,03,b8,a5)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Authorization_obj,Basic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Authorization_obj,Bearer,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Authorization_obj,Others,return)

int Authorization_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Basic",8e,9a,e7,40)) return 2;
	if (inName==HX_("Bearer",01,f3,7a,cb)) return 1;
	if (inName==HX_("Others",c3,03,b8,a5)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Authorization_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Basic",8e,9a,e7,40)) return Basic_dyn();
	if (inName==HX_("Bearer",01,f3,7a,cb)) return Bearer_dyn();
	if (inName==HX_("Others",c3,03,b8,a5)) return Others_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Authorization_obj_sStaticFields[] = {
	HX_("Basic",8e,9a,e7,40),
	HX_("Bearer",01,f3,7a,cb),
	HX_("Others",c3,03,b8,a5),
	::String(null())
};

::hx::Class Authorization_obj::__mClass;

Dynamic __Create_Authorization_obj() { return new Authorization_obj; }

void Authorization_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.http.Authorization",6f,14,8e,92), ::hx::TCanCast< Authorization_obj >,Authorization_obj_sStaticFields,0,
	&__Create_Authorization_obj, &__Create,
	&super::__SGetClass(), &CreateAuthorization_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Authorization_obj::__GetStatic;
}

void Authorization_obj::__boot()
{
}


} // end namespace tink
} // end namespace http
