#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#include <tink/url/_Portion/Portion_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Query_QueryStringParser
#include <tink/url/_Query/QueryStringParser.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_158_getExtension,"tink.http._Header.HeaderValue_Impl_","getExtension",0x7059661f,"tink.http._Header.HeaderValue_Impl_.getExtension","tink/http/Header.hx",158,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_164_parse,"tink.http._Header.HeaderValue_Impl_","parse",0x539c735d,"tink.http._Header.HeaderValue_Impl_.parse","tink/http/Header.hx",164,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_174_parseWith,"tink.http._Header.HeaderValue_Impl_","parseWith",0x2c678803,"tink.http._Header.HeaderValue_Impl_.parseWith","tink/http/Header.hx",174,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_188_basicAuth,"tink.http._Header.HeaderValue_Impl_","basicAuth",0x97e8e560,"tink.http._Header.HeaderValue_Impl_.basicAuth","tink/http/Header.hx",188,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_193_ofDate,"tink.http._Header.HeaderValue_Impl_","ofDate",0x31789c7b,"tink.http._Header.HeaderValue_Impl_.ofDate","tink/http/Header.hx",193,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_196_ofInt,"tink.http._Header.HeaderValue_Impl_","ofInt",0xc364cf42,"tink.http._Header.HeaderValue_Impl_.ofInt","tink/http/Header.hx",196,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_190_boot,"tink.http._Header.HeaderValue_Impl_","boot",0x9d9eb448,"tink.http._Header.HeaderValue_Impl_.boot","tink/http/Header.hx",190,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_9cfb9724f4bad04f_191_boot,"tink.http._Header.HeaderValue_Impl_","boot",0x9d9eb448,"tink.http._Header.HeaderValue_Impl_.boot","tink/http/Header.hx",191,0xf5720e67)
namespace tink{
namespace http{
namespace _Header{

void HeaderValue_Impl__obj::__construct() { }

Dynamic HeaderValue_Impl__obj::__CreateEmpty() { return new HeaderValue_Impl__obj; }

void *HeaderValue_Impl__obj::_hx_vtable = 0;

Dynamic HeaderValue_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeaderValue_Impl__obj > _hx_result = new HeaderValue_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HeaderValue_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58df80d2;
}

 ::haxe::ds::StringMap HeaderValue_Impl__obj::getExtension(::String this1){
            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_158_getExtension)
HXDLIN( 158)		return ( ( ::haxe::ds::StringMap)(::tink::http::_Header::HeaderValue_Impl__obj::parse(this1)->__get(0)->__Field(HX_("extensions",14,7c,70,89),::hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HeaderValue_Impl__obj,getExtension,return )

::Array< ::Dynamic> HeaderValue_Impl__obj::parse(::String this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::haxe::ds::StringMap _hx_run(::String _, ::Dynamic params){
            			HX_GC_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_164_parse)
HXDLIN( 164)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 164)			{
HXDLIN( 164)				 ::Dynamic p = params;
HXDLIN( 164)				while(( (bool)(p->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 164)					 ::tink::core::NamedWith p1 = ( ( ::tink::core::NamedWith)(p->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 164)					{
HXDLIN( 164)						::String key = ( (::String)(p1->name) );
HXDLIN( 164)						::String value;
HXDLIN( 164)						::String _g1 = ::tink::url::_Portion::Portion_Impl__obj::toString(( (::String)(p1->value) ));
HXLINE( 165)						::String quoted = _g1;
HXDLIN( 165)						if (::hx::IsEq( quoted.charCodeAt(0),34 )) {
HXDLIN( 164)							value = quoted.substr(1,(quoted.length - 2));
            						}
            						else {
HXLINE( 166)							::String v = _g1;
HXLINE( 164)							value = v;
            						}
HXDLIN( 164)						_g->set(key,value);
            					}
            				}
            			}
HXDLIN( 164)			return _g;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_164_parse)
HXDLIN( 164)		return ::tink::http::_Header::HeaderValue_Impl__obj::parseWith(this1, ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HeaderValue_Impl__obj,parse,return )

::Array< ::Dynamic> HeaderValue_Impl__obj::parseWith(::String this1, ::Dynamic parseExtension){
            	HX_GC_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_174_parseWith)
HXDLIN( 174)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 174)		{
HXDLIN( 174)			int _g1 = 0;
HXDLIN( 174)			::Array< ::String > _g2 = this1.split(HX_(",",2c,00,00,00));
HXDLIN( 174)			while((_g1 < _g2->length)){
HXDLIN( 174)				::String v = _g2->__get(_g1);
HXDLIN( 174)				_g1 = (_g1 + 1);
HXLINE( 175)				v = ::StringTools_obj::trim(v);
HXLINE( 176)				int i;
HXDLIN( 176)				int _g3 = v.indexOf(HX_(";",3b,00,00,00),null());
HXDLIN( 176)				if ((_g3 == -1)) {
HXLINE( 176)					i = v.length;
            				}
            				else {
HXLINE( 178)					int i1 = _g3;
HXLINE( 176)					i = i1;
            				}
HXLINE( 180)				::String value = v.substr(0,i);
HXLINE( 183)				::String sep = HX_(";",3b,00,00,00);
HXDLIN( 183)				if (::hx::IsNull( sep )) {
HXLINE( 183)					sep = HX_("&",26,00,00,00);
            				}
HXLINE( 181)				_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("extensions",14,7c,70,89),parseExtension(value, ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,v,sep,HX_("=",3d,00,00,00),(i + 1))))
            					->setFixed(1,HX_("value",71,7f,b8,31),value)));
            			}
            		}
HXLINE( 174)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HeaderValue_Impl__obj,parseWith,return )

::String HeaderValue_Impl__obj::basicAuth(::String username,::String password){
            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_188_basicAuth)
HXDLIN( 188)		return (HX_("Basic ",d2,a1,bf,89) + ::haxe::crypto::Base64_obj::encode(::haxe::io::Bytes_obj::ofString((((HX_("",00,00,00,00) + username) + HX_(":",3a,00,00,00)) + password),null()),null()).toString());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HeaderValue_Impl__obj,basicAuth,return )

::Array< ::String > HeaderValue_Impl__obj::DAYS;

::Array< ::String > HeaderValue_Impl__obj::MONTHS;

::String HeaderValue_Impl__obj::ofDate( ::Date d){
            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_193_ofDate)
HXDLIN( 193)		::String _hx_tmp = (::tink::http::_Header::HeaderValue_Impl__obj::DAYS->__get(d->getDay()) + HX_(", %d ",ad,c4,e4,6a));
HXDLIN( 193)		return ::DateTools_obj::format(d,((_hx_tmp + ::tink::http::_Header::HeaderValue_Impl__obj::MONTHS->__get(d->getMonth())) + HX_(" %Y %H:%M:%S GMT",c3,f0,8d,ec)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HeaderValue_Impl__obj,ofDate,return )

::String HeaderValue_Impl__obj::ofInt(int i){
            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_196_ofInt)
HXDLIN( 196)		return ::Std_obj::string(i);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HeaderValue_Impl__obj,ofInt,return )


HeaderValue_Impl__obj::HeaderValue_Impl__obj()
{
}

bool HeaderValue_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofDate") ) { outValue = ofDate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseWith") ) { outValue = parseWith_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"basicAuth") ) { outValue = basicAuth_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getExtension") ) { outValue = getExtension_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HeaderValue_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo HeaderValue_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &HeaderValue_Impl__obj::DAYS,HX_("DAYS",97,22,24,2d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &HeaderValue_Impl__obj::MONTHS,HX_("MONTHS",33,3d,f1,79)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void HeaderValue_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HeaderValue_Impl__obj::DAYS,"DAYS");
	HX_MARK_MEMBER_NAME(HeaderValue_Impl__obj::MONTHS,"MONTHS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HeaderValue_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HeaderValue_Impl__obj::DAYS,"DAYS");
	HX_VISIT_MEMBER_NAME(HeaderValue_Impl__obj::MONTHS,"MONTHS");
};

#endif

::hx::Class HeaderValue_Impl__obj::__mClass;

static ::String HeaderValue_Impl__obj_sStaticFields[] = {
	HX_("getExtension",09,30,67,f4),
	HX_("parse",33,90,55,bd),
	HX_("parseWith",d9,c7,9e,d6),
	HX_("basicAuth",36,25,20,42),
	HX_("DAYS",97,22,24,2d),
	HX_("MONTHS",33,3d,f1,79),
	HX_("ofDate",e5,ba,b8,49),
	HX_("ofInt",18,ec,1d,2d),
	::String(null())
};

void HeaderValue_Impl__obj::__register()
{
	HeaderValue_Impl__obj _hx_dummy;
	HeaderValue_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Header.HeaderValue_Impl_",18,28,0b,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HeaderValue_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HeaderValue_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HeaderValue_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HeaderValue_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HeaderValue_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeaderValue_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeaderValue_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HeaderValue_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_190_boot)
HXDLIN( 190)		DAYS = HX_("Sun,Mon,Tue,Wen,Thu,Fri,Sat",98,29,6c,a0).split(HX_(",",2c,00,00,00));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9cfb9724f4bad04f_191_boot)
HXDLIN( 191)		MONTHS = HX_("Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec",e8,1a,3c,0c).split(HX_(",",2c,00,00,00));
            	}
}

} // end namespace tink
} // end namespace http
} // end namespace _Header
