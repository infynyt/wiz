#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif

namespace tink{
namespace core{
namespace _Lazy{


static ::String LazyObject_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class LazyObject_obj::__mClass;

void LazyObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Lazy.LazyObject",01,f6,89,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LazyObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xe1200775 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Lazy
