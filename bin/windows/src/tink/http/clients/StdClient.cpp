#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
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
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
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
#ifndef INCLUDED_tink_http_clients_StdClient
#include <tink/http/clients/StdClient.h>
#endif
#ifndef INCLUDED_tink_io_IdealSourceTools
#include <tink/io/IdealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_de403852eb8a7eba_16_new,"tink.http.clients.StdClient","new",0x804ba490,"tink.http.clients.StdClient.new","tink/http/clients/StdClient.hx",16,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_25_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",25,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_28_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",28,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_41_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",41,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_44_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",44,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_43_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",43,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_51_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",51,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_50_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",50,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_55_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",55,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_23_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",23,0x744a66c1)
static const int _hx_array_data_f1e25c9e_14[] = {
	(int)200,
};
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_19_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",19,0x744a66c1)
HX_LOCAL_STACK_FRAME(_hx_pos_de403852eb8a7eba_65_request,"tink.http.clients.StdClient","request",0x22328b7f,"tink.http.clients.StdClient.request","tink/http/clients/StdClient.hx",65,0x744a66c1)
namespace tink{
namespace http{
namespace clients{

void StdClient_obj::__construct(::Dynamic worker){
            	HX_STACKFRAME(&_hx_pos_de403852eb8a7eba_16_new)
HXDLIN(  16)		this->worker = ::tink::io::_Worker::Worker_Impl__obj::ensure(worker);
            	}

Dynamic StdClient_obj::__CreateEmpty() { return new StdClient_obj; }

void *StdClient_obj::_hx_vtable = 0;

Dynamic StdClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StdClient_obj > _hx_result = new StdClient_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StdClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b1f5144;
}

static ::tink::http::ClientObject_obj _hx_tink_http_clients_StdClient__hx_tink_http_ClientObject= {
	( ::Dynamic (::hx::Object::*)( ::tink::http::OutgoingRequest))&::tink::http::clients::StdClient_obj::request,
};

void *StdClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c46f484: return &_hx_tink_http_clients_StdClient__hx_tink_http_ClientObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic StdClient_obj::request( ::tink::http::OutgoingRequest req){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_11, ::tink::http::clients::StdClient,_gthis, ::tink::http::OutgoingRequest,req) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_9, ::tink::http::clients::StdClient,_gthis, ::sys::Http,r, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::Dynamic post){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< int >,code) HXARGC(1)
            				void _hx_run(int c){
            					HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_25_request)
HXLINE(  25)					code[0] = c;
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::sys::Http,r) HXARGC(0)
            				::Array< ::Dynamic> _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_28_request)
HXLINE(  30)					 ::haxe::ds::StringMap _g = r->responseHeaders;
HXLINE(  31)					if (::hx::IsNull( _g )) {
HXLINE(  31)						return ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE(  32)						 ::haxe::ds::StringMap v = _g;
HXLINE(  33)						::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  33)						{
HXLINE(  33)							 ::Dynamic name = v->keys();
HXDLIN(  33)							while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  33)								::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  34)								::String this1 = name1.toLowerCase();
HXDLIN(  34)								_g1->push( ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,v->get_string(name1)));
            							}
            						}
HXLINE(  33)						return _g1;
            					}
HXLINE(  31)					return null();
            				}
            				HX_END_LOCAL_FUNC0(return)

            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_4, ::tink::http::clients::StdClient,_gthis,::Array< int >,code, ::Dynamic,cb) HXARGC(1)
            				void _hx_run(::String msg){
            					HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_41_request)
HXLINE(  42)					if ((code->__get(0) == 200)) {
HXLINE(  42)						code[0] = 500;
            					}
HXLINE(  43)					{
            						HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2,::String,msg,::Array< int >,code, ::Dynamic,cb) HXARGC(0)
            						void _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_44_request)
HXLINE(  44)							 ::Dynamic cb1 = cb;
HXDLIN(  44)							cb1(::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,code->__get(0),msg,::hx::SourceInfo(HX_("tink/http/clients/StdClient.hx",c1,66,4a,74),44,HX_("tink.http.clients.StdClient",9e,5c,e2,f1),HX_("request",4f,df,84,44)))));
            						}
            						HX_END_LOCAL_FUNC0((void))

            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,f) HXARGC(1)
            						void _hx_run(bool _){
            							HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_43_request)
HXLINE(  43)							f();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  43)						::Dynamic _gthis1 = _gthis->worker;
HXDLIN(  43)						 ::Dynamic f =  ::Dynamic(new _hx_Closure_2(msg,code,cb));
HXDLIN(  43)						 ::Dynamic send =  ::Dynamic(new _hx_Closure_3(f));
HXDLIN(  43)						::tink::core::_Future::FutureObject_obj::handle(::tink::io::_Worker::Worker_Impl__obj::work(_gthis1, ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,true)),send);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_7, ::tink::http::clients::StdClient,_gthis,::Array< int >,code, ::Dynamic,headers, ::Dynamic,cb) HXARGC(1)
            				void _hx_run(::String data){
            					HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_5,::String,data,::Array< int >,code, ::Dynamic,headers, ::Dynamic,cb) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_51_request)
HXLINE(  51)						 ::Dynamic cb1 = cb;
HXDLIN(  51)						::Array< ::Dynamic> fields = ( (::Array< ::Dynamic>)(headers()) );
HXDLIN(  51)						 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,code->__get(0),HX_("OK",1c,45,00,00),fields,HX_("HTTP/1.1",6d,25,7a,80));
HXDLIN(  51)						cb1(::tink::core::Outcome_obj::Success( ::tink::http::IncomingResponse_obj::__alloc( HX_CTX ,this1, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(data,null())))))));
            					}
            					HX_END_LOCAL_FUNC0((void))

            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::Dynamic,f) HXARGC(1)
            					void _hx_run(bool _){
            						HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_50_request)
HXLINE(  50)						f();
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_50_request)
HXLINE(  50)					::Dynamic _gthis1 = _gthis->worker;
HXDLIN(  50)					 ::Dynamic f =  ::Dynamic(new _hx_Closure_5(data,code,headers,cb));
HXDLIN(  50)					 ::Dynamic send =  ::Dynamic(new _hx_Closure_6(f));
HXDLIN(  50)					::tink::core::_Future::FutureObject_obj::handle(::tink::io::_Worker::Worker_Impl__obj::work(_gthis1, ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,true)),send);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_8, ::Dynamic,post, ::sys::Http,r) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_55_request)
HXLINE(  55)					r->request(post);
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_23_request)
HXLINE(  24)				::Array< int > code = ::Array_obj< int >::fromData( _hx_array_data_f1e25c9e_14,1);
HXLINE(  25)				r->onStatus =  ::Dynamic(new _hx_Closure_0(code));
HXLINE(  27)				 ::Dynamic headers =  ::Dynamic(new _hx_Closure_1(r));
HXLINE(  41)				r->onError =  ::Dynamic(new _hx_Closure_4(_gthis,code,cb));
HXLINE(  48)				r->onData =  ::Dynamic(new _hx_Closure_7(_gthis,code,headers,cb));
HXLINE(  55)				::Dynamic _gthis1 = _gthis->worker;
HXDLIN(  55)				::tink::io::_Worker::Worker_Impl__obj::work(_gthis1, ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_8(post,r)),null()));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_19_request)
HXLINE(  21)			 ::sys::Http r =  ::sys::Http_obj::__alloc( HX_CTX ,::tink::_Url::Url_Impl__obj::toString(( ( ::tink::http::RequestHeader)(req->header) )->url));
HXLINE(  23)			 ::Dynamic send =  ::Dynamic(new _hx_Closure_9(_gthis,r,cb));
HXLINE(  58)			{
HXLINE(  58)				int _g_current = 0;
HXDLIN(  58)				::Array< ::Dynamic> _g_array = ( ( ::tink::http::Header)(req->header) )->fields;
HXDLIN(  58)				while((_g_current < _g_array->length)){
HXLINE(  58)					_g_current = (_g_current + 1);
HXDLIN(  58)					 ::tink::http::HeaderField h = _g_array->__get((_g_current - 1)).StaticCast<  ::tink::http::HeaderField >();
HXLINE(  59)					r->setHeader(( (::String)(h->name) ),( (::String)(h->value) ));
            				}
            			}
HXLINE(  61)			::String _hx_switch_0 = ( ( ::tink::http::RequestHeader)(req->header) )->method;
            			if (  (_hx_switch_0==HX_("GET",76,1c,36,00)) ||  (_hx_switch_0==HX_("HEAD",20,f1,cb,2f)) ||  (_hx_switch_0==HX_("OPTIONS",3e,07,d2,5f)) ){
HXLINE(  63)				send(false);
HXDLIN(  63)				goto _hx_goto_3;
            			}
            			/* default */{
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_10, ::Dynamic,send, ::sys::Http,r) HXARGC(1)
            				void _hx_run(::Dynamic bytes){
            					HX_GC_STACKFRAME(&_hx_pos_de403852eb8a7eba_65_request)
HXLINE(  66)					 ::sys::Http r1 = r;
HXDLIN(  66)					r1->setPostData(::tink::chunk::ChunkObject_obj::toString(bytes));
HXLINE(  67)					send(true);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  65)				::tink::core::_Future::FutureObject_obj::handle(::tink::io::IdealSourceTools_obj::all(req->body), ::Dynamic(new _hx_Closure_10(send,r)));
            			}
            			_hx_goto_3:;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_de403852eb8a7eba_19_request)
HXDLIN(  19)		 ::tink::http::clients::StdClient _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  19)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_11(_gthis,req)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(StdClient_obj,request,return )


::hx::ObjectPtr< StdClient_obj > StdClient_obj::__new(::Dynamic worker) {
	::hx::ObjectPtr< StdClient_obj > __this = new StdClient_obj();
	__this->__construct(worker);
	return __this;
}

::hx::ObjectPtr< StdClient_obj > StdClient_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic worker) {
	StdClient_obj *__this = (StdClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StdClient_obj), true, "tink.http.clients.StdClient"));
	*(void **)__this = StdClient_obj::_hx_vtable;
	__this->__construct(worker);
	return __this;
}

StdClient_obj::StdClient_obj()
{
}

void StdClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StdClient);
	HX_MARK_MEMBER_NAME(worker,"worker");
	HX_MARK_END_CLASS();
}

void StdClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(worker,"worker");
}

::hx::Val StdClient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { return ::hx::Val( worker ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return ::hx::Val( request_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StdClient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { worker=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StdClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("worker",7e,30,9e,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StdClient_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(StdClient_obj,worker),HX_("worker",7e,30,9e,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StdClient_obj_sStaticStorageInfo = 0;
#endif

static ::String StdClient_obj_sMemberFields[] = {
	HX_("worker",7e,30,9e,c9),
	HX_("request",4f,df,84,44),
	::String(null()) };

::hx::Class StdClient_obj::__mClass;

void StdClient_obj::__register()
{
	StdClient_obj _hx_dummy;
	StdClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.clients.StdClient",9e,5c,e2,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StdClient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StdClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StdClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StdClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace clients
