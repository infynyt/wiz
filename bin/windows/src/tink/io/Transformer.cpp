#include <hxcpp.h>

#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

namespace tink{
namespace io{


static ::String Transformer_obj_sMemberFields[] = {
	HX_("transform",6c,2d,93,45),
	::String(null()) };

::hx::Class Transformer_obj::__mClass;

void Transformer_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.Transformer",2d,e8,f6,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Transformer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x76d0aa61 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
