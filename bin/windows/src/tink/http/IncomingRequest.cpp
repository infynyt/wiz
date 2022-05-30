#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
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
#ifndef INCLUDED_tink_http_Chunked
#include <tink/http/Chunked.h>
#endif
#ifndef INCLUDED_tink_http_ChunkedDecoder
#include <tink/http/ChunkedDecoder.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
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
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b55c772a4ecbbb20_153_new,"tink.http.IncomingRequest","new",0x12c3df71,"tink.http.IncomingRequest.new","tink/http/Request.hx",153,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_b55c772a4ecbbb20_161_parse,"tink.http.IncomingRequest","parse",0x57344584,"tink.http.IncomingRequest.parse","tink/http/Request.hx",161,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_b55c772a4ecbbb20_159_parse,"tink.http.IncomingRequest","parse",0x57344584,"tink.http.IncomingRequest.parse","tink/http/Request.hx",159,0x68d6b2f9)
namespace tink{
namespace http{

void IncomingRequest_obj::__construct(::String clientIp, ::tink::http::IncomingRequestHeader header, ::tink::http::IncomingRequestBody body){
            	HX_STACKFRAME(&_hx_pos_b55c772a4ecbbb20_153_new)
HXLINE( 154)		this->clientIp = clientIp;
HXLINE( 155)		super::__construct(header,body);
            	}

Dynamic IncomingRequest_obj::__CreateEmpty() { return new IncomingRequest_obj; }

void *IncomingRequest_obj::_hx_vtable = 0;

Dynamic IncomingRequest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IncomingRequest_obj > _hx_result = new IncomingRequest_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IncomingRequest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0386f7df) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0386f7df;
	} else {
		return inClassId==(int)0x7888e42d;
	}
}

::Dynamic IncomingRequest_obj::parse(::String clientIp,::Dynamic source){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::String,clientIp) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::MPair parts){
            			HX_GC_STACKFRAME(&_hx_pos_b55c772a4ecbbb20_161_parse)
HXLINE( 162)			::String clientIp1 = clientIp;
HXLINE( 163)			 ::tink::http::IncomingRequestHeader parts1 = ( ( ::tink::http::IncomingRequestHeader)(parts->a) );
HXLINE( 164)			 ::tink::core::Outcome _g = ( ( ::tink::http::IncomingRequestHeader)(parts->a) )->getContentLength();
HXDLIN( 164)			::Dynamic d;
HXDLIN( 164)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 165)					 ::Dynamic len = _g->_hx_getObject(0);
HXLINE( 164)					d = ::tink::io::_Source::Source_Impl__obj::limit(parts->b,( (int)(len) ));
            				}
            				break;
            				case (int)1: {
HXLINE( 167)					 ::tink::core::TypedError _g1 = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE( 168)					::String _g2 = ( ( ::tink::http::IncomingRequestHeader)(parts->a) )->method;
HXDLIN( 168)					 ::tink::core::Outcome _g3 = ( ( ::tink::http::IncomingRequestHeader)(parts->a) )->byName(HX_("transfer-encoding",75,95,2e,69));
HXDLIN( 168)					::String _hx_switch_0 = _g2;
            					if (  (_hx_switch_0==HX_("GET",76,1c,36,00)) ||  (_hx_switch_0==HX_("OPTIONS",3e,07,d2,5f)) ){
HXLINE( 164)						d = ::tink::io::_Source::Source_Impl__obj::EMPTY;
HXDLIN( 164)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE( 168)						if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 170)							::Array< ::String > _this = ( (::String)(_g3->_hx_getObject(0)) ).split(HX_(",",2c,00,00,00));
HXDLIN( 170)							 ::Dynamic f = ::StringTools_obj::trim_dyn();
HXDLIN( 170)							::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN( 170)							{
HXLINE( 170)								int _g = 0;
HXDLIN( 170)								int _g1 = _this->length;
HXDLIN( 170)								while((_g < _g1)){
HXLINE( 170)									_g = (_g + 1);
HXDLIN( 170)									int i = (_g - 1);
HXDLIN( 170)									{
HXLINE( 170)										::String inValue = ( (::String)(f(_hx_array_unsafe_get(_this,i))) );
HXDLIN( 170)										result->__unsafe_set(i,inValue);
            									}
            								}
            							}
HXDLIN( 170)							::Array< ::String > encodings = result;
HXDLIN( 170)							if ((encodings->indexOf(HX_("chunked",0c,54,d3,50),null()) != -1)) {
HXLINE( 170)								::Dynamic source = parts->b;
HXLINE( 164)								d = ::tink::http::Chunked_obj::decoder()->transform(source);
            							}
            							else {
HXLINE( 171)								return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,411,HX_("Content-Length header missing",39,0a,d7,45),::hx::SourceInfo(HX_("tink/http/Request.hx",f9,b2,d6,68),171,HX_("tink.http.IncomingRequest",ff,52,c9,ac),HX_("parse",33,90,55,bd))))));
            							}
            						}
            						else {
HXLINE( 171)							return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,411,HX_("Content-Length header missing",39,0a,d7,45),::hx::SourceInfo(HX_("tink/http/Request.hx",f9,b2,d6,68),171,HX_("tink.http.IncomingRequest",ff,52,c9,ac),HX_("parse",33,90,55,bd))))));
            						}
            					}
            					_hx_goto_2:;
            				}
            				break;
            			}
HXLINE( 161)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success( ::tink::http::IncomingRequest_obj::__alloc( HX_CTX ,clientIp1,parts1,::tink::http::IncomingRequestBody_obj::Plain(d)))));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_b55c772a4ecbbb20_159_parse)
HXDLIN( 159)		return ::tink::core::_Promise::Promise_Impl__obj::next(::tink::io::RealSourceTools_obj::parse(source,::tink::http::IncomingRequestHeader_obj::parser()), ::Dynamic(new _hx_Closure_0(clientIp)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IncomingRequest_obj,parse,return )


::hx::ObjectPtr< IncomingRequest_obj > IncomingRequest_obj::__new(::String clientIp, ::tink::http::IncomingRequestHeader header, ::tink::http::IncomingRequestBody body) {
	::hx::ObjectPtr< IncomingRequest_obj > __this = new IncomingRequest_obj();
	__this->__construct(clientIp,header,body);
	return __this;
}

::hx::ObjectPtr< IncomingRequest_obj > IncomingRequest_obj::__alloc(::hx::Ctx *_hx_ctx,::String clientIp, ::tink::http::IncomingRequestHeader header, ::tink::http::IncomingRequestBody body) {
	IncomingRequest_obj *__this = (IncomingRequest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IncomingRequest_obj), true, "tink.http.IncomingRequest"));
	*(void **)__this = IncomingRequest_obj::_hx_vtable;
	__this->__construct(clientIp,header,body);
	return __this;
}

IncomingRequest_obj::IncomingRequest_obj()
{
}

void IncomingRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IncomingRequest);
	HX_MARK_MEMBER_NAME(clientIp,"clientIp");
	 ::tink::http::Message_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IncomingRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clientIp,"clientIp");
	 ::tink::http::Message_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IncomingRequest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"clientIp") ) { return ::hx::Val( clientIp ); }
	}
	return super::__Field(inName,inCallProp);
}

bool IncomingRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

::hx::Val IncomingRequest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"clientIp") ) { clientIp=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IncomingRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("clientIp",12,73,8f,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IncomingRequest_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(IncomingRequest_obj,clientIp),HX_("clientIp",12,73,8f,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IncomingRequest_obj_sStaticStorageInfo = 0;
#endif

static ::String IncomingRequest_obj_sMemberFields[] = {
	HX_("clientIp",12,73,8f,15),
	::String(null()) };

::hx::Class IncomingRequest_obj::__mClass;

static ::String IncomingRequest_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void IncomingRequest_obj::__register()
{
	IncomingRequest_obj _hx_dummy;
	IncomingRequest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.IncomingRequest",ff,52,c9,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IncomingRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IncomingRequest_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IncomingRequest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IncomingRequest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IncomingRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IncomingRequest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
