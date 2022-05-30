#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_Yield
#include <tink/streams/Yield.h>
#endif
namespace tink{
namespace streams{

::tink::streams::Yield Yield_obj::Data( ::Dynamic data)
{
	return ::hx::CreateEnum< Yield_obj >(HX_("Data",4a,82,3c,2d),0,1)->_hx_init(0,data);
}

::tink::streams::Yield Yield_obj::End;

::tink::streams::Yield Yield_obj::Fail( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< Yield_obj >(HX_("Fail",fe,e5,8e,2e),1,1)->_hx_init(0,e);
}

bool Yield_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Data",4a,82,3c,2d)) { outValue = Yield_obj::Data_dyn(); return true; }
	if (inName==HX_("End",bb,bb,34,00)) { outValue = Yield_obj::End; return true; }
	if (inName==HX_("Fail",fe,e5,8e,2e)) { outValue = Yield_obj::Fail_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Yield_obj)

int Yield_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Data",4a,82,3c,2d)) return 0;
	if (inName==HX_("End",bb,bb,34,00)) return 2;
	if (inName==HX_("Fail",fe,e5,8e,2e)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yield_obj,Data,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Yield_obj,Fail,return)

int Yield_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Data",4a,82,3c,2d)) return 1;
	if (inName==HX_("End",bb,bb,34,00)) return 0;
	if (inName==HX_("Fail",fe,e5,8e,2e)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Yield_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Data",4a,82,3c,2d)) return Data_dyn();
	if (inName==HX_("End",bb,bb,34,00)) return End;
	if (inName==HX_("Fail",fe,e5,8e,2e)) return Fail_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Yield_obj_sStaticFields[] = {
	HX_("Data",4a,82,3c,2d),
	HX_("Fail",fe,e5,8e,2e),
	HX_("End",bb,bb,34,00),
	::String(null())
};

::hx::Class Yield_obj::__mClass;

Dynamic __Create_Yield_obj() { return new Yield_obj; }

void Yield_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.Yield",f6,42,cf,21), ::hx::TCanCast< Yield_obj >,Yield_obj_sStaticFields,0,
	&__Create_Yield_obj, &__Create,
	&super::__SGetClass(), &CreateYield_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Yield_obj::__GetStatic;
}

void Yield_obj::__boot()
{
End = ::hx::CreateConstEnum< Yield_obj >(HX_("End",bb,bb,34,00),2);
}


} // end namespace tink
} // end namespace streams
