#include <hxcpp.h>

#ifndef INCLUDED_tink_core_FutureStatus
#include <tink/core/FutureStatus.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
namespace tink{
namespace core{

::tink::core::FutureStatus FutureStatus_obj::Awaited;

::tink::core::FutureStatus FutureStatus_obj::EagerlyAwaited;

::tink::core::FutureStatus FutureStatus_obj::NeverEver;

::tink::core::FutureStatus FutureStatus_obj::Ready(::Dynamic result)
{
	return ::hx::CreateEnum< FutureStatus_obj >(HX_("Ready",43,10,e8,79),3,1)->_hx_init(0,result);
}

::tink::core::FutureStatus FutureStatus_obj::Suspended;

bool FutureStatus_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Awaited",15,21,09,43)) { outValue = FutureStatus_obj::Awaited; return true; }
	if (inName==HX_("EagerlyAwaited",90,31,4f,1d)) { outValue = FutureStatus_obj::EagerlyAwaited; return true; }
	if (inName==HX_("NeverEver",aa,ef,08,35)) { outValue = FutureStatus_obj::NeverEver; return true; }
	if (inName==HX_("Ready",43,10,e8,79)) { outValue = FutureStatus_obj::Ready_dyn(); return true; }
	if (inName==HX_("Suspended",bb,3e,ea,6e)) { outValue = FutureStatus_obj::Suspended; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FutureStatus_obj)

int FutureStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Awaited",15,21,09,43)) return 1;
	if (inName==HX_("EagerlyAwaited",90,31,4f,1d)) return 2;
	if (inName==HX_("NeverEver",aa,ef,08,35)) return 4;
	if (inName==HX_("Ready",43,10,e8,79)) return 3;
	if (inName==HX_("Suspended",bb,3e,ea,6e)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureStatus_obj,Ready,return)

int FutureStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Awaited",15,21,09,43)) return 0;
	if (inName==HX_("EagerlyAwaited",90,31,4f,1d)) return 0;
	if (inName==HX_("NeverEver",aa,ef,08,35)) return 0;
	if (inName==HX_("Ready",43,10,e8,79)) return 1;
	if (inName==HX_("Suspended",bb,3e,ea,6e)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FutureStatus_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Awaited",15,21,09,43)) return Awaited;
	if (inName==HX_("EagerlyAwaited",90,31,4f,1d)) return EagerlyAwaited;
	if (inName==HX_("NeverEver",aa,ef,08,35)) return NeverEver;
	if (inName==HX_("Ready",43,10,e8,79)) return Ready_dyn();
	if (inName==HX_("Suspended",bb,3e,ea,6e)) return Suspended;
	return super::__Field(inName,inCallProp);
}

static ::String FutureStatus_obj_sStaticFields[] = {
	HX_("Suspended",bb,3e,ea,6e),
	HX_("Awaited",15,21,09,43),
	HX_("EagerlyAwaited",90,31,4f,1d),
	HX_("Ready",43,10,e8,79),
	HX_("NeverEver",aa,ef,08,35),
	::String(null())
};

::hx::Class FutureStatus_obj::__mClass;

Dynamic __Create_FutureStatus_obj() { return new FutureStatus_obj; }

void FutureStatus_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.core.FutureStatus",e8,d1,b4,f2), ::hx::TCanCast< FutureStatus_obj >,FutureStatus_obj_sStaticFields,0,
	&__Create_FutureStatus_obj, &__Create,
	&super::__SGetClass(), &CreateFutureStatus_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FutureStatus_obj::__GetStatic;
}

void FutureStatus_obj::__boot()
{
Awaited = ::hx::CreateConstEnum< FutureStatus_obj >(HX_("Awaited",15,21,09,43),1);
EagerlyAwaited = ::hx::CreateConstEnum< FutureStatus_obj >(HX_("EagerlyAwaited",90,31,4f,1d),2);
NeverEver = ::hx::CreateConstEnum< FutureStatus_obj >(HX_("NeverEver",aa,ef,08,35),4);
Suspended = ::hx::CreateConstEnum< FutureStatus_obj >(HX_("Suspended",bb,3e,ea,6e),0);
}


} // end namespace tink
} // end namespace core
