#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace streams{

::tink::streams::RegroupResult RegroupResult_obj::Converted(::Dynamic data,::cpp::VirtualArray untouched)
{
	return ::hx::CreateEnum< RegroupResult_obj >(HX_("Converted",f2,d8,8e,81),0,2)->_hx_init(0,data)->_hx_init(1,untouched);
}

::tink::streams::RegroupResult RegroupResult_obj::Errored( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< RegroupResult_obj >(HX_("Errored",07,ce,5b,b7),3,1)->_hx_init(0,e);
}

::tink::streams::RegroupResult RegroupResult_obj::Terminated( ::haxe::ds::Option data)
{
	return ::hx::CreateEnum< RegroupResult_obj >(HX_("Terminated",03,e7,ca,10),1,1)->_hx_init(0,data);
}

::tink::streams::RegroupResult RegroupResult_obj::Untouched;

bool RegroupResult_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Converted",f2,d8,8e,81)) { outValue = RegroupResult_obj::Converted_dyn(); return true; }
	if (inName==HX_("Errored",07,ce,5b,b7)) { outValue = RegroupResult_obj::Errored_dyn(); return true; }
	if (inName==HX_("Terminated",03,e7,ca,10)) { outValue = RegroupResult_obj::Terminated_dyn(); return true; }
	if (inName==HX_("Untouched",85,04,cd,76)) { outValue = RegroupResult_obj::Untouched; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RegroupResult_obj)

int RegroupResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Converted",f2,d8,8e,81)) return 0;
	if (inName==HX_("Errored",07,ce,5b,b7)) return 3;
	if (inName==HX_("Terminated",03,e7,ca,10)) return 1;
	if (inName==HX_("Untouched",85,04,cd,76)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(RegroupResult_obj,Converted,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RegroupResult_obj,Errored,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RegroupResult_obj,Terminated,return)

int RegroupResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Converted",f2,d8,8e,81)) return 2;
	if (inName==HX_("Errored",07,ce,5b,b7)) return 1;
	if (inName==HX_("Terminated",03,e7,ca,10)) return 1;
	if (inName==HX_("Untouched",85,04,cd,76)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RegroupResult_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Converted",f2,d8,8e,81)) return Converted_dyn();
	if (inName==HX_("Errored",07,ce,5b,b7)) return Errored_dyn();
	if (inName==HX_("Terminated",03,e7,ca,10)) return Terminated_dyn();
	if (inName==HX_("Untouched",85,04,cd,76)) return Untouched;
	return super::__Field(inName,inCallProp);
}

static ::String RegroupResult_obj_sStaticFields[] = {
	HX_("Converted",f2,d8,8e,81),
	HX_("Terminated",03,e7,ca,10),
	HX_("Untouched",85,04,cd,76),
	HX_("Errored",07,ce,5b,b7),
	::String(null())
};

::hx::Class RegroupResult_obj::__mClass;

Dynamic __Create_RegroupResult_obj() { return new RegroupResult_obj; }

void RegroupResult_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.RegroupResult",52,26,01,31), ::hx::TCanCast< RegroupResult_obj >,RegroupResult_obj_sStaticFields,0,
	&__Create_RegroupResult_obj, &__Create,
	&super::__SGetClass(), &CreateRegroupResult_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RegroupResult_obj::__GetStatic;
}

void RegroupResult_obj::__boot()
{
Untouched = ::hx::CreateConstEnum< RegroupResult_obj >(HX_("Untouched",85,04,cd,76),2);
}


} // end namespace tink
} // end namespace streams
