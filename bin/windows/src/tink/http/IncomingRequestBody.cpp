#include <hxcpp.h>

#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequestBody
#include <tink/http/IncomingRequestBody.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace http{

::tink::http::IncomingRequestBody IncomingRequestBody_obj::Parsed(::Array< ::Dynamic> parts)
{
	return ::hx::CreateEnum< IncomingRequestBody_obj >(HX_("Parsed",f1,10,1d,22),1,1)->_hx_init(0,parts);
}

::tink::http::IncomingRequestBody IncomingRequestBody_obj::Plain(::Dynamic source)
{
	return ::hx::CreateEnum< IncomingRequestBody_obj >(HX_("Plain",ea,69,bb,57),0,1)->_hx_init(0,source);
}

bool IncomingRequestBody_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Parsed",f1,10,1d,22)) { outValue = IncomingRequestBody_obj::Parsed_dyn(); return true; }
	if (inName==HX_("Plain",ea,69,bb,57)) { outValue = IncomingRequestBody_obj::Plain_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(IncomingRequestBody_obj)

int IncomingRequestBody_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Parsed",f1,10,1d,22)) return 1;
	if (inName==HX_("Plain",ea,69,bb,57)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(IncomingRequestBody_obj,Parsed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(IncomingRequestBody_obj,Plain,return)

int IncomingRequestBody_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Parsed",f1,10,1d,22)) return 1;
	if (inName==HX_("Plain",ea,69,bb,57)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val IncomingRequestBody_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Parsed",f1,10,1d,22)) return Parsed_dyn();
	if (inName==HX_("Plain",ea,69,bb,57)) return Plain_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String IncomingRequestBody_obj_sStaticFields[] = {
	HX_("Plain",ea,69,bb,57),
	HX_("Parsed",f1,10,1d,22),
	::String(null())
};

::hx::Class IncomingRequestBody_obj::__mClass;

Dynamic __Create_IncomingRequestBody_obj() { return new IncomingRequestBody_obj; }

void IncomingRequestBody_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.http.IncomingRequestBody",41,e5,fc,1f), ::hx::TCanCast< IncomingRequestBody_obj >,IncomingRequestBody_obj_sStaticFields,0,
	&__Create_IncomingRequestBody_obj, &__Create,
	&super::__SGetClass(), &CreateIncomingRequestBody_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &IncomingRequestBody_obj::__GetStatic;
}

void IncomingRequestBody_obj::__boot()
{
}


} // end namespace tink
} // end namespace http
