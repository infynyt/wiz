#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif

namespace tink{
namespace core{


static ::String LinkObject_obj_sMemberFields[] = {
	HX_("cancel",7a,ed,33,b8),
	::String(null()) };

::hx::Class LinkObject_obj::__mClass;

void LinkObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.LinkObject",ac,51,3d,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinkObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x0d15dd4a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
