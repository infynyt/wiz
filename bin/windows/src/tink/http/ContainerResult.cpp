#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_http_ContainerResult
#include <tink/http/ContainerResult.h>
#endif
namespace tink{
namespace http{

::tink::http::ContainerResult ContainerResult_obj::Failed( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< ContainerResult_obj >(HX_("Failed",dd,39,93,1c),1,1)->_hx_init(0,e);
}

::tink::http::ContainerResult ContainerResult_obj::Running( ::Dynamic running)
{
	return ::hx::CreateEnum< ContainerResult_obj >(HX_("Running",df,95,ba,b8),0,1)->_hx_init(0,running);
}

::tink::http::ContainerResult ContainerResult_obj::Shutdown;

bool ContainerResult_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Failed",dd,39,93,1c)) { outValue = ContainerResult_obj::Failed_dyn(); return true; }
	if (inName==HX_("Running",df,95,ba,b8)) { outValue = ContainerResult_obj::Running_dyn(); return true; }
	if (inName==HX_("Shutdown",b6,b8,bd,44)) { outValue = ContainerResult_obj::Shutdown; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ContainerResult_obj)

int ContainerResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Failed",dd,39,93,1c)) return 1;
	if (inName==HX_("Running",df,95,ba,b8)) return 0;
	if (inName==HX_("Shutdown",b6,b8,bd,44)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContainerResult_obj,Failed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContainerResult_obj,Running,return)

int ContainerResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Failed",dd,39,93,1c)) return 1;
	if (inName==HX_("Running",df,95,ba,b8)) return 1;
	if (inName==HX_("Shutdown",b6,b8,bd,44)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ContainerResult_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Failed",dd,39,93,1c)) return Failed_dyn();
	if (inName==HX_("Running",df,95,ba,b8)) return Running_dyn();
	if (inName==HX_("Shutdown",b6,b8,bd,44)) return Shutdown;
	return super::__Field(inName,inCallProp);
}

static ::String ContainerResult_obj_sStaticFields[] = {
	HX_("Running",df,95,ba,b8),
	HX_("Failed",dd,39,93,1c),
	HX_("Shutdown",b6,b8,bd,44),
	::String(null())
};

::hx::Class ContainerResult_obj::__mClass;

Dynamic __Create_ContainerResult_obj() { return new ContainerResult_obj; }

void ContainerResult_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.http.ContainerResult",f4,3c,93,6c), ::hx::TCanCast< ContainerResult_obj >,ContainerResult_obj_sStaticFields,0,
	&__Create_ContainerResult_obj, &__Create,
	&super::__SGetClass(), &CreateContainerResult_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ContainerResult_obj::__GetStatic;
}

void ContainerResult_obj::__boot()
{
Shutdown = ::hx::CreateConstEnum< ContainerResult_obj >(HX_("Shutdown",b6,b8,bd,44),2);
}


} // end namespace tink
} // end namespace http
