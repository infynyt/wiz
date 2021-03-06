#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_ReductionStep
#include <tink/streams/ReductionStep.h>
#endif
namespace tink{
namespace streams{

::tink::streams::ReductionStep ReductionStep_obj::Crash( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< ReductionStep_obj >(HX_("Crash",c7,2f,7d,df),1,1)->_hx_init(0,e);
}

::tink::streams::ReductionStep ReductionStep_obj::Progress( ::Dynamic result)
{
	return ::hx::CreateEnum< ReductionStep_obj >(HX_("Progress",cd,b3,dc,5f),0,1)->_hx_init(0,result);
}

bool ReductionStep_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Crash",c7,2f,7d,df)) { outValue = ReductionStep_obj::Crash_dyn(); return true; }
	if (inName==HX_("Progress",cd,b3,dc,5f)) { outValue = ReductionStep_obj::Progress_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ReductionStep_obj)

int ReductionStep_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Crash",c7,2f,7d,df)) return 1;
	if (inName==HX_("Progress",cd,b3,dc,5f)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReductionStep_obj,Crash,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReductionStep_obj,Progress,return)

int ReductionStep_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Crash",c7,2f,7d,df)) return 1;
	if (inName==HX_("Progress",cd,b3,dc,5f)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ReductionStep_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Crash",c7,2f,7d,df)) return Crash_dyn();
	if (inName==HX_("Progress",cd,b3,dc,5f)) return Progress_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ReductionStep_obj_sStaticFields[] = {
	HX_("Progress",cd,b3,dc,5f),
	HX_("Crash",c7,2f,7d,df),
	::String(null())
};

::hx::Class ReductionStep_obj::__mClass;

Dynamic __Create_ReductionStep_obj() { return new ReductionStep_obj; }

void ReductionStep_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.ReductionStep",c8,c1,78,61), ::hx::TCanCast< ReductionStep_obj >,ReductionStep_obj_sStaticFields,0,
	&__Create_ReductionStep_obj, &__Create,
	&super::__SGetClass(), &CreateReductionStep_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ReductionStep_obj::__GetStatic;
}

void ReductionStep_obj::__boot()
{
}


} // end namespace tink
} // end namespace streams
