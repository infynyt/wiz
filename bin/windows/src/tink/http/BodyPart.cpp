#include <hxcpp.h>

#ifndef INCLUDED_tink_http_BodyPart
#include <tink/http/BodyPart.h>
#endif
namespace tink{
namespace http{

::tink::http::BodyPart BodyPart_obj::File( ::Dynamic handle)
{
	return ::hx::CreateEnum< BodyPart_obj >(HX_("File",9c,fa,94,2e),1,1)->_hx_init(0,handle);
}

::tink::http::BodyPart BodyPart_obj::Value(::String v)
{
	return ::hx::CreateEnum< BodyPart_obj >(HX_("Value",51,ef,e5,c4),0,1)->_hx_init(0,v);
}

bool BodyPart_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("File",9c,fa,94,2e)) { outValue = BodyPart_obj::File_dyn(); return true; }
	if (inName==HX_("Value",51,ef,e5,c4)) { outValue = BodyPart_obj::Value_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BodyPart_obj)

int BodyPart_obj::__FindIndex(::String inName)
{
	if (inName==HX_("File",9c,fa,94,2e)) return 1;
	if (inName==HX_("Value",51,ef,e5,c4)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BodyPart_obj,File,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BodyPart_obj,Value,return)

int BodyPart_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("File",9c,fa,94,2e)) return 1;
	if (inName==HX_("Value",51,ef,e5,c4)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val BodyPart_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("File",9c,fa,94,2e)) return File_dyn();
	if (inName==HX_("Value",51,ef,e5,c4)) return Value_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String BodyPart_obj_sStaticFields[] = {
	HX_("Value",51,ef,e5,c4),
	HX_("File",9c,fa,94,2e),
	::String(null())
};

::hx::Class BodyPart_obj::__mClass;

Dynamic __Create_BodyPart_obj() { return new BodyPart_obj; }

void BodyPart_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.http.BodyPart",ff,9c,21,13), ::hx::TCanCast< BodyPart_obj >,BodyPart_obj_sStaticFields,0,
	&__Create_BodyPart_obj, &__Create,
	&super::__SGetClass(), &CreateBodyPart_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BodyPart_obj::__GetStatic;
}

void BodyPart_obj::__boot()
{
}


} // end namespace tink
} // end namespace http
