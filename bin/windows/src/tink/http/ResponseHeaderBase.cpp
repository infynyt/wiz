#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_
#include <httpstatus/_HttpStatusMessage/HttpStatusMessage_Impl_.h>
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
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_HeaderParser
#include <tink/http/HeaderParser.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ceafa2a18ff2acf0_37_new,"tink.http.ResponseHeaderBase","new",0xcf4e495b,"tink.http.ResponseHeaderBase.new","tink/http/Response.hx",37,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_ceafa2a18ff2acf0_45_concat,"tink.http.ResponseHeaderBase","concat",0x08991ef9,"tink.http.ResponseHeaderBase.concat","tink/http/Response.hx",45,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_ceafa2a18ff2acf0_48_toString,"tink.http.ResponseHeaderBase","toString",0x0e14e9d1,"tink.http.ResponseHeaderBase.toString","tink/http/Response.hx",48,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_ceafa2a18ff2acf0_52_parser,"tink.http.ResponseHeaderBase","parser",0x2e51b2c4,"tink.http.ResponseHeaderBase.parser","tink/http/Response.hx",52,0x0bc26b73)
HX_LOCAL_STACK_FRAME(_hx_pos_ceafa2a18ff2acf0_51_parser,"tink.http.ResponseHeaderBase","parser",0x2e51b2c4,"tink.http.ResponseHeaderBase.parser","tink/http/Response.hx",51,0x0bc26b73)
namespace tink{
namespace http{

void ResponseHeaderBase_obj::__construct(int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol){
            		::String protocol = __o_protocol;
            		if (::hx::IsNull(__o_protocol)) protocol = HX_("HTTP/1.1",6d,25,7a,80);
            	HX_STACKFRAME(&_hx_pos_ceafa2a18ff2acf0_37_new)
HXLINE(  38)		this->statusCode = statusCode;
HXLINE(  39)		::String _hx_tmp;
HXDLIN(  39)		if (::hx::IsNull( reason )) {
HXLINE(  39)			::String this1 = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(statusCode);
HXDLIN(  39)			_hx_tmp = this1;
            		}
            		else {
HXLINE(  39)			_hx_tmp = reason;
            		}
HXDLIN(  39)		this->reason = _hx_tmp;
HXLINE(  40)		this->protocol = protocol;
HXLINE(  41)		super::__construct(fields);
            	}

Dynamic ResponseHeaderBase_obj::__CreateEmpty() { return new ResponseHeaderBase_obj; }

void *ResponseHeaderBase_obj::_hx_vtable = 0;

Dynamic ResponseHeaderBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResponseHeaderBase_obj > _hx_result = new ResponseHeaderBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ResponseHeaderBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4094a9e7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4094a9e7;
	} else {
		return inClassId==(int)0x68228641;
	}
}

 ::tink::http::Header ResponseHeaderBase_obj::concat(::Array< ::Dynamic> fields){
            	HX_GC_STACKFRAME(&_hx_pos_ceafa2a18ff2acf0_45_concat)
HXDLIN(  45)		int statusCode = this->statusCode;
HXDLIN(  45)		::String reason = this->reason;
HXDLIN(  45)		::Array< ::Dynamic> fields1 = this->fields->concat(fields);
HXDLIN(  45)		::String protocol = this->protocol;
HXDLIN(  45)		if (::hx::IsNull( protocol )) {
HXDLIN(  45)			protocol = HX_("HTTP/1.1",6d,25,7a,80);
            		}
HXDLIN(  45)		 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,statusCode,reason,fields1,protocol);
HXDLIN(  45)		return this1;
            	}


::String ResponseHeaderBase_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ceafa2a18ff2acf0_48_toString)
HXDLIN(  48)		::String _hx_tmp = ((((((HX_("",00,00,00,00) + this->protocol) + HX_(" ",20,00,00,00)) + this->statusCode) + HX_(" ",20,00,00,00)) + this->reason) + HX_("\r\n",5d,0b,00,00));
HXDLIN(  48)		return (_hx_tmp + this->super::toString());
            	}


::Dynamic ResponseHeaderBase_obj::parser(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::tink::core::Outcome _hx_run(::String line,::Array< ::Dynamic> headers){
            			HX_GC_STACKFRAME(&_hx_pos_ceafa2a18ff2acf0_52_parser)
HXLINE(  53)			::Array< ::String > v = line.split(HX_(" ",20,00,00,00));
HXDLIN(  53)			if ((v->length >= 3)) {
HXLINE(  54)				int statusCode = ( (int)(::Std_obj::parseInt(v->__get(1))) );
HXDLIN(  54)				::String reason = v->slice(2,null())->join(HX_(" ",20,00,00,00));
HXDLIN(  54)				::String protocol = v->__get(0);
HXDLIN(  54)				if (::hx::IsNull( protocol )) {
HXLINE(  54)					protocol = HX_("HTTP/1.1",6d,25,7a,80);
            				}
HXDLIN(  54)				 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,statusCode,reason,headers,protocol);
HXDLIN(  54)				return ::tink::core::Outcome_obj::Success(this1);
            			}
            			else {
HXLINE(  56)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,HX_("Invalid HTTP response header",9d,90,42,2d),::hx::SourceInfo(HX_("tink/http/Response.hx",73,6b,c2,0b),56,HX_("tink.http.ResponseHeaderBase",e9,ff,c9,41),HX_("parser",df,9c,88,ed))));
            			}
HXLINE(  53)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_ceafa2a18ff2acf0_51_parser)
HXDLIN(  51)		return  ::tink::http::HeaderParser_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ResponseHeaderBase_obj,parser,return )


::hx::ObjectPtr< ResponseHeaderBase_obj > ResponseHeaderBase_obj::__new(int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol) {
	::hx::ObjectPtr< ResponseHeaderBase_obj > __this = new ResponseHeaderBase_obj();
	__this->__construct(statusCode,reason,fields,__o_protocol);
	return __this;
}

::hx::ObjectPtr< ResponseHeaderBase_obj > ResponseHeaderBase_obj::__alloc(::hx::Ctx *_hx_ctx,int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol) {
	ResponseHeaderBase_obj *__this = (ResponseHeaderBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResponseHeaderBase_obj), true, "tink.http.ResponseHeaderBase"));
	*(void **)__this = ResponseHeaderBase_obj::_hx_vtable;
	__this->__construct(statusCode,reason,fields,__o_protocol);
	return __this;
}

ResponseHeaderBase_obj::ResponseHeaderBase_obj()
{
}

void ResponseHeaderBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResponseHeaderBase);
	HX_MARK_MEMBER_NAME(statusCode,"statusCode");
	HX_MARK_MEMBER_NAME(reason,"reason");
	HX_MARK_MEMBER_NAME(protocol,"protocol");
	 ::tink::http::Header_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ResponseHeaderBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(statusCode,"statusCode");
	HX_VISIT_MEMBER_NAME(reason,"reason");
	HX_VISIT_MEMBER_NAME(protocol,"protocol");
	 ::tink::http::Header_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ResponseHeaderBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"reason") ) { return ::hx::Val( reason ); }
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"protocol") ) { return ::hx::Val( protocol ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"statusCode") ) { return ::hx::Val( statusCode ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ResponseHeaderBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = parser_dyn(); return true; }
	}
	return false;
}

::hx::Val ResponseHeaderBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"reason") ) { reason=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"protocol") ) { protocol=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"statusCode") ) { statusCode=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResponseHeaderBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("statusCode",7f,45,22,a6));
	outFields->push(HX_("reason",c4,0f,9d,fc));
	outFields->push(HX_("protocol",58,56,63,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResponseHeaderBase_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ResponseHeaderBase_obj,statusCode),HX_("statusCode",7f,45,22,a6)},
	{::hx::fsString,(int)offsetof(ResponseHeaderBase_obj,reason),HX_("reason",c4,0f,9d,fc)},
	{::hx::fsString,(int)offsetof(ResponseHeaderBase_obj,protocol),HX_("protocol",58,56,63,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResponseHeaderBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ResponseHeaderBase_obj_sMemberFields[] = {
	HX_("statusCode",7f,45,22,a6),
	HX_("reason",c4,0f,9d,fc),
	HX_("protocol",58,56,63,00),
	HX_("concat",14,09,d0,c7),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class ResponseHeaderBase_obj::__mClass;

static ::String ResponseHeaderBase_obj_sStaticFields[] = {
	HX_("parser",df,9c,88,ed),
	::String(null())
};

void ResponseHeaderBase_obj::__register()
{
	ResponseHeaderBase_obj _hx_dummy;
	ResponseHeaderBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.ResponseHeaderBase",e9,ff,c9,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ResponseHeaderBase_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ResponseHeaderBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResponseHeaderBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResponseHeaderBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResponseHeaderBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResponseHeaderBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
