#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
#ifndef INCLUDED_tink_http_HandlerObject
#include <tink/http/HandlerObject.h>
#endif

namespace tink{
namespace http{


static ::String Container_obj_sMemberFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null()) };

::hx::Class Container_obj::__mClass;

void Container_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.Container",b7,7c,5d,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Container_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x68c1b3e7 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
