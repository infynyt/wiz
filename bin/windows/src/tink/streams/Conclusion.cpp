#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace streams{

::tink::streams::Conclusion Conclusion_obj::Clogged( ::tink::core::TypedError error,::Dynamic at)
{
	return ::hx::CreateEnum< Conclusion_obj >(HX_("Clogged",05,eb,86,3e),1,2)->_hx_init(0,error)->_hx_init(1,at);
}

::tink::streams::Conclusion Conclusion_obj::Depleted;

::tink::streams::Conclusion Conclusion_obj::Failed( ::tink::core::TypedError error)
{
	return ::hx::CreateEnum< Conclusion_obj >(HX_("Failed",dd,39,93,1c),2,1)->_hx_init(0,error);
}

::tink::streams::Conclusion Conclusion_obj::Halted(::Dynamic rest)
{
	return ::hx::CreateEnum< Conclusion_obj >(HX_("Halted",80,a8,4b,eb),0,1)->_hx_init(0,rest);
}

bool Conclusion_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clogged",05,eb,86,3e)) { outValue = Conclusion_obj::Clogged_dyn(); return true; }
	if (inName==HX_("Depleted",eb,24,b8,d3)) { outValue = Conclusion_obj::Depleted; return true; }
	if (inName==HX_("Failed",dd,39,93,1c)) { outValue = Conclusion_obj::Failed_dyn(); return true; }
	if (inName==HX_("Halted",80,a8,4b,eb)) { outValue = Conclusion_obj::Halted_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Conclusion_obj)

int Conclusion_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Clogged",05,eb,86,3e)) return 1;
	if (inName==HX_("Depleted",eb,24,b8,d3)) return 3;
	if (inName==HX_("Failed",dd,39,93,1c)) return 2;
	if (inName==HX_("Halted",80,a8,4b,eb)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Conclusion_obj,Clogged,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conclusion_obj,Failed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conclusion_obj,Halted,return)

int Conclusion_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Clogged",05,eb,86,3e)) return 2;
	if (inName==HX_("Depleted",eb,24,b8,d3)) return 0;
	if (inName==HX_("Failed",dd,39,93,1c)) return 1;
	if (inName==HX_("Halted",80,a8,4b,eb)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Conclusion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clogged",05,eb,86,3e)) return Clogged_dyn();
	if (inName==HX_("Depleted",eb,24,b8,d3)) return Depleted;
	if (inName==HX_("Failed",dd,39,93,1c)) return Failed_dyn();
	if (inName==HX_("Halted",80,a8,4b,eb)) return Halted_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Conclusion_obj_sStaticFields[] = {
	HX_("Halted",80,a8,4b,eb),
	HX_("Clogged",05,eb,86,3e),
	HX_("Failed",dd,39,93,1c),
	HX_("Depleted",eb,24,b8,d3),
	::String(null())
};

::hx::Class Conclusion_obj::__mClass;

Dynamic __Create_Conclusion_obj() { return new Conclusion_obj; }

void Conclusion_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.Conclusion",96,99,43,ae), ::hx::TCanCast< Conclusion_obj >,Conclusion_obj_sStaticFields,0,
	&__Create_Conclusion_obj, &__Create,
	&super::__SGetClass(), &CreateConclusion_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Conclusion_obj::__GetStatic;
}

void Conclusion_obj::__boot()
{
Depleted = ::hx::CreateConstEnum< Conclusion_obj >(HX_("Depleted",eb,24,b8,d3),3);
}


} // end namespace tink
} // end namespace streams
