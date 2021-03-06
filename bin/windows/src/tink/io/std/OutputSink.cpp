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
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
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
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_io_PipeResultTools
#include <tink/io/PipeResultTools.h>
#endif
#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_std_OutputSink
#include <tink/io/std/OutputSink.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d8668291d8acf493_14_new,"tink.io.std.OutputSink","new",0x9a2e5f7d,"tink.io.std.OutputSink.new","tink/io/std/OutputSink.hx",14,0x92558752)
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_29_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",29,0x92558752)
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_32_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",32,0x92558752)
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_48_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",48,0x92558752)
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_23_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",23,0x92558752)
static const int _hx_array_data_2057dd0b_5[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_67_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",67,0x92558752)
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_20_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",20,0x92558752)
HX_LOCAL_STACK_FRAME(_hx_pos_d8668291d8acf493_65_consume,"tink.io.std.OutputSink","consume",0xa7475b59,"tink.io.std.OutputSink.consume","tink/io/std/OutputSink.hx",65,0x92558752)
namespace tink{
namespace io{
namespace std{

void OutputSink_obj::__construct(::String name, ::haxe::io::Output target,::Dynamic worker){
            	HX_STACKFRAME(&_hx_pos_d8668291d8acf493_14_new)
HXLINE(  15)		this->name = name;
HXLINE(  16)		this->target = target;
HXLINE(  17)		this->worker = worker;
            	}

Dynamic OutputSink_obj::__CreateEmpty() { return new OutputSink_obj; }

void *OutputSink_obj::_hx_vtable = 0;

Dynamic OutputSink_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutputSink_obj > _hx_result = new OutputSink_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool OutputSink_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1eacaafb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1eacaafb;
	} else {
		return inClassId==(int)0x1efa06a0;
	}
}

::Dynamic OutputSink_obj::consume(::Dynamic source, ::Dynamic options){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4, ::tink::io::std::OutputSink,_gthis,::Array< ::Dynamic>,rest) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic c){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::tink::io::std::OutputSink,_gthis,::Array< ::Dynamic>,rest,::Dynamic,c) HXARGC(1)
            			void _hx_run( ::Dynamic cb){
            				HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_2, ::tink::io::std::OutputSink,_gthis,::Array< ::Dynamic>,rest, ::haxe::io::Bytes,bytes, ::Dynamic,cb,::Array< ::Dynamic>,write,::Array< int >,pos) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_d8668291d8acf493_29_consume)
HXLINE(  29)					if ((pos->__get(0) == bytes->length)) {
HXLINE(  29)						cb(::tink::streams::Handled_obj::Resume_dyn());
            					}
            					else {
            						HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::tink::io::std::OutputSink,_gthis, ::haxe::io::Bytes,bytes,::Array< int >,pos) HXARGC(0)
            						 ::tink::core::Outcome _hx_run(){
            							HX_STACKFRAME(&_hx_pos_d8668291d8acf493_32_consume)
HXLINE(  32)							try {
            								HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  33)								return ::tink::core::Outcome_obj::Success(_gthis->target->writeBytes(bytes,pos->__get(0),(bytes->length - pos->__get(0))));
            							} catch( ::Dynamic _hx_e) {
            								if (_hx_e.IsClass<  ::Dynamic >() ){
            									HX_STACK_BEGIN_CATCH
            									 ::Dynamic _g = _hx_e;
HXLINE(  35)									{
HXLINE(  35)										null();
            									}
HXDLIN(  35)									 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  32)									if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE(  36)										return ::tink::core::Outcome_obj::Success(-1);
            									}
            									else {
HXLINE(  32)										if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Error >())) {
HXLINE(  38)											 ::haxe::io::Error e = _g1;
HXDLIN(  38)											if ((e->_hx_getIndex() == 0)) {
HXLINE(  39)												return ::tink::core::Outcome_obj::Success(0);
            											}
            											else {
HXLINE(  40)												return ::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(null(),(HX_("Error writing to ",89,2f,c5,6d) + _gthis->name),e,::hx::SourceInfo(HX_("tink/io/std/OutputSink.hx",52,87,55,92),40,HX_("tink.io.std.OutputSink",0b,dd,57,20),HX_("consume",bc,79,da,18))));
            											}
            										}
            										else {
HXLINE(  32)											if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::tink::core::TypedError >())) {
HXLINE(  42)												 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g1) );
HXLINE(  43)												return ::tink::core::Outcome_obj::Failure(e);
            											}
            											else {
HXLINE(  45)												 ::Dynamic e = _g1;
HXLINE(  46)												return ::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(null(),(HX_("Error writing to ",89,2f,c5,6d) + _gthis->name),e,::hx::SourceInfo(HX_("tink/io/std/OutputSink.hx",52,87,55,92),46,HX_("tink.io.std.OutputSink",0b,dd,57,20),HX_("consume",bc,79,da,18))));
            											}
            										}
            									}
            								}
            								else {
            									HX_STACK_DO_THROW(_hx_e);
            								}
            							}
HXLINE(  32)							return null();
            						}
            						HX_END_LOCAL_FUNC0(return)

            						HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,rest, ::haxe::io::Bytes,bytes, ::Dynamic,cb,::Array< ::Dynamic>,write,::Array< int >,pos) HXARGC(1)
            						void _hx_run( ::tink::core::Outcome o){
            							HX_GC_STACKFRAME(&_hx_pos_d8668291d8acf493_48_consume)
HXLINE(  48)							switch((int)(o->_hx_getIndex())){
            								case (int)0: {
HXLINE(  52)									int _g = ( (int)(o->_hx_getObject(0)) );
HXDLIN(  52)									if ((_g == -1)) {
HXLINE(  50)										::Array< ::Dynamic> rest1 = rest;
HXDLIN(  50)										::Dynamic this1 = ::tink::chunk::ByteChunk_obj::of(bytes);
HXDLIN(  50)										rest1[0] = ::tink::chunk::ChunkObject_obj::slice(this1,pos->__get(0),bytes->length);
HXLINE(  51)										cb(::tink::streams::Handled_obj::Finish_dyn());
            									}
            									else {
HXLINE(  52)										int v = _g;
HXDLIN(  52)										{
HXLINE(  53)											::Array< int > pos1 = pos;
HXDLIN(  53)											int ret = 0;
HXDLIN(  53)											pos1[ret] = (pos1->__get(ret) + v);
HXLINE(  54)											if ((pos->__get(0) == bytes->length)) {
HXLINE(  54)												cb(::tink::streams::Handled_obj::Resume_dyn());
            											}
            											else {
HXLINE(  55)												write->__get(0)();
            											}
            										}
            									}
            								}
            								break;
            								case (int)1: {
HXLINE(  56)									 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXLINE(  57)									cb(::tink::streams::Handled_obj::Clog(e));
            								}
            								break;
            							}
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  30)						::Dynamic _gthis1 = _gthis->worker;
HXDLIN(  30)						::tink::core::_Future::FutureObject_obj::handle(::tink::io::_Worker::Worker_Impl__obj::work(_gthis1, ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(_gthis,bytes,pos)),null())), ::Dynamic(new _hx_Closure_1(rest,bytes,cb,write,pos)));
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_STACKFRAME(&_hx_pos_d8668291d8acf493_23_consume)
HXLINE(  25)				::Array< int > pos = ::Array_obj< int >::fromData( _hx_array_data_2057dd0b_5,1);
HXDLIN(  25)				 ::haxe::io::Bytes bytes = ::tink::chunk::ChunkObject_obj::toBytes(c);
HXLINE(  28)				::Array< ::Dynamic> write = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN(  28)				write[0] =  ::Dynamic(new _hx_Closure_2(_gthis,rest,bytes,cb,write,pos));
HXLINE(  61)				write->__get(0)();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_d8668291d8acf493_23_consume)
HXLINE(  23)			return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_3(_gthis,rest,c)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6,::Array< ::Dynamic>,rest) HXARGC(1)
            		 ::tink::io::PipeResult _hx_run( ::tink::streams::Conclusion c){
            			HX_STACKFRAME(&_hx_pos_d8668291d8acf493_67_consume)
HXLINE(  67)			return ::tink::io::PipeResultTools_obj::toResult(c,null(),rest->__get(0));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_d8668291d8acf493_20_consume)
HXDLIN(  20)		 ::tink::io::std::OutputSink _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  21)		::Array< ::Dynamic> rest = ::Array_obj< ::Dynamic>::__new(1)->init(0,::tink::_Chunk::Chunk_Impl__obj::EMPTY);
HXLINE(  23)		::Dynamic ret = ::tink::streams::StreamObject_obj::forEach(source,::tink::streams::_Stream::Handler_Impl__obj::ofUnknown( ::Dynamic(new _hx_Closure_4(_gthis,rest))));
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if (::hx::IsNotNull( options )) {
HXLINE(  64)			_hx_tmp = ( (bool)(options->__Field(HX_("end",db,03,4d,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  64)			_hx_tmp = false;
            		}
HXDLIN(  64)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::tink::io::std::OutputSink,_gthis) HXARGC(1)
            			void _hx_run( ::tink::streams::Conclusion end){
            				HX_STACKFRAME(&_hx_pos_d8668291d8acf493_65_consume)
HXLINE(  65)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  65)					_gthis->target->close();
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(  65)						{
HXLINE(  65)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  65)			::tink::core::_Future::FutureObject_obj::handle(ret, ::Dynamic(new _hx_Closure_5(_gthis)));
            		}
HXLINE(  67)		return ::tink::core::_Future::Future_Impl__obj::map(ret, ::Dynamic(new _hx_Closure_6(rest)),null());
            	}



::hx::ObjectPtr< OutputSink_obj > OutputSink_obj::__new(::String name, ::haxe::io::Output target,::Dynamic worker) {
	::hx::ObjectPtr< OutputSink_obj > __this = new OutputSink_obj();
	__this->__construct(name,target,worker);
	return __this;
}

::hx::ObjectPtr< OutputSink_obj > OutputSink_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::haxe::io::Output target,::Dynamic worker) {
	OutputSink_obj *__this = (OutputSink_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutputSink_obj), true, "tink.io.std.OutputSink"));
	*(void **)__this = OutputSink_obj::_hx_vtable;
	__this->__construct(name,target,worker);
	return __this;
}

OutputSink_obj::OutputSink_obj()
{
}

void OutputSink_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutputSink);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(worker,"worker");
	HX_MARK_END_CLASS();
}

void OutputSink_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(worker,"worker");
}

::hx::Val OutputSink_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"worker") ) { return ::hx::Val( worker ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"consume") ) { return ::hx::Val( consume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OutputSink_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worker") ) { worker=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OutputSink_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("worker",7e,30,9e,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutputSink_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(OutputSink_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(OutputSink_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(OutputSink_obj,worker),HX_("worker",7e,30,9e,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OutputSink_obj_sStaticStorageInfo = 0;
#endif

static ::String OutputSink_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("target",51,f3,ec,86),
	HX_("worker",7e,30,9e,c9),
	HX_("consume",bc,79,da,18),
	::String(null()) };

::hx::Class OutputSink_obj::__mClass;

void OutputSink_obj::__register()
{
	OutputSink_obj _hx_dummy;
	OutputSink_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.std.OutputSink",0b,dd,57,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutputSink_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutputSink_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutputSink_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutputSink_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace std
