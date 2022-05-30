#include <hxcpp.h>

#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Response_ResponseHeader_Impl_
#include <tink/http/_Response/ResponseHeader_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_152b38286f665a72_16__new,"tink.http._Response.ResponseHeader_Impl_","_new",0x94dc06c9,"tink.http._Response.ResponseHeader_Impl_._new","tink/http/Response.hx",16,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_152b38286f665a72_21_fromStatusCode,"tink.http._Response.ResponseHeader_Impl_","fromStatusCode",0xb45e5af1,"tink.http._Response.ResponseHeader_Impl_.fromStatusCode","tink/http/Response.hx",21,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_152b38286f665a72_25_fromHeaderFields,"tink.http._Response.ResponseHeader_Impl_","fromHeaderFields",0xc02409d8,"tink.http._Response.ResponseHeader_Impl_.fromHeaderFields","tink/http/Response.hx",25,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_152b38286f665a72_28_parser,"tink.http._Response.ResponseHeader_Impl_","parser",0xe172b847,"tink.http._Response.ResponseHeader_Impl_.parser","tink/http/Response.hx",28,0x0bc26b73)
namespace tink{
namespace http{
namespace _Response{

void ResponseHeader_Impl__obj::__construct() { }

Dynamic ResponseHeader_Impl__obj::__CreateEmpty() { return new ResponseHeader_Impl__obj; }

void *ResponseHeader_Impl__obj::_hx_vtable = 0;

Dynamic ResponseHeader_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResponseHeader_Impl__obj > _hx_result = new ResponseHeader_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ResponseHeader_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10706f74;
}

 ::tink::http::ResponseHeaderBase ResponseHeader_Impl__obj::_new(int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol){
            		::String protocol = __o_protocol;
            		if (::hx::IsNull(__o_protocol)) protocol = HX_("HTTP/1.1",6d,25,7a,80);
            	HX_GC_STACKFRAME(&_hx_pos_152b38286f665a72_16__new)
HXDLIN(  16)		 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,statusCode,reason,fields,protocol);
HXDLIN(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ResponseHeader_Impl__obj,_new,return )

 ::tink::http::ResponseHeaderBase ResponseHeader_Impl__obj::fromStatusCode(int code){
            	HX_GC_STACKFRAME(&_hx_pos_152b38286f665a72_21_fromStatusCode)
HXDLIN(  21)		::String reason = null();
HXDLIN(  21)		::Array< ::Dynamic> fields = null();
HXDLIN(  21)		 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,code,reason,fields,HX_("HTTP/1.1",6d,25,7a,80));
HXDLIN(  21)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ResponseHeader_Impl__obj,fromStatusCode,return )

 ::tink::http::ResponseHeaderBase ResponseHeader_Impl__obj::fromHeaderFields(::Array< ::Dynamic> fields){
            	HX_GC_STACKFRAME(&_hx_pos_152b38286f665a72_25_fromHeaderFields)
HXDLIN(  25)		::String reason = null();
HXDLIN(  25)		 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,200,reason,fields,HX_("HTTP/1.1",6d,25,7a,80));
HXDLIN(  25)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ResponseHeader_Impl__obj,fromHeaderFields,return )

::Dynamic ResponseHeader_Impl__obj::parser(){
            	HX_STACKFRAME(&_hx_pos_152b38286f665a72_28_parser)
HXDLIN(  28)		return ::tink::http::ResponseHeaderBase_obj::parser();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ResponseHeader_Impl__obj,parser,return )


ResponseHeader_Impl__obj::ResponseHeader_Impl__obj()
{
}

bool ResponseHeader_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = parser_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromStatusCode") ) { outValue = fromStatusCode_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromHeaderFields") ) { outValue = fromHeaderFields_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ResponseHeader_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ResponseHeader_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ResponseHeader_Impl__obj::__mClass;

static ::String ResponseHeader_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("fromStatusCode",89,97,4e,9e),
	HX_("fromHeaderFields",70,9c,0e,34),
	HX_("parser",df,9c,88,ed),
	::String(null())
};

void ResponseHeader_Impl__obj::__register()
{
	ResponseHeader_Impl__obj _hx_dummy;
	ResponseHeader_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Response.ResponseHeader_Impl_",06,e8,0c,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ResponseHeader_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ResponseHeader_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ResponseHeader_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResponseHeader_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResponseHeader_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Response
