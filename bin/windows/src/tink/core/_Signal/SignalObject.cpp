#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif

namespace tink{
namespace core{
namespace _Signal{


static ::String SignalObject_obj_sMemberFields[] = {
	HX_("listen",47,c8,f9,ef),
	::String(null()) };

::hx::Class SignalObject_obj::__mClass;

void SignalObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Signal.SignalObject",01,61,76,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SignalObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x17de315d >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Signal
