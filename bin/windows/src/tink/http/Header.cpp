#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
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
#ifndef INCLUDED_tink_http_ContentType
#include <tink/http/ContentType.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f98482948a03ab7e_70_new,"tink.http.Header","new",0x865074c9,"tink.http.Header.new","tink/http/Header.hx",70,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_81_get,"tink.http.Header","get",0x864b24ff,"tink.http.Header.get","tink/http/Header.hx",81,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_89_byName,"tink.http.Header","byName",0x1a376ef9,"tink.http.Header.byName","tink/http/Header.hx",89,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_102_contentType,"tink.http.Header","contentType",0x38bff1fc,"tink.http.Header.contentType","tink/http/Header.hx",102,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_105_iterator,"tink.http.Header","iterator",0x5ec408e5,"tink.http.Header.iterator","tink/http/Header.hx",105,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_113_concat,"tink.http.Header","concat",0xd3b94c4b,"tink.http.Header.concat","tink/http/Header.hx",113,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_119_getContentLength,"tink.http.Header","getContentLength",0x2e277e80,"tink.http.Header.getContentLength","tink/http/Header.hx",119,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_127_accepts,"tink.http.Header","accepts",0xfaeba154,"tink.http.Header.accepts","tink/http/Header.hx",127,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_125_accepts,"tink.http.Header","accepts",0xfaeba154,"tink.http.Header.accepts","tink/http/Header.hx",125,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_140_get_LINEBREAK,"tink.http.Header","get_LINEBREAK",0xda619dab,"tink.http.Header.get_LINEBREAK","tink/http/Header.hx",140,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_143_toString,"tink.http.Header","toString",0x03988fa3,"tink.http.Header.toString","tink/http/Header.hx",143,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_f98482948a03ab7e_146_headerNotFound,"tink.http.Header","headerNotFound",0x34414113,"tink.http.Header.headerNotFound","tink/http/Header.hx",146,0xf5720e67)
namespace tink{
namespace http{

void Header_obj::__construct(::Array< ::Dynamic> fields){
            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_70_new)
HXDLIN(  70)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  70)		if (::hx::IsNull( fields )) {
HXDLIN(  70)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  72)			::Array< ::Dynamic> v = fields;
HXLINE(  70)			_hx_tmp = v;
            		}
HXDLIN(  70)		this->fields = _hx_tmp;
            	}

Dynamic Header_obj::__CreateEmpty() { return new Header_obj; }

void *Header_obj::_hx_vtable = 0;

Dynamic Header_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Header_obj > _hx_result = new Header_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Header_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4094a9e7;
}

::Array< ::String > Header_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_81_get)
HXDLIN(  81)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  81)		{
HXDLIN(  81)			int _g1 = 0;
HXDLIN(  81)			::Array< ::Dynamic> _g2 = this->fields;
HXDLIN(  81)			while((_g1 < _g2->length)){
HXDLIN(  81)				 ::tink::http::HeaderField f = _g2->__get(_g1).StaticCast<  ::tink::http::HeaderField >();
HXDLIN(  81)				_g1 = (_g1 + 1);
HXDLIN(  81)				if (::hx::IsEq( f->name,name )) {
HXDLIN(  81)					_g->push(f->value);
            				}
            			}
            		}
HXDLIN(  81)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Header_obj,get,return )

 ::tink::core::Outcome Header_obj::byName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_f98482948a03ab7e_89_byName)
HXDLIN(  89)		::Array< ::String > _g = this->get(name);
HXDLIN(  89)		switch((int)(_g->length)){
            			case (int)0: {
HXLINE(  91)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,((HX_("No ",9f,90,3b,00) + name) + HX_(" header found",8f,6f,91,6d)),::hx::SourceInfo(HX_("tink/http/Header.hx",67,0e,72,f5),91,HX_("tink.http.Header",57,5c,5a,bd),HX_("byName",c2,2b,4e,0e))));
            			}
            			break;
            			case (int)1: {
HXLINE(  92)				::String v = _g->__get(0);
HXLINE(  93)				return ::tink::core::Outcome_obj::Success(v);
            			}
            			break;
            			default:{
HXLINE(  94)				::Array< ::String > v = _g;
HXLINE(  95)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,((HX_("Multiple entries for ",b7,75,a3,59) + name) + HX_(" header",ad,e1,ae,2f)),::hx::SourceInfo(HX_("tink/http/Header.hx",67,0e,72,f5),95,HX_("tink.http.Header",57,5c,5a,bd),HX_("byName",c2,2b,4e,0e))));
            			}
            		}
HXLINE(  89)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Header_obj,byName,return )

 ::tink::core::Outcome Header_obj::contentType(){
            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_102_contentType)
HXDLIN( 102)		return ::tink::core::OutcomeTools_obj::map(this->byName(HX_("content-type",8e,f1,71,89)),::tink::http::ContentType_obj::ofString_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Header_obj,contentType,return )

 ::haxe::iterators::ArrayIterator Header_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_f98482948a03ab7e_105_iterator)
HXDLIN( 105)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->fields);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Header_obj,iterator,return )

 ::tink::http::Header Header_obj::concat(::Array< ::Dynamic> fields){
            	HX_GC_STACKFRAME(&_hx_pos_f98482948a03ab7e_113_concat)
HXDLIN( 113)		return  ::tink::http::Header_obj::__alloc( HX_CTX ,this->fields->concat(fields));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Header_obj,concat,return )

 ::tink::core::Outcome Header_obj::getContentLength(){
            	HX_GC_STACKFRAME(&_hx_pos_f98482948a03ab7e_119_getContentLength)
HXDLIN( 119)		 ::tink::core::Outcome _g = this->byName(HX_("content-length",ba,f0,cc,86));
HXDLIN( 119)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 120)				 ::Dynamic _hx_tmp = ::Std_obj::parseInt(( (::String)(_g->_hx_getObject(0)) ));
HXDLIN( 120)				if (::hx::IsNull( _hx_tmp )) {
HXLINE( 120)					return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,HX_("Invalid Content-Length Header",0a,38,79,18),::hx::SourceInfo(HX_("tink/http/Header.hx",67,0e,72,f5),120,HX_("tink.http.Header",57,5c,5a,bd),HX_("getContentLength",89,70,23,df))));
            				}
            				else {
HXLINE( 121)					 ::Dynamic v = _hx_tmp;
HXDLIN( 121)					return ::tink::core::Outcome_obj::Success(v);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 122)				 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXDLIN( 122)				return ::tink::core::Outcome_obj::Failure(e);
            			}
            			break;
            		}
HXLINE( 119)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Header_obj,getContentLength,return )

 ::tink::core::Outcome Header_obj::accepts(::String type){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,prefix,::String,type) HXARGC(1)
            		bool _hx_run(::String v){
            			HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_127_accepts)
HXLINE( 128)			{
HXLINE( 128)				int _g = 0;
HXDLIN( 128)				::Array< ::Dynamic> _g1 = ::tink::http::_Header::HeaderValue_Impl__obj::parse(v);
HXDLIN( 128)				while((_g < _g1->length)){
HXLINE( 128)					 ::Dynamic entry = _g1->__get(_g);
HXDLIN( 128)					_g = (_g + 1);
HXLINE( 129)					bool _hx_tmp;
HXDLIN( 129)					if (::hx::IsNotEq( entry->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic),HX_("*/*",c5,07,20,00) )) {
HXLINE( 129)						_hx_tmp = ::hx::IsEq( entry->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic),type );
            					}
            					else {
HXLINE( 129)						_hx_tmp = true;
            					}
HXDLIN( 129)					if (_hx_tmp) {
HXLINE( 129)						return true;
            					}
HXLINE( 130)					{
HXLINE( 130)						::Array< ::String > _g2 = ( (::String)(entry->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) ).split(HX_("/",2f,00,00,00));
HXDLIN( 130)						if ((_g2->length == 2)) {
HXLINE( 130)							if ((_g2->__get(1) == HX_("*",2a,00,00,00))) {
HXLINE( 131)								::String p = _g2->__get(0);
HXDLIN( 131)								if ((prefix == p)) {
HXLINE( 131)									return true;
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 135)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_125_accepts)
HXLINE( 126)		::String prefix = type.split(HX_("/",2f,00,00,00))->__get(0);
HXLINE( 127)		return ::tink::core::OutcomeTools_obj::map(this->byName(HX_("accept",08,93,06,0b)), ::Dynamic(new _hx_Closure_0(prefix,type)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Header_obj,accepts,return )

::String Header_obj::get_LINEBREAK(){
            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_140_get_LINEBREAK)
HXDLIN( 140)		return HX_("\r\n",5d,0b,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Header_obj,get_LINEBREAK,return )

::String Header_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_143_toString)
HXDLIN( 143)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 143)		{
HXDLIN( 143)			int _g1 = 0;
HXDLIN( 143)			::Array< ::Dynamic> _g2 = this->fields;
HXDLIN( 143)			while((_g1 < _g2->length)){
HXDLIN( 143)				 ::tink::http::HeaderField f = _g2->__get(_g1).StaticCast<  ::tink::http::HeaderField >();
HXDLIN( 143)				_g1 = (_g1 + 1);
HXDLIN( 143)				_g->push(f->toString());
            			}
            		}
HXDLIN( 143)		return ((_g->join(HX_("\r\n",5d,0b,00,00)) + HX_("\r\n",5d,0b,00,00)) + HX_("\r\n",5d,0b,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Header_obj,toString,return )

::String Header_obj::headerNotFound(::String name){
            	HX_STACKFRAME(&_hx_pos_f98482948a03ab7e_146_headerNotFound)
HXDLIN( 146)		return ((HX_("No ",9f,90,3b,00) + name) + HX_(" header found",8f,6f,91,6d));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Header_obj,headerNotFound,return )


::hx::ObjectPtr< Header_obj > Header_obj::__new(::Array< ::Dynamic> fields) {
	::hx::ObjectPtr< Header_obj > __this = new Header_obj();
	__this->__construct(fields);
	return __this;
}

::hx::ObjectPtr< Header_obj > Header_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> fields) {
	Header_obj *__this = (Header_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Header_obj), true, "tink.http.Header"));
	*(void **)__this = Header_obj::_hx_vtable;
	__this->__construct(fields);
	return __this;
}

Header_obj::Header_obj()
{
}

void Header_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Header);
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_END_CLASS();
}

void Header_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fields,"fields");
}

::hx::Val Header_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return ::hx::Val( fields ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName_dyn() ); }
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return ::hx::Val( accepts_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINEBREAK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LINEBREAK() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return ::hx::Val( contentType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_LINEBREAK") ) { return ::hx::Val( get_LINEBREAK_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headerNotFound") ) { return ::hx::Val( headerNotFound_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getContentLength") ) { return ::hx::Val( getContentLength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Header_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Header_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fields",79,8e,8e,80));
	outFields->push(HX_("LINEBREAK",2b,28,12,68));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Header_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Header_obj,fields),HX_("fields",79,8e,8e,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Header_obj_sStaticStorageInfo = 0;
#endif

static ::String Header_obj_sMemberFields[] = {
	HX_("fields",79,8e,8e,80),
	HX_("get",96,80,4e,00),
	HX_("byName",c2,2b,4e,0e),
	HX_("contentType",93,3c,7b,2a),
	HX_("iterator",ee,49,9a,93),
	HX_("concat",14,09,d0,c7),
	HX_("getContentLength",89,70,23,df),
	HX_("accepts",6b,14,ba,9a),
	HX_("get_LINEBREAK",02,fc,75,29),
	HX_("toString",ac,d0,6e,38),
	HX_("headerNotFound",dc,6e,ff,16),
	::String(null()) };

::hx::Class Header_obj::__mClass;

void Header_obj::__register()
{
	Header_obj _hx_dummy;
	Header_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.Header",57,5c,5a,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Header_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Header_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Header_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Header_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
