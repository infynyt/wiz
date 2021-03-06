#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

namespace tink{
namespace io{


static ::String SinkObject_obj_sMemberFields[] = {
	HX_("get_sealed",65,83,7a,53),
	HX_("consume",bc,79,da,18),
	::String(null()) };

::hx::Class SinkObject_obj::__mClass;

void SinkObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.SinkObject",9e,a0,59,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SinkObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x483020ea >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
