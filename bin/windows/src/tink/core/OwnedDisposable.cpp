#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif

namespace tink{
namespace core{


static ::String OwnedDisposable_obj_sMemberFields[] = {
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class OwnedDisposable_obj::__mClass;

void OwnedDisposable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.OwnedDisposable",f2,ed,d0,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OwnedDisposable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa1838594 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
