#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif

namespace tink{
namespace io{


static ::String WorkerObject_obj_sMemberFields[] = {
	HX_("work",d1,01,fd,4e),
	::String(null()) };

::hx::Class WorkerObject_obj::__mClass;

void WorkerObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.WorkerObject",09,d0,43,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WorkerObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xdcf3fb55 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
