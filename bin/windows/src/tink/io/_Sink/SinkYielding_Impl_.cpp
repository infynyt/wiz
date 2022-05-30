#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
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
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
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
#ifndef INCLUDED_tink_io__Sink_Blackhole
#include <tink/io/_Sink/Blackhole.h>
#endif
#ifndef INCLUDED_tink_io__Sink_ErrorSink
#include <tink/io/_Sink/ErrorSink.h>
#endif
#ifndef INCLUDED_tink_io__Sink_FutureSink
#include <tink/io/_Sink/FutureSink.h>
#endif
#ifndef INCLUDED_tink_io__Sink_SinkYielding_Impl_
#include <tink/io/_Sink/SinkYielding_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_std_OutputSink
#include <tink/io/std/OutputSink.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_23_end,"tink.io._Sink.SinkYielding_Impl_","end",0x6ecdd9fd,"tink.io._Sink.SinkYielding_Impl_.end","tink/io/Sink.hx",23,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_24_end,"tink.io._Sink.SinkYielding_Impl_","end",0x6ecdd9fd,"tink.io._Sink.SinkYielding_Impl_.end","tink/io/Sink.hx",24,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_30_dirty,"tink.io._Sink.SinkYielding_Impl_","dirty",0x8acc72b4,"tink.io._Sink.SinkYielding_Impl_.dirty","tink/io/Sink.hx",30,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_33_ofError,"tink.io._Sink.SinkYielding_Impl_","ofError",0xd8d01653,"tink.io._Sink.SinkYielding_Impl_.ofError","tink/io/Sink.hx",33,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_36_ofPromised,"tink.io._Sink.SinkYielding_Impl_","ofPromised",0x606eb8be,"tink.io._Sink.SinkYielding_Impl_.ofPromised","tink/io/Sink.hx",36,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_59_ofOutput,"tink.io._Sink.SinkYielding_Impl_","ofOutput",0x985bfe16,"tink.io._Sink.SinkYielding_Impl_.ofOutput","tink/io/Sink.hx",59,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2f11c85b062cce50_19_boot,"tink.io._Sink.SinkYielding_Impl_","boot",0x83560bd0,"tink.io._Sink.SinkYielding_Impl_.boot","tink/io/Sink.hx",19,0x6103f4ff)
namespace tink{
namespace io{
namespace _Sink{

void SinkYielding_Impl__obj::__construct() { }

Dynamic SinkYielding_Impl__obj::__CreateEmpty() { return new SinkYielding_Impl__obj; }

void *SinkYielding_Impl__obj::_hx_vtable = 0;

Dynamic SinkYielding_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SinkYielding_Impl__obj > _hx_result = new SinkYielding_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SinkYielding_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dd8821a;
}

::Dynamic SinkYielding_Impl__obj::BLACKHOLE;

::Dynamic SinkYielding_Impl__obj::end(::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_2f11c85b062cce50_23_end)
HXDLIN(  23)		if (::tink::io::SinkObject_obj::get_sealed(this1)) {
HXDLIN(  23)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(false)));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::tink::core::Outcome _hx_run( ::tink::io::PipeResult r){
            				HX_GC_STACKFRAME(&_hx_pos_2f11c85b062cce50_24_end)
HXLINE(  24)				switch((int)(r->_hx_getIndex())){
            					case (int)0: {
HXLINE(  25)						return ::tink::core::Outcome_obj::Success(true);
            					}
            					break;
            					case (int)1: {
HXLINE(  25)						 ::Dynamic _g = r->_hx_getObject(0);
HXDLIN(  25)						::Dynamic _g1 = r->_hx_getObject(1);
HXDLIN(  25)						return ::tink::core::Outcome_obj::Success(true);
            					}
            					break;
            					case (int)2: {
HXLINE(  26)						::Dynamic _g = r->_hx_getObject(1);
HXDLIN(  26)						 ::tink::core::TypedError e = r->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  26)						return ::tink::core::Outcome_obj::Failure(e);
            					}
            					break;
            				}
HXLINE(  24)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  24)			return ::tink::core::_Future::Future_Impl__obj::map(::tink::io::SinkObject_obj::consume(this1,::tink::io::_Source::Source_Impl__obj::EMPTY, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("end",db,03,4d,00),true))), ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SinkYielding_Impl__obj,end,return )

::Dynamic SinkYielding_Impl__obj::dirty(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_2f11c85b062cce50_30_dirty)
HXDLIN(  30)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SinkYielding_Impl__obj,dirty,return )

::Dynamic SinkYielding_Impl__obj::ofError( ::tink::core::TypedError e){
            	HX_GC_STACKFRAME(&_hx_pos_2f11c85b062cce50_33_ofError)
HXDLIN(  33)		return  ::tink::io::_Sink::ErrorSink_obj::__alloc( HX_CTX ,e);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SinkYielding_Impl__obj,ofError,return )

::Dynamic SinkYielding_Impl__obj::ofPromised(::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_2f11c85b062cce50_36_ofPromised)
HXDLIN(  36)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  37)					::Dynamic v = o->_hx_getObject(0);
HXDLIN(  37)					return v;
            				}
            				break;
            				case (int)1: {
HXLINE(  38)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  38)					return ::tink::io::_Sink::SinkYielding_Impl__obj::ofError(e);
            				}
            				break;
            			}
HXLINE(  36)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_2f11c85b062cce50_36_ofPromised)
HXDLIN(  36)		return  ::tink::io::_Sink::FutureSink_obj::__alloc( HX_CTX ,::tink::core::_Future::Future_Impl__obj::map(p, ::Dynamic(new _hx_Closure_0()),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SinkYielding_Impl__obj,ofPromised,return )

::Dynamic SinkYielding_Impl__obj::ofOutput(::String name, ::haxe::io::Output target, ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_2f11c85b062cce50_59_ofOutput)
HXDLIN(  59)		::Dynamic _hx_tmp;
HXDLIN(  59)		if (::hx::IsNull( options )) {
HXDLIN(  59)			_hx_tmp = ::tink::io::_Worker::Worker_Impl__obj::get();
            		}
            		else {
HXDLIN(  59)			::Dynamic _g =  ::Dynamic(options->__Field(HX_("worker",7e,30,9e,c9),::hx::paccDynamic));
HXLINE(  60)			if (::hx::IsNull( _g )) {
HXDLIN(  59)				_hx_tmp = ::tink::io::_Worker::Worker_Impl__obj::get();
            			}
            			else {
HXLINE(  61)				::Dynamic w = _g;
HXLINE(  59)				_hx_tmp = w;
            			}
            		}
HXDLIN(  59)		return  ::tink::io::std::OutputSink_obj::__alloc( HX_CTX ,name,target,_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SinkYielding_Impl__obj,ofOutput,return )


SinkYielding_Impl__obj::SinkYielding_Impl__obj()
{
}

bool SinkYielding_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { outValue = end_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { outValue = dirty_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofError") ) { outValue = ofError_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofOutput") ) { outValue = ofOutput_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofPromised") ) { outValue = ofPromised_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SinkYielding_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SinkYielding_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &SinkYielding_Impl__obj::BLACKHOLE,HX_("BLACKHOLE",5f,5a,f4,14)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SinkYielding_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SinkYielding_Impl__obj::BLACKHOLE,"BLACKHOLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SinkYielding_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SinkYielding_Impl__obj::BLACKHOLE,"BLACKHOLE");
};

#endif

::hx::Class SinkYielding_Impl__obj::__mClass;

static ::String SinkYielding_Impl__obj_sStaticFields[] = {
	HX_("BLACKHOLE",5f,5a,f4,14),
	HX_("end",db,03,4d,00),
	HX_("dirty",12,50,d0,d9),
	HX_("ofError",31,87,8c,d6),
	HX_("ofPromised",a0,a6,d5,3a),
	HX_("ofOutput",78,4f,82,9f),
	::String(null())
};

void SinkYielding_Impl__obj::__register()
{
	SinkYielding_Impl__obj _hx_dummy;
	SinkYielding_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Sink.SinkYielding_Impl_",90,fd,a2,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SinkYielding_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SinkYielding_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SinkYielding_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SinkYielding_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SinkYielding_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SinkYielding_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SinkYielding_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SinkYielding_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2f11c85b062cce50_19_boot)
HXDLIN(  19)		BLACKHOLE = ::tink::io::_Sink::Blackhole_obj::inst;
            	}
}

} // end namespace tink
} // end namespace io
} // end namespace _Sink
