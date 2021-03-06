#include <hxcpp.h>

#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Future_SyncFuture
#include <tink/core/_Future/SyncFuture.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequest
#include <tink/http/IncomingRequest.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequestBody
#include <tink/http/IncomingRequestBody.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequestHeader
#include <tink/http/IncomingRequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
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
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Response_OutgoingResponseData
#include <tink/http/_Response/OutgoingResponseData.h>
#endif
#ifndef INCLUDED_tink_http_clients_LocalContainerClient
#include <tink/http/clients/LocalContainerClient.h>
#endif
#ifndef INCLUDED_tink_http_containers_LocalContainer
#include <tink/http/containers/LocalContainer.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12e429452b61f37e_15_new,"tink.http.clients.LocalContainerClient","new",0xb6221f63,"tink.http.clients.LocalContainerClient.new","tink/http/clients/LocalContainerClient.hx",15,0x4c45cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_12e429452b61f37e_24_request,"tink.http.clients.LocalContainerClient","request",0x5b5a6bd2,"tink.http.clients.LocalContainerClient.request","tink/http/clients/LocalContainerClient.hx",24,0x4c45cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_12e429452b61f37e_19_request,"tink.http.clients.LocalContainerClient","request",0x5b5a6bd2,"tink.http.clients.LocalContainerClient.request","tink/http/clients/LocalContainerClient.hx",19,0x4c45cd2c)
namespace tink{
namespace http{
namespace clients{

void LocalContainerClient_obj::__construct( ::tink::http::containers::LocalContainer container){
            	HX_STACKFRAME(&_hx_pos_12e429452b61f37e_15_new)
HXDLIN(  15)		this->container = container;
            	}

Dynamic LocalContainerClient_obj::__CreateEmpty() { return new LocalContainerClient_obj; }

void *LocalContainerClient_obj::_hx_vtable = 0;

Dynamic LocalContainerClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocalContainerClient_obj > _hx_result = new LocalContainerClient_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LocalContainerClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c48d30b;
}

static ::tink::http::ClientObject_obj _hx_tink_http_clients_LocalContainerClient__hx_tink_http_ClientObject= {
	( ::Dynamic (::hx::Object::*)( ::tink::http::OutgoingRequest))&::tink::http::clients::LocalContainerClient_obj::request,
};

void *LocalContainerClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c46f484: return &_hx_tink_http_clients_LocalContainerClient__hx_tink_http_ClientObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic LocalContainerClient_obj::request( ::tink::http::OutgoingRequest req){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run( ::tink::http::_Response::OutgoingResponseData res){
            			HX_GC_STACKFRAME(&_hx_pos_12e429452b61f37e_24_request)
HXLINE(  24)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success( ::tink::http::IncomingResponse_obj::__alloc( HX_CTX ,( ( ::tink::http::ResponseHeaderBase)(res->header) ),res->body))));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_12e429452b61f37e_19_request)
HXDLIN(  19)		 ::tink::http::containers::LocalContainer this1 = this->container;
HXLINE(  21)		::String req1 = ( ( ::tink::http::RequestHeader)(req->header) )->method;
HXDLIN(  21)		 ::Dynamic this2 = ( ( ::tink::http::RequestHeader)(req->header) )->url;
HXDLIN(  21)		::String this3;
HXDLIN(  21)		if (::hx::IsNull( this2->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXLINE(  21)			this3 = ( (::String)(this2->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  21)			::String this1;
HXDLIN(  21)			if (::hx::IsNull( this2->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic) )) {
HXLINE(  21)				this1 = HX_("null",87,9e,0e,49);
            			}
            			else {
HXLINE(  21)				this1 = ( (::String)(this2->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            			}
HXDLIN(  21)			::String this4;
HXDLIN(  21)			if (::hx::IsNull( this2->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXLINE(  21)				this4 = HX_("null",87,9e,0e,49);
            			}
            			else {
HXLINE(  21)				this4 = ( (::String)(this2->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)) );
            			}
HXDLIN(  21)			this3 = ((this1 + HX_("?",3f,00,00,00)) + this4);
            		}
HXDLIN(  21)		 ::tink::http::IncomingRequestHeader this4 =  ::tink::http::IncomingRequestHeader_obj::__alloc( HX_CTX ,req1,::tink::_Url::Url_Impl__obj::fromString(this3),HX_("HTTP/1.1",6d,25,7a,80),( ( ::tink::http::Header)(req->header) )->fields);
HXLINE(  19)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1->serve( ::tink::http::IncomingRequest_obj::__alloc( HX_CTX ,HX_("127.0.0.1",fd,bc,5e,a1),this4,::tink::http::IncomingRequestBody_obj::Plain(req->body))), ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalContainerClient_obj,request,return )


::hx::ObjectPtr< LocalContainerClient_obj > LocalContainerClient_obj::__new( ::tink::http::containers::LocalContainer container) {
	::hx::ObjectPtr< LocalContainerClient_obj > __this = new LocalContainerClient_obj();
	__this->__construct(container);
	return __this;
}

::hx::ObjectPtr< LocalContainerClient_obj > LocalContainerClient_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::http::containers::LocalContainer container) {
	LocalContainerClient_obj *__this = (LocalContainerClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocalContainerClient_obj), true, "tink.http.clients.LocalContainerClient"));
	*(void **)__this = LocalContainerClient_obj::_hx_vtable;
	__this->__construct(container);
	return __this;
}

LocalContainerClient_obj::LocalContainerClient_obj()
{
}

void LocalContainerClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalContainerClient);
	HX_MARK_MEMBER_NAME(container,"container");
	HX_MARK_END_CLASS();
}

void LocalContainerClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(container,"container");
}

::hx::Val LocalContainerClient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return ::hx::Val( request_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { return ::hx::Val( container ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocalContainerClient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast<  ::tink::http::containers::LocalContainer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocalContainerClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("container",41,75,73,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocalContainerClient_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::http::containers::LocalContainer */ ,(int)offsetof(LocalContainerClient_obj,container),HX_("container",41,75,73,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocalContainerClient_obj_sStaticStorageInfo = 0;
#endif

static ::String LocalContainerClient_obj_sMemberFields[] = {
	HX_("container",41,75,73,bf),
	HX_("request",4f,df,84,44),
	::String(null()) };

::hx::Class LocalContainerClient_obj::__mClass;

void LocalContainerClient_obj::__register()
{
	LocalContainerClient_obj _hx_dummy;
	LocalContainerClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.clients.LocalContainerClient",f1,31,68,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocalContainerClient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocalContainerClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalContainerClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalContainerClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace clients
