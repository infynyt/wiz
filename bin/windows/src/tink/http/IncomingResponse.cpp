#include <hxcpp.h>

#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_
#include <httpstatus/_HttpStatusMessage/HttpStatusMessage_Impl_.h>
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
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c78089378e7ea2d4_109_new,"tink.http.IncomingResponse","new",0x40f25243,"tink.http.IncomingResponse.new","tink/http/Response.hx",109,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_c78089378e7ea2d4_114_readAll,"tink.http.IncomingResponse","readAll",0x4f2c4ece,"tink.http.IncomingResponse.readAll","tink/http/Response.hx",114,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_c78089378e7ea2d4_112_readAll,"tink.http.IncomingResponse","readAll",0x4f2c4ece,"tink.http.IncomingResponse.readAll","tink/http/Response.hx",112,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_c78089378e7ea2d4_121_reportError,"tink.http.IncomingResponse","reportError",0x03ce0f57,"tink.http.IncomingResponse.reportError","tink/http/Response.hx",121,0x0bc26b73)
namespace tink{
namespace http{

void IncomingResponse_obj::__construct( ::tink::http::ResponseHeaderBase header,::Dynamic body){
            	HX_STACKFRAME(&_hx_pos_c78089378e7ea2d4_109_new)
HXDLIN( 109)		super::__construct(header,body);
            	}

Dynamic IncomingResponse_obj::__CreateEmpty() { return new IncomingResponse_obj; }

void *IncomingResponse_obj::_hx_vtable = 0;

Dynamic IncomingResponse_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IncomingResponse_obj > _hx_result = new IncomingResponse_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IncomingResponse_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x68c65661) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x68c65661;
	} else {
		return inClassId==(int)0x7888e42d;
	}
}

::Dynamic IncomingResponse_obj::readAll( ::tink::http::IncomingResponse res){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::http::IncomingResponse,res) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic b){
            			HX_GC_STACKFRAME(&_hx_pos_c78089378e7ea2d4_114_readAll)
HXLINE( 114)			if ((( ( ::tink::http::ResponseHeaderBase)(res->header) )->statusCode >= 400)) {
HXLINE( 115)				 ::Dynamic res1 = ( ( ::tink::http::ResponseHeaderBase)(res->header) )->statusCode;
HXDLIN( 115)				::String res2 = ( ( ::tink::http::ResponseHeaderBase)(res->header) )->reason;
HXDLIN( 115)				::String o = ::tink::chunk::ChunkObject_obj::toString(b);
HXDLIN( 115)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(res1,res2,o,::hx::SourceInfo(HX_("tink/http/Response.hx",73,6b,c2,0b),115,HX_("tink.http.IncomingResponse",d1,74,ad,75),HX_("readAll",6b,9f,c3,02))))));
            			}
            			else {
HXLINE( 117)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(b)));
            			}
HXLINE( 114)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_c78089378e7ea2d4_112_readAll)
HXDLIN( 112)		return ::tink::core::_Promise::Promise_Impl__obj::next(::tink::io::RealSourceTools_obj::all(res->body), ::Dynamic(new _hx_Closure_0(res)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IncomingResponse_obj,readAll,return )

 ::tink::http::IncomingResponse IncomingResponse_obj::reportError( ::tink::core::TypedError e){
            	HX_GC_STACKFRAME(&_hx_pos_c78089378e7ea2d4_121_reportError)
HXLINE( 122)		int statusCode = e->code;
HXDLIN( 122)		::String reason = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(e->code);
HXDLIN( 122)		::String this1 = HX_("Content-Type",ce,69,5d,3c).toLowerCase();
HXDLIN( 122)		 ::tink::http::ResponseHeaderBase this2 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,statusCode,reason,::Array_obj< ::Dynamic>::__new(1)->init(0, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,HX_("application/json",87,d8,7f,4e))),HX_("HTTP/1.1",6d,25,7a,80));
HXLINE( 123)		 ::Dynamic replacer = null();
HXDLIN( 123)		::String space = null();
HXLINE( 121)		return  ::tink::http::IncomingResponse_obj::__alloc( HX_CTX ,this2, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(::haxe::format::JsonPrinter_obj::print( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("details",c2,dc,56,ab),e->data)
            			->setFixed(1,HX_("error",c8,cb,29,73),e->message)),replacer,space),null())))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IncomingResponse_obj,reportError,return )


::hx::ObjectPtr< IncomingResponse_obj > IncomingResponse_obj::__new( ::tink::http::ResponseHeaderBase header,::Dynamic body) {
	::hx::ObjectPtr< IncomingResponse_obj > __this = new IncomingResponse_obj();
	__this->__construct(header,body);
	return __this;
}

::hx::ObjectPtr< IncomingResponse_obj > IncomingResponse_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::http::ResponseHeaderBase header,::Dynamic body) {
	IncomingResponse_obj *__this = (IncomingResponse_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IncomingResponse_obj), true, "tink.http.IncomingResponse"));
	*(void **)__this = IncomingResponse_obj::_hx_vtable;
	__this->__construct(header,body);
	return __this;
}

IncomingResponse_obj::IncomingResponse_obj()
{
}

bool IncomingResponse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readAll") ) { outValue = readAll_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reportError") ) { outValue = reportError_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IncomingResponse_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IncomingResponse_obj_sStaticStorageInfo = 0;
#endif

::hx::Class IncomingResponse_obj::__mClass;

static ::String IncomingResponse_obj_sStaticFields[] = {
	HX_("readAll",6b,9f,c3,02),
	HX_("reportError",74,72,36,43),
	::String(null())
};

void IncomingResponse_obj::__register()
{
	IncomingResponse_obj _hx_dummy;
	IncomingResponse_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.IncomingResponse",d1,74,ad,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IncomingResponse_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IncomingResponse_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IncomingResponse_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IncomingResponse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IncomingResponse_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
