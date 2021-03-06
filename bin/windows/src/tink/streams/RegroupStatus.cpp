#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupStatus
#include <tink/streams/RegroupStatus.h>
#endif
namespace tink{
namespace streams{

::tink::streams::RegroupStatus RegroupStatus_obj::Ended;

::tink::streams::RegroupStatus RegroupStatus_obj::Errored( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< RegroupStatus_obj >(HX_("Errored",07,ce,5b,b7),1,1)->_hx_init(0,e);
}

::tink::streams::RegroupStatus RegroupStatus_obj::Flowing;

bool RegroupStatus_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ended",da,b8,a7,03)) { outValue = RegroupStatus_obj::Ended; return true; }
	if (inName==HX_("Errored",07,ce,5b,b7)) { outValue = RegroupStatus_obj::Errored_dyn(); return true; }
	if (inName==HX_("Flowing",94,45,dc,c5)) { outValue = RegroupStatus_obj::Flowing; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RegroupStatus_obj)

int RegroupStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Ended",da,b8,a7,03)) return 2;
	if (inName==HX_("Errored",07,ce,5b,b7)) return 1;
	if (inName==HX_("Flowing",94,45,dc,c5)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RegroupStatus_obj,Errored,return)

int RegroupStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Ended",da,b8,a7,03)) return 0;
	if (inName==HX_("Errored",07,ce,5b,b7)) return 1;
	if (inName==HX_("Flowing",94,45,dc,c5)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RegroupStatus_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ended",da,b8,a7,03)) return Ended;
	if (inName==HX_("Errored",07,ce,5b,b7)) return Errored_dyn();
	if (inName==HX_("Flowing",94,45,dc,c5)) return Flowing;
	return super::__Field(inName,inCallProp);
}

static ::String RegroupStatus_obj_sStaticFields[] = {
	HX_("Flowing",94,45,dc,c5),
	HX_("Errored",07,ce,5b,b7),
	HX_("Ended",da,b8,a7,03),
	::String(null())
};

::hx::Class RegroupStatus_obj::__mClass;

Dynamic __Create_RegroupStatus_obj() { return new RegroupStatus_obj; }

void RegroupStatus_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.RegroupStatus",a7,a4,78,2e), ::hx::TCanCast< RegroupStatus_obj >,RegroupStatus_obj_sStaticFields,0,
	&__Create_RegroupStatus_obj, &__Create,
	&super::__SGetClass(), &CreateRegroupStatus_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RegroupStatus_obj::__GetStatic;
}

void RegroupStatus_obj::__boot()
{
Ended = ::hx::CreateConstEnum< RegroupStatus_obj >(HX_("Ended",da,b8,a7,03),2);
Flowing = ::hx::CreateConstEnum< RegroupStatus_obj >(HX_("Flowing",94,45,dc,c5),0);
}


} // end namespace tink
} // end namespace streams
