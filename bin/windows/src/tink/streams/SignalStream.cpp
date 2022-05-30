#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
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
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Signal_Impl_
#include <tink/core/_Signal/Signal_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_SignalStream
#include <tink/streams/SignalStream.h>
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
#ifndef INCLUDED_tink_streams_Yield
#include <tink/streams/Yield.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2358efcf87df3b07_731_new,"tink.streams.SignalStream","new",0x2116eff1,"tink.streams.SignalStream.new","tink/streams/Stream.hx",731,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_2358efcf87df3b07_730_new,"tink.streams.SignalStream","new",0x2116eff1,"tink.streams.SignalStream.new","tink/streams/Stream.hx",730,0x006f1625)
namespace tink{
namespace streams{

void SignalStream_obj::__construct(::Dynamic signal){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Dynamic,signal) HXARGC(1)
            		 ::tink::streams::Step _hx_run( ::tink::streams::Yield o){
            			HX_GC_STACKFRAME(&_hx_pos_2358efcf87df3b07_731_new)
HXLINE( 731)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 732)					 ::Dynamic data = o->_hx_getObject(0);
HXDLIN( 732)					return ::tink::streams::Step_obj::Link(data, ::tink::streams::SignalStream_obj::__alloc( HX_CTX ,signal));
            				}
            				break;
            				case (int)1: {
HXLINE( 733)					 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 733)					return ::tink::streams::Step_obj::Fail(e);
            				}
            				break;
            				case (int)2: {
HXLINE( 734)					return ::tink::streams::Step_obj::End_dyn();
            				}
            				break;
            			}
HXLINE( 731)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_2358efcf87df3b07_730_new)
HXLINE( 731)		::Dynamic this1 = ::tink::core::_Future::Future_Impl__obj::map(::tink::core::_Signal::Signal_Impl__obj::nextTime(signal,null()), ::Dynamic(new _hx_Closure_0(signal)),null());
HXDLIN( 731)		::tink::core::_Future::FutureObject_obj::eager(this1);
HXLINE( 730)		super::__construct(this1);
            	}

Dynamic SignalStream_obj::__CreateEmpty() { return new SignalStream_obj; }

void *SignalStream_obj::_hx_vtable = 0;

Dynamic SignalStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SignalStream_obj > _hx_result = new SignalStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SignalStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x50a767d2) {
		if (inClassId<=(int)0x1fa49121) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1fa49121;
		} else {
			return inClassId==(int)0x50a767d2;
		}
	} else {
		return inClassId==(int)0x61521c8a;
	}
}


::hx::ObjectPtr< SignalStream_obj > SignalStream_obj::__new(::Dynamic signal) {
	::hx::ObjectPtr< SignalStream_obj > __this = new SignalStream_obj();
	__this->__construct(signal);
	return __this;
}

::hx::ObjectPtr< SignalStream_obj > SignalStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic signal) {
	SignalStream_obj *__this = (SignalStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SignalStream_obj), true, "tink.streams.SignalStream"));
	*(void **)__this = SignalStream_obj::_hx_vtable;
	__this->__construct(signal);
	return __this;
}

SignalStream_obj::SignalStream_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SignalStream_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SignalStream_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SignalStream_obj::__mClass;

void SignalStream_obj::__register()
{
	SignalStream_obj _hx_dummy;
	SignalStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.SignalStream",7f,23,2a,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SignalStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SignalStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SignalStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
