#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
namespace tink{
namespace core{

::tink::core::Outcome Outcome_obj::Failure( ::Dynamic failure)
{
	return ::hx::CreateEnum< Outcome_obj >(HX_("Failure",2a,98,4b,e4),1,1)->_hx_init(0,failure);
}

::tink::core::Outcome Outcome_obj::Success( ::Dynamic data)
{
	return ::hx::CreateEnum< Outcome_obj >(HX_("Success",a3,4d,9f,85),0,1)->_hx_init(0,data);
}

bool Outcome_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Failure",2a,98,4b,e4)) { outValue = Outcome_obj::Failure_dyn(); return true; }
	if (inName==HX_("Success",a3,4d,9f,85)) { outValue = Outcome_obj::Success_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Outcome_obj)

int Outcome_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Failure",2a,98,4b,e4)) return 1;
	if (inName==HX_("Success",a3,4d,9f,85)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Outcome_obj,Failure,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Outcome_obj,Success,return)

int Outcome_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Failure",2a,98,4b,e4)) return 1;
	if (inName==HX_("Success",a3,4d,9f,85)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Outcome_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Failure",2a,98,4b,e4)) return Failure_dyn();
	if (inName==HX_("Success",a3,4d,9f,85)) return Success_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Outcome_obj_sStaticFields[] = {
	HX_("Success",a3,4d,9f,85),
	HX_("Failure",2a,98,4b,e4),
	::String(null())
};

::hx::Class Outcome_obj::__mClass;

Dynamic __Create_Outcome_obj() { return new Outcome_obj; }

void Outcome_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.core.Outcome",5f,27,74,0c), ::hx::TCanCast< Outcome_obj >,Outcome_obj_sStaticFields,0,
	&__Create_Outcome_obj, &__Create,
	&super::__SGetClass(), &CreateOutcome_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Outcome_obj::__GetStatic;
}

void Outcome_obj::__boot()
{
}


} // end namespace tink
} // end namespace core
