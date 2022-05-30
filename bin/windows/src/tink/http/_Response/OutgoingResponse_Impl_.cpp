#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
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
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
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
#ifndef INCLUDED_tink_http__Response_OutgoingResponse_Impl_
#include <tink/http/_Response/OutgoingResponse_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_64077905682319e2_65__new,"tink.http._Response.OutgoingResponse_Impl_","_new",0x2c49530a,"tink.http._Response.OutgoingResponse_Impl_._new","tink/http/Response.hx",65,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_64077905682319e2_69_blob,"tink.http._Response.OutgoingResponse_Impl_","blob",0x2e437b06,"tink.http._Response.OutgoingResponse_Impl_.blob","tink/http/Response.hx",69,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_64077905682319e2_84_chunked,"tink.http._Response.OutgoingResponse_Impl_","chunked",0x3ba24603,"tink.http._Response.OutgoingResponse_Impl_.chunked","tink/http/Response.hx",84,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_64077905682319e2_90_ofString,"tink.http._Response.OutgoingResponse_Impl_","ofString",0x2e762f71,"tink.http._Response.OutgoingResponse_Impl_.ofString","tink/http/Response.hx",90,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_64077905682319e2_93_ofChunk,"tink.http._Response.OutgoingResponse_Impl_","ofChunk",0x93f473cd,"tink.http._Response.OutgoingResponse_Impl_.ofChunk","tink/http/Response.hx",93,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_64077905682319e2_95_reportError,"tink.http._Response.OutgoingResponse_Impl_","reportError",0x76cb2beb,"tink.http._Response.OutgoingResponse_Impl_.reportError","tink/http/Response.hx",95,0x0bc26b73)
namespace tink{
namespace http{
namespace _Response{

void OutgoingResponse_Impl__obj::__construct() { }

Dynamic OutgoingResponse_Impl__obj::__CreateEmpty() { return new OutgoingResponse_Impl__obj; }

void *OutgoingResponse_Impl__obj::_hx_vtable = 0;

Dynamic OutgoingResponse_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutgoingResponse_Impl__obj > _hx_result = new OutgoingResponse_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OutgoingResponse_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x122bc253;
}

 ::tink::http::_Response::OutgoingResponseData OutgoingResponse_Impl__obj::_new( ::tink::http::ResponseHeaderBase header,::Dynamic body){
            	HX_GC_STACKFRAME(&_hx_pos_64077905682319e2_65__new)
HXDLIN(  65)		 ::tink::http::_Response::OutgoingResponseData this1 =  ::tink::http::_Response::OutgoingResponseData_obj::__alloc( HX_CTX ,header,body);
HXDLIN(  65)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutgoingResponse_Impl__obj,_new,return )

 ::tink::http::_Response::OutgoingResponseData OutgoingResponse_Impl__obj::blob( ::Dynamic __o_code,::Dynamic chunk,::String contentType,::Array< ::Dynamic> headers){
            		 ::Dynamic code = __o_code;
            		if (::hx::IsNull(__o_code)) code = 200;
            	HX_GC_STACKFRAME(&_hx_pos_64077905682319e2_69_blob)
HXLINE(  73)		::String this1 = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(( (int)(code) ));
HXLINE(  75)		::String this2 = HX_("Content-Type",ce,69,5d,3c).toLowerCase();
HXDLIN(  75)		 ::tink::http::HeaderField fields =  ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this2,contentType);
HXLINE(  76)		::String this3 = HX_("Content-Length",fa,f8,b6,65).toLowerCase();
HXDLIN(  76)		::String fields1 = ::Std_obj::string(::tink::chunk::ChunkObject_obj::getLength(chunk));
HXLINE(  77)		::Array< ::Dynamic> fields2;
HXDLIN(  77)		if (::hx::IsNull( headers )) {
HXLINE(  77)			fields2 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  79)			::Array< ::Dynamic> v = headers;
HXLINE(  77)			fields2 = v;
            		}
HXLINE(  71)		 ::tink::http::ResponseHeaderBase this4 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,( (int)(code) ),this1,::Array_obj< ::Dynamic>::__new(2)->init(0,fields)->init(1, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this3,fields1))->concat(fields2),HX_("HTTP/1.1",6d,25,7a,80));
HXLINE(  70)		 ::tink::http::_Response::OutgoingResponseData this5 =  ::tink::http::_Response::OutgoingResponseData_obj::__alloc( HX_CTX ,this4, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,chunk)));
HXDLIN(  70)		return this5;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OutgoingResponse_Impl__obj,blob,return )

void OutgoingResponse_Impl__obj::chunked(::String contentType, ::Dynamic headers,::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_64077905682319e2_84_chunked)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OutgoingResponse_Impl__obj,chunked,(void))

 ::tink::http::_Response::OutgoingResponseData OutgoingResponse_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_64077905682319e2_90_ofString)
HXDLIN(  90)		return ::tink::http::_Response::OutgoingResponse_Impl__obj::blob(null(),::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(s,null())),HX_("text/plain",e8,fb,af,91),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutgoingResponse_Impl__obj,ofString,return )

 ::tink::http::_Response::OutgoingResponseData OutgoingResponse_Impl__obj::ofChunk(::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_64077905682319e2_93_ofChunk)
HXDLIN(  93)		return ::tink::http::_Response::OutgoingResponse_Impl__obj::blob(null(),c,HX_("application/octet-stream",5d,f8,82,30),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutgoingResponse_Impl__obj,ofChunk,return )

 ::tink::http::_Response::OutgoingResponseData OutgoingResponse_Impl__obj::reportError( ::tink::core::TypedError e){
            	HX_GC_STACKFRAME(&_hx_pos_64077905682319e2_95_reportError)
HXLINE(  96)		int code = e->code;
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if ((code >= 100)) {
HXLINE(  97)			_hx_tmp = (code > 999);
            		}
            		else {
HXLINE(  97)			_hx_tmp = true;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  97)			code = 500;
            		}
HXLINE(  99)		::String reason = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(code);
HXDLIN(  99)		::String this1 = HX_("Content-Type",ce,69,5d,3c).toLowerCase();
HXDLIN(  99)		 ::tink::http::ResponseHeaderBase this2 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,code,reason,::Array_obj< ::Dynamic>::__new(1)->init(0, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,HX_("application/json",87,d8,7f,4e))),HX_("HTTP/1.1",6d,25,7a,80));
HXLINE( 100)		 ::Dynamic replacer = null();
HXDLIN( 100)		::String space = null();
HXLINE(  98)		 ::tink::http::_Response::OutgoingResponseData this3 =  ::tink::http::_Response::OutgoingResponseData_obj::__alloc( HX_CTX ,this2, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(::haxe::format::JsonPrinter_obj::print( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("details",c2,dc,56,ab),e->data)
            			->setFixed(1,HX_("error",c8,cb,29,73),e->message)),replacer,space),null())))));
HXDLIN(  98)		return this3;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutgoingResponse_Impl__obj,reportError,return )


OutgoingResponse_Impl__obj::OutgoingResponse_Impl__obj()
{
}

bool OutgoingResponse_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"blob") ) { outValue = blob_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"chunked") ) { outValue = chunked_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofChunk") ) { outValue = ofChunk_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reportError") ) { outValue = reportError_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutgoingResponse_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OutgoingResponse_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OutgoingResponse_Impl__obj::__mClass;

static ::String OutgoingResponse_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("blob",5d,3d,19,41),
	HX_("chunked",0c,54,d3,50),
	HX_("ofString",48,69,31,a4),
	HX_("ofChunk",d6,81,25,a9),
	HX_("reportError",74,72,36,43),
	::String(null())
};

void OutgoingResponse_Impl__obj::__register()
{
	OutgoingResponse_Impl__obj _hx_dummy;
	OutgoingResponse_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Response.OutgoingResponse_Impl_",65,03,45,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutgoingResponse_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutgoingResponse_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OutgoingResponse_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutgoingResponse_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutgoingResponse_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Response
