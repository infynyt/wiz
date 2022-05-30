#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequestHeader
#include <tink/http/OutgoingRequestHeader.h>
#endif
#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_075aa04e02ead732_118_new,"tink.http.OutgoingRequestHeader","new",0x8b2ef298,"tink.http.OutgoingRequestHeader.new","tink/http/Request.hx",118,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_075aa04e02ead732_144_concat,"tink.http.OutgoingRequestHeader","concat",0xd61a19dc,"tink.http.OutgoingRequestHeader.concat","tink/http/Request.hx",144,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_075aa04e02ead732_129_extractAuth,"tink.http.OutgoingRequestHeader","extractAuth",0xe7e10f81,"tink.http.OutgoingRequestHeader.extractAuth","tink/http/Request.hx",129,0x68d6b2f9)
namespace tink{
namespace http{

void OutgoingRequestHeader_obj::__construct(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields){
            		::String protocol = __o_protocol;
            		if (::hx::IsNull(__o_protocol)) protocol = HX_("HTTP/1.1",6d,25,7a,80);
            	HX_STACKFRAME(&_hx_pos_075aa04e02ead732_118_new)
HXLINE( 119)		{
HXLINE( 119)			 ::haxe::ds::Option _g = ::tink::http::OutgoingRequestHeader_obj::extractAuth(url);
HXDLIN( 119)			if ((_g->_hx_getIndex() == 0)) {
HXLINE( 120)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 120)				{
HXLINE( 121)					url = v->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic);
HXLINE( 122)					fields = fields->concat(( (::Array< ::Dynamic>)(v->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic)) ));
            				}
            			}
            		}
HXLINE( 125)		super::__construct(method,url,protocol,fields);
            	}

Dynamic OutgoingRequestHeader_obj::__CreateEmpty() { return new OutgoingRequestHeader_obj; }

void *OutgoingRequestHeader_obj::_hx_vtable = 0;

Dynamic OutgoingRequestHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutgoingRequestHeader_obj > _hx_result = new OutgoingRequestHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool OutgoingRequestHeader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4094a9e7) {
		if (inClassId<=(int)0x17e6c132) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x17e6c132;
		} else {
			return inClassId==(int)0x4094a9e7;
		}
	} else {
		return inClassId==(int)0x72a5c122;
	}
}

 ::tink::http::Header OutgoingRequestHeader_obj::concat(::Array< ::Dynamic> fields){
            	HX_GC_STACKFRAME(&_hx_pos_075aa04e02ead732_144_concat)
HXDLIN( 144)		::String _hx_tmp = this->method;
HXDLIN( 144)		 ::Dynamic _hx_tmp1 = this->url;
HXDLIN( 144)		::String _hx_tmp2 = this->protocol;
HXDLIN( 144)		return  ::tink::http::OutgoingRequestHeader_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->fields->concat(fields));
            	}


 ::haxe::ds::Option OutgoingRequestHeader_obj::extractAuth( ::Dynamic url){
            	HX_GC_STACKFRAME(&_hx_pos_075aa04e02ead732_129_extractAuth)
HXDLIN( 129)		::String _g = ( (::String)(url->__Field(HX_("auth",68,df,76,40),::hx::paccDynamic)) );
HXLINE( 130)		if (::hx::IsNull( _g )) {
HXLINE( 130)			return ::haxe::ds::Option_obj::None_dyn();
            		}
            		else {
HXLINE( 131)			::String v = _g;
HXLINE( 133)			::String _hx_tmp;
HXDLIN( 133)			if (::hx::IsNull( v )) {
HXLINE( 133)				_hx_tmp = null();
            			}
            			else {
HXLINE( 133)				_hx_tmp = v.split(HX_(":",3a,00,00,00))->__get(0);
            			}
HXDLIN( 133)			::String _hx_tmp1;
HXDLIN( 133)			if (::hx::IsNull( v )) {
HXLINE( 133)				_hx_tmp1 = null();
            			}
            			else {
HXLINE( 133)				_hx_tmp1 = v.split(HX_(":",3a,00,00,00))->__get(1);
            			}
HXDLIN( 133)			::Array< ::Dynamic> _hx_tmp2 = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,HX_("authorization",f9,19,4c,e9),::tink::http::_Header::HeaderValue_Impl__obj::basicAuth(_hx_tmp,_hx_tmp1)));
HXLINE( 135)			::String url1 = ( (::String)(url->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)) );
HXLINE( 136)			::Array< ::String > _g1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 136)			{
HXLINE( 136)				int _g2 = 0;
HXDLIN( 136)				::Array< ::String > _g3 = ( (::Array< ::String >)(url->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) );
HXDLIN( 136)				while((_g2 < _g3->length)){
HXLINE( 136)					::String host = _g3->__get(_g2);
HXDLIN( 136)					_g2 = (_g2 + 1);
HXDLIN( 136)					_g1->push(host);
            				}
            			}
HXLINE( 132)			return ::haxe::ds::Option_obj::Some( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("url",6f,2b,59,00),::tink::_Url::Url_Impl__obj::make( ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("hosts",0b,ac,62,2b),_g1)
            					->setFixed(1,HX_("scheme",25,20,c1,40),url1)
            					->setFixed(2,HX_("path",a5,e5,51,4a), ::Dynamic(url->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)))
            					->setFixed(3,HX_("query",08,8b,ea,5d), ::Dynamic(url->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic))))))
            				->setFixed(1,HX_("headers",46,52,08,63),_hx_tmp2)));
            		}
HXLINE( 130)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutgoingRequestHeader_obj,extractAuth,return )


::hx::ObjectPtr< OutgoingRequestHeader_obj > OutgoingRequestHeader_obj::__new(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields) {
	::hx::ObjectPtr< OutgoingRequestHeader_obj > __this = new OutgoingRequestHeader_obj();
	__this->__construct(method,url,__o_protocol,fields);
	return __this;
}

::hx::ObjectPtr< OutgoingRequestHeader_obj > OutgoingRequestHeader_obj::__alloc(::hx::Ctx *_hx_ctx,::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields) {
	OutgoingRequestHeader_obj *__this = (OutgoingRequestHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutgoingRequestHeader_obj), true, "tink.http.OutgoingRequestHeader"));
	*(void **)__this = OutgoingRequestHeader_obj::_hx_vtable;
	__this->__construct(method,url,__o_protocol,fields);
	return __this;
}

OutgoingRequestHeader_obj::OutgoingRequestHeader_obj()
{
}

::hx::Val OutgoingRequestHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OutgoingRequestHeader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"extractAuth") ) { outValue = extractAuth_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutgoingRequestHeader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OutgoingRequestHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String OutgoingRequestHeader_obj_sMemberFields[] = {
	HX_("concat",14,09,d0,c7),
	::String(null()) };

::hx::Class OutgoingRequestHeader_obj::__mClass;

static ::String OutgoingRequestHeader_obj_sStaticFields[] = {
	HX_("extractAuth",49,f5,44,55),
	::String(null())
};

void OutgoingRequestHeader_obj::__register()
{
	OutgoingRequestHeader_obj _hx_dummy;
	OutgoingRequestHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.OutgoingRequestHeader",a6,06,74,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutgoingRequestHeader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutgoingRequestHeader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutgoingRequestHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutgoingRequestHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutgoingRequestHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutgoingRequestHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
