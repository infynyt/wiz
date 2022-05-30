#include <hxcpp.h>

#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
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
#ifndef INCLUDED_tink_io_ParseResult
#include <tink/io/ParseResult.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
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
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams_Step
#include <tink/streams/Step.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_29_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",29,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_36_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",36,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_46_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",46,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_53_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",53,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_45_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",45,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_41_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",41,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_66_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",66,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_80_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",80,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_25_doParse,"tink.io._StreamParser.StreamParser_Impl_","doParse",0x44fb76b5,"tink.io._StreamParser.StreamParser_Impl_.doParse","tink/io/StreamParser.hx",25,0xd33f9d53)
static const bool _hx_array_data_e972117b_9[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_88_parse,"tink.io._StreamParser.StreamParser_Impl_","parse",0x94650900,"tink.io._StreamParser.StreamParser_Impl_.parse","tink/io/StreamParser.hx",88,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_92_parse,"tink.io._StreamParser.StreamParser_Impl_","parse",0x94650900,"tink.io._StreamParser.StreamParser_Impl_.parse","tink/io/StreamParser.hx",92,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_86_parse,"tink.io._StreamParser.StreamParser_Impl_","parse",0x94650900,"tink.io._StreamParser.StreamParser_Impl_.parse","tink/io/StreamParser.hx",86,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_97_parseStream,"tink.io._StreamParser.StreamParser_Impl_","parseStream",0xf51351a0,"tink.io._StreamParser.StreamParser_Impl_.parseStream","tink/io/StreamParser.hx",97,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_100_parseStream,"tink.io._StreamParser.StreamParser_Impl_","parseStream",0xf51351a0,"tink.io._StreamParser.StreamParser_Impl_.parseStream","tink/io/StreamParser.hx",100,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_9b1a752f869763fd_95_parseStream,"tink.io._StreamParser.StreamParser_Impl_","parseStream",0xf51351a0,"tink.io._StreamParser.StreamParser_Impl_.parseStream","tink/io/StreamParser.hx",95,0xd33f9d53)
namespace tink{
namespace io{
namespace _StreamParser{

void StreamParser_Impl__obj::__construct() { }

Dynamic StreamParser_Impl__obj::__CreateEmpty() { return new StreamParser_Impl__obj; }

void *StreamParser_Impl__obj::_hx_vtable = 0;

Dynamic StreamParser_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StreamParser_Impl__obj > _hx_result = new StreamParser_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StreamParser_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18cfe7c1;
}

::Dynamic StreamParser_Impl__obj::doParse(::Dynamic source,::Dynamic p, ::Dynamic consume, ::Dynamic finish){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::chunk::ChunkCursor,cursor) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic source){
            			HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_29_doParse)
HXLINE(  29)			if ((cursor->currentPos < cursor->length)) {
HXLINE(  30)				return ::tink::streams::StreamObject_obj::prepend(source, ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,cursor->right())));
            			}
            			else {
HXLINE(  32)				return source;
            			}
HXLINE(  29)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::tink::chunk::ChunkCursor,cursor) HXARGC(0)
            		::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_36_doParse)
HXLINE(  36)			::Dynamic _g = cursor->flush();
HXLINE(  37)			::Dynamic c = _g;
HXDLIN(  37)			if ((::tink::chunk::ChunkObject_obj::getLength(c) == 0)) {
HXLINE(  37)				return ::tink::io::_Source::Source_Impl__obj::EMPTY;
            			}
            			else {
HXLINE(  38)				::Dynamic c = _g;
HXDLIN(  38)				return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,c));
            			}
HXLINE(  37)			return null();
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_5,::Dynamic,p,::Array< bool >,resume, ::tink::chunk::ChunkCursor,cursor, ::Dynamic,consume) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic chunk){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_4,::Dynamic,p,::Array< bool >,resume, ::tink::chunk::ChunkCursor,cursor, ::Dynamic,consume) HXARGC(1)
            			void _hx_run( ::Dynamic cb){
            				HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_3,::Dynamic,p,::Array< bool >,resume, ::tink::chunk::ChunkCursor,cursor,::Array< ::Dynamic>,next, ::Dynamic,consume, ::Dynamic,cb) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_46_doParse)
HXLINE(  47)					cursor->shift(null());
HXLINE(  48)					int lastPos = cursor->currentPos;
HXLINE(  49)					{
HXLINE(  49)						 ::tink::io::ParseStep _g = ::tink::io::StreamParserObject_obj::progress(p,cursor);
HXDLIN(  49)						switch((int)(_g->_hx_getIndex())){
            							case (int)0: {
HXLINE(  51)								bool _hx_tmp;
HXDLIN(  51)								if ((lastPos != cursor->currentPos)) {
HXLINE(  51)									_hx_tmp = (cursor->currentPos < cursor->length);
            								}
            								else {
HXLINE(  51)									_hx_tmp = false;
            								}
HXDLIN(  51)								if (_hx_tmp) {
HXLINE(  51)									next->__get(0)();
            								}
            								else {
HXLINE(  51)									cb(::tink::streams::Handled_obj::Resume_dyn());
            								}
            							}
            							break;
            							case (int)1: {
            								HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_2,::Array< bool >,resume, ::tink::chunk::ChunkCursor,cursor,::Array< ::Dynamic>,next, ::Dynamic,cb,int,lastPos) HXARGC(1)
            								void _hx_run( ::Dynamic o){
            									HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_53_doParse)
HXLINE(  54)									resume[0] = ( (bool)(o->__Field(HX_("resume",ad,69,84,08),::hx::paccDynamic)) );
HXLINE(  55)									if (resume->__get(0)) {
HXLINE(  56)										bool _hx_tmp;
HXDLIN(  56)										if ((lastPos != cursor->currentPos)) {
HXLINE(  56)											_hx_tmp = (cursor->currentPos < cursor->length);
            										}
            										else {
HXLINE(  56)											_hx_tmp = false;
            										}
HXDLIN(  56)										if (_hx_tmp) {
HXLINE(  56)											next->__get(0)();
            										}
            										else {
HXLINE(  56)											cb(::tink::streams::Handled_obj::Resume_dyn());
            										}
            									}
            									else {
HXLINE(  58)										cb(::tink::streams::Handled_obj::Finish_dyn());
            									}
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE(  52)								 ::Dynamic v = _g->_hx_getObject(0);
HXLINE(  53)								::tink::core::_Future::FutureObject_obj::handle(consume(v), ::Dynamic(new _hx_Closure_2(resume,cursor,next,cb,lastPos)));
            							}
            							break;
            							case (int)2: {
HXLINE(  60)								 ::tink::core::TypedError e = _g->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE(  61)								cb(::tink::streams::Handled_obj::Clog(e));
            							}
            							break;
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_45_doParse)
HXLINE(  46)				::Array< ::Dynamic> next = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN(  46)				next[0] =  ::Dynamic(new _hx_Closure_3(p,resume,cursor,next,consume,cb));
HXLINE(  64)				next->__get(0)();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_41_doParse)
HXLINE(  42)			if ((::tink::chunk::ChunkObject_obj::getLength(chunk) == 0)) {
HXLINE(  42)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Handled_obj::Resume_dyn()));
            			}
HXLINE(  43)			cursor->shift(chunk);
HXLINE(  45)			return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_4(p,resume,cursor,consume)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_7, ::Dynamic,flush,::Dynamic,p, ::Dynamic,finish,::Array< bool >,resume, ::tink::chunk::ChunkCursor,cursor, ::Dynamic,mk, ::Dynamic,consume) HXARGC(1)
            		::Dynamic _hx_run( ::tink::streams::Conclusion c){
            			HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_66_doParse)
HXLINE(  66)			switch((int)(c->_hx_getIndex())){
            				case (int)0: {
HXLINE(  67)					::Dynamic rest = c->_hx_getObject(0);
HXLINE(  68)					 ::Dynamic v = finish();
HXDLIN(  68)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::ParseResult_obj::Parsed(v,mk(rest))));
            				}
            				break;
            				case (int)1: {
HXLINE(  69)					 ::tink::core::TypedError e = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  69)					::Dynamic rest = c->_hx_getObject(1);
HXLINE(  70)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::ParseResult_obj::Invalid(e,mk(rest))));
            				}
            				break;
            				case (int)2: {
HXLINE(  71)					 ::tink::core::TypedError e = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE(  72)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::ParseResult_obj::Broke(e)));
            				}
            				break;
            				case (int)3: {
HXLINE(  73)					if ((cursor->currentPos < cursor->length)) {
HXLINE(  74)						 ::Dynamic v = finish();
HXDLIN(  74)						 ::Dynamic mk1 = mk;
HXDLIN(  74)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::ParseResult_obj::Parsed(v,mk1( ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::_Chunk::Chunk_Impl__obj::EMPTY))))));
            					}
            					else {
HXLINE(  75)						if (!(resume->__get(0))) {
HXLINE(  76)							 ::Dynamic v = finish();
HXDLIN(  76)							return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::ParseResult_obj::Parsed(v,flush())));
            						}
            						else {
HXLINE(  78)							 ::tink::core::Outcome _g = ::tink::io::StreamParserObject_obj::eof(p,cursor);
HXDLIN(  78)							switch((int)(_g->_hx_getIndex())){
            								case (int)0: {
            									HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_6, ::Dynamic,flush, ::Dynamic,finish) HXARGC(1)
            									 ::tink::io::ParseResult _hx_run( ::Dynamic _){
            										HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_80_doParse)
HXLINE(  80)										 ::Dynamic _hx_tmp = finish();
HXDLIN(  80)										return ::tink::io::ParseResult_obj::Parsed(_hx_tmp,flush());
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE(  79)									 ::Dynamic result = _g->_hx_getObject(0);
HXLINE(  80)									return ::tink::core::_Future::Future_Impl__obj::map(consume(result), ::Dynamic(new _hx_Closure_6(flush,finish)),null());
            								}
            								break;
            								case (int)1: {
HXLINE(  81)									 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE(  82)									return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::ParseResult_obj::Invalid(e,flush())));
            								}
            								break;
            							}
            						}
            					}
            				}
            				break;
            			}
HXLINE(  66)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9b1a752f869763fd_25_doParse)
HXLINE(  26)		 ::tink::chunk::ChunkCursor cursor = ::tink::chunk::ChunkObject_obj::getCursor(::tink::_Chunk::Chunk_Impl__obj::EMPTY);
HXLINE(  27)		::Array< bool > resume = ::Array_obj< bool >::fromData( _hx_array_data_e972117b_9,1);
HXLINE(  28)		 ::Dynamic mk =  ::Dynamic(new _hx_Closure_0(cursor));
HXLINE(  35)		 ::Dynamic flush =  ::Dynamic(new _hx_Closure_1(cursor));
HXLINE(  41)		return ::tink::core::_Future::Future_Impl__obj::flatMap(::tink::streams::StreamObject_obj::forEach(source,::tink::streams::_Stream::Handler_Impl__obj::ofUnknown( ::Dynamic(new _hx_Closure_5(p,resume,cursor,consume)))), ::Dynamic(new _hx_Closure_7(flush,p,finish,resume,cursor,mk,consume)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StreamParser_Impl__obj,doParse,return )

::Dynamic StreamParser_Impl__obj::parse(::Dynamic s,::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,res) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic r){
            			HX_GC_STACKFRAME(&_hx_pos_9b1a752f869763fd_88_parse)
HXLINE(  89)			res->set(0,r);
HXLINE(  90)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX , ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("resume",ad,69,84,08),false))));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::cpp::VirtualArray,res) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_9b1a752f869763fd_92_parse)
HXLINE(  92)			return res->__get(0);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_9b1a752f869763fd_86_parse)
HXLINE(  87)		::cpp::VirtualArray res = ::cpp::VirtualArray_obj::__new(1)->init(0,null());
HXLINE(  88)		 ::Dynamic onResult =  ::Dynamic(new _hx_Closure_0(res));
HXLINE(  92)		return ::tink::io::_StreamParser::StreamParser_Impl__obj::doParse(s,p,onResult, ::Dynamic(new _hx_Closure_1(res)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StreamParser_Impl__obj,parse,return )

::Dynamic StreamParser_Impl__obj::parseStream(::Dynamic s,::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,s1,::Dynamic,p,::Array< ::Dynamic>,next) HXARGC(1)
            		void _hx_run( ::Dynamic step){
            			HX_STACKFRAME(&_hx_pos_9b1a752f869763fd_97_parseStream)
HXLINE(  97)			if (::tink::streams::StreamObject_obj::get_depleted(s1->__get(0))) {
HXLINE(  98)				step(::tink::streams::Step_obj::End_dyn());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,s1, ::Dynamic,step,::Array< ::Dynamic>,next) HXARGC(1)
            				void _hx_run( ::tink::io::ParseResult o){
            					HX_STACKFRAME(&_hx_pos_9b1a752f869763fd_100_parseStream)
HXLINE( 100)					switch((int)(o->_hx_getIndex())){
            						case (int)0: {
HXLINE( 101)							 ::Dynamic result = o->_hx_getObject(0);
HXDLIN( 101)							::Dynamic rest = o->_hx_getObject(1);
HXDLIN( 101)							{
HXLINE( 102)								s1[0] = rest;
HXLINE( 103)								 ::Dynamic step1 = step;
HXDLIN( 103)								step1(::tink::streams::Step_obj::Link(result,::tink::streams::Generator_obj::stream(next->__get(0))));
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 104)							::Dynamic _g = o->_hx_getObject(1);
HXDLIN( 104)							{
HXLINE( 104)								 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 104)								step(::tink::streams::Step_obj::Fail(e));
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 104)							 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 104)							step(::tink::streams::Step_obj::Fail(e));
            						}
            						break;
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 100)				::tink::core::_Future::FutureObject_obj::handle(::tink::io::_StreamParser::StreamParser_Impl__obj::parse(s1->__get(0),p), ::Dynamic(new _hx_Closure_0(s1,step,next)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_9b1a752f869763fd_95_parseStream)
HXDLIN(  95)		::Array< ::Dynamic> s1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,s);
HXLINE(  96)		::Array< ::Dynamic> next = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN(  96)		next[0] =  ::Dynamic(new _hx_Closure_1(s1,p,next));
HXDLIN(  96)		return ::tink::streams::Generator_obj::stream(next->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StreamParser_Impl__obj,parseStream,return )


StreamParser_Impl__obj::StreamParser_Impl__obj()
{
}

bool StreamParser_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doParse") ) { outValue = doParse_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseStream") ) { outValue = parseStream_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StreamParser_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StreamParser_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class StreamParser_Impl__obj::__mClass;

static ::String StreamParser_Impl__obj_sStaticFields[] = {
	HX_("doParse",a8,70,82,f0),
	HX_("parse",33,90,55,bd),
	HX_("parseStream",13,c1,69,8c),
	::String(null())
};

void StreamParser_Impl__obj::__register()
{
	StreamParser_Impl__obj _hx_dummy;
	StreamParser_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._StreamParser.StreamParser_Impl_",7b,11,72,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StreamParser_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StreamParser_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StreamParser_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StreamParser_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StreamParser_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace _StreamParser
