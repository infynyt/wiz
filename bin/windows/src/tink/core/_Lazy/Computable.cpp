#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif

namespace tink{
namespace core{
namespace _Lazy{


static ::String Computable_obj_sMemberFields[] = {
	HX_("isComputed",17,53,75,00),
	HX_("compute",77,47,78,83),
	HX_("underlying",5d,fc,b0,59),
	::String(null()) };

::hx::Class Computable_obj::__mClass;

void Computable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Lazy.Computable",76,81,1f,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Computable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd2b592ea >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Lazy
