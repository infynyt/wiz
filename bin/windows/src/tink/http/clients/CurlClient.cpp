#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
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
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif
#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
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
#ifndef INCLUDED_tink_http_clients_CurlClient
#include <tink/http/clients/CurlClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_Helpers
#include <tink/http/clients/Helpers.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Sink_SinkYielding_Impl_
#include <tink/io/_Sink/SinkYielding_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_std_InputSource
#include <tink/io/std/InputSource.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1ef6aac9a473f32_16_new,"tink.http.clients.CurlClient","new",0xf1f7ff79,"tink.http.clients.CurlClient.new","tink/http/clients/CurlClient.hx",16,0xb45cad16)
HX_LOCAL_STACK_FRAME(_hx_pos_c1ef6aac9a473f32_20_request,"tink.http.clients.CurlClient","request",0x12710ee8,"tink.http.clients.CurlClient.request","tink/http/clients/CurlClient.hx",20,0xb45cad16)
HX_LOCAL_STACK_FRAME(_hx_pos_c1ef6aac9a473f32_46_request,"tink.http.clients.CurlClient","request",0x12710ee8,"tink.http.clients.CurlClient.request","tink/http/clients/CurlClient.hx",46,0xb45cad16)
HX_LOCAL_STACK_FRAME(_hx_pos_c1ef6aac9a473f32_50___default_curl,"tink.http.clients.CurlClient","__default_curl",0xb1769b11,"tink.http.clients.CurlClient.__default_curl","tink/http/clients/CurlClient.hx",50,0xb45cad16)
namespace tink{
namespace http{
namespace clients{

void CurlClient_obj::__construct( ::Dynamic curl){
            	HX_STACKFRAME(&_hx_pos_c1ef6aac9a473f32_16_new)
HXDLIN(  16)		if (::hx::IsNotNull( curl )) {
HXDLIN(  16)			this->curl = curl;
            		}
            	}

Dynamic CurlClient_obj::__CreateEmpty() { return new CurlClient_obj; }

void *CurlClient_obj::_hx_vtable = 0;

Dynamic CurlClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CurlClient_obj > _hx_result = new CurlClient_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CurlClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ef1a485;
}

static ::tink::http::ClientObject_obj _hx_tink_http_clients_CurlClient__hx_tink_http_ClientObject= {
	( ::Dynamic (::hx::Object::*)( ::tink::http::OutgoingRequest))&::tink::http::clients::CurlClient_obj::request,
};

void *CurlClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c46f484: return &_hx_tink_http_clients_CurlClient__hx_tink_http_ClientObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic CurlClient_obj::request( ::tink::http::OutgoingRequest req){
            	HX_GC_STACKFRAME(&_hx_pos_c1ef6aac9a473f32_20_request)
HXDLIN(  20)		 ::haxe::ds::Option _g = ::tink::http::clients::Helpers_obj::checkScheme(( (::String)(( ( ::tink::http::RequestHeader)(req->header) )->url->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)) ));
HXDLIN(  20)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  21)				 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE(  22)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(e)));
            			}
            			break;
            			case (int)1: {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				::Dynamic _hx_run( ::tink::core::MPair p){
            					HX_GC_STACKFRAME(&_hx_pos_c1ef6aac9a473f32_46_request)
HXLINE(  46)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success( ::tink::http::IncomingResponse_obj::__alloc( HX_CTX ,( ( ::tink::http::ResponseHeaderBase)(p->a) ),p->b))));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE(  24)				::Array< ::String > args = ::Array_obj< ::String >::__new(0);
HXLINE(  26)				args->push(HX_("-isS",1c,ab,0e,1e));
HXLINE(  28)				args->push(HX_("-X",8b,27,00,00));
HXLINE(  29)				args->push(( ( ::tink::http::RequestHeader)(req->header) )->method);
HXLINE(  31)				::String _hx_switch_0 = ( ( ::tink::http::RequestHeader)(req->header) )->protocol;
            				if (  (_hx_switch_0==HX_("HTTP/1.0",6c,25,7a,80)) ){
HXLINE(  32)					args->push(HX_("--http1.0",cb,24,14,7d));
HXDLIN(  32)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("HTTP/1.1",6d,25,7a,80)) ){
HXLINE(  33)					args->push(HX_("--http1.1",cc,24,14,7d));
HXDLIN(  33)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("HTTP/2",ab,7e,1d,5f)) ){
HXLINE(  34)					args->push(HX_("--http2",4a,98,06,7c));
HXDLIN(  34)					goto _hx_goto_1;
            				}
            				/* default */{
            				}
            				_hx_goto_1:;
HXLINE(  38)				{
HXLINE(  38)					int _g1_current = 0;
HXDLIN(  38)					::Array< ::Dynamic> _g1_array = ( ( ::tink::http::Header)(req->header) )->fields;
HXDLIN(  38)					while((_g1_current < _g1_array->length)){
HXLINE(  38)						_g1_current = (_g1_current + 1);
HXDLIN(  38)						 ::tink::http::HeaderField header = _g1_array->__get((_g1_current - 1)).StaticCast<  ::tink::http::HeaderField >();
HXLINE(  39)						args->push(HX_("-H",7b,27,00,00));
HXLINE(  40)						args->push((((HX_("",00,00,00,00) + header->name) + HX_(": ",a6,32,00,00)) + header->value));
            					}
            				}
HXLINE(  43)				args->push(::tink::_Url::Url_Impl__obj::toString(( ( ::tink::http::RequestHeader)(req->header) )->url));
HXLINE(  44)				::Dynamic _hx_tmp = this->curl(args,req->body);
HXDLIN(  44)				return ::tink::core::_Promise::Promise_Impl__obj::next(::tink::io::RealSourceTools_obj::parse(_hx_tmp,::tink::http::ResponseHeaderBase_obj::parser()), ::Dynamic(new _hx_Closure_0()),null());
            			}
            			break;
            		}
HXLINE(  20)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CurlClient_obj,request,return )

HX_BEGIN_DEFAULT_FUNC(__default_curl,CurlClient_obj)
::Dynamic _hx_run(::Array< ::String > args,::Dynamic body){
            	HX_GC_STACKFRAME(&_hx_pos_c1ef6aac9a473f32_50___default_curl)
HXLINE(  52)		args->push(HX_("--data-binary",a4,13,68,82));
HXLINE(  53)		args->push(HX_("@-",ed,37,00,00));
HXLINE(  65)		 ::sys::io::Process process =  ::sys::io::Process_obj::__alloc( HX_CTX ,HX_("curl",ec,4a,c9,41),args,null());
HXLINE(  66)		::Dynamic sink = ::tink::io::_Sink::SinkYielding_Impl__obj::ofOutput(HX_("stdin",48,b3,0d,84),process->_hx_stdin,null());
HXLINE(  67)		{
HXLINE(  67)			::Dynamic this1 = ::tink::io::_Source::Source_Impl__obj::pipeTo(body,sink, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("end",db,03,4d,00),true)));
HXDLIN(  67)			::tink::core::_Future::FutureObject_obj::eager(this1);
            		}
HXLINE(  68)		 ::Dynamic _g = process->exitCode(null());
HXDLIN(  68)		if (::hx::IsNull( _g )) {
HXLINE(  70)			 ::Dynamic v = _g;
HXDLIN(  70)			::String _hx_tmp = process->_hx_stderr->readAll(null())->toString();
HXDLIN(  70)			return ::tink::io::_Source::Source_Impl__obj::ofError( ::tink::core::TypedError_obj::__alloc( HX_CTX ,v,_hx_tmp,::hx::SourceInfo(HX_("tink/http/clients/CurlClient.hx",16,ad,5c,b4),70,HX_("tink.http.clients.CurlClient",07,cf,5a,a4),HX_("curl",ec,4a,c9,41))));
            		}
            		else {
HXLINE(  68)			if (::hx::IsEq( _g,0 )) {
HXLINE(  69)				 ::haxe::io::Input input = process->_hx_stdout;
HXDLIN(  69)				 ::Dynamic options = null();
HXDLIN(  69)				if (::hx::IsNull( options )) {
HXLINE(  69)					options =  ::Dynamic(::hx::Anon_obj::Create(0));
            				}
HXDLIN(  69)				::Dynamic _hx_tmp = ::tink::io::_Worker::Worker_Impl__obj::ensure( ::Dynamic(options->__Field(HX_("worker",7e,30,9e,c9),::hx::paccDynamic)));
HXDLIN(  69)				 ::Dynamic _g = options->__Field(HX_("chunkSize",ce,cd,77,9f),::hx::paccDynamic);
HXDLIN(  69)				int _hx_tmp1;
HXDLIN(  69)				if (::hx::IsNull( _g )) {
HXLINE(  69)					_hx_tmp1 = 65536;
            				}
            				else {
HXLINE(  69)					 ::Dynamic v = _g;
HXDLIN(  69)					_hx_tmp1 = ( (int)(v) );
            				}
HXDLIN(  69)				return  ::tink::io::std::InputSource_obj::__alloc( HX_CTX ,HX_("stdout",cb,bf,f3,07),input,_hx_tmp,::haxe::io::Bytes_obj::alloc(_hx_tmp1),0);
            			}
            			else {
HXLINE(  70)				 ::Dynamic v = _g;
HXDLIN(  70)				::String _hx_tmp = process->_hx_stderr->readAll(null())->toString();
HXDLIN(  70)				return ::tink::io::_Source::Source_Impl__obj::ofError( ::tink::core::TypedError_obj::__alloc( HX_CTX ,v,_hx_tmp,::hx::SourceInfo(HX_("tink/http/clients/CurlClient.hx",16,ad,5c,b4),70,HX_("tink.http.clients.CurlClient",07,cf,5a,a4),HX_("curl",ec,4a,c9,41))));
            			}
            		}
HXLINE(  68)		return null();
            	}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC


void CurlClient_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,CurlClient_obj *_hx_obj) {
	if (!_hx_obj->curl.mPtr) _hx_obj->curl = new __default_curl(_hx_obj);
}
::hx::ObjectPtr< CurlClient_obj > CurlClient_obj::__new( ::Dynamic curl) {
	::hx::ObjectPtr< CurlClient_obj > __this = new CurlClient_obj();
	__this->__construct(curl);
	return __this;
}

::hx::ObjectPtr< CurlClient_obj > CurlClient_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic curl) {
	CurlClient_obj *__this = (CurlClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CurlClient_obj), true, "tink.http.clients.CurlClient"));
	*(void **)__this = CurlClient_obj::_hx_vtable;
	tink::http::clients::CurlClient_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(curl);
	return __this;
}

CurlClient_obj::CurlClient_obj()
{
	curl = new __default_curl(this);
}

void CurlClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurlClient);
	HX_MARK_MEMBER_NAME(curl,"curl");
	HX_MARK_END_CLASS();
}

void CurlClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curl,"curl");
}

::hx::Val CurlClient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { return ::hx::Val( curl ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return ::hx::Val( request_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CurlClient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { curl=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CurlClient_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CurlClient_obj,curl),HX_("curl",ec,4a,c9,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CurlClient_obj_sStaticStorageInfo = 0;
#endif

static ::String CurlClient_obj_sMemberFields[] = {
	HX_("request",4f,df,84,44),
	HX_("curl",ec,4a,c9,41),
	::String(null()) };

::hx::Class CurlClient_obj::__mClass;

void CurlClient_obj::__register()
{
	CurlClient_obj _hx_dummy;
	CurlClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.clients.CurlClient",07,cf,5a,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CurlClient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CurlClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CurlClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CurlClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace clients
