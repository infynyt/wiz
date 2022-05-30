#include <hxcpp.h>

#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
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
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_IdealSourceTools
#include <tink/io/IdealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_ParseResult
#include <tink/io/ParseResult.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__StreamParser_StreamParser_Impl_
#include <tink/io/_StreamParser/StreamParser_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Reduction
#include <tink/streams/Reduction.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9b8251c0835d69cc_235_all,"tink.io.IdealSourceTools","all",0xf5d8a70a,"tink.io.IdealSourceTools.all","tink/io/Source.hx",235,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9b8251c0835d69cc_240_parse,"tink.io.IdealSourceTools","parse",0x365a4a5c,"tink.io.IdealSourceTools.parse","tink/io/Source.hx",240,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9b8251c0835d69cc_246_parseStream,"tink.io.IdealSourceTools","parseStream",0xe1a5fffc,"tink.io.IdealSourceTools.parseStream","tink/io/Source.hx",246,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9b8251c0835d69cc_252_split,"tink.io.IdealSourceTools","split",0xfa73a503,"tink.io.IdealSourceTools.split","tink/io/Source.hx",252,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9b8251c0835d69cc_254_split,"tink.io.IdealSourceTools","split",0xfa73a503,"tink.io.IdealSourceTools.split","tink/io/Source.hx",254,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9b8251c0835d69cc_248_split,"tink.io.IdealSourceTools","split",0xfa73a503,"tink.io.IdealSourceTools.split","tink/io/Source.hx",248,0x6a783477)
namespace tink{
namespace io{

void IdealSourceTools_obj::__construct() { }

Dynamic IdealSourceTools_obj::__CreateEmpty() { return new IdealSourceTools_obj; }

void *IdealSourceTools_obj::_hx_vtable = 0;

Dynamic IdealSourceTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IdealSourceTools_obj > _hx_result = new IdealSourceTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IdealSourceTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x186409e3;
}

::Dynamic IdealSourceTools_obj::all(::Dynamic s){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run( ::tink::streams::Reduction o){
            			HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_235_all)
HXLINE( 236)			::Dynamic c = o->_hx_getObject(0);
HXDLIN( 236)			return c;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_235_all)
HXDLIN( 235)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::io::_Source::Source_Impl__obj::concatAll(s), ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IdealSourceTools_obj,all,return )

::Dynamic IdealSourceTools_obj::parse(::Dynamic s,::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::io::ParseResult r){
            			HX_GC_STACKFRAME(&_hx_pos_9b8251c0835d69cc_240_parse)
HXDLIN( 240)			switch((int)(r->_hx_getIndex())){
            				case (int)0: {
HXLINE( 241)					 ::Dynamic data = r->_hx_getObject(0);
HXDLIN( 241)					::Dynamic rest = r->_hx_getObject(1);
HXDLIN( 241)					 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,data,rest);
HXDLIN( 241)					return ::tink::core::Outcome_obj::Success(this1);
            				}
            				break;
            				case (int)1: {
HXLINE( 242)					::Dynamic _g = r->_hx_getObject(1);
HXDLIN( 242)					 ::tink::core::TypedError e = r->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 242)					return ::tink::core::Outcome_obj::Failure(e);
            				}
            				break;
            			}
HXLINE( 240)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_240_parse)
HXDLIN( 240)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::io::_StreamParser::StreamParser_Impl__obj::parse(s,p), ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IdealSourceTools_obj,parse,return )

::Dynamic IdealSourceTools_obj::parseStream(::Dynamic s,::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_246_parseStream)
HXDLIN( 246)		return ::tink::io::_StreamParser::StreamParser_Impl__obj::parseStream(s,p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IdealSourceTools_obj,parseStream,return )

 ::Dynamic IdealSourceTools_obj::split(::Dynamic s,::Dynamic delim){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::TypedError e){
            			HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_252_split)
HXLINE( 252)			return ::tink::io::_Source::Source_Impl__obj::EMPTY;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::TypedError e){
            			HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_254_split)
HXLINE( 254)			return ::tink::io::_Source::Source_Impl__obj::EMPTY;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9b8251c0835d69cc_248_split)
HXLINE( 249)		 ::Dynamic s1 = ::tink::io::RealSourceTools_obj::split(s,delim);
HXLINE( 252)		::Dynamic _hx_tmp = ::tink::io::RealSourceTools_obj::idealize( ::Dynamic(s1->__Field(HX_("before",7f,54,32,9a),::hx::paccDynamic)), ::Dynamic(new _hx_Closure_0()));
HXLINE( 253)		::Dynamic s2 =  ::Dynamic(s1->__Field(HX_("delimiter",07,07,28,86),::hx::paccDynamic));
HXLINE( 251)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("delimiter",07,07,28,86),s2)
            			->setFixed(1,HX_("before",7f,54,32,9a),_hx_tmp)
            			->setFixed(2,HX_("after",1c,66,a2,1d),::tink::io::RealSourceTools_obj::idealize( ::Dynamic(s1->__Field(HX_("after",1c,66,a2,1d),::hx::paccDynamic)), ::Dynamic(new _hx_Closure_1()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IdealSourceTools_obj,split,return )


IdealSourceTools_obj::IdealSourceTools_obj()
{
}

bool IdealSourceTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"split") ) { outValue = split_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseStream") ) { outValue = parseStream_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IdealSourceTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IdealSourceTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class IdealSourceTools_obj::__mClass;

static ::String IdealSourceTools_obj_sStaticFields[] = {
	HX_("all",21,f9,49,00),
	HX_("parse",33,90,55,bd),
	HX_("parseStream",13,c1,69,8c),
	HX_("split",da,ea,6e,81),
	::String(null())
};

void IdealSourceTools_obj::__register()
{
	IdealSourceTools_obj _hx_dummy;
	IdealSourceTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.IdealSourceTools",d7,a5,c9,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IdealSourceTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IdealSourceTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IdealSourceTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IdealSourceTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IdealSourceTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
