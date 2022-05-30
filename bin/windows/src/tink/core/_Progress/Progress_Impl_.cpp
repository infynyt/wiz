#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_CallbackLinkRef
#include <tink/core/CallbackLinkRef.h>
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
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatus
#include <tink/core/ProgressStatus.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatusTools
#include <tink/core/ProgressStatusTools.h>
#endif
#ifndef INCLUDED_tink_core_ProgressTrigger
#include <tink/core/ProgressTrigger.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Callback_LinkPair
#include <tink/core/_Callback/LinkPair.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressValue_Impl_
#include <tink/core/_Progress/ProgressValue_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Progress_Progress_Impl_
#include <tink/core/_Progress/Progress_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_18_listen,"tink.core._Progress.Progress_Impl_","listen",0xa06b9593,"tink.core._Progress.Progress_Impl_.listen","tink/core/Progress.hx",18,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_21_handle,"tink.core._Progress.Progress_Impl_","handle",0x686f50f4,"tink.core._Progress.Progress_Impl_.handle","tink/core/Progress.hx",21,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_24_trigger,"tink.core._Progress.Progress_Impl_","trigger",0xd9012a6c,"tink.core._Progress.Progress_Impl_.trigger","tink/core/Progress.hx",24,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_29_make,"tink.core._Progress.Progress_Impl_","make",0x04e1dc3a,"tink.core._Progress.Progress_Impl_.make","tink/core/Progress.hx",29,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_30_make,"tink.core._Progress.Progress_Impl_","make",0x04e1dc3a,"tink.core._Progress.Progress_Impl_.make","tink/core/Progress.hx",30,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_28_make,"tink.core._Progress.Progress_Impl_","make",0x04e1dc3a,"tink.core._Progress.Progress_Impl_.make","tink/core/Progress.hx",28,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_34_map,"tink.core._Progress.Progress_Impl_","map",0x52ad35d0,"tink.core._Progress.Progress_Impl_.map","tink/core/Progress.hx",34,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_38_asFuture,"tink.core._Progress.Progress_Impl_","asFuture",0x0c9d5b21,"tink.core._Progress.Progress_Impl_.asFuture","tink/core/Progress.hx",38,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_44_promise,"tink.core._Progress.Progress_Impl_","promise",0xab0ba2cf,"tink.core._Progress.Progress_Impl_.promise","tink/core/Progress.hx",44,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_46_promise,"tink.core._Progress.Progress_Impl_","promise",0xab0ba2cf,"tink.core._Progress.Progress_Impl_.promise","tink/core/Progress.hx",46,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_42_promise,"tink.core._Progress.Progress_Impl_","promise",0xab0ba2cf,"tink.core._Progress.Progress_Impl_.promise","tink/core/Progress.hx",42,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_54_flatten,"tink.core._Progress.Progress_Impl_","flatten",0x9a1d80f8,"tink.core._Progress.Progress_Impl_.flatten","tink/core/Progress.hx",54,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_63_future,"tink.core._Progress.Progress_Impl_","future",0x23c0658f,"tink.core._Progress.Progress_Impl_.future","tink/core/Progress.hx",63,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_61_future,"tink.core._Progress.Progress_Impl_","future",0x23c0658f,"tink.core._Progress.Progress_Impl_.future","tink/core/Progress.hx",61,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_67_next,"tink.core._Progress.Progress_Impl_","next",0x058e273f,"tink.core._Progress.Progress_Impl_.next","tink/core/Progress.hx",67,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8bb6abdaee7c8f6_15_boot,"tink.core._Progress.Progress_Impl_","boot",0xfda7267e,"tink.core._Progress.Progress_Impl_.boot","tink/core/Progress.hx",15,0x1a922e1e)
namespace tink{
namespace core{
namespace _Progress{

void Progress_Impl__obj::__construct() { }

Dynamic Progress_Impl__obj::__CreateEmpty() { return new Progress_Impl__obj; }

void *Progress_Impl__obj::_hx_vtable = 0;

Dynamic Progress_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Progress_Impl__obj > _hx_result = new Progress_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Progress_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x051a27e0;
}

 ::tink::core::MPair Progress_Impl__obj::INIT;

::Dynamic Progress_Impl__obj::listen( ::tink::core::_Progress::ProgressObject this1, ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_18_listen)
HXDLIN(  18)		return ::tink::core::_Signal::SignalObject_obj::listen(this1->progressed,cb);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Progress_Impl__obj,listen,return )

::Dynamic Progress_Impl__obj::handle( ::tink::core::_Progress::ProgressObject this1, ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_21_handle)
HXDLIN(  21)		return ::tink::core::_Future::FutureObject_obj::handle(this1->result,cb);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Progress_Impl__obj,handle,return )

 ::tink::core::ProgressTrigger Progress_Impl__obj::trigger(){
            	HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_24_trigger)
HXDLIN(  24)		return  ::tink::core::ProgressTrigger_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Progress_Impl__obj,trigger,return )

 ::tink::core::_Progress::ProgressObject Progress_Impl__obj::make( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,fire) HXARGC(2)
            			void _hx_run(Float value, ::haxe::ds::Option total){
            				HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_29_make)
HXLINE(  29)				 ::Dynamic fire1 = fire;
HXDLIN(  29)				 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,value,total);
HXDLIN(  29)				 ::tink::core::MPair this2 = this1;
HXDLIN(  29)				fire1(::tink::core::ProgressStatus_obj::InProgress(this2));
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::Dynamic result){
            				HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_30_make)
HXLINE(  30)				fire(::tink::core::ProgressStatus_obj::Finished(result));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_28_make)
HXDLIN(  28)			return f( ::Dynamic(new _hx_Closure_0(fire)), ::Dynamic(new _hx_Closure_1(fire)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_28_make)
HXDLIN(  28)		return  ::tink::core::_Progress::SuspendableProgress_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_2(f)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Progress_Impl__obj,make,return )

 ::tink::core::_Progress::ProgressObject Progress_Impl__obj::map( ::tink::core::_Progress::ProgressObject this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		 ::tink::core::ProgressStatus _hx_run( ::tink::core::ProgressStatus s){
            			HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_34_map)
HXDLIN(  34)			return ::tink::core::ProgressStatusTools_obj::map(s,f);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::tink::core::_Progress::ProgressObject,this1, ::Dynamic,f) HXARGC(0)
            		 ::tink::core::ProgressStatus _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_34_map)
HXDLIN(  34)			 ::tink::core::ProgressStatus _hx_tmp = this1->getStatus();
HXDLIN(  34)			return ::tink::core::ProgressStatusTools_obj::map(_hx_tmp,f);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_34_map)
HXDLIN(  34)		return  ::tink::core::_Progress::ProgressObject_obj::__alloc( HX_CTX ,::tink::core::_Signal::Signal_Impl__obj::map(this1->changed, ::Dynamic(new _hx_Closure_0(f)),null()), ::Dynamic(new _hx_Closure_1(this1,f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Progress_Impl__obj,map,return )

::Dynamic Progress_Impl__obj::asFuture( ::tink::core::_Progress::ProgressObject this1){
            	HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_38_asFuture)
HXDLIN(  38)		return this1->result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Progress_Impl__obj,asFuture,return )

 ::tink::core::_Progress::ProgressObject Progress_Impl__obj::promise(::Dynamic v){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Dynamic,v) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::tink::core::CallbackLinkRef,inner, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::tink::core::Outcome o){
            				HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_44_promise)
HXLINE(  44)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,fire) HXARGC(1)
            						void _hx_run( ::tink::core::ProgressStatus s){
            							HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_46_promise)
HXLINE(  46)							 ::Dynamic fire1 = fire;
HXDLIN(  46)							fire1(::tink::core::ProgressStatusTools_obj::map(s,::tink::core::Outcome_obj::Success_dyn()));
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  45)						 ::tink::core::_Progress::ProgressObject p = ( ( ::tink::core::_Progress::ProgressObject)(o->_hx_getObject(0)) );
HXLINE(  46)						::Dynamic this1 = ::tink::core::_Signal::SignalObject_obj::listen(p->changed, ::Dynamic(new _hx_Closure_0(fire)));
HXDLIN(  46)						inner->link = this1;
            					}
            					break;
            					case (int)1: {
HXLINE(  47)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXLINE(  48)						fire(::tink::core::ProgressStatus_obj::Finished(::tink::core::Outcome_obj::Failure(e)));
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_42_promise)
HXLINE(  43)			 ::tink::core::CallbackLinkRef inner =  ::tink::core::CallbackLinkRef_obj::__alloc( HX_CTX );
HXLINE(  44)			::Dynamic this1 = ::tink::core::_Future::FutureObject_obj::handle(v, ::Dynamic(new _hx_Closure_1(inner,fire)));
HXDLIN(  44)			return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,this1,inner);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_42_promise)
HXDLIN(  42)		return  ::tink::core::_Progress::SuspendableProgress_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_2(v)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Progress_Impl__obj,promise,return )

 ::tink::core::_Progress::ProgressObject Progress_Impl__obj::flatten(::Dynamic v){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_54_flatten)
HXDLIN(  54)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  56)					 ::tink::core::Outcome _g = o->_hx_getObject(0);
HXDLIN(  56)					switch((int)(_g->_hx_getIndex())){
            						case (int)0: {
HXLINE(  55)							 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN(  55)							return ::tink::core::Outcome_obj::Success(v);
            						}
            						break;
            						case (int)1: {
HXLINE(  56)							 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXDLIN(  56)							return ::tink::core::Outcome_obj::Failure(e);
            						}
            						break;
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  56)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  56)					return ::tink::core::Outcome_obj::Failure(e);
            				}
            				break;
            			}
HXLINE(  54)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_54_flatten)
HXDLIN(  54)		return ::tink::core::_Progress::Progress_Impl__obj::map(::tink::core::_Progress::Progress_Impl__obj::promise(v), ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Progress_Impl__obj,flatten,return )

 ::tink::core::_Progress::ProgressObject Progress_Impl__obj::future(::Dynamic v){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Dynamic,v) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::tink::core::CallbackLinkRef,inner, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::tink::core::_Progress::ProgressObject p){
            				HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_63_future)
HXLINE(  63)				::Dynamic this1 = ::tink::core::_Signal::SignalObject_obj::listen(p->changed,fire);
HXDLIN(  63)				inner->link = this1;
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_61_future)
HXLINE(  62)			 ::tink::core::CallbackLinkRef inner =  ::tink::core::CallbackLinkRef_obj::__alloc( HX_CTX );
HXLINE(  63)			::Dynamic this1 = ::tink::core::_Future::FutureObject_obj::handle(v, ::Dynamic(new _hx_Closure_0(inner,fire)));
HXDLIN(  63)			return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,this1,inner);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_61_future)
HXDLIN(  61)		return  ::tink::core::_Progress::SuspendableProgress_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(v)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Progress_Impl__obj,future,return )

::Dynamic Progress_Impl__obj::next( ::tink::core::_Progress::ProgressObject this1, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_67_next)
HXDLIN(  67)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1->result,f,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Progress_Impl__obj,next,return )


Progress_Impl__obj::Progress_Impl__obj()
{
}

bool Progress_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { outValue = listen_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"handle") ) { outValue = handle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"future") ) { outValue = future_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { outValue = trigger_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promise") ) { outValue = promise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flatten") ) { outValue = flatten_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"asFuture") ) { outValue = asFuture_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Progress_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Progress_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::MPair */ ,(void *) &Progress_Impl__obj::INIT,HX_("INIT",10,03,7c,30)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Progress_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_Impl__obj::INIT,"INIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Progress_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_Impl__obj::INIT,"INIT");
};

#endif

::hx::Class Progress_Impl__obj::__mClass;

static ::String Progress_Impl__obj_sStaticFields[] = {
	HX_("INIT",10,03,7c,30),
	HX_("listen",47,c8,f9,ef),
	HX_("handle",a8,83,fd,b7),
	HX_("trigger",38,55,df,25),
	HX_("make",ee,39,56,48),
	HX_("map",9c,0a,53,00),
	HX_("asFuture",d5,a2,24,02),
	HX_("promise",9b,cd,e9,f7),
	HX_("flatten",c4,ab,fb,e6),
	HX_("future",43,98,4e,73),
	HX_("next",f3,84,02,49),
	::String(null())
};

void Progress_Impl__obj::__register()
{
	Progress_Impl__obj _hx_dummy;
	Progress_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Progress.Progress_Impl_",a2,e1,03,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Progress_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Progress_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Progress_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Progress_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Progress_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Progress_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Progress_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Progress_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8bb6abdaee7c8f6_15_boot)
HXDLIN(  15)		INIT = ::tink::core::_Progress::ProgressValue_Impl__obj::ZERO;
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Progress
