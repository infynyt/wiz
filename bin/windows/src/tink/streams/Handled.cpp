#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
namespace tink{
namespace streams{

::tink::streams::Handled Handled_obj::BackOff;

::tink::streams::Handled Handled_obj::Clog( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< Handled_obj >(HX_("Clog",21,a0,9b,2c),3,1)->_hx_init(0,e);
}

::tink::streams::Handled Handled_obj::Finish;

::tink::streams::Handled Handled_obj::Resume;

bool Handled_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BackOff",68,2b,c8,c8)) { outValue = Handled_obj::BackOff; return true; }
	if (inName==HX_("Clog",21,a0,9b,2c)) { outValue = Handled_obj::Clog_dyn(); return true; }
	if (inName==HX_("Finish",73,b4,13,bb)) { outValue = Handled_obj::Finish; return true; }
	if (inName==HX_("Resume",cd,dd,18,3d)) { outValue = Handled_obj::Resume; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Handled_obj)

int Handled_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BackOff",68,2b,c8,c8)) return 0;
	if (inName==HX_("Clog",21,a0,9b,2c)) return 3;
	if (inName==HX_("Finish",73,b4,13,bb)) return 1;
	if (inName==HX_("Resume",cd,dd,18,3d)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handled_obj,Clog,return)

int Handled_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BackOff",68,2b,c8,c8)) return 0;
	if (inName==HX_("Clog",21,a0,9b,2c)) return 1;
	if (inName==HX_("Finish",73,b4,13,bb)) return 0;
	if (inName==HX_("Resume",cd,dd,18,3d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Handled_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BackOff",68,2b,c8,c8)) return BackOff;
	if (inName==HX_("Clog",21,a0,9b,2c)) return Clog_dyn();
	if (inName==HX_("Finish",73,b4,13,bb)) return Finish;
	if (inName==HX_("Resume",cd,dd,18,3d)) return Resume;
	return super::__Field(inName,inCallProp);
}

static ::String Handled_obj_sStaticFields[] = {
	HX_("BackOff",68,2b,c8,c8),
	HX_("Finish",73,b4,13,bb),
	HX_("Resume",cd,dd,18,3d),
	HX_("Clog",21,a0,9b,2c),
	::String(null())
};

::hx::Class Handled_obj::__mClass;

Dynamic __Create_Handled_obj() { return new Handled_obj; }

void Handled_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.Handled",a5,94,ee,d9), ::hx::TCanCast< Handled_obj >,Handled_obj_sStaticFields,0,
	&__Create_Handled_obj, &__Create,
	&super::__SGetClass(), &CreateHandled_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Handled_obj::__GetStatic;
}

void Handled_obj::__boot()
{
BackOff = ::hx::CreateConstEnum< Handled_obj >(HX_("BackOff",68,2b,c8,c8),0);
Finish = ::hx::CreateConstEnum< Handled_obj >(HX_("Finish",73,b4,13,bb),1);
Resume = ::hx::CreateConstEnum< Handled_obj >(HX_("Resume",cd,dd,18,3d),2);
}


} // end namespace tink
} // end namespace streams
