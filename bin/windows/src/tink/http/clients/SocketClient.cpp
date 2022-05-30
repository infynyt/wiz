#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl_Socket
#include <sys/ssl/Socket.h>
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
#ifndef INCLUDED_tink_http_clients_Helpers
#include <tink/http/clients/Helpers.h>
#endif
#ifndef INCLUDED_tink_http_clients_SocketClient
#include <tink/http/clients/SocketClient.h>
#endif
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
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
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_url__Host_Host_Impl_
#include <tink/url/_Host/Host_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_97c1c174291a2ab6_18_new,"tink.http.clients.SocketClient","new",0xfbd12b00,"tink.http.clients.SocketClient.new","tink/http/clients/SocketClient.hx",18,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_23_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",23,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_29_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",29,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_63_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",63,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_65_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",65,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_75_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",75,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_77_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",77,0xe0d58d2f)
HX_LOCAL_STACK_FRAME(_hx_pos_97c1c174291a2ab6_21_request,"tink.http.clients.SocketClient","request",0x72d409ef,"tink.http.clients.SocketClient.request","tink/http/clients/SocketClient.hx",21,0xe0d58d2f)
namespace tink{
namespace http{
namespace clients{

void SocketClient_obj::__construct(::Dynamic worker){
            	HX_STACKFRAME(&_hx_pos_97c1c174291a2ab6_18_new)
HXDLIN(  18)		this->worker = ::tink::io::_Worker::Worker_Impl__obj::ensure(worker);
            	}

Dynamic SocketClient_obj::__CreateEmpty() { return new SocketClient_obj; }

void *SocketClient_obj::_hx_vtable = 0;

Dynamic SocketClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SocketClient_obj > _hx_result = new SocketClient_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SocketClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29ac2844;
}

static ::tink::http::ClientObject_obj _hx_tink_http_clients_SocketClient__hx_tink_http_ClientObject= {
	( ::Dynamic (::hx::Object::*)( ::tink::http::OutgoingRequest))&::tink::http::clients::SocketClient_obj::request,
};

void *SocketClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c46f484: return &_hx_tink_http_clients_SocketClient__hx_tink_http_ClientObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic SocketClient_obj::request( ::tink::http::OutgoingRequest req){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_5, ::tink::http::clients::SocketClient,_gthis,::Array< ::Dynamic>,req1) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_GC_STACKFRAME(&_hx_pos_97c1c174291a2ab6_23_request)
HXLINE(  23)			 ::haxe::ds::Option _g = ::tink::http::clients::Helpers_obj::checkScheme(( (::String)(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)) ));
HXDLIN(  23)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  24)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE(  25)					cb(::tink::core::Outcome_obj::Failure(e));
            				}
            				break;
            				case (int)1: {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,req1) HXARGC(1)
            					void _hx_run(::Array< ::Dynamic> headers){
            						HX_GC_STACKFRAME(&_hx_pos_97c1c174291a2ab6_29_request)
HXLINE(  29)						::Array< ::Dynamic> req = req1;
HXDLIN(  29)						 ::tink::http::OutgoingRequestHeader addHeaders = Dynamic( ( ( ::tink::http::OutgoingRequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->concat(headers)).StaticCast<  ::tink::http::OutgoingRequestHeader >();
HXDLIN(  29)						req[0] =  ::tink::http::OutgoingRequest_obj::__alloc( HX_CTX ,addHeaders,req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->body);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  28)					 ::Dynamic addHeaders =  ::Dynamic(new _hx_Closure_0(req1));
HXLINE(  31)					{
HXLINE(  31)						 ::tink::http::OutgoingRequestHeader req = ( ( ::tink::http::OutgoingRequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) );
HXDLIN(  31)						::String this1 = HX_("connection",1e,a0,12,f5).toLowerCase();
HXDLIN(  31)						 ::tink::core::Outcome _g = req->byName(this1);
HXDLIN(  31)						switch((int)(_g->_hx_getIndex())){
            							case (int)0: {
HXLINE(  34)								::String _g1 = ( (::String)(_g->_hx_getObject(0)) );
HXLINE(  32)								if ((_g1.toLowerCase() != HX_("close",b8,17,63,48))) {
HXLINE(  34)									::String v = _g1;
HXLINE(  35)									 ::Dynamic cb1 = cb;
HXDLIN(  35)									cb1(::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),((HX_("Only \"Connection: Close\" is supported. But specified as \"",51,75,09,61) + v) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("tink/http/clients/SocketClient.hx",2f,8d,d5,e0),35,HX_("tink.http.clients.SocketClient",0e,eb,a7,43),HX_("request",4f,df,84,44)))));
HXLINE(  36)									return;
            								}
            							}
            							break;
            							case (int)1: {
HXLINE(  37)								 ::tink::core::TypedError _g1 = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE(  38)								 ::Dynamic addHeaders1 = addHeaders;
HXDLIN(  38)								::String this1 = HX_("connection",1e,a0,12,f5).toLowerCase();
HXDLIN(  38)								addHeaders1(::Array_obj< ::Dynamic>::__new(1)->init(0, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,HX_("close",b8,17,63,48))));
            							}
            							break;
            						}
            					}
HXLINE(  41)					{
HXLINE(  41)						 ::tink::http::OutgoingRequestHeader req2 = ( ( ::tink::http::OutgoingRequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) );
HXDLIN(  41)						::String this2 = HX_("host",68,cf,12,45).toLowerCase();
HXDLIN(  41)						 ::tink::core::Outcome _g1 = req2->byName(this2);
HXDLIN(  41)						switch((int)(_g1->_hx_getIndex())){
            							case (int)0: {
HXLINE(  42)								::String _g = ( (::String)(_g1->_hx_getObject(0)) );
            							}
            							break;
            							case (int)1: {
HXLINE(  43)								 ::tink::core::TypedError _g = ( ( ::tink::core::TypedError)(_g1->_hx_getObject(0)) );
HXDLIN(  43)								 ::Dynamic addHeaders1 = addHeaders;
HXDLIN(  43)								::String this1 = HX_("host",68,cf,12,45).toLowerCase();
HXDLIN(  43)								addHeaders1(::Array_obj< ::Dynamic>::__new(1)->init(0, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,::tink::url::_Host::Host_Impl__obj::get_name(( (::Array< ::String >)(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) )->__get(0)))));
            							}
            							break;
            						}
            					}
HXLINE(  46)					 ::sys::net::Socket socket;
HXLINE(  47)					if (::hx::IsEq( ( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic),HX_("https",eb,7b,b1,2e) )) {
HXLINE(  46)						socket =  ::sys::ssl::Socket_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE(  46)						socket =  ::sys::net::Socket_obj::__alloc( HX_CTX );
            					}
HXLINE(  57)					 ::Dynamic port;
HXDLIN(  57)					 ::Dynamic _g2 = ::tink::url::_Host::Host_Impl__obj::get_port(( (::Array< ::String >)(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) )->__get(0));
HXLINE(  58)					if (::hx::IsNull( _g2 )) {
HXLINE(  58)						if (::hx::IsEq( ( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic),HX_("https",eb,7b,b1,2e) )) {
HXLINE(  57)							port = 443;
            						}
            						else {
HXLINE(  57)							port = 80;
            						}
            					}
            					else {
HXLINE(  59)						 ::Dynamic v = _g2;
HXLINE(  57)						port = v;
            					}
HXLINE(  62)					{
            						HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,req1, ::sys::net::Socket,socket, ::Dynamic,port) HXARGC(0)
            						 ::tink::core::Outcome _hx_run(){
            							HX_GC_STACKFRAME(&_hx_pos_97c1c174291a2ab6_63_request)
HXLINE(  63)							try {
            								HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  63)								 ::sys::net::Socket socket1 = socket;
HXDLIN(  63)								socket1->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,::tink::url::_Host::Host_Impl__obj::get_name(( (::Array< ::String >)(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) )->__get(0))),( (int)(port) ));
HXDLIN(  63)								return ::tink::core::Outcome_obj::Success(null());
            							} catch( ::Dynamic _hx_e) {
            								if (_hx_e.IsClass<  ::Dynamic >() ){
            									HX_STACK_BEGIN_CATCH
            									 ::Dynamic _g = _hx_e;
HXLINE(  64)									{
HXLINE(  64)										null();
            									}
HXDLIN(  64)									 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN(  64)									::String this1 = ::Std_obj::string(e);
HXDLIN(  64)									return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),this1,::hx::SourceInfo(HX_("tink/http/clients/SocketClient.hx",2f,8d,d5,e0),64,HX_("tink.http.clients.SocketClient",0e,eb,a7,43),HX_("request",4f,df,84,44))));
            								}
            								else {
            									HX_STACK_DO_THROW(_hx_e);
            								}
            							}
HXLINE(  63)							return null();
            						}
            						HX_END_LOCAL_FUNC0(return)

            						HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_4, ::tink::http::clients::SocketClient,_gthis,::Array< ::Dynamic>,req1, ::sys::net::Socket,socket, ::Dynamic,cb) HXARGC(1)
            						void _hx_run( ::tink::core::Outcome outcome){
            							HX_GC_STACKFRAME(&_hx_pos_97c1c174291a2ab6_65_request)
HXLINE(  66)							switch((int)(outcome->_hx_getIndex())){
            								case (int)0: {
HXLINE(  67)									 ::Dynamic _g = outcome->_hx_getObject(0);
            								}
            								break;
            								case (int)1: {
HXLINE(  68)									 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(outcome->_hx_getObject(0)) );
HXDLIN(  68)									cb(::tink::core::Outcome_obj::Failure(e));
HXDLIN(  68)									return;
            								}
            								break;
            							}
HXLINE(  71)							::String sink;
HXDLIN(  71)							if (::hx::IsNull( ( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url )) {
HXLINE(  71)								sink = HX_("null",87,9e,0e,49);
            							}
            							else {
HXLINE(  71)								sink = ::tink::_Url::Url_Impl__obj::toString(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url);
            							}
HXDLIN(  71)							::Dynamic sink1 = ::tink::io::_Sink::SinkYielding_Impl__obj::ofOutput((HX_("Request to ",d4,04,3a,a8) + sink),socket->output, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("worker",7e,30,9e,c9),_gthis->worker)));
HXLINE(  72)							::String name;
HXDLIN(  72)							if (::hx::IsNull( ( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url )) {
HXLINE(  72)								name = HX_("null",87,9e,0e,49);
            							}
            							else {
HXLINE(  72)								name = ::tink::_Url::Url_Impl__obj::toString(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->url);
            							}
HXDLIN(  72)							 ::haxe::io::Input input = socket->input;
HXDLIN(  72)							 ::Dynamic options =  ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("worker",7e,30,9e,c9),_gthis->worker));
HXDLIN(  72)							if (::hx::IsNull( options )) {
HXLINE(  72)								options =  ::Dynamic(::hx::Anon_obj::Create(0));
            							}
HXDLIN(  72)							::Dynamic source = ::tink::io::_Worker::Worker_Impl__obj::ensure( ::Dynamic(options->__Field(HX_("worker",7e,30,9e,c9),::hx::paccDynamic)));
HXDLIN(  72)							 ::Dynamic _g = options->__Field(HX_("chunkSize",ce,cd,77,9f),::hx::paccDynamic);
HXDLIN(  72)							int source1;
HXDLIN(  72)							if (::hx::IsNull( _g )) {
HXLINE(  72)								source1 = 65536;
            							}
            							else {
HXLINE(  72)								 ::Dynamic v = _g;
HXDLIN(  72)								source1 = ( (int)(v) );
            							}
HXDLIN(  72)							::Dynamic source2 =  ::tink::io::std::InputSource_obj::__alloc( HX_CTX ,(HX_("Response from ",b7,3c,63,ba) + name),input,source,::haxe::io::Bytes_obj::alloc(source1),0);
HXLINE(  74)							{
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::Dynamic,source2, ::Dynamic,cb) HXARGC(1)
            								void _hx_run( ::tink::io::PipeResult r){
            									HX_GC_STACKFRAME(&_hx_pos_97c1c174291a2ab6_75_request)
HXLINE(  75)									switch((int)(r->_hx_getIndex())){
            										case (int)0: {
            											HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,cb) HXARGC(1)
            											void _hx_run( ::tink::core::Outcome o){
            												HX_GC_STACKFRAME(&_hx_pos_97c1c174291a2ab6_77_request)
HXLINE(  77)												switch((int)(o->_hx_getIndex())){
            													case (int)0: {
HXLINE(  78)														 ::tink::core::MPair parsed = ( ( ::tink::core::MPair)(o->_hx_getObject(0)) );
HXLINE(  79)														{
HXLINE(  79)															 ::tink::core::Outcome _g = ( ( ::tink::http::ResponseHeaderBase)(parsed->a) )->getContentLength();
HXDLIN(  79)															switch((int)(_g->_hx_getIndex())){
            																case (int)0: {
HXLINE(  80)																	 ::Dynamic len = _g->_hx_getObject(0);
HXDLIN(  80)																	 ::Dynamic cb1 = cb;
HXDLIN(  80)																	 ::tink::http::ResponseHeaderBase parsed1 = ( ( ::tink::http::ResponseHeaderBase)(parsed->a) );
HXDLIN(  80)																	cb1(::tink::core::Outcome_obj::Success( ::tink::http::IncomingResponse_obj::__alloc( HX_CTX ,parsed1,::tink::io::_Source::Source_Impl__obj::limit(parsed->b,( (int)(len) )))));
            																}
            																break;
            																case (int)1: {
HXLINE(  81)																	 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXDLIN(  81)																	 ::Dynamic cb1 = cb;
HXDLIN(  81)																	cb1(::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("Chunked encoding is not supported and the content-length header is required.",7a,e4,4f,2a),::hx::SourceInfo(HX_("tink/http/clients/SocketClient.hx",2f,8d,d5,e0),81,HX_("tink.http.clients.SocketClient",0e,eb,a7,43),HX_("request",4f,df,84,44)))));
            																}
            																break;
            															}
            														}
            													}
            													break;
            													case (int)1: {
HXLINE(  83)														 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  83)														cb(::tink::core::Outcome_obj::Failure(e));
            													}
            													break;
            												}
            											}
            											HX_END_LOCAL_FUNC1((void))

HXLINE(  77)											::Dynamic source = source2;
HXDLIN(  77)											::tink::core::_Future::FutureObject_obj::handle(::tink::io::RealSourceTools_obj::parse(source,::tink::http::ResponseHeaderBase_obj::parser()), ::Dynamic(new _hx_Closure_2(cb)));
            										}
            										break;
            										case (int)1: {
HXLINE(  86)											 ::Dynamic _g = r->_hx_getObject(0);
HXDLIN(  86)											::Dynamic _g1 = r->_hx_getObject(1);
HXDLIN(  86)											 ::Dynamic cb1 = cb;
HXDLIN(  86)											cb1(::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("Sink ended unexpectedly",11,17,7b,75),::hx::SourceInfo(HX_("tink/http/clients/SocketClient.hx",2f,8d,d5,e0),86,HX_("tink.http.clients.SocketClient",0e,eb,a7,43),HX_("request",4f,df,84,44)))));
            										}
            										break;
            										case (int)2: {
HXLINE(  87)											::Dynamic _g = r->_hx_getObject(1);
HXDLIN(  87)											{
HXLINE(  87)												 ::tink::core::TypedError e = r->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  87)												cb(::tink::core::Outcome_obj::Failure(e));
            											}
            										}
            										break;
            									}
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE(  74)								::Dynamic this1 = req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->body;
HXDLIN(  74)								::tink::core::_Future::FutureObject_obj::handle(::tink::io::_Source::Source_Impl__obj::pipeTo(::tink::streams::StreamObject_obj::prepend(this1, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(( ( ::tink::http::RequestHeader)(req1->__get(0).StaticCast<  ::tink::http::OutgoingRequest >()->header) )->toString(),null()))))),sink1,null()), ::Dynamic(new _hx_Closure_3(source2,cb)));
            							}
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  62)						::Dynamic _gthis1 = _gthis->worker;
HXDLIN(  62)						::tink::core::_Future::FutureObject_obj::handle(::tink::io::_Worker::Worker_Impl__obj::work(_gthis1, ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(req1,socket,port)),null())), ::Dynamic(new _hx_Closure_4(_gthis,req1,socket,cb)));
            					}
            				}
            				break;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_97c1c174291a2ab6_21_request)
HXDLIN(  21)		::Array< ::Dynamic> req1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,req);
HXDLIN(  21)		 ::tink::http::clients::SocketClient _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  22)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_5(_gthis,req1)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(SocketClient_obj,request,return )


::hx::ObjectPtr< SocketClient_obj > SocketClient_obj::__new(::Dynamic worker) {
	::hx::ObjectPtr< SocketClient_obj > __this = new SocketClient_obj();
	__this->__construct(worker);
	return __this;
}

::hx::ObjectPtr< SocketClient_obj > SocketClient_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic worker) {
	SocketClient_obj *__this = (SocketClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SocketClient_obj), true, "tink.http.clients.SocketClient"));
	*(void **)__this = SocketClient_obj::_hx_vtable;
	__this->__construct(worker);
	return __this;
}

SocketClient_obj::SocketClient_obj()
{
}

void SocketClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketClient);
	HX_MARK_MEMBER_NAME(worker,"worker");
	HX_MARK_END_CLASS();
}

void SocketClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(worker,"worker");
}

::hx::Val SocketClient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val SocketClient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { worker=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SocketClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("worker",7e,30,9e,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SocketClient_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SocketClient_obj,worker),HX_("worker",7e,30,9e,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SocketClient_obj_sStaticStorageInfo = 0;
#endif

static ::String SocketClient_obj_sMemberFields[] = {
	HX_("worker",7e,30,9e,c9),
	HX_("request",4f,df,84,44),
	::String(null()) };

::hx::Class SocketClient_obj::__mClass;

void SocketClient_obj::__register()
{
	SocketClient_obj _hx_dummy;
	SocketClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.clients.SocketClient",0e,eb,a7,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SocketClient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SocketClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SocketClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SocketClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace clients
