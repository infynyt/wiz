#include <hxcpp.h>

#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Response_OutgoingResponseData
#include <tink/http/_Response/OutgoingResponseData.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_391d7668bbd1a7ee_61_new,"tink.http._Response.OutgoingResponseData","new",0xc556d241,"tink.http._Response.OutgoingResponseData.new","tink/http/Response.hx",61,0x0bc26b73)
namespace tink{
namespace http{
namespace _Response{

void OutgoingResponseData_obj::__construct( ::tink::http::ResponseHeaderBase header,::Dynamic body){
            	HX_STACKFRAME(&_hx_pos_391d7668bbd1a7ee_61_new)
HXDLIN(  61)		super::__construct(header,body);
            	}

Dynamic OutgoingResponseData_obj::__CreateEmpty() { return new OutgoingResponseData_obj; }

void *OutgoingResponseData_obj::_hx_vtable = 0;

Dynamic OutgoingResponseData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutgoingResponseData_obj > _hx_result = new OutgoingResponseData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OutgoingResponseData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dfa253d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dfa253d;
	} else {
		return inClassId==(int)0x7888e42d;
	}
}


::hx::ObjectPtr< OutgoingResponseData_obj > OutgoingResponseData_obj::__new( ::tink::http::ResponseHeaderBase header,::Dynamic body) {
	::hx::ObjectPtr< OutgoingResponseData_obj > __this = new OutgoingResponseData_obj();
	__this->__construct(header,body);
	return __this;
}

::hx::ObjectPtr< OutgoingResponseData_obj > OutgoingResponseData_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::http::ResponseHeaderBase header,::Dynamic body) {
	OutgoingResponseData_obj *__this = (OutgoingResponseData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutgoingResponseData_obj), true, "tink.http._Response.OutgoingResponseData"));
	*(void **)__this = OutgoingResponseData_obj::_hx_vtable;
	__this->__construct(header,body);
	return __this;
}

OutgoingResponseData_obj::OutgoingResponseData_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutgoingResponseData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OutgoingResponseData_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OutgoingResponseData_obj::__mClass;

void OutgoingResponseData_obj::__register()
{
	OutgoingResponseData_obj _hx_dummy;
	OutgoingResponseData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Response.OutgoingResponseData",cf,9d,96,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OutgoingResponseData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutgoingResponseData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutgoingResponseData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Response
