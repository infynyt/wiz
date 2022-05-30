#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

namespace tink{
namespace streams{


static ::String StreamObject_obj_sMemberFields[] = {
	HX_("get_depleted",d4,1c,20,af),
	HX_("next",f3,84,02,49),
	HX_("regroup",ac,06,8f,80),
	HX_("map",9c,0a,53,00),
	HX_("filter",b8,1f,35,85),
	HX_("retain",c5,6f,1e,09),
	HX_("idealize",df,0a,b0,37),
	HX_("append",da,e1,d3,8f),
	HX_("prepend",0e,97,e0,37),
	HX_("blend",51,e8,f4,b4),
	HX_("decompose",b1,c3,a7,7a),
	HX_("forEach",aa,29,be,c4),
	HX_("reduce",a6,2d,9a,fe),
	::String(null()) };

::hx::Class StreamObject_obj::__mClass;

void StreamObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.StreamObject",d6,15,17,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StreamObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x6164ac00 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
