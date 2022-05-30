#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80f54cb31df217e8_249_new,"tink.http.HeaderField","new",0x50ccdb55,"tink.http.HeaderField.new","tink/http/Header.hx",249,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_80f54cb31df217e8_253_toString,"tink.http.HeaderField","toString",0x1860ed97,"tink.http.HeaderField.toString","tink/http/Header.hx",253,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_80f54cb31df217e8_257_ofString,"tink.http.HeaderField","ofString",0x84238633,"tink.http.HeaderField.ofString","tink/http/Header.hx",257,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_80f54cb31df217e8_268_setCookie,"tink.http.HeaderField","setCookie",0x3c0dfe9b,"tink.http.HeaderField.setCookie","tink/http/Header.hx",268,0xf5720e67)
static const ::String _hx_array_data_ce658ce3_4[] = {
	HX_("; ",85,33,00,00),
};
static const ::String _hx_array_data_ce658ce3_5[] = {
	HX_("expires=",09,5e,a9,97),
};
static const ::String _hx_array_data_ce658ce3_6[] = {
	HX_("; ",85,33,00,00),
};
static const ::String _hx_array_data_ce658ce3_7[] = {
	HX_("domain=",79,6a,1a,a3),
};
static const ::String _hx_array_data_ce658ce3_8[] = {
	HX_("; ",85,33,00,00),
};
static const ::String _hx_array_data_ce658ce3_9[] = {
	HX_("path=",f8,0a,57,bd),
};
static const ::String _hx_array_data_ce658ce3_10[] = {
	HX_("; ",85,33,00,00),
};
static const ::String _hx_array_data_ce658ce3_11[] = {
	HX_("secure",77,60,4c,64),
};
static const ::String _hx_array_data_ce658ce3_12[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_ce658ce3_13[] = {
	HX_("; ",85,33,00,00),
};
static const ::String _hx_array_data_ce658ce3_14[] = {
	HX_("HttpOnly",34,6d,bc,00),
};
static const ::String _hx_array_data_ce658ce3_15[] = {
	HX_("",00,00,00,00),
};
namespace tink{
namespace http{

void HeaderField_obj::__construct(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_80f54cb31df217e8_249_new)
HXDLIN( 249)		super::__construct(name,value);
            	}

Dynamic HeaderField_obj::__CreateEmpty() { return new HeaderField_obj; }

void *HeaderField_obj::_hx_vtable = 0;

Dynamic HeaderField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeaderField_obj > _hx_result = new HeaderField_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HeaderField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4df025ce) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4df025ce;
	} else {
		return inClassId==(int)0x67181553;
	}
}

::String HeaderField_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_80f54cb31df217e8_253_toString)
HXDLIN( 253)		if (::hx::IsNull( this->value )) {
HXDLIN( 253)			return ( (::String)(this->name) );
            		}
            		else {
HXLINE( 254)			return (((HX_("",00,00,00,00) + this->name) + HX_(": ",a6,32,00,00)) + this->value);
            		}
HXLINE( 253)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HeaderField_obj,toString,return )

 ::tink::http::HeaderField HeaderField_obj::ofString(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_80f54cb31df217e8_257_ofString)
HXDLIN( 257)		int _g = s.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 257)		if ((_g == -1)) {
HXLINE( 259)			::String this1 = s.toLowerCase();
HXDLIN( 259)			return  ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,null());
            		}
            		else {
HXLINE( 260)			int v = _g;
HXLINE( 261)			::String this1 = s.substr(0,v).toLowerCase();
HXDLIN( 261)			return  ::tink::http::HeaderField_obj::__alloc( HX_CTX ,this1,::StringTools_obj::trim(s.substr((v + 1),null())));
            		}
HXLINE( 257)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HeaderField_obj,ofString,return )

 ::tink::http::HeaderField HeaderField_obj::setCookie(::String key,::String value, ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_80f54cb31df217e8_268_setCookie)
HXLINE( 270)		if (::hx::IsNull( options )) {
HXLINE( 271)			options =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 273)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 282)		{
HXLINE( 282)			::String x = (::StringTools_obj::urlEncode(key) + HX_("=",3d,00,00,00));
HXDLIN( 282)			::String x1 = (x + ::StringTools_obj::urlEncode(value));
HXDLIN( 282)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 282)				buf->flush();
            			}
HXDLIN( 282)			if (::hx::IsNull( buf->b )) {
HXLINE( 282)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 282)				::Array< ::String > buf1 = buf->b;
HXDLIN( 282)				buf1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 284)		if (::hx::IsNotNull( options->__Field(HX_("expires",b4,5f,6a,25),::hx::paccDynamic) )) {
HXLINE( 285)			::String value = ::tink::http::_Header::HeaderValue_Impl__obj::ofDate(( ( ::Date)(options->__Field(HX_("expires",b4,5f,6a,25),::hx::paccDynamic)) ));
HXDLIN( 285)			if (::hx::IsNotNull( value )) {
HXLINE( 285)				{
HXLINE( 285)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 285)						buf->flush();
            					}
HXDLIN( 285)					if (::hx::IsNull( buf->b )) {
HXLINE( 285)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_4,1);
            					}
            					else {
HXLINE( 285)						buf->b->push(HX_("; ",85,33,00,00));
            					}
            				}
HXDLIN( 285)				{
HXLINE( 285)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 285)						buf->flush();
            					}
HXDLIN( 285)					if (::hx::IsNull( buf->b )) {
HXLINE( 285)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_5,1);
            					}
            					else {
HXLINE( 285)						buf->b->push(HX_("expires=",09,5e,a9,97));
            					}
            				}
HXDLIN( 285)				{
HXLINE( 285)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 285)						buf->flush();
            					}
HXDLIN( 285)					if (::hx::IsNull( buf->b )) {
HXLINE( 285)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(value));
            					}
            					else {
HXLINE( 285)						::Array< ::String > buf1 = buf->b;
HXDLIN( 285)						buf1->push(::Std_obj::string(value));
            					}
            				}
            			}
            		}
HXLINE( 287)		{
HXLINE( 287)			::String value1 = ( (::String)(options->__Field(HX_("domain",44,b1,80,2d),::hx::paccDynamic)) );
HXDLIN( 287)			if (::hx::IsNotNull( value1 )) {
HXLINE( 287)				{
HXLINE( 287)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 287)						buf->flush();
            					}
HXDLIN( 287)					if (::hx::IsNull( buf->b )) {
HXLINE( 287)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_6,1);
            					}
            					else {
HXLINE( 287)						buf->b->push(HX_("; ",85,33,00,00));
            					}
            				}
HXDLIN( 287)				{
HXLINE( 287)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 287)						buf->flush();
            					}
HXDLIN( 287)					if (::hx::IsNull( buf->b )) {
HXLINE( 287)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_7,1);
            					}
            					else {
HXLINE( 287)						buf->b->push(HX_("domain=",79,6a,1a,a3));
            					}
            				}
HXDLIN( 287)				{
HXLINE( 287)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 287)						buf->flush();
            					}
HXDLIN( 287)					if (::hx::IsNull( buf->b )) {
HXLINE( 287)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(value1));
            					}
            					else {
HXLINE( 287)						::Array< ::String > buf1 = buf->b;
HXDLIN( 287)						buf1->push(::Std_obj::string(value1));
            					}
            				}
            			}
            		}
HXLINE( 288)		{
HXLINE( 288)			::String value2 = ( (::String)(options->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
HXDLIN( 288)			if (::hx::IsNotNull( value2 )) {
HXLINE( 288)				{
HXLINE( 288)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 288)						buf->flush();
            					}
HXDLIN( 288)					if (::hx::IsNull( buf->b )) {
HXLINE( 288)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_8,1);
            					}
            					else {
HXLINE( 288)						buf->b->push(HX_("; ",85,33,00,00));
            					}
            				}
HXDLIN( 288)				{
HXLINE( 288)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 288)						buf->flush();
            					}
HXDLIN( 288)					if (::hx::IsNull( buf->b )) {
HXLINE( 288)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_9,1);
            					}
            					else {
HXLINE( 288)						buf->b->push(HX_("path=",f8,0a,57,bd));
            					}
            				}
HXDLIN( 288)				{
HXLINE( 288)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 288)						buf->flush();
            					}
HXDLIN( 288)					if (::hx::IsNull( buf->b )) {
HXLINE( 288)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(value2));
            					}
            					else {
HXLINE( 288)						::Array< ::String > buf1 = buf->b;
HXDLIN( 288)						buf1->push(::Std_obj::string(value2));
            					}
            				}
            			}
            		}
HXLINE( 290)		if (( (bool)(options->__Field(HX_("secure",77,60,4c,64),::hx::paccDynamic)) )) {
HXLINE( 290)			{
HXLINE( 290)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 290)					buf->flush();
            				}
HXDLIN( 290)				if (::hx::IsNull( buf->b )) {
HXLINE( 290)					buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_10,1);
            				}
            				else {
HXLINE( 290)					buf->b->push(HX_("; ",85,33,00,00));
            				}
            			}
HXDLIN( 290)			{
HXLINE( 290)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 290)					buf->flush();
            				}
HXDLIN( 290)				if (::hx::IsNull( buf->b )) {
HXLINE( 290)					buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_11,1);
            				}
            				else {
HXLINE( 290)					buf->b->push(HX_("secure",77,60,4c,64));
            				}
            			}
HXDLIN( 290)			{
HXLINE( 290)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 290)					buf->flush();
            				}
HXDLIN( 290)				if (::hx::IsNull( buf->b )) {
HXLINE( 290)					buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_12,1);
            				}
            				else {
HXLINE( 290)					buf->b->push(HX_("",00,00,00,00));
            				}
            			}
            		}
HXLINE( 291)		if (::hx::IsNotEq( options->__Field(HX_("scriptable",25,1d,70,4e),::hx::paccDynamic),true )) {
HXLINE( 291)			{
HXLINE( 291)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 291)					buf->flush();
            				}
HXDLIN( 291)				if (::hx::IsNull( buf->b )) {
HXLINE( 291)					buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_13,1);
            				}
            				else {
HXLINE( 291)					buf->b->push(HX_("; ",85,33,00,00));
            				}
            			}
HXDLIN( 291)			{
HXLINE( 291)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 291)					buf->flush();
            				}
HXDLIN( 291)				if (::hx::IsNull( buf->b )) {
HXLINE( 291)					buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_14,1);
            				}
            				else {
HXLINE( 291)					buf->b->push(HX_("HttpOnly",34,6d,bc,00));
            				}
            			}
HXDLIN( 291)			{
HXLINE( 291)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 291)					buf->flush();
            				}
HXDLIN( 291)				if (::hx::IsNull( buf->b )) {
HXLINE( 291)					buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_ce658ce3_15,1);
            				}
            				else {
HXLINE( 291)					buf->b->push(HX_("",00,00,00,00));
            				}
            			}
            		}
HXLINE( 293)		return  ::tink::http::HeaderField_obj::__alloc( HX_CTX ,HX_("set-cookie",2f,35,53,9d),buf->toString());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HeaderField_obj,setCookie,return )


HeaderField_obj::HeaderField_obj()
{
}

::hx::Val HeaderField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HeaderField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setCookie") ) { outValue = setCookie_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HeaderField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HeaderField_obj_sStaticStorageInfo = 0;
#endif

static ::String HeaderField_obj_sMemberFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class HeaderField_obj::__mClass;

static ::String HeaderField_obj_sStaticFields[] = {
	HX_("ofString",48,69,31,a4),
	HX_("setCookie",e6,cd,26,28),
	::String(null())
};

void HeaderField_obj::__register()
{
	HeaderField_obj _hx_dummy;
	HeaderField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.HeaderField",e3,8c,65,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HeaderField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HeaderField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HeaderField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HeaderField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeaderField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeaderField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
