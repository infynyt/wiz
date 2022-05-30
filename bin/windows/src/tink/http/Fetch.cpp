#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
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
#ifndef INCLUDED_tink_http_ClientType
#include <tink/http/ClientType.h>
#endif
#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
#ifndef INCLUDED_tink_http_Fetch
#include <tink/http/Fetch.h>
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
#ifndef INCLUDED_tink_http__Client_CustomClient
#include <tink/http/_Client/CustomClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_CurlClient
#include <tink/http/clients/CurlClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_LocalContainerClient
#include <tink/http/clients/LocalContainerClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_SocketClient
#include <tink/http/clients/SocketClient.h>
#endif
#ifndef INCLUDED_tink_http_clients_StdClient
#include <tink/http/clients/StdClient.h>
#endif
#ifndef INCLUDED_tink_http_containers_LocalContainer
#include <tink/http/containers/LocalContainer.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f48f5e3cc0066c7c_54_fetch,"tink.http.Fetch","fetch",0xf215f9fc,"tink.http.Fetch.fetch","tink/http/Fetch.hx",54,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_f48f5e3cc0066c7c_59_fetch,"tink.http.Fetch","fetch",0xf215f9fc,"tink.http.Fetch.fetch","tink/http/Fetch.hx",59,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_f48f5e3cc0066c7c_26_fetch,"tink.http.Fetch","fetch",0xf215f9fc,"tink.http.Fetch.fetch","tink/http/Fetch.hx",26,0xb84ee46e)
static const bool _hx_array_data_bc41a8b0_3[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f48f5e3cc0066c7c_70_getClient,"tink.http.Fetch","getClient",0x9ad54243,"tink.http.Fetch.getClient","tink/http/Fetch.hx",70,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_f48f5e3cc0066c7c_22_boot,"tink.http.Fetch","boot",0x49170cb0,"tink.http.Fetch.boot","tink/http/Fetch.hx",22,0xb84ee46e)
namespace tink{
namespace http{

void Fetch_obj::__construct() { }

Dynamic Fetch_obj::__CreateEmpty() { return new Fetch_obj; }

void *Fetch_obj::_hx_vtable = 0;

Dynamic Fetch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Fetch_obj > _hx_result = new Fetch_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Fetch_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f806d70;
}

 ::haxe::ds::EnumValueMap Fetch_obj::cache;

::Dynamic Fetch_obj::fetch( ::Dynamic url, ::Dynamic options){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,options, ::Dynamic,url) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1,::Array< bool >,followRedirect, ::Dynamic,options, ::Dynamic,url, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::tink::core::Outcome res){
            				HX_GC_STACKFRAME(&_hx_pos_f48f5e3cc0066c7c_54_fetch)
HXLINE(  54)				switch((int)(res->_hx_getIndex())){
            					case (int)0: {
HXLINE(  55)						 ::tink::http::IncomingResponse res1 = ( ( ::tink::http::IncomingResponse)(res->_hx_getObject(0)) );
HXLINE(  56)						{
HXLINE(  56)							int _g = ( ( ::tink::http::ResponseHeaderBase)(res1->header) )->statusCode;
HXDLIN(  56)							switch((int)(_g)){
            								case (int)301: case (int)302: case (int)303: case (int)307: case (int)308: {
HXLINE(  57)									int code = _g;
HXDLIN(  57)									if (followRedirect->__get(0)) {
            										HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,options,int,code, ::Dynamic,url) HXARGC(1)
            										::Dynamic _hx_run(::String location){
            											HX_GC_STACKFRAME(&_hx_pos_f48f5e3cc0066c7c_59_fetch)
HXLINE(  59)											 ::Dynamic url1 = url;
HXDLIN(  59)											 ::Dynamic this1 = ::tink::_Url::Url_Impl__obj::resolve(url1,::tink::_Url::Url_Impl__obj::fromString(location));
HXDLIN(  59)											 ::Dynamic this2;
HXDLIN(  59)											if ((code == 303)) {
HXLINE(  59)												 ::Dynamic _hx___o0 = options;
HXDLIN(  59)												 ::Dynamic _hx___tink_tmp0 =  ::Dynamic(::hx::Anon_obj::Create(1)
            													->setFixed(0,HX_("method",e1,f6,5a,09),HX_("GET",76,1c,36,00)));
HXLINE( 238)												{
HXLINE(  59)													::Array< ::Dynamic> _g = ( (::Array< ::Dynamic>)(_hx___o0->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic)) );
HXLINE(   1)													if (::hx::IsNotNull( _g )) {
HXLINE( 240)														::Array< ::Dynamic> v = _g;
HXDLIN( 240)														_hx___tink_tmp0->__SetField(HX_("headers",46,52,08,63),v,::hx::paccDynamic);
            													}
            												}
HXLINE( 238)												{
HXLINE(  59)													 ::Dynamic _g1 = _hx___o0->__Field(HX_("followRedirect",ad,9d,29,cf),::hx::paccDynamic);
HXLINE(   1)													if (::hx::IsNotNull( _g1 )) {
HXLINE( 240)														 ::Dynamic v = _g1;
HXDLIN( 240)														_hx___tink_tmp0->__SetField(HX_("followRedirect",ad,9d,29,cf),v,::hx::paccDynamic);
            													}
            												}
HXLINE( 238)												{
HXLINE(  59)													 ::tink::http::ClientType _g2 = _hx___o0->__Field(HX_("client",4b,ca,4f,0a),::hx::paccDynamic);
HXLINE(   1)													if (::hx::IsNotNull( _g2 )) {
HXLINE( 240)														 ::tink::http::ClientType v = _g2;
HXDLIN( 240)														_hx___tink_tmp0->__SetField(HX_("client",4b,ca,4f,0a),v,::hx::paccDynamic);
            													}
            												}
HXLINE( 238)												{
HXLINE(  59)													::Dynamic _g3 =  ::Dynamic(_hx___o0->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic));
HXLINE(   1)													if (::hx::IsNotNull( _g3 )) {
HXLINE( 240)														::Dynamic v = _g3;
HXDLIN( 240)														_hx___tink_tmp0->__SetField(HX_("body",a2,7a,1b,41),v,::hx::paccDynamic);
            													}
            												}
HXLINE( 238)												{
HXLINE(  59)													 ::Dynamic _g4 = _hx___o0->__Field(HX_("augment",11,3c,02,20),::hx::paccDynamic);
HXLINE(   1)													if (::hx::IsNotNull( _g4 )) {
HXLINE( 240)														 ::Dynamic v = _g4;
HXDLIN( 240)														_hx___tink_tmp0->__SetField(HX_("augment",11,3c,02,20),v,::hx::paccDynamic);
            													}
            												}
HXLINE(  59)												this2 = _hx___tink_tmp0;
            											}
            											else {
HXLINE(  59)												this2 = options;
            											}
HXDLIN(  59)											return ::tink::http::Fetch_obj::fetch(this1,this2);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE(  58)										 ::tink::http::ResponseHeaderBase res = ( ( ::tink::http::ResponseHeaderBase)(res1->header) );
HXDLIN(  58)										::String this1 = HX_("location",35,6e,46,e5).toLowerCase();
HXDLIN(  58)										::Dynamic this2 = ::tink::core::_Promise::Promise_Impl__obj::next( ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,res->byName(this1))), ::Dynamic(new _hx_Closure_0(options,code,url)),null());
HXDLIN(  58)										::tink::core::_Future::FutureObject_obj::handle(this2,cb);
            									}
            									else {
HXLINE(  61)										cb(::tink::core::Outcome_obj::Success(res1));
            									}
            								}
            								break;
            								default:{
HXLINE(  61)									cb(::tink::core::Outcome_obj::Success(res1));
            								}
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  63)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(res->_hx_getObject(0)) );
HXLINE(  64)						cb(::tink::core::Outcome_obj::Failure(e));
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_f48f5e3cc0066c7c_26_fetch)
HXLINE(  28)			::String uri = ( (::String)(url->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
HXLINE(  29)			if (::hx::IsNotNull( url->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXLINE(  29)				::String uri1;
HXDLIN(  29)				if (::hx::IsNull( url->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXLINE(  29)					uri1 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE(  29)					uri1 = ( (::String)(url->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)) );
            				}
HXDLIN(  29)				uri = (uri + (HX_("?",3f,00,00,00) + uri1));
            			}
HXLINE(  31)			::String method = HX_("GET",76,1c,36,00);
HXLINE(  32)			::Array< ::Dynamic> headers = null();
HXLINE(  33)			::Dynamic body = ::tink::io::_Source::Source_Impl__obj::EMPTY;
HXLINE(  34)			 ::tink::http::ClientType type = ::tink::http::ClientType_obj::Default_dyn();
HXLINE(  35)			::Array< bool > followRedirect = ::Array_obj< bool >::fromData( _hx_array_data_bc41a8b0_3,1);
HXLINE(  37)			if (::hx::IsNotNull( options )) {
HXLINE(  38)				if (::hx::IsNotNull( options->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic) )) {
HXLINE(  38)					method = ( (::String)(options->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic)) );
            				}
HXLINE(  39)				if (::hx::IsNotNull( options->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic) )) {
HXLINE(  39)					headers = ( (::Array< ::Dynamic>)(options->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic)) );
            				}
HXLINE(  40)				if (::hx::IsNotNull( options->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic) )) {
HXLINE(  40)					body =  ::Dynamic(options->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic));
            				}
HXLINE(  41)				if (::hx::IsNotNull( options->__Field(HX_("client",4b,ca,4f,0a),::hx::paccDynamic) )) {
HXLINE(  41)					type = options->__Field(HX_("client",4b,ca,4f,0a),::hx::paccDynamic);
            				}
HXLINE(  42)				if (::hx::IsEq( options->__Field(HX_("followRedirect",ad,9d,29,cf),::hx::paccDynamic),false )) {
HXLINE(  42)					followRedirect[0] = false;
            				}
            			}
HXLINE(  45)			::Dynamic client = ::tink::http::Fetch_obj::getClient(type);
HXLINE(  47)			bool _hx_tmp;
HXDLIN(  47)			if (::hx::IsNotNull( options )) {
HXLINE(  47)				_hx_tmp = ::hx::IsNotNull( options->__Field(HX_("augment",11,3c,02,20),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  47)				_hx_tmp = false;
            			}
HXDLIN(  47)			if (_hx_tmp) {
HXLINE(  48)				 ::Dynamic pipeline = options->__Field(HX_("augment",11,3c,02,20),::hx::paccDynamic);
HXDLIN(  48)				client = ::tink::http::_Client::CustomClient_obj::create(client,( (::Array< ::Dynamic>)(pipeline->__Field(HX_("before",7f,54,32,9a),::hx::paccDynamic)) ),( (::Array< ::Dynamic>)(pipeline->__Field(HX_("after",1c,66,a2,1d),::hx::paccDynamic)) ));
            			}
HXLINE(  50)			::tink::core::_Future::FutureObject_obj::handle(::tink::http::ClientObject_obj::request(client, ::tink::http::OutgoingRequest_obj::__alloc( HX_CTX , ::tink::http::OutgoingRequestHeader_obj::__alloc( HX_CTX ,method,url,null(),headers),body)), ::Dynamic(new _hx_Closure_1(followRedirect,options,url,cb)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_f48f5e3cc0066c7c_26_fetch)
HXDLIN(  26)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_2(options,url)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Fetch_obj,fetch,return )

::Dynamic Fetch_obj::getClient( ::tink::http::ClientType type){
            	HX_GC_STACKFRAME(&_hx_pos_f48f5e3cc0066c7c_70_getClient)
HXLINE(  71)		if (!(::tink::http::Fetch_obj::cache->exists(type))) {
HXLINE(  72)			::Dynamic c;
HXDLIN(  72)			switch((int)(type->_hx_getIndex())){
            				case (int)0: {
HXLINE(  72)					c =  ::tink::http::clients::SocketClient_obj::__alloc( HX_CTX ,null());
            				}
            				break;
            				case (int)1: {
HXLINE(  79)					 ::tink::http::containers::LocalContainer c1 = type->_hx_getObject(0).StaticCast<  ::tink::http::containers::LocalContainer >();
HXLINE(  72)					c =  ::tink::http::clients::LocalContainerClient_obj::__alloc( HX_CTX ,c1);
            				}
            				break;
            				case (int)2: {
HXLINE(  72)					c =  ::tink::http::clients::CurlClient_obj::__alloc( HX_CTX ,null());
            				}
            				break;
            				case (int)3: {
HXLINE(  72)					c =  ::tink::http::clients::StdClient_obj::__alloc( HX_CTX ,null());
            				}
            				break;
            				case (int)4: {
HXLINE(  82)					::Dynamic c1 = type->_hx_getObject(0);
HXLINE(  72)					c = c1;
            				}
            				break;
            			}
HXLINE(  89)			::tink::http::Fetch_obj::cache->set(type,c);
            		}
HXLINE(  92)		return ::tink::http::Fetch_obj::cache->get(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Fetch_obj,getClient,return )


Fetch_obj::Fetch_obj()
{
}

bool Fetch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = ( cache ); return true; }
		if (HX_FIELD_EQ(inName,"fetch") ) { outValue = fetch_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getClient") ) { outValue = getClient_dyn(); return true; }
	}
	return false;
}

bool Fetch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast<  ::haxe::ds::EnumValueMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Fetch_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Fetch_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(void *) &Fetch_obj::cache,HX_("cache",42,9a,14,41)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Fetch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fetch_obj::cache,"cache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Fetch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fetch_obj::cache,"cache");
};

#endif

::hx::Class Fetch_obj::__mClass;

static ::String Fetch_obj_sStaticFields[] = {
	HX_("cache",42,9a,14,41),
	HX_("fetch",3a,14,fa,fd),
	HX_("getClient",81,53,a6,86),
	::String(null())
};

void Fetch_obj::__register()
{
	Fetch_obj _hx_dummy;
	Fetch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.Fetch",b0,a8,41,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Fetch_obj::__GetStatic;
	__mClass->mSetStaticField = &Fetch_obj::__SetStatic;
	__mClass->mMarkFunc = Fetch_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Fetch_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Fetch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Fetch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Fetch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Fetch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Fetch_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f48f5e3cc0066c7c_22_boot)
HXDLIN(  22)		cache =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace http
