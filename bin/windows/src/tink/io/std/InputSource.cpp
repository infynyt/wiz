#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
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
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
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
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_std_InputSource
#include <tink/io/std/InputSource.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_537d19b9570ca5ac_11_new,"tink.io.std.InputSource","new",0x1a084980,"tink.io.std.InputSource.new","tink/io/std/InputSource.hx",11,0xe30c6451)
HX_DEFINE_STACK_FRAME(_hx_pos_537d19b9570ca5ac_17_new,"tink.io.std.InputSource","new",0x1a084980,"tink.io.std.InputSource.new","tink/io/std/InputSource.hx",17,0xe30c6451)
HX_DEFINE_STACK_FRAME(_hx_pos_537d19b9570ca5ac_52_new,"tink.io.std.InputSource","new",0x1a084980,"tink.io.std.InputSource.new","tink/io/std/InputSource.hx",52,0xe30c6451)
HX_DEFINE_STACK_FRAME(_hx_pos_537d19b9570ca5ac_16_new,"tink.io.std.InputSource","new",0x1a084980,"tink.io.std.InputSource.new","tink/io/std/InputSource.hx",16,0xe30c6451)
HX_DEFINE_STACK_FRAME(_hx_pos_537d19b9570ca5ac_8_new,"tink.io.std.InputSource","new",0x1a084980,"tink.io.std.InputSource.new","tink/io/std/InputSource.hx",8,0xe30c6451)
namespace tink{
namespace io{
namespace std{

void InputSource_obj::__construct(::String name, ::haxe::io::Input target,::Dynamic worker, ::haxe::io::Bytes buf,int offset){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,name,::Dynamic,worker, ::haxe::io::Input,target) HXARGC(2)
            		 ::tink::io::std::InputSource _hx_run( ::haxe::io::Bytes buf,int offset){
            			HX_GC_STACKFRAME(&_hx_pos_537d19b9570ca5ac_11_new)
HXLINE(  11)			return  ::tink::io::std::InputSource_obj::__alloc( HX_CTX ,name,target,worker,buf,offset);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_3,::String,name,int,offset,::Dynamic,worker, ::Dynamic,next, ::haxe::io::Bytes,buf, ::haxe::io::Input,target,int,free) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_1,::String,name,int,offset, ::Dynamic,next, ::haxe::io::Bytes,buf,int,free, ::haxe::io::Input,target) HXARGC(0)
            			 ::tink::streams::Step _hx_run(){
            				HX_STACKFRAME(&_hx_pos_537d19b9570ca5ac_17_new)
HXLINE(  17)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  18)					int read = target->readBytes(buf,offset,free);
HXLINE(  20)					if ((read == 0)) {
HXLINE(  21)						::Dynamic this1 = ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
HXDLIN(  21)						return ::tink::streams::Step_obj::Link(this1,next(buf,offset));
            					}
            					else {
HXLINE(  24)						int nextOffset;
HXLINE(  25)						if (((free - read) < 1024)) {
HXLINE(  24)							nextOffset = 0;
            						}
            						else {
HXLINE(  24)							nextOffset = (offset + read);
            						}
HXLINE(  28)						 ::haxe::io::Bytes nextBuf;
HXLINE(  29)						if ((nextOffset == 0)) {
HXLINE(  28)							nextBuf = ::haxe::io::Bytes_obj::alloc(buf->length);
            						}
            						else {
HXLINE(  28)							nextBuf = buf;
            						}
HXLINE(  33)						::Dynamic this1 = ::tink::chunk::ByteChunk_obj::of(buf);
HXDLIN(  33)						::Dynamic this2 = ::tink::chunk::ChunkObject_obj::slice(this1,offset,(offset + read));
HXLINE(  32)						return ::tink::streams::Step_obj::Link(this2,next(nextBuf,nextOffset));
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(  38)						{
HXLINE(  38)							null();
            						}
HXDLIN(  38)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  17)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE(  39)							return ::tink::streams::Step_obj::End_dyn();
            						}
            						else {
HXLINE(  17)							if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Error >())) {
HXLINE(  41)								 ::haxe::io::Error e = _g1;
HXLINE(  42)								switch((int)(e->_hx_getIndex())){
            									case (int)0: {
HXLINE(  44)										::Dynamic this1 = ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
HXDLIN(  44)										return ::tink::streams::Step_obj::Link(this1,next(buf,offset));
            									}
            									break;
            									case (int)3: {
HXLINE(  46)										 ::Dynamic v = e->_hx_getObject(0);
HXDLIN(  46)										if ((::Std_obj::string(v) == HX_("ssl_recv",b9,fd,10,8d))) {
HXLINE(  47)											return ::tink::streams::Step_obj::End_dyn();
            										}
            										else {
HXLINE(  50)											return ::tink::streams::Step_obj::Fail(::tink::core::TypedError_obj::withData(null(),(HX_("Failed to read from ",2e,30,30,a1) + name),e,::hx::SourceInfo(HX_("tink/io/std/InputSource.hx",51,64,0c,e3),50,HX_("tink.io.std.InputSource",8e,c9,4d,83),HX_("new",60,d0,53,00))));
            										}
            									}
            									break;
            									default:{
HXLINE(  50)										return ::tink::streams::Step_obj::Fail(::tink::core::TypedError_obj::withData(null(),(HX_("Failed to read from ",2e,30,30,a1) + name),e,::hx::SourceInfo(HX_("tink/io/std/InputSource.hx",51,64,0c,e3),50,HX_("tink.io.std.InputSource",8e,c9,4d,83),HX_("new",60,d0,53,00))));
            									}
            								}
            							}
            							else {
HXLINE(  17)								HX_STACK_DO_THROW(_g);
            							}
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  17)				return null();
            			}
            			HX_END_LOCAL_FUNC0(return)

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,cb, ::haxe::io::Input,target) HXARGC(1)
            			void _hx_run( ::tink::streams::Step step){
            				HX_GC_STACKFRAME(&_hx_pos_537d19b9570ca5ac_52_new)
HXLINE(  53)				switch((int)(step->_hx_getIndex())){
            					case (int)1: {
HXLINE(  54)						 ::tink::core::TypedError _g = step->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE(  55)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  55)							target->close();
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE(  56)								{
HXLINE(  56)									null();
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE(  55)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  55)							target->close();
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE(  56)								{
HXLINE(  56)									null();
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
HXLINE(  59)				cb(step);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_537d19b9570ca5ac_16_new)
HXLINE(  16)			::Dynamic worker1 = worker;
HXDLIN(  16)			::tink::core::_Future::FutureObject_obj::handle(::tink::io::_Worker::Worker_Impl__obj::work(worker1, ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(name,offset,next,buf,free,target)),null())), ::Dynamic(new _hx_Closure_2(cb,target)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_537d19b9570ca5ac_8_new)
HXLINE(  10)		 ::Dynamic next =  ::Dynamic(new _hx_Closure_0(name,worker,target));
HXLINE(  13)		int free = (buf->length - offset);
HXLINE(  15)		super::__construct(::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_3(name,offset,worker,next,buf,target,free)),true));
            	}

Dynamic InputSource_obj::__CreateEmpty() { return new InputSource_obj; }

void *InputSource_obj::_hx_vtable = 0;

Dynamic InputSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputSource_obj > _hx_result = new InputSource_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool InputSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x50a767d2) {
		if (inClassId<=(int)0x0f2d2d9e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f2d2d9e;
		} else {
			return inClassId==(int)0x50a767d2;
		}
	} else {
		return inClassId==(int)0x61521c8a;
	}
}


::hx::ObjectPtr< InputSource_obj > InputSource_obj::__new(::String name, ::haxe::io::Input target,::Dynamic worker, ::haxe::io::Bytes buf,int offset) {
	::hx::ObjectPtr< InputSource_obj > __this = new InputSource_obj();
	__this->__construct(name,target,worker,buf,offset);
	return __this;
}

::hx::ObjectPtr< InputSource_obj > InputSource_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::haxe::io::Input target,::Dynamic worker, ::haxe::io::Bytes buf,int offset) {
	InputSource_obj *__this = (InputSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputSource_obj), true, "tink.io.std.InputSource"));
	*(void **)__this = InputSource_obj::_hx_vtable;
	__this->__construct(name,target,worker,buf,offset);
	return __this;
}

InputSource_obj::InputSource_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InputSource_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InputSource_obj_sStaticStorageInfo = 0;
#endif

::hx::Class InputSource_obj::__mClass;

void InputSource_obj::__register()
{
	InputSource_obj _hx_dummy;
	InputSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.std.InputSource",8e,c9,4d,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InputSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace std
