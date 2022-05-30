#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
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
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_HeaderParser
#include <tink/http/HeaderParser.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73ab703e9d8785b9_297_new,"tink.http.HeaderParser","new",0xbbca6c88,"tink.http.HeaderParser.new","tink/http/Header.hx",297,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_73ab703e9d8785b9_313_read,"tink.http.HeaderParser","read",0x97f9522e,"tink.http.HeaderParser.read","tink/http/Header.hx",313,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_73ab703e9d8785b9_347_nextLine,"tink.http.HeaderParser","nextLine",0x96da115f,"tink.http.HeaderParser.nextLine","tink/http/Header.hx",347,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_73ab703e9d8785b9_310_boot,"tink.http.HeaderParser","boot",0x8d6d8b0a,"tink.http.HeaderParser.boot","tink/http/Header.hx",310,0xf5720e67)
namespace tink{
namespace http{

void HeaderParser_obj::__construct( ::Dynamic makeHeader){
            	HX_GC_STACKFRAME(&_hx_pos_73ab703e9d8785b9_297_new)
HXLINE( 301)		this->last = -1;
HXLINE( 306)		this->buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 307)		this->makeHeader = makeHeader;
            	}

Dynamic HeaderParser_obj::__CreateEmpty() { return new HeaderParser_obj; }

void *HeaderParser_obj::_hx_vtable = 0;

Dynamic HeaderParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeaderParser_obj > _hx_result = new HeaderParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HeaderParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3af4a226) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3af4a226;
	} else {
		return inClassId==(int)0x66915863;
	}
}

 ::tink::io::ParseStep HeaderParser_obj::read(int c){
            	HX_STACKFRAME(&_hx_pos_73ab703e9d8785b9_313_read)
HXLINE( 314)		int _g = this->last;
HXDLIN( 314)		switch((int)(c)){
            			case (int)-1: {
HXLINE( 317)				return this->nextLine();
            			}
            			break;
            			case (int)10: {
HXLINE( 314)				if ((_g == 13)) {
HXLINE( 321)					return this->nextLine();
            				}
            				else {
HXLINE( 340)					int other = c;
HXLINE( 342)					this->last = other;
HXLINE( 343)					{
HXLINE( 343)						 ::StringBuf _this = this->buf;
HXDLIN( 343)						if ((other >= 127)) {
HXLINE( 343)							::String x = ::String::fromCharCode(other);
HXDLIN( 343)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 343)								_this->flush();
            							}
HXDLIN( 343)							if (::hx::IsNull( _this->b )) {
HXLINE( 343)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 343)								::Array< ::String > _this1 = _this->b;
HXDLIN( 343)								_this1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE( 343)							if (::hx::IsNull( _this->charBuf )) {
HXLINE( 343)								_this->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 343)							_this->charBuf->push(other);
            						}
            					}
HXLINE( 344)					return ::tink::io::ParseStep_obj::Progressed_dyn();
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 314)				if ((_g == 13)) {
HXLINE( 325)					{
HXLINE( 325)						 ::StringBuf _this = this->buf;
HXDLIN( 325)						int c = this->last;
HXDLIN( 325)						if ((c >= 127)) {
HXLINE( 325)							::String x = ::String::fromCharCode(c);
HXDLIN( 325)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 325)								_this->flush();
            							}
HXDLIN( 325)							if (::hx::IsNull( _this->b )) {
HXLINE( 325)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 325)								::Array< ::String > _this1 = _this->b;
HXDLIN( 325)								_this1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE( 325)							if (::hx::IsNull( _this->charBuf )) {
HXLINE( 325)								_this->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 325)							_this->charBuf->push(c);
            						}
            					}
HXLINE( 326)					return ::tink::io::ParseStep_obj::Progressed_dyn();
            				}
            				else {
HXLINE( 337)					this->last = 13;
HXLINE( 338)					return ::tink::io::ParseStep_obj::Progressed_dyn();
            				}
            			}
            			break;
            			default:{
HXLINE( 314)				if ((_g == 13)) {
HXLINE( 328)					int other = c;
HXLINE( 330)					{
HXLINE( 330)						 ::StringBuf _this = this->buf;
HXDLIN( 330)						int c1 = this->last;
HXDLIN( 330)						if ((c1 >= 127)) {
HXLINE( 330)							::String x = ::String::fromCharCode(c1);
HXDLIN( 330)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 330)								_this->flush();
            							}
HXDLIN( 330)							if (::hx::IsNull( _this->b )) {
HXLINE( 330)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 330)								::Array< ::String > _this1 = _this->b;
HXDLIN( 330)								_this1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE( 330)							if (::hx::IsNull( _this->charBuf )) {
HXLINE( 330)								_this->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 330)							_this->charBuf->push(c1);
            						}
            					}
HXLINE( 331)					{
HXLINE( 331)						 ::StringBuf _this1 = this->buf;
HXDLIN( 331)						if ((other >= 127)) {
HXLINE( 331)							::String x = ::String::fromCharCode(other);
HXDLIN( 331)							if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 331)								_this1->flush();
            							}
HXDLIN( 331)							if (::hx::IsNull( _this1->b )) {
HXLINE( 331)								_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 331)								::Array< ::String > _this = _this1->b;
HXDLIN( 331)								_this->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE( 331)							if (::hx::IsNull( _this1->charBuf )) {
HXLINE( 331)								_this1->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 331)							_this1->charBuf->push(other);
            						}
            					}
HXLINE( 332)					this->last = -1;
HXLINE( 333)					return ::tink::io::ParseStep_obj::Progressed_dyn();
            				}
            				else {
HXLINE( 340)					int other = c;
HXLINE( 342)					this->last = other;
HXLINE( 343)					{
HXLINE( 343)						 ::StringBuf _this = this->buf;
HXDLIN( 343)						if ((other >= 127)) {
HXLINE( 343)							::String x = ::String::fromCharCode(other);
HXDLIN( 343)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 343)								_this->flush();
            							}
HXDLIN( 343)							if (::hx::IsNull( _this->b )) {
HXLINE( 343)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 343)								::Array< ::String > _this1 = _this->b;
HXDLIN( 343)								_this1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE( 343)							if (::hx::IsNull( _this->charBuf )) {
HXLINE( 343)								_this->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 343)							_this->charBuf->push(other);
            						}
            					}
HXLINE( 344)					return ::tink::io::ParseStep_obj::Progressed_dyn();
            				}
            			}
            		}
HXLINE( 314)		return null();
            	}


 ::tink::io::ParseStep HeaderParser_obj::nextLine(){
            	HX_GC_STACKFRAME(&_hx_pos_73ab703e9d8785b9_347_nextLine)
HXLINE( 348)		::String line = this->buf->toString();
HXLINE( 350)		this->buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 351)		this->last = -1;
HXLINE( 354)		if ((line == HX_("",00,00,00,00))) {
HXLINE( 356)			if (::hx::IsNull( this->header )) {
HXLINE( 357)				return ::tink::io::ParseStep_obj::Progressed_dyn();
            			}
            			else {
HXLINE( 359)				return ::tink::io::ParseStep_obj::Done(this->header);
            			}
            		}
            		else {
HXLINE( 361)			if (::hx::IsNull( this->header )) {
HXLINE( 362)				 ::tink::core::Outcome _g = this->makeHeader(line,(this->fields = ::Array_obj< ::Dynamic>::__new(0)));
HXDLIN( 362)				switch((int)(_g->_hx_getIndex())){
            					case (int)0: {
HXLINE( 365)						 ::Dynamic _g1 = _g->_hx_getObject(0);
HXLINE( 363)						if (::hx::IsNull( _g1 )) {
HXLINE( 364)							return ::tink::io::ParseStep_obj::Done((this->header = null()));
            						}
            						else {
HXLINE( 365)							 ::Dynamic v = _g1;
HXLINE( 366)							this->header = v;
HXLINE( 367)							return ::tink::io::ParseStep_obj::Progressed_dyn();
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 368)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE( 369)						return ::tink::io::ParseStep_obj::Failed(e);
            					}
            					break;
            				}
            			}
            			else {
HXLINE( 372)				::Array< ::Dynamic> _hx_tmp = this->fields;
HXDLIN( 372)				_hx_tmp->push(::tink::http::HeaderField_obj::ofString(line));
HXLINE( 373)				return ::tink::io::ParseStep_obj::Progressed_dyn();
            			}
            		}
HXLINE( 354)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HeaderParser_obj,nextLine,return )

 ::tink::io::ParseStep HeaderParser_obj::INVALID;


::hx::ObjectPtr< HeaderParser_obj > HeaderParser_obj::__new( ::Dynamic makeHeader) {
	::hx::ObjectPtr< HeaderParser_obj > __this = new HeaderParser_obj();
	__this->__construct(makeHeader);
	return __this;
}

::hx::ObjectPtr< HeaderParser_obj > HeaderParser_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic makeHeader) {
	HeaderParser_obj *__this = (HeaderParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HeaderParser_obj), true, "tink.http.HeaderParser"));
	*(void **)__this = HeaderParser_obj::_hx_vtable;
	__this->__construct(makeHeader);
	return __this;
}

HeaderParser_obj::HeaderParser_obj()
{
}

void HeaderParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HeaderParser);
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(makeHeader,"makeHeader");
	HX_MARK_END_CLASS();
}

void HeaderParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(fields,"fields");
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(makeHeader,"makeHeader");
}

::hx::Val HeaderParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return ::hx::Val( header ); }
		if (HX_FIELD_EQ(inName,"fields") ) { return ::hx::Val( fields ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextLine") ) { return ::hx::Val( nextLine_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeHeader") ) { return ::hx::Val( makeHeader ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HeaderParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"INVALID") ) { outValue = ( INVALID ); return true; }
	}
	return false;
}

::hx::Val HeaderParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::StringBuf >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeHeader") ) { makeHeader=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HeaderParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"INVALID") ) { INVALID=ioValue.Cast<  ::tink::io::ParseStep >(); return true; }
	}
	return false;
}

void HeaderParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("header",8d,09,00,fd));
	outFields->push(HX_("fields",79,8e,8e,80));
	outFields->push(HX_("buf",33,c3,4a,00));
	outFields->push(HX_("last",56,0a,ad,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HeaderParser_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HeaderParser_obj,header),HX_("header",8d,09,00,fd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HeaderParser_obj,fields),HX_("fields",79,8e,8e,80)},
	{::hx::fsObject /*  ::StringBuf */ ,(int)offsetof(HeaderParser_obj,buf),HX_("buf",33,c3,4a,00)},
	{::hx::fsInt,(int)offsetof(HeaderParser_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HeaderParser_obj,makeHeader),HX_("makeHeader",1b,de,cf,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HeaderParser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::tink::io::ParseStep */ ,(void *) &HeaderParser_obj::INVALID,HX_("INVALID",d7,ae,1b,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HeaderParser_obj_sMemberFields[] = {
	HX_("header",8d,09,00,fd),
	HX_("fields",79,8e,8e,80),
	HX_("buf",33,c3,4a,00),
	HX_("last",56,0a,ad,47),
	HX_("makeHeader",1b,de,cf,4e),
	HX_("read",56,4b,a7,4b),
	HX_("nextLine",87,be,7f,f3),
	::String(null()) };

static void HeaderParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HeaderParser_obj::INVALID,"INVALID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HeaderParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HeaderParser_obj::INVALID,"INVALID");
};

#endif

::hx::Class HeaderParser_obj::__mClass;

static ::String HeaderParser_obj_sStaticFields[] = {
	HX_("INVALID",d7,ae,1b,bb),
	::String(null())
};

void HeaderParser_obj::__register()
{
	HeaderParser_obj _hx_dummy;
	HeaderParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.HeaderParser",96,c8,6f,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HeaderParser_obj::__GetStatic;
	__mClass->mSetStaticField = &HeaderParser_obj::__SetStatic;
	__mClass->mMarkFunc = HeaderParser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HeaderParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HeaderParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HeaderParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HeaderParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeaderParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeaderParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HeaderParser_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_73ab703e9d8785b9_310_boot)
HXDLIN( 310)		INVALID = ::tink::io::ParseStep_obj::Failed( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,HX_("Invalid HTTP header",5c,9c,51,f5),::hx::SourceInfo(HX_("tink/http/Header.hx",67,0e,72,f5),310,HX_("tink.http.HeaderParser",96,c8,6f,37),HX_("INVALID",d7,ae,1b,bb))));
            	}
}

} // end namespace tink
} // end namespace http
