#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
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
#ifndef INCLUDED_tink_core__Promise_Next_Impl_
#include <tink/core/_Promise/Next_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_ParseResult
#include <tink/io/ParseResult.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_Splitter
#include <tink/io/Splitter.h>
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
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_192_all,"tink.io.RealSourceTools","all",0xcc2c9a89,"tink.io.RealSourceTools.all","tink/io/Source.hx",192,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_198_parse,"tink.io.RealSourceTools","parse",0x40315b9b,"tink.io.RealSourceTools.parse","tink/io/Source.hx",198,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_207_split,"tink.io.RealSourceTools","split",0x044ab642,"tink.io.RealSourceTools.split","tink/io/Source.hx",207,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_211_split,"tink.io.RealSourceTools","split",0x044ab642,"tink.io.RealSourceTools.split","tink/io/Source.hx",211,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_215_split,"tink.io.RealSourceTools","split",0x044ab642,"tink.io.RealSourceTools.split","tink/io/Source.hx",215,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_203_split,"tink.io.RealSourceTools","split",0x044ab642,"tink.io.RealSourceTools.split","tink/io/Source.hx",203,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_220_parseStream,"tink.io.RealSourceTools","parseStream",0x8f680a7b,"tink.io.RealSourceTools.parseStream","tink/io/Source.hx",220,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_9bced4a60a0ff5b6_223_idealize,"tink.io.RealSourceTools","idealize",0x22c35077,"tink.io.RealSourceTools.idealize","tink/io/Source.hx",223,0x6a783477)
namespace tink{
namespace io{

void RealSourceTools_obj::__construct() { }

Dynamic RealSourceTools_obj::__CreateEmpty() { return new RealSourceTools_obj; }

void *RealSourceTools_obj::_hx_vtable = 0;

Dynamic RealSourceTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RealSourceTools_obj > _hx_result = new RealSourceTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RealSourceTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x688b0f4a;
}

::Dynamic RealSourceTools_obj::all(::Dynamic s){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::streams::Reduction o){
            			HX_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_192_all)
HXDLIN( 192)			switch((int)(o->_hx_getIndex())){
            				case (int)1: {
HXLINE( 194)					 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 194)					return ::tink::core::Outcome_obj::Failure(e);
            				}
            				break;
            				case (int)2: {
HXLINE( 193)					::Dynamic c = o->_hx_getObject(0);
HXDLIN( 193)					return ::tink::core::Outcome_obj::Success(c);
            				}
            				break;
            			}
HXLINE( 192)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_192_all)
HXDLIN( 192)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::io::_Source::Source_Impl__obj::concatAll(s), ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RealSourceTools_obj,all,return )

::Dynamic RealSourceTools_obj::parse(::Dynamic s,::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::io::ParseResult r){
            			HX_GC_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_198_parse)
HXDLIN( 198)			switch((int)(r->_hx_getIndex())){
            				case (int)0: {
HXLINE( 199)					 ::Dynamic data = r->_hx_getObject(0);
HXDLIN( 199)					::Dynamic rest = r->_hx_getObject(1);
HXDLIN( 199)					 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,data,rest);
HXDLIN( 199)					return ::tink::core::Outcome_obj::Success(this1);
            				}
            				break;
            				case (int)1: {
HXLINE( 200)					::Dynamic _g = r->_hx_getObject(1);
HXDLIN( 200)					 ::tink::core::TypedError e = r->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 200)					return ::tink::core::Outcome_obj::Failure(e);
            				}
            				break;
            				case (int)2: {
HXLINE( 200)					 ::tink::core::TypedError e = r->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 200)					return ::tink::core::Outcome_obj::Failure(e);
            				}
            				break;
            			}
HXLINE( 198)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_198_parse)
HXDLIN( 198)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::io::_StreamParser::StreamParser_Impl__obj::parse(s,p), ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RealSourceTools_obj,parse,return )

 ::Dynamic RealSourceTools_obj::split(::Dynamic src,::Dynamic delim){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Dynamic,src) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::MPair p){
            			HX_GC_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_207_split)
HXLINE( 207)			 ::haxe::ds::Option _g = p->a;
HXDLIN( 207)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 208)					::Dynamic chunk = _g->_hx_getObject(0);
HXDLIN( 208)					return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,chunk));
            				}
            				break;
            				case (int)1: {
HXLINE( 209)					return src;
            				}
            				break;
            			}
HXLINE( 207)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Dynamic,delim) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::MPair p){
            			HX_GC_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_211_split)
HXLINE( 211)			 ::haxe::ds::Option _g = p->a;
HXDLIN( 211)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 212)					::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 212)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(delim)));
            				}
            				break;
            				case (int)1: {
HXLINE( 213)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,404,HX_("Delimiter not found",fc,20,2f,e3),::hx::SourceInfo(HX_("tink/io/Source.hx",77,34,78,6a),213,HX_("tink.io.RealSourceTools",d6,2d,a0,1d),HX_("split",da,ea,6e,81))))));
            				}
            				break;
            			}
HXLINE( 211)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::MPair p){
            			HX_GC_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_215_split)
HXLINE( 215)			return p->b;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_203_split)
HXLINE( 204)		::Dynamic src1 = src;
HXDLIN( 204)		::Dynamic s = ::tink::io::RealSourceTools_obj::parse(src1, ::tink::io::Splitter_obj::__alloc( HX_CTX ,delim));
HXLINE( 207)		::Dynamic _hx_tmp = ::tink::streams::_Stream::Stream_Impl__obj::promise(::tink::core::_Promise::Promise_Impl__obj::next(s,::tink::core::_Promise::Next_Impl__obj::ofSafeSync( ::Dynamic(new _hx_Closure_0(src))),null()));
HXLINE( 211)		::Dynamic _hx_tmp1 = ::tink::core::_Promise::Promise_Impl__obj::next(s, ::Dynamic(new _hx_Closure_1(delim)),null());
HXLINE( 206)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("delimiter",07,07,28,86),_hx_tmp1)
            			->setFixed(1,HX_("before",7f,54,32,9a),_hx_tmp)
            			->setFixed(2,HX_("after",1c,66,a2,1d),::tink::streams::_Stream::Stream_Impl__obj::promise(::tink::core::_Promise::Promise_Impl__obj::next(s,::tink::core::_Promise::Next_Impl__obj::ofSafeSync( ::Dynamic(new _hx_Closure_2())),null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RealSourceTools_obj,split,return )

::Dynamic RealSourceTools_obj::parseStream(::Dynamic s,::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_220_parseStream)
HXDLIN( 220)		return ::tink::io::_StreamParser::StreamParser_Impl__obj::parseStream(s,p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RealSourceTools_obj,parseStream,return )

::Dynamic RealSourceTools_obj::idealize(::Dynamic s, ::Dynamic rescue){
            	HX_STACKFRAME(&_hx_pos_9bced4a60a0ff5b6_223_idealize)
HXDLIN( 223)		return ::tink::streams::StreamObject_obj::idealize(::tink::io::_Source::Source_Impl__obj::chunked(s),rescue);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RealSourceTools_obj,idealize,return )


RealSourceTools_obj::RealSourceTools_obj()
{
}

bool RealSourceTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"split") ) { outValue = split_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idealize") ) { outValue = idealize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseStream") ) { outValue = parseStream_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RealSourceTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RealSourceTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class RealSourceTools_obj::__mClass;

static ::String RealSourceTools_obj_sStaticFields[] = {
	HX_("all",21,f9,49,00),
	HX_("parse",33,90,55,bd),
	HX_("split",da,ea,6e,81),
	HX_("parseStream",13,c1,69,8c),
	HX_("idealize",df,0a,b0,37),
	::String(null())
};

void RealSourceTools_obj::__register()
{
	RealSourceTools_obj _hx_dummy;
	RealSourceTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.RealSourceTools",d6,2d,a0,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RealSourceTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RealSourceTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RealSourceTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RealSourceTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RealSourceTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
