#include <hxcpp.h>

#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequest
#include <tink/http/OutgoingRequest.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequestHeader
#include <tink/http/OutgoingRequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_010e518107ebda92_147_new,"tink.http.OutgoingRequest","new",0x5474c9ab,"tink.http.OutgoingRequest.new","tink/http/Request.hx",147,0x68d6b2f9)
namespace tink{
namespace http{

void OutgoingRequest_obj::__construct( ::tink::http::OutgoingRequestHeader header,::Dynamic body){
            	HX_STACKFRAME(&_hx_pos_010e518107ebda92_147_new)
HXDLIN( 147)		super::__construct(header,body);
            	}

Dynamic OutgoingRequest_obj::__CreateEmpty() { return new OutgoingRequest_obj; }

void *OutgoingRequest_obj::_hx_vtable = 0;

Dynamic OutgoingRequest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutgoingRequest_obj > _hx_result = new OutgoingRequest_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OutgoingRequest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08bf21c5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08bf21c5;
	} else {
		return inClassId==(int)0x7888e42d;
	}
}


::hx::ObjectPtr< OutgoingRequest_obj > OutgoingRequest_obj::__new( ::tink::http::OutgoingRequestHeader header,::Dynamic body) {
	::hx::ObjectPtr< OutgoingRequest_obj > __this = new OutgoingRequest_obj();
	__this->__construct(header,body);
	return __this;
}

::hx::ObjectPtr< OutgoingRequest_obj > OutgoingRequest_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::http::OutgoingRequestHeader header,::Dynamic body) {
	OutgoingRequest_obj *__this = (OutgoingRequest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutgoingRequest_obj), true, "tink.http.OutgoingRequest"));
	*(void **)__this = OutgoingRequest_obj::_hx_vtable;
	__this->__construct(header,body);
	return __this;
}

OutgoingRequest_obj::OutgoingRequest_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutgoingRequest_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OutgoingRequest_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OutgoingRequest_obj::__mClass;

void OutgoingRequest_obj::__register()
{
	OutgoingRequest_obj _hx_dummy;
	OutgoingRequest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.OutgoingRequest",39,18,f6,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OutgoingRequest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutgoingRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutgoingRequest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
