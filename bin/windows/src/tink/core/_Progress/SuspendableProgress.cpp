#include <hxcpp.h>

#ifndef INCLUDED_tink_core_AlreadyDisposed
#include <tink/core/AlreadyDisposed.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatus
#include <tink/core/ProgressStatus.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressValue_Impl_
#include <tink/core/_Progress/ProgressValue_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Progress_SuspendableProgress
#include <tink/core/_Progress/SuspendableProgress.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Signal_Impl_
#include <tink/core/_Signal/Signal_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Suspendable
#include <tink/core/_Signal/Suspendable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_def99dae01379be2_89_new,"tink.core._Progress.SuspendableProgress","new",0x97fc0b20,"tink.core._Progress.SuspendableProgress.new","tink/core/Progress.hx",89,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_def99dae01379be2_74_new,"tink.core._Progress.SuspendableProgress","new",0x97fc0b20,"tink.core._Progress.SuspendableProgress.new","tink/core/Progress.hx",74,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_def99dae01379be2_83_new,"tink.core._Progress.SuspendableProgress","new",0x97fc0b20,"tink.core._Progress.SuspendableProgress.new","tink/core/Progress.hx",83,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_def99dae01379be2_84_new,"tink.core._Progress.SuspendableProgress","new",0x97fc0b20,"tink.core._Progress.SuspendableProgress.new","tink/core/Progress.hx",84,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_def99dae01379be2_73_noop,"tink.core._Progress.SuspendableProgress","noop",0x649540e2,"tink.core._Progress.SuspendableProgress.noop","tink/core/Progress.hx",73,0x1a922e1e)
namespace tink{
namespace core{
namespace _Progress{

void SuspendableProgress_obj::__construct( ::Dynamic wakeup, ::tink::core::ProgressStatus status){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3,::Array< ::Dynamic>,status1) HXARGC(0)
            		 ::tink::core::ProgressStatus _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_def99dae01379be2_89_new)
HXLINE(  89)			return status1->__get(0).StaticCast<  ::tink::core::ProgressStatus >();
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_def99dae01379be2_74_new)
HXDLIN(  74)		::Array< ::Dynamic> status1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,status);
HXLINE(  75)		if (::hx::IsNull( status1->__get(0).StaticCast<  ::tink::core::ProgressStatus >() )) {
HXLINE(  76)			status1[0] = ::tink::core::ProgressStatus_obj::InProgress(::tink::core::_Progress::ProgressValue_Impl__obj::ZERO);
            		}
HXLINE(  77)		::Array< ::Dynamic> disposable = ::Array_obj< ::Dynamic>::__new(1)->init(0,::tink::core::AlreadyDisposed_obj::INST);
HXLINE(  78)		::Dynamic changed;
HXDLIN(  78)		switch((int)(status1->__get(0).StaticCast<  ::tink::core::ProgressStatus >()->_hx_getIndex())){
            			case (int)0: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,wakeup,::Array< ::Dynamic>,status1) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic fire){
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,fire,::Array< ::Dynamic>,status1) HXARGC(1)
            					void _hx_run( ::tink::core::ProgressStatus s){
            						HX_STACKFRAME(&_hx_pos_def99dae01379be2_83_new)
HXLINE(  83)						 ::Dynamic fire1 = fire;
HXDLIN(  83)						fire1((status1[0] = s));
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_STACKFRAME(&_hx_pos_def99dae01379be2_83_new)
HXLINE(  83)					return wakeup( ::Dynamic(new _hx_Closure_0(fire,status1)));
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,disposable) HXARGC(1)
            				void _hx_run(::Dynamic d){
            					HX_STACKFRAME(&_hx_pos_def99dae01379be2_84_new)
HXLINE(  84)					disposable[0] = d;
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  81)				 ::tink::core::MPair _g = status1->__get(0).StaticCast<  ::tink::core::ProgressStatus >()->_hx_getObject(0).StaticCast<  ::tink::core::MPair >();
HXLINE(  82)				::Dynamic this1 =  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(wakeup,status1)), ::Dynamic(new _hx_Closure_2(disposable)));
HXLINE(  78)				changed = this1;
            			}
            			break;
            			case (int)1: {
HXLINE(  79)				 ::Dynamic _g = status1->__get(0).StaticCast<  ::tink::core::ProgressStatus >()->_hx_getObject(0);
HXLINE(  78)				changed = ::tink::core::_Signal::Signal_Impl__obj::dead();
            			}
            			break;
            		}
HXLINE(  87)		super::__construct(changed, ::Dynamic(new _hx_Closure_3(status1)));
            	}

Dynamic SuspendableProgress_obj::__CreateEmpty() { return new SuspendableProgress_obj; }

void *SuspendableProgress_obj::_hx_vtable = 0;

Dynamic SuspendableProgress_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SuspendableProgress_obj > _hx_result = new SuspendableProgress_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SuspendableProgress_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0264de1f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0264de1f;
	} else {
		return inClassId==(int)0x320f7dcc;
	}
}

 ::Dynamic SuspendableProgress_obj::noop( ::Dynamic _, ::Dynamic _1){
            	HX_STACKFRAME(&_hx_pos_def99dae01379be2_73_noop)
HXDLIN(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(SuspendableProgress_obj,noop,return )


::hx::ObjectPtr< SuspendableProgress_obj > SuspendableProgress_obj::__new( ::Dynamic wakeup, ::tink::core::ProgressStatus status) {
	::hx::ObjectPtr< SuspendableProgress_obj > __this = new SuspendableProgress_obj();
	__this->__construct(wakeup,status);
	return __this;
}

::hx::ObjectPtr< SuspendableProgress_obj > SuspendableProgress_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic wakeup, ::tink::core::ProgressStatus status) {
	SuspendableProgress_obj *__this = (SuspendableProgress_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SuspendableProgress_obj), true, "tink.core._Progress.SuspendableProgress"));
	*(void **)__this = SuspendableProgress_obj::_hx_vtable;
	__this->__construct(wakeup,status);
	return __this;
}

SuspendableProgress_obj::SuspendableProgress_obj()
{
}

::hx::Val SuspendableProgress_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"noop") ) { return ::hx::Val( noop_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SuspendableProgress_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SuspendableProgress_obj_sStaticStorageInfo = 0;
#endif

static ::String SuspendableProgress_obj_sMemberFields[] = {
	HX_("noop",a2,13,0a,49),
	::String(null()) };

::hx::Class SuspendableProgress_obj::__mClass;

void SuspendableProgress_obj::__register()
{
	SuspendableProgress_obj _hx_dummy;
	SuspendableProgress_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Progress.SuspendableProgress",2e,3b,98,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SuspendableProgress_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SuspendableProgress_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SuspendableProgress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SuspendableProgress_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Progress
