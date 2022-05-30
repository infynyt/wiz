#include <hxcpp.h>

#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatus
#include <tink/core/ProgressStatus.h>
#endif
namespace tink{
namespace core{

::tink::core::ProgressStatus ProgressStatus_obj::Finished( ::Dynamic v)
{
	return ::hx::CreateEnum< ProgressStatus_obj >(HX_("Finished",92,4f,c0,6e),1,1)->_hx_init(0,v);
}

::tink::core::ProgressStatus ProgressStatus_obj::InProgress( ::tink::core::MPair v)
{
	return ::hx::CreateEnum< ProgressStatus_obj >(HX_("InProgress",d2,00,d4,d8),0,1)->_hx_init(0,v);
}

bool ProgressStatus_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Finished",92,4f,c0,6e)) { outValue = ProgressStatus_obj::Finished_dyn(); return true; }
	if (inName==HX_("InProgress",d2,00,d4,d8)) { outValue = ProgressStatus_obj::InProgress_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ProgressStatus_obj)

int ProgressStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Finished",92,4f,c0,6e)) return 1;
	if (inName==HX_("InProgress",d2,00,d4,d8)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProgressStatus_obj,Finished,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProgressStatus_obj,InProgress,return)

int ProgressStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Finished",92,4f,c0,6e)) return 1;
	if (inName==HX_("InProgress",d2,00,d4,d8)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ProgressStatus_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Finished",92,4f,c0,6e)) return Finished_dyn();
	if (inName==HX_("InProgress",d2,00,d4,d8)) return InProgress_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ProgressStatus_obj_sStaticFields[] = {
	HX_("InProgress",d2,00,d4,d8),
	HX_("Finished",92,4f,c0,6e),
	::String(null())
};

::hx::Class ProgressStatus_obj::__mClass;

Dynamic __Create_ProgressStatus_obj() { return new ProgressStatus_obj; }

void ProgressStatus_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.core.ProgressStatus",92,87,1a,72), ::hx::TCanCast< ProgressStatus_obj >,ProgressStatus_obj_sStaticFields,0,
	&__Create_ProgressStatus_obj, &__Create,
	&super::__SGetClass(), &CreateProgressStatus_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ProgressStatus_obj::__GetStatic;
}

void ProgressStatus_obj::__boot()
{
}


} // end namespace tink
} // end namespace core
