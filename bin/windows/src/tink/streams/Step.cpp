#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_Step
#include <tink/streams/Step.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace streams{

::tink::streams::Step Step_obj::End;

::tink::streams::Step Step_obj::Fail( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< Step_obj >(HX_("Fail",fe,e5,8e,2e),1,1)->_hx_init(0,e);
}

::tink::streams::Step Step_obj::Link( ::Dynamic value,::Dynamic next)
{
	return ::hx::CreateEnum< Step_obj >(HX_("Link",1a,44,8c,32),0,2)->_hx_init(0,value)->_hx_init(1,next);
}

bool Step_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("End",bb,bb,34,00)) { outValue = Step_obj::End; return true; }
	if (inName==HX_("Fail",fe,e5,8e,2e)) { outValue = Step_obj::Fail_dyn(); return true; }
	if (inName==HX_("Link",1a,44,8c,32)) { outValue = Step_obj::Link_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Step_obj)

int Step_obj::__FindIndex(::String inName)
{
	if (inName==HX_("End",bb,bb,34,00)) return 2;
	if (inName==HX_("Fail",fe,e5,8e,2e)) return 1;
	if (inName==HX_("Link",1a,44,8c,32)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Step_obj,Fail,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Step_obj,Link,return)

int Step_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("End",bb,bb,34,00)) return 0;
	if (inName==HX_("Fail",fe,e5,8e,2e)) return 1;
	if (inName==HX_("Link",1a,44,8c,32)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Step_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("End",bb,bb,34,00)) return End;
	if (inName==HX_("Fail",fe,e5,8e,2e)) return Fail_dyn();
	if (inName==HX_("Link",1a,44,8c,32)) return Link_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Step_obj_sStaticFields[] = {
	HX_("Link",1a,44,8c,32),
	HX_("Fail",fe,e5,8e,2e),
	HX_("End",bb,bb,34,00),
	::String(null())
};

::hx::Class Step_obj::__mClass;

Dynamic __Create_Step_obj() { return new Step_obj; }

void Step_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.Step",c3,c6,00,cc), ::hx::TCanCast< Step_obj >,Step_obj_sStaticFields,0,
	&__Create_Step_obj, &__Create,
	&super::__SGetClass(), &CreateStep_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Step_obj::__GetStatic;
}

void Step_obj::__boot()
{
End = ::hx::CreateConstEnum< Step_obj >(HX_("End",bb,bb,34,00),2);
}


} // end namespace tink
} // end namespace streams
