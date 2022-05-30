#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
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
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_std_InputSource
#include <tink/io/std/InputSource.h>
#endif
#ifndef INCLUDED_tink_streams_Empty
#include <tink/streams/Empty.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_ReductionStep
#include <tink/streams/ReductionStep.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
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
#ifndef INCLUDED_tink_streams__Stream_Reducer_Impl_
#include <tink/streams/_Stream/Reducer_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Regrouper_Impl_
#include <tink/streams/_Stream/Regrouper_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_23_dirty,"tink.io._Source.Source_Impl_","dirty",0xcca6af9f,"tink.io._Source.Source_Impl_.dirty","tink/io/Source.hx",23,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_26_get_depleted,"tink.io._Source.Source_Impl_","get_depleted",0x9c2c78e7,"tink.io._Source.Source_Impl_.get_depleted","tink/io/Source.hx",26,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_91_ofInput,"tink.io._Source.Source_Impl_","ofInput",0x3e579c40,"tink.io._Source.Source_Impl_.ofInput","tink/io/Source.hx",91,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_101_chunked,"tink.io._Source.Source_Impl_","chunked",0x6daa70d9,"tink.io._Source.Source_Impl_.chunked","tink/io/Source.hx",101,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_104_concatAll,"tink.io._Source.Source_Impl_","concatAll",0x50f7367a,"tink.io._Source.Source_Impl_.concatAll","tink/io/Source.hx",104,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_107_pipeTo,"tink.io._Source.Source_Impl_","pipeTo",0x101d611c,"tink.io._Source.Source_Impl_.pipeTo","tink/io/Source.hx",107,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_110_append,"tink.io._Source.Source_Impl_","append",0x18911dad,"tink.io._Source.Source_Impl_.append","tink/io/Source.hx",110,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_113_prepend,"tink.io._Source.Source_Impl_","prepend",0x54b7b3db,"tink.io._Source.Source_Impl_.prepend","tink/io/Source.hx",113,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_116_transform,"tink.io._Source.Source_Impl_","transform",0x9c04d779,"tink.io._Source.Source_Impl_.transform","tink/io/Source.hx",116,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_119_skip,"tink.io._Source.Source_Impl_","skip",0xecfda792,"tink.io._Source.Source_Impl_.skip","tink/io/Source.hx",119,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_118_skip,"tink.io._Source.Source_Impl_","skip",0xecfda792,"tink.io._Source.Source_Impl_.skip","tink/io/Source.hx",118,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_131_limit,"tink.io._Source.Source_Impl_","limit",0x67d77ec8,"tink.io._Source.Source_Impl_.limit","tink/io/Source.hx",131,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_129_limit,"tink.io._Source.Source_Impl_","limit",0x67d77ec8,"tink.io._Source.Source_Impl_.limit","tink/io/Source.hx",129,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_146_ofError,"tink.io._Source.Source_Impl_","ofError",0xf363a3fe,"tink.io._Source.Source_Impl_.ofError","tink/io/Source.hx",146,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_149_ofFuture,"tink.io._Source.Source_Impl_","ofFuture",0x25b1ef4d,"tink.io._Source.Source_Impl_.ofFuture","tink/io/Source.hx",149,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_152_ofPromised,"tink.io._Source.Source_Impl_","ofPromised",0x87d8c7f3,"tink.io._Source.Source_Impl_.ofPromised","tink/io/Source.hx",152,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_158_ofChunk,"tink.io._Source.Source_Impl_","ofChunk",0xc5fc9ea3,"tink.io._Source.Source_Impl_.ofChunk","tink/io/Source.hx",158,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_161_ofString,"tink.io._Source.Source_Impl_","ofString",0xc3937fdb,"tink.io._Source.Source_Impl_.ofString","tink/io/Source.hx",161,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_164_ofBytes,"tink.io._Source.Source_Impl_","ofBytes",0x3dd1e0a1,"tink.io._Source.Source_Impl_.ofBytes","tink/io/Source.hx",164,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_167_ofFutureChunk,"tink.io._Source.Source_Impl_","ofFutureChunk",0x8656afe0,"tink.io._Source.Source_Impl_.ofFutureChunk","tink/io/Source.hx",167,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_170_ofFutureString,"tink.io._Source.Source_Impl_","ofFutureString",0x520883fe,"tink.io._Source.Source_Impl_.ofFutureString","tink/io/Source.hx",170,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_173_ofFutureBytes,"tink.io._Source.Source_Impl_","ofFutureBytes",0xfe2bf1de,"tink.io._Source.Source_Impl_.ofFutureBytes","tink/io/Source.hx",173,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_176_ofPromiseChunk,"tink.io._Source.Source_Impl_","ofPromiseChunk",0x4085715c,"tink.io._Source.Source_Impl_.ofPromiseChunk","tink/io/Source.hx",176,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_179_ofPromiseString,"tink.io._Source.Source_Impl_","ofPromiseString",0x80c30f02,"tink.io._Source.Source_Impl_.ofPromiseString","tink/io/Source.hx",179,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_182_ofPromiseBytes,"tink.io._Source.Source_Impl_","ofPromiseBytes",0xb85ab35a,"tink.io._Source.Source_Impl_.ofPromiseBytes","tink/io/Source.hx",182,0x6a783477)
HX_LOCAL_STACK_FRAME(_hx_pos_874a30c36e3bdfa6_20_boot,"tink.io._Source.Source_Impl_","boot",0xe1c41545,"tink.io._Source.Source_Impl_.boot","tink/io/Source.hx",20,0x6a783477)
namespace tink{
namespace io{
namespace _Source{

void Source_Impl__obj::__construct() { }

Dynamic Source_Impl__obj::__CreateEmpty() { return new Source_Impl__obj; }

void *Source_Impl__obj::_hx_vtable = 0;

Dynamic Source_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Source_Impl__obj > _hx_result = new Source_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Source_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52c5539d;
}

::Dynamic Source_Impl__obj::EMPTY;

::Dynamic Source_Impl__obj::dirty(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_23_dirty)
HXDLIN(  23)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,dirty,return )

bool Source_Impl__obj::get_depleted(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_26_get_depleted)
HXDLIN(  26)		return ::tink::streams::StreamObject_obj::get_depleted(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,get_depleted,return )

::Dynamic Source_Impl__obj::ofInput(::String name, ::haxe::io::Input input, ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_91_ofInput)
HXLINE(  92)		if (::hx::IsNull( options )) {
HXLINE(  93)			options =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  94)		::Dynamic _hx_tmp = ::tink::io::_Worker::Worker_Impl__obj::ensure( ::Dynamic(options->__Field(HX_("worker",7e,30,9e,c9),::hx::paccDynamic)));
HXDLIN(  94)		 ::Dynamic _g = options->__Field(HX_("chunkSize",ce,cd,77,9f),::hx::paccDynamic);
HXDLIN(  94)		int _hx_tmp1;
HXLINE(  95)		if (::hx::IsNull( _g )) {
HXLINE(  94)			_hx_tmp1 = 65536;
            		}
            		else {
HXLINE(  96)			 ::Dynamic v = _g;
HXLINE(  94)			_hx_tmp1 = ( (int)(v) );
            		}
HXDLIN(  94)		return  ::tink::io::std::InputSource_obj::__alloc( HX_CTX ,name,input,_hx_tmp,::haxe::io::Bytes_obj::alloc(_hx_tmp1),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Source_Impl__obj,ofInput,return )

::Dynamic Source_Impl__obj::chunked(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_101_chunked)
HXDLIN( 101)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,chunked,return )

::Dynamic Source_Impl__obj::concatAll(::Dynamic s){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		::Dynamic _hx_run(::Dynamic res,::Dynamic cur){
            			HX_GC_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_104_concatAll)
HXDLIN( 104)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::ReductionStep_obj::Progress(::tink::_Chunk::Chunk_Impl__obj::concat(res,cur))));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_104_concatAll)
HXDLIN( 104)		::Dynamic _hx_tmp = ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
HXDLIN( 104)		return ::tink::streams::StreamObject_obj::reduce(s,_hx_tmp,::tink::streams::_Stream::Reducer_Impl__obj::ofSafe( ::Dynamic(new _hx_Closure_0())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,concatAll,return )

::Dynamic Source_Impl__obj::pipeTo(::Dynamic this1,::Dynamic target, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_107_pipeTo)
HXDLIN( 107)		return ::tink::io::SinkObject_obj::consume(target,this1,options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Source_Impl__obj,pipeTo,return )

::Dynamic Source_Impl__obj::append(::Dynamic this1,::Dynamic that){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_110_append)
HXDLIN( 110)		return ::tink::streams::StreamObject_obj::append(this1,that);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Source_Impl__obj,append,return )

::Dynamic Source_Impl__obj::prepend(::Dynamic this1,::Dynamic that){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_113_prepend)
HXDLIN( 113)		return ::tink::streams::StreamObject_obj::prepend(this1,that);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Source_Impl__obj,prepend,return )

::Dynamic Source_Impl__obj::transform(::Dynamic this1,::Dynamic transformer){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_116_transform)
HXDLIN( 116)		return ::tink::io::Transformer_obj::transform(transformer,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Source_Impl__obj,transform,return )

::Dynamic Source_Impl__obj::skip(::Dynamic this1,int len){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< int >,len1) HXARGC(1)
            		 ::tink::streams::RegroupResult _hx_run(::Array< ::Dynamic> chunks){
            			HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_119_skip)
HXLINE( 120)			::Dynamic chunk = chunks->__get(0);
HXLINE( 121)			if ((len1->__get(0) <= 0)) {
HXLINE( 121)				return ::tink::streams::RegroupResult_obj::Converted(::tink::streams::_Stream::Stream_Impl__obj::single(chunk),null());
            			}
HXLINE( 122)			int length = ::tink::chunk::ChunkObject_obj::getLength(chunk);
HXLINE( 123)			::Dynamic out;
HXDLIN( 123)			if ((len1->__get(0) < length)) {
HXLINE( 123)				out = ::tink::streams::_Stream::Stream_Impl__obj::single(::tink::chunk::ChunkObject_obj::slice(chunk,len1->__get(0),length));
            			}
            			else {
HXLINE( 123)				out = ::tink::streams::Empty_obj::inst;
            			}
HXDLIN( 123)			 ::tink::streams::RegroupResult out1 = ::tink::streams::RegroupResult_obj::Converted(out,null());
HXLINE( 124)			::Array< int > len = len1;
HXDLIN( 124)			int _hx_tmp = 0;
HXDLIN( 124)			len[_hx_tmp] = (len->__get(_hx_tmp) - length);
HXLINE( 125)			return out1;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_118_skip)
HXDLIN( 118)		::Array< int > len1 = ::Array_obj< int >::__new(1)->init(0,len);
HXLINE( 119)		return ::tink::streams::StreamObject_obj::regroup(this1,::tink::streams::_Stream::Regrouper_Impl__obj::ofIgnoranceSync( ::Dynamic(new _hx_Closure_0(len1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Source_Impl__obj,skip,return )

::Dynamic Source_Impl__obj::limit(::Dynamic this1,int len){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< int >,len1) HXARGC(1)
            		 ::tink::streams::RegroupResult _hx_run(::Array< ::Dynamic> chunks){
            			HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_131_limit)
HXLINE( 132)			if ((len1->__get(0) <= 0)) {
HXLINE( 132)				return ::tink::streams::RegroupResult_obj::Terminated(::haxe::ds::Option_obj::None_dyn());
            			}
HXLINE( 133)			::Dynamic chunk = chunks->__get(0);
HXLINE( 134)			int length = ::tink::chunk::ChunkObject_obj::getLength(chunk);
HXLINE( 135)			 ::tink::streams::RegroupResult out;
HXLINE( 136)			if ((len1->__get(0) == length)) {
HXLINE( 135)				out = ::tink::streams::RegroupResult_obj::Terminated(::haxe::ds::Option_obj::Some(::tink::streams::_Stream::Stream_Impl__obj::single(chunk)));
            			}
            			else {
HXLINE( 139)				::Dynamic out1;
HXDLIN( 139)				if ((len1->__get(0) < length)) {
HXLINE( 139)					out1 = ::tink::chunk::ChunkObject_obj::slice(chunk,0,len1->__get(0));
            				}
            				else {
HXLINE( 139)					out1 = chunk;
            				}
HXLINE( 135)				out = ::tink::streams::RegroupResult_obj::Converted(::tink::streams::_Stream::Stream_Impl__obj::single(out1),null());
            			}
HXLINE( 140)			::Array< int > len = len1;
HXDLIN( 140)			int _hx_tmp = 0;
HXDLIN( 140)			len[_hx_tmp] = (len->__get(_hx_tmp) - length);
HXLINE( 141)			return out;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_129_limit)
HXDLIN( 129)		::Array< int > len1 = ::Array_obj< int >::__new(1)->init(0,len);
HXLINE( 130)		if ((len1->__get(0) == 0)) {
HXLINE( 130)			return ::tink::io::_Source::Source_Impl__obj::EMPTY;
            		}
HXLINE( 131)		return ::tink::streams::StreamObject_obj::regroup(this1,::tink::streams::_Stream::Regrouper_Impl__obj::ofIgnoranceSync( ::Dynamic(new _hx_Closure_0(len1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Source_Impl__obj,limit,return )

::Dynamic Source_Impl__obj::ofError( ::tink::core::TypedError e){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_146_ofError)
HXDLIN( 146)		return ::tink::streams::_Stream::Stream_Impl__obj::ofError(e);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofError,return )

::Dynamic Source_Impl__obj::ofFuture(::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_149_ofFuture)
HXDLIN( 149)		return ::tink::streams::_Stream::Stream_Impl__obj::future(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofFuture,return )

::Dynamic Source_Impl__obj::ofPromised(::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_152_ofPromised)
HXDLIN( 152)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 153)					::Dynamic s = o->_hx_getObject(0);
HXDLIN( 153)					return s;
            				}
            				break;
            				case (int)1: {
HXLINE( 154)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN( 154)					return ::tink::io::_Source::Source_Impl__obj::ofError(e);
            				}
            				break;
            			}
HXLINE( 152)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_152_ofPromised)
HXDLIN( 152)		return ::tink::streams::_Stream::Stream_Impl__obj::future(::tink::core::_Future::Future_Impl__obj::map(p, ::Dynamic(new _hx_Closure_0()),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofPromised,return )

::Dynamic Source_Impl__obj::ofChunk(::Dynamic chunk){
            	HX_GC_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_158_ofChunk)
HXDLIN( 158)		return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,chunk));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofChunk,return )

::Dynamic Source_Impl__obj::ofString(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_161_ofString)
HXDLIN( 161)		return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(s,null()))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofString,return )

::Dynamic Source_Impl__obj::ofBytes( ::haxe::io::Bytes b){
            	HX_GC_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_164_ofBytes)
HXDLIN( 164)		return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(b)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofBytes,return )

::Dynamic Source_Impl__obj::ofFutureChunk(::Dynamic chunk){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_167_ofFutureChunk)
HXDLIN( 167)		return ::tink::io::_Source::Source_Impl__obj::ofFuture(::tink::core::_Future::Future_Impl__obj::map(chunk,::tink::io::_Source::Source_Impl__obj::ofChunk_dyn(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofFutureChunk,return )

::Dynamic Source_Impl__obj::ofFutureString(::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_170_ofFutureString)
HXDLIN( 170)		return ::tink::io::_Source::Source_Impl__obj::ofFuture(::tink::core::_Future::Future_Impl__obj::map(s,::tink::io::_Source::Source_Impl__obj::ofString_dyn(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofFutureString,return )

::Dynamic Source_Impl__obj::ofFutureBytes(::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_173_ofFutureBytes)
HXDLIN( 173)		return ::tink::io::_Source::Source_Impl__obj::ofFuture(::tink::core::_Future::Future_Impl__obj::map(b,::tink::io::_Source::Source_Impl__obj::ofBytes_dyn(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofFutureBytes,return )

::Dynamic Source_Impl__obj::ofPromiseChunk(::Dynamic chunk){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_176_ofPromiseChunk)
HXDLIN( 176)		return ::tink::io::_Source::Source_Impl__obj::ofPromised(::tink::core::_Promise::Promise_Impl__obj::next(chunk,::tink::core::_Promise::Next_Impl__obj::ofSafeSync(::tink::io::_Source::Source_Impl__obj::ofChunk_dyn()),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofPromiseChunk,return )

::Dynamic Source_Impl__obj::ofPromiseString(::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_179_ofPromiseString)
HXDLIN( 179)		return ::tink::io::_Source::Source_Impl__obj::ofPromised(::tink::core::_Promise::Promise_Impl__obj::next(s,::tink::core::_Promise::Next_Impl__obj::ofSafeSync(::tink::io::_Source::Source_Impl__obj::ofString_dyn()),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofPromiseString,return )

::Dynamic Source_Impl__obj::ofPromiseBytes(::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_182_ofPromiseBytes)
HXDLIN( 182)		return ::tink::io::_Source::Source_Impl__obj::ofPromised(::tink::core::_Promise::Promise_Impl__obj::next(b,::tink::core::_Promise::Next_Impl__obj::ofSafeSync(::tink::io::_Source::Source_Impl__obj::ofBytes_dyn()),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Source_Impl__obj,ofPromiseBytes,return )


Source_Impl__obj::Source_Impl__obj()
{
}

bool Source_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skip") ) { outValue = skip_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { outValue = dirty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"limit") ) { outValue = limit_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pipeTo") ) { outValue = pipeTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofInput") ) { outValue = ofInput_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"chunked") ) { outValue = chunked_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"prepend") ) { outValue = prepend_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofError") ) { outValue = ofError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofChunk") ) { outValue = ofChunk_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofBytes") ) { outValue = ofBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofFuture") ) { outValue = ofFuture_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"concatAll") ) { outValue = concatAll_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofPromised") ) { outValue = ofPromised_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_depleted") ) { outValue = get_depleted_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ofFutureChunk") ) { outValue = ofFutureChunk_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofFutureBytes") ) { outValue = ofFutureBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ofFutureString") ) { outValue = ofFutureString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofPromiseChunk") ) { outValue = ofPromiseChunk_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofPromiseBytes") ) { outValue = ofPromiseBytes_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ofPromiseString") ) { outValue = ofPromiseString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Source_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Source_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Source_Impl__obj::EMPTY,HX_("EMPTY",6d,72,c8,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Source_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Source_Impl__obj::EMPTY,"EMPTY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Source_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Source_Impl__obj::EMPTY,"EMPTY");
};

#endif

::hx::Class Source_Impl__obj::__mClass;

static ::String Source_Impl__obj_sStaticFields[] = {
	HX_("EMPTY",6d,72,c8,ed),
	HX_("dirty",12,50,d0,d9),
	HX_("get_depleted",d4,1c,20,af),
	HX_("ofInput",73,7f,80,21),
	HX_("chunked",0c,54,d3,50),
	HX_("concatAll",6d,8c,85,fa),
	HX_("pipeTo",49,25,60,87),
	HX_("append",da,e1,d3,8f),
	HX_("prepend",0e,97,e0,37),
	HX_("transform",6c,2d,93,45),
	HX_("skip",7f,16,55,4c),
	HX_("limit",3b,1f,01,75),
	HX_("ofError",31,87,8c,d6),
	HX_("ofFuture",ba,d8,4f,06),
	HX_("ofPromised",a0,a6,d5,3a),
	HX_("ofChunk",d6,81,25,a9),
	HX_("ofString",48,69,31,a4),
	HX_("ofBytes",d4,c3,fa,20),
	HX_("ofFutureChunk",53,7b,92,08),
	HX_("ofFutureString",2b,bd,1e,c4),
	HX_("ofFutureBytes",51,bd,67,80),
	HX_("ofPromiseChunk",89,aa,9b,b2),
	HX_("ofPromiseString",35,dd,1e,e2),
	HX_("ofPromiseBytes",87,ec,70,2a),
	::String(null())
};

void Source_Impl__obj::__register()
{
	Source_Impl__obj _hx_dummy;
	Source_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Source.Source_Impl_",3b,68,7b,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Source_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Source_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Source_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Source_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Source_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Source_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Source_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Source_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_874a30c36e3bdfa6_20_boot)
HXDLIN(  20)		EMPTY = ::tink::streams::Empty_obj::inst;
            	}
}

} // end namespace tink
} // end namespace io
} // end namespace _Source
