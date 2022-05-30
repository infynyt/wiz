#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
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
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io__Sink_Blackhole
#include <tink/io/_Sink/Blackhole.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e01c44de1967a202_70_new,"tink.io._Sink.Blackhole","new",0x53f93729,"tink.io._Sink.Blackhole.new","tink/io/Sink.hx",70,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e01c44de1967a202_73_consume,"tink.io._Sink.Blackhole","consume",0x3db57905,"tink.io._Sink.Blackhole.consume","tink/io/Sink.hx",73,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e01c44de1967a202_68_boot,"tink.io._Sink.Blackhole","boot",0x1e300d49,"tink.io._Sink.Blackhole.boot","tink/io/Sink.hx",68,0x6103f4ff)
namespace tink{
namespace io{
namespace _Sink{

void Blackhole_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e01c44de1967a202_70_new)
            	}

Dynamic Blackhole_obj::__CreateEmpty() { return new Blackhole_obj; }

void *Blackhole_obj::_hx_vtable = 0;

Dynamic Blackhole_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Blackhole_obj > _hx_result = new Blackhole_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Blackhole_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efa06a0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1efa06a0;
	} else {
		return inClassId==(int)0x4c349509;
	}
}

::Dynamic Blackhole_obj::consume(::Dynamic source, ::Dynamic options){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_e01c44de1967a202_73_consume)
HXDLIN(  73)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Handled_obj::Resume_dyn()));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::tink::io::PipeResult _hx_run( ::tink::streams::Conclusion o){
            			HX_STACKFRAME(&_hx_pos_e01c44de1967a202_73_consume)
HXDLIN(  73)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  75)					::Dynamic _g = o->_hx_getObject(0);
HXDLIN(  75)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unreachable",14,c9,19,7f)));
            				}
            				break;
            				case (int)2: {
HXLINE(  76)					 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  76)					return ::tink::io::PipeResult_obj::SourceFailed(e);
            				}
            				break;
            				case (int)3: {
HXLINE(  74)					return ::tink::io::PipeResult_obj::AllWritten_dyn();
            				}
            				break;
            			}
HXLINE(  73)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e01c44de1967a202_73_consume)
HXDLIN(  73)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::streams::StreamObject_obj::forEach(source,::tink::streams::_Stream::Handler_Impl__obj::ofSafe( ::Dynamic(new _hx_Closure_0()))), ::Dynamic(new _hx_Closure_1()),null());
            	}


 ::tink::io::_Sink::Blackhole Blackhole_obj::inst;


::hx::ObjectPtr< Blackhole_obj > Blackhole_obj::__new() {
	::hx::ObjectPtr< Blackhole_obj > __this = new Blackhole_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Blackhole_obj > Blackhole_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Blackhole_obj *__this = (Blackhole_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Blackhole_obj), false, "tink.io._Sink.Blackhole"));
	*(void **)__this = Blackhole_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Blackhole_obj::Blackhole_obj()
{
}

::hx::Val Blackhole_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"consume") ) { return ::hx::Val( consume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Blackhole_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
	}
	return false;
}

bool Blackhole_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::tink::io::_Sink::Blackhole >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Blackhole_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Blackhole_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::tink::io::_Sink::Blackhole */ ,(void *) &Blackhole_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Blackhole_obj_sMemberFields[] = {
	HX_("consume",bc,79,da,18),
	::String(null()) };

static void Blackhole_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Blackhole_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Blackhole_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Blackhole_obj::inst,"inst");
};

#endif

::hx::Class Blackhole_obj::__mClass;

static ::String Blackhole_obj_sStaticFields[] = {
	HX_("inst",c6,43,bb,45),
	::String(null())
};

void Blackhole_obj::__register()
{
	Blackhole_obj _hx_dummy;
	Blackhole_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Sink.Blackhole",b7,6e,1a,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Blackhole_obj::__GetStatic;
	__mClass->mSetStaticField = &Blackhole_obj::__SetStatic;
	__mClass->mMarkFunc = Blackhole_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Blackhole_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Blackhole_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Blackhole_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Blackhole_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Blackhole_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Blackhole_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Blackhole_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e01c44de1967a202_68_boot)
HXDLIN(  68)		inst =  ::tink::io::_Sink::Blackhole_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace io
} // end namespace _Sink
