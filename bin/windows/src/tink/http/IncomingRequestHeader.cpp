#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_OutcomeTools
#include <tink/core/OutcomeTools.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_
#include <tink/core/_Outcome/OutcomeMapper_Impl_.h>
#endif
#ifndef INCLUDED_tink_http_Authorization
#include <tink/http/Authorization.h>
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
#ifndef INCLUDED_tink_http_IncomingRequestHeader
#include <tink/http/IncomingRequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#include <tink/url/_Portion/Portion_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Query_QueryStringParser
#include <tink/url/_Query/QueryStringParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea1f722becc29600_35_new,"tink.http.IncomingRequestHeader","new",0xdb15a0de,"tink.http.IncomingRequestHeader.new","tink/http/Request.hx",35,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_39_getCookies,"tink.http.IncomingRequestHeader","getCookies",0x893c189b,"tink.http.IncomingRequestHeader.getCookies","tink/http/Request.hx",39,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_47_concat,"tink.http.IncomingRequestHeader","concat",0x2b591b56,"tink.http.IncomingRequestHeader.concat","tink/http/Request.hx",47,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_53_cookieNames,"tink.http.IncomingRequestHeader","cookieNames",0x2afe5302,"tink.http.IncomingRequestHeader.cookieNames","tink/http/Request.hx",53,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_59_getCookie,"tink.http.IncomingRequestHeader","getCookie",0x0e6424d8,"tink.http.IncomingRequestHeader.getCookie","tink/http/Request.hx",59,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_65_getAuth,"tink.http.IncomingRequestHeader","getAuth",0xc760769c,"tink.http.IncomingRequestHeader.getAuth","tink/http/Request.hx",65,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_79_getAuthWith,"tink.http.IncomingRequestHeader","getAuthWith",0x4c2796c2,"tink.http.IncomingRequestHeader.getAuthWith","tink/http/Request.hx",79,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_91_parser,"tink.http.IncomingRequestHeader","parser",0x5111af21,"tink.http.IncomingRequestHeader.parser","tink/http/Request.hx",91,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_ea1f722becc29600_90_parser,"tink.http.IncomingRequestHeader","parser",0x5111af21,"tink.http.IncomingRequestHeader.parser","tink/http/Request.hx",90,0x68d6b2f9)
namespace tink{
namespace http{

void IncomingRequestHeader_obj::__construct(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields){
            		::String protocol = __o_protocol;
            		if (::hx::IsNull(__o_protocol)) protocol = HX_("HTTP/1.1",6d,25,7a,80);
            	HX_STACKFRAME(&_hx_pos_ea1f722becc29600_35_new)
HXDLIN(  35)		super::__construct(method,url,protocol,fields);
            	}

Dynamic IncomingRequestHeader_obj::__CreateEmpty() { return new IncomingRequestHeader_obj; }

void *IncomingRequestHeader_obj::_hx_vtable = 0;

Dynamic IncomingRequestHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IncomingRequestHeader_obj > _hx_result = new IncomingRequestHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool IncomingRequestHeader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4094a9e7) {
		if (inClassId<=(int)0x1c840e5c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1c840e5c;
		} else {
			return inClassId==(int)0x4094a9e7;
		}
	} else {
		return inClassId==(int)0x72a5c122;
	}
}

 ::haxe::ds::StringMap IncomingRequestHeader_obj::getCookies(){
            	HX_GC_STACKFRAME(&_hx_pos_ea1f722becc29600_39_getCookies)
HXLINE(  40)		if (::hx::IsNull( this->cookies )) {
HXLINE(  41)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  41)			{
HXLINE(  41)				int _g1 = 0;
HXDLIN(  41)				::String this1 = HX_("cookie",a4,58,7f,c8).toLowerCase();
HXDLIN(  41)				::Array< ::String > _g2 = this->get(this1);
HXDLIN(  41)				while((_g1 < _g2->length)){
HXLINE(  41)					::String header = _g2->__get(_g1);
HXDLIN(  41)					_g1 = (_g1 + 1);
HXDLIN(  41)					{
HXLINE(  41)						::String sep = HX_(";",3b,00,00,00);
HXDLIN(  41)						if (::hx::IsNull( sep )) {
HXLINE(  41)							sep = HX_("&",26,00,00,00);
            						}
HXDLIN(  41)						 ::tink::url::_Query::QueryStringParser entry =  ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,header,sep,HX_("=",3d,00,00,00),0);
HXDLIN(  41)						while(entry->hasNext()){
HXLINE(  41)							 ::tink::core::NamedWith entry1 = entry->next();
HXDLIN(  41)							{
HXLINE(  41)								::String key = ( (::String)(entry1->name) );
HXDLIN(  41)								_g->set(key,::tink::url::_Portion::Portion_Impl__obj::toString(( (::String)(entry1->value) )));
            							}
            						}
            					}
            				}
            			}
HXDLIN(  41)			this->cookies = _g;
            		}
HXLINE(  43)		return this->cookies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IncomingRequestHeader_obj,getCookies,return )

 ::tink::http::Header IncomingRequestHeader_obj::concat(::Array< ::Dynamic> fields){
            	HX_GC_STACKFRAME(&_hx_pos_ea1f722becc29600_47_concat)
HXDLIN(  47)		::String _hx_tmp = this->method;
HXDLIN(  47)		 ::Dynamic _hx_tmp1 = this->url;
HXDLIN(  47)		::String _hx_tmp2 = this->protocol;
HXDLIN(  47)		return  ::tink::http::IncomingRequestHeader_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->fields->concat(fields));
            	}


 ::Dynamic IncomingRequestHeader_obj::cookieNames(){
            	HX_STACKFRAME(&_hx_pos_ea1f722becc29600_53_cookieNames)
HXDLIN(  53)		return this->cookies->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IncomingRequestHeader_obj,cookieNames,return )

::String IncomingRequestHeader_obj::getCookie(::String name){
            	HX_STACKFRAME(&_hx_pos_ea1f722becc29600_59_getCookie)
HXDLIN(  59)		return this->getCookies()->get_string(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IncomingRequestHeader_obj,getCookie,return )

 ::tink::core::Outcome IncomingRequestHeader_obj::getAuth(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::tink::core::Outcome _hx_run(::String s,::String p){
            			HX_GC_STACKFRAME(&_hx_pos_ea1f722becc29600_65_getAuth)
HXDLIN(  65)			::String _hx_switch_0 = s;
            			if (  (_hx_switch_0==HX_("Basic",8e,9a,e7,40)) ){
HXLINE(  67)				::String decoded;
HXDLIN(  67)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  67)					decoded = ::haxe::crypto::Base64_obj::decode(p,null())->toString();
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(  67)						{
HXLINE(  67)							null();
            						}
HXDLIN(  67)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN(  67)						return ::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(null(),HX_("Error in decoding basic auth",ec,7b,02,80),e,::hx::SourceInfo(HX_("tink/http/Request.hx",f9,b2,d6,68),67,HX_("tink.http.IncomingRequestHeader",ec,99,08,67),HX_("getAuth",1e,8f,f9,12))));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE(  68)				int _g = decoded.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN(  68)				if ((_g == -1)) {
HXLINE(  69)					return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("Cannot parse username and password because \":\" is missing",5c,d8,3b,f5),::hx::SourceInfo(HX_("tink/http/Request.hx",f9,b2,d6,68),69,HX_("tink.http.IncomingRequestHeader",ec,99,08,67),HX_("getAuth",1e,8f,f9,12))));
            				}
            				else {
HXLINE(  70)					int i = _g;
HXDLIN(  70)					::String _hx_tmp = decoded.substr(0,i);
HXDLIN(  70)					return ::tink::core::Outcome_obj::Success(::tink::http::Authorization_obj::Basic(_hx_tmp,decoded.substr((i + 1),null())));
            				}
HXLINE(  66)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Bearer",01,f3,7a,cb)) ){
HXLINE(  73)				return ::tink::core::Outcome_obj::Success(::tink::http::Authorization_obj::Bearer(p));
HXDLIN(  73)				goto _hx_goto_7;
            			}
            			/* default */{
HXLINE(  74)				::String s1 = s;
HXLINE(  75)				return ::tink::core::Outcome_obj::Success(::tink::http::Authorization_obj::Others(s1,p));
            			}
            			_hx_goto_7:;
HXLINE(  65)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_ea1f722becc29600_65_getAuth)
HXDLIN(  65)		return this->getAuthWith( ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IncomingRequestHeader_obj,getAuth,return )

 ::tink::core::Outcome IncomingRequestHeader_obj::getAuthWith( ::Dynamic parser){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,parser) HXARGC(1)
            		 ::tink::core::Outcome _hx_run(::String v){
            			HX_GC_STACKFRAME(&_hx_pos_ea1f722becc29600_79_getAuthWith)
HXDLIN(  79)			int _g = v.indexOf(HX_(" ",20,00,00,00),null());
HXDLIN(  79)			if ((_g == -1)) {
HXLINE(  81)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,HX_("Invalid Authorization Header",fd,cc,a1,d9),::hx::SourceInfo(HX_("tink/http/Request.hx",f9,b2,d6,68),81,HX_("tink.http.IncomingRequestHeader",ec,99,08,67),HX_("getAuthWith",44,18,44,50))));
            			}
            			else {
HXLINE(  82)				int i = _g;
HXLINE(  83)				 ::Dynamic parser1 = parser;
HXDLIN(  83)				::String _hx_tmp = v.substr(0,i);
HXDLIN(  83)				return parser1(_hx_tmp,v.substr((i + 1),null()));
            			}
HXLINE(  79)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_ea1f722becc29600_79_getAuthWith)
HXDLIN(  79)		 ::tink::core::Outcome _hx_tmp = this->byName(HX_("authorization",f9,19,4c,e9));
HXDLIN(  79)		return ::tink::core::OutcomeTools_obj::flatMap(_hx_tmp,::tink::core::_Outcome::OutcomeMapper_Impl__obj::withSameError( ::Dynamic(new _hx_Closure_0(parser))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IncomingRequestHeader_obj,getAuthWith,return )

::Dynamic IncomingRequestHeader_obj::parser(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::tink::core::Outcome _hx_run(::String line,::Array< ::Dynamic> headers){
            			HX_GC_STACKFRAME(&_hx_pos_ea1f722becc29600_91_parser)
HXLINE(  91)			::Array< ::String > _g = line.split(HX_(" ",20,00,00,00));
HXDLIN(  91)			if ((_g->length == 3)) {
HXLINE(  92)				::String method = _g->__get(0);
HXDLIN(  92)				::String url = _g->__get(1);
HXDLIN(  92)				::String protocol = _g->__get(2);
HXLINE(  93)				return ::tink::core::Outcome_obj::Success( ::tink::http::IncomingRequestHeader_obj::__alloc( HX_CTX ,method,::tink::_Url::Url_Impl__obj::fromString(url),protocol,headers));
            			}
            			else {
HXLINE(  95)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,HX_("Invalid HTTP header",5c,9c,51,f5),::hx::SourceInfo(HX_("tink/http/Request.hx",f9,b2,d6,68),95,HX_("tink.http.IncomingRequestHeader",ec,99,08,67),HX_("parser",df,9c,88,ed))));
            			}
HXLINE(  91)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_ea1f722becc29600_90_parser)
HXDLIN(  90)		return  ::tink::http::HeaderParser_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(IncomingRequestHeader_obj,parser,return )


::hx::ObjectPtr< IncomingRequestHeader_obj > IncomingRequestHeader_obj::__new(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields) {
	::hx::ObjectPtr< IncomingRequestHeader_obj > __this = new IncomingRequestHeader_obj();
	__this->__construct(method,url,__o_protocol,fields);
	return __this;
}

::hx::ObjectPtr< IncomingRequestHeader_obj > IncomingRequestHeader_obj::__alloc(::hx::Ctx *_hx_ctx,::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields) {
	IncomingRequestHeader_obj *__this = (IncomingRequestHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IncomingRequestHeader_obj), true, "tink.http.IncomingRequestHeader"));
	*(void **)__this = IncomingRequestHeader_obj::_hx_vtable;
	__this->__construct(method,url,__o_protocol,fields);
	return __this;
}

IncomingRequestHeader_obj::IncomingRequestHeader_obj()
{
}

void IncomingRequestHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IncomingRequestHeader);
	HX_MARK_MEMBER_NAME(cookies,"cookies");
	 ::tink::http::RequestHeader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IncomingRequestHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cookies,"cookies");
	 ::tink::http::RequestHeader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val IncomingRequestHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cookies") ) { return ::hx::Val( cookies ); }
		if (HX_FIELD_EQ(inName,"getAuth") ) { return ::hx::Val( getAuth_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getCookie") ) { return ::hx::Val( getCookie_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getCookies") ) { return ::hx::Val( getCookies_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cookieNames") ) { return ::hx::Val( cookieNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAuthWith") ) { return ::hx::Val( getAuthWith_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool IncomingRequestHeader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = parser_dyn(); return true; }
	}
	return false;
}

::hx::Val IncomingRequestHeader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cookies") ) { cookies=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IncomingRequestHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cookies",4f,37,ee,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IncomingRequestHeader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(IncomingRequestHeader_obj,cookies),HX_("cookies",4f,37,ee,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IncomingRequestHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String IncomingRequestHeader_obj_sMemberFields[] = {
	HX_("cookies",4f,37,ee,a6),
	HX_("getCookies",59,bd,4f,f6),
	HX_("concat",14,09,d0,c7),
	HX_("cookieNames",84,d4,1a,2f),
	HX_("getCookie",da,e1,d5,44),
	HX_("getAuth",1e,8f,f9,12),
	HX_("getAuthWith",44,18,44,50),
	::String(null()) };

::hx::Class IncomingRequestHeader_obj::__mClass;

static ::String IncomingRequestHeader_obj_sStaticFields[] = {
	HX_("parser",df,9c,88,ed),
	::String(null())
};

void IncomingRequestHeader_obj::__register()
{
	IncomingRequestHeader_obj _hx_dummy;
	IncomingRequestHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.IncomingRequestHeader",ec,99,08,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IncomingRequestHeader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IncomingRequestHeader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IncomingRequestHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IncomingRequestHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IncomingRequestHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IncomingRequestHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
