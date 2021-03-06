#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace io{

::tink::io::PipeResult PipeResult_obj::AllWritten;

::tink::io::PipeResult PipeResult_obj::SinkEnded( ::Dynamic result,::Dynamic rest)
{
	return ::hx::CreateEnum< PipeResult_obj >(HX_("SinkEnded",87,35,06,84),1,2)->_hx_init(0,result)->_hx_init(1,rest);
}

::tink::io::PipeResult PipeResult_obj::SinkFailed( ::tink::core::TypedError e,::Dynamic rest)
{
	return ::hx::CreateEnum< PipeResult_obj >(HX_("SinkFailed",90,d4,e1,ee),2,2)->_hx_init(0,e)->_hx_init(1,rest);
}

::tink::io::PipeResult PipeResult_obj::SourceFailed( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< PipeResult_obj >(HX_("SourceFailed",18,cd,17,a6),3,1)->_hx_init(0,e);
}

bool PipeResult_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AllWritten",d6,65,9b,6a)) { outValue = PipeResult_obj::AllWritten; return true; }
	if (inName==HX_("SinkEnded",87,35,06,84)) { outValue = PipeResult_obj::SinkEnded_dyn(); return true; }
	if (inName==HX_("SinkFailed",90,d4,e1,ee)) { outValue = PipeResult_obj::SinkFailed_dyn(); return true; }
	if (inName==HX_("SourceFailed",18,cd,17,a6)) { outValue = PipeResult_obj::SourceFailed_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PipeResult_obj)

int PipeResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AllWritten",d6,65,9b,6a)) return 0;
	if (inName==HX_("SinkEnded",87,35,06,84)) return 1;
	if (inName==HX_("SinkFailed",90,d4,e1,ee)) return 2;
	if (inName==HX_("SourceFailed",18,cd,17,a6)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(PipeResult_obj,SinkEnded,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(PipeResult_obj,SinkFailed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipeResult_obj,SourceFailed,return)

int PipeResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AllWritten",d6,65,9b,6a)) return 0;
	if (inName==HX_("SinkEnded",87,35,06,84)) return 2;
	if (inName==HX_("SinkFailed",90,d4,e1,ee)) return 2;
	if (inName==HX_("SourceFailed",18,cd,17,a6)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val PipeResult_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AllWritten",d6,65,9b,6a)) return AllWritten;
	if (inName==HX_("SinkEnded",87,35,06,84)) return SinkEnded_dyn();
	if (inName==HX_("SinkFailed",90,d4,e1,ee)) return SinkFailed_dyn();
	if (inName==HX_("SourceFailed",18,cd,17,a6)) return SourceFailed_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String PipeResult_obj_sStaticFields[] = {
	HX_("AllWritten",d6,65,9b,6a),
	HX_("SinkEnded",87,35,06,84),
	HX_("SinkFailed",90,d4,e1,ee),
	HX_("SourceFailed",18,cd,17,a6),
	::String(null())
};

::hx::Class PipeResult_obj::__mClass;

Dynamic __Create_PipeResult_obj() { return new PipeResult_obj; }

void PipeResult_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.io.PipeResult",d7,3e,a3,6f), ::hx::TCanCast< PipeResult_obj >,PipeResult_obj_sStaticFields,0,
	&__Create_PipeResult_obj, &__Create,
	&super::__SGetClass(), &CreatePipeResult_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PipeResult_obj::__GetStatic;
}

void PipeResult_obj::__boot()
{
AllWritten = ::hx::CreateConstEnum< PipeResult_obj >(HX_("AllWritten",d6,65,9b,6a),0);
}


} // end namespace tink
} // end namespace io
