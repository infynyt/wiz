#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif

namespace tink{
namespace core{


static ::String Disposable_obj_sMemberFields[] = {
	HX_("get_disposed",ee,be,bd,dc),
	HX_("ondispose",60,11,a6,c5),
	::String(null()) };

::hx::Class Disposable_obj::__mClass;

void Disposable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.Disposable",f3,5c,17,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Disposable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x87efe891 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
