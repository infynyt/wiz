#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_AlreadyDisposed
#include <tink/core/AlreadyDisposed.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_FutureTrigger
#include <tink/core/FutureTrigger.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SignalTrigger
#include <tink/core/SignalTrigger.h>
#endif
#ifndef INCLUDED_tink_core_SimpleLink
#include <tink/core/SimpleLink.h>
#endif
#ifndef INCLUDED_tink_core__Callback_CallbackLink_Impl_
#include <tink/core/_Callback/CallbackLink_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_LinkPair
#include <tink/core/_Callback/LinkPair.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Disposed
#include <tink/core/_Signal/Disposed.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_22__new,"tink.core._Signal.Signal_Impl_","_new",0x7515da8d,"tink.core._Signal.Signal_Impl_._new","tink/core/Signal.hx",22,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_26_handle,"tink.core._Signal.Signal_Impl_","handle",0x6d10ebd4,"tink.core._Signal.Signal_Impl_.handle","tink/core/Signal.hx",26,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_33_map,"tink.core._Signal.Signal_Impl_","map",0x09c00ef0,"tink.core._Signal.Signal_Impl_.map","tink/core/Signal.hx",33,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_40_flatMap,"tink.core._Signal.Signal_Impl_","flatMap",0xa2c5ceb7,"tink.core._Signal.Signal_Impl_.flatMap","tink/core/Signal.hx",40,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_46_filter,"tink.core._Signal.Signal_Impl_","filter",0x3a4887e4,"tink.core._Signal.Signal_Impl_.filter","tink/core/Signal.hx",46,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_49_select,"tink.core._Signal.Signal_Impl_","select",0x1f468328,"tink.core._Signal.Signal_Impl_.select","tink/core/Signal.hx",49,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_60_join,"tink.core._Signal.Signal_Impl_","join",0x7c5bf916,"tink.core._Signal.Signal_Impl_.join","tink/core/Signal.hx",60,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_63_join,"tink.core._Signal.Signal_Impl_","join",0x7c5bf916,"tink.core._Signal.Signal_Impl_.join","tink/core/Signal.hx",63,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_69_join,"tink.core._Signal.Signal_Impl_","join",0x7c5bf916,"tink.core._Signal.Signal_Impl_.join","tink/core/Signal.hx",69,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_67_join,"tink.core._Signal.Signal_Impl_","join",0x7c5bf916,"tink.core._Signal.Signal_Impl_.join","tink/core/Signal.hx",67,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_79_nextTime,"tink.core._Signal.Signal_Impl_","nextTime",0xa7a83dcc,"tink.core._Signal.Signal_Impl_.nextTime","tink/core/Signal.hx",79,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_88_pickNext,"tink.core._Signal.Signal_Impl_","pickNext",0x284ee9a0,"tink.core._Signal.Signal_Impl_.pickNext","tink/core/Signal.hx",88,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_84_pickNext,"tink.core._Signal.Signal_Impl_","pickNext",0x284ee9a0,"tink.core._Signal.Signal_Impl_.pickNext","tink/core/Signal.hx",84,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_94_pickNext,"tink.core._Signal.Signal_Impl_","pickNext",0x284ee9a0,"tink.core._Signal.Signal_Impl_.pickNext","tink/core/Signal.hx",94,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_101_until,"tink.core._Signal.Signal_Impl_","until",0xa8e579f2,"tink.core._Signal.Signal_Impl_.until","tink/core/Signal.hx",101,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_102_until,"tink.core._Signal.Signal_Impl_","until",0xa8e579f2,"tink.core._Signal.Signal_Impl_.until","tink/core/Signal.hx",102,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_100_until,"tink.core._Signal.Signal_Impl_","until",0xa8e579f2,"tink.core._Signal.Signal_Impl_.until","tink/core/Signal.hx",100,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_107_next,"tink.core._Signal.Signal_Impl_","next",0x7ef94a1f,"tink.core._Signal.Signal_Impl_.next","tink/core/Signal.hx",107,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_113_noise,"tink.core._Signal.Signal_Impl_","noise",0xa1b850ee,"tink.core._Signal.Signal_Impl_.noise","tink/core/Signal.hx",113,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_122_gather,"tink.core._Signal.Signal_Impl_","gather",0x0aafda27,"tink.core._Signal.Signal_Impl_.gather","tink/core/Signal.hx",122,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_126_create,"tink.core._Signal.Signal_Impl_","create",0x3122cf28,"tink.core._Signal.Signal_Impl_.create","tink/core/Signal.hx",126,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_133_generate,"tink.core._Signal.Signal_Impl_","generate",0x88812a61,"tink.core._Signal.Signal_Impl_.generate","tink/core/Signal.hx",133,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_139_trigger,"tink.core._Signal.Signal_Impl_","trigger",0xe1c7138c,"tink.core._Signal.Signal_Impl_.trigger","tink/core/Signal.hx",139,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_148_ofClassical,"tink.core._Signal.Signal_Impl_","ofClassical",0xc94e6bba,"tink.core._Signal.Signal_Impl_.ofClassical","tink/core/Signal.hx",148,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_146_ofClassical,"tink.core._Signal.Signal_Impl_","ofClassical",0xc94e6bba,"tink.core._Signal.Signal_Impl_.ofClassical","tink/core/Signal.hx",146,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_501b0f390d781a71_152_dead,"tink.core._Signal.Signal_Impl_","dead",0x785d13d0,"tink.core._Signal.Signal_Impl_.dead","tink/core/Signal.hx",152,0x5ae99903)
namespace tink{
namespace core{
namespace _Signal{

void Signal_Impl__obj::__construct() { }

Dynamic Signal_Impl__obj::__CreateEmpty() { return new Signal_Impl__obj; }

void *Signal_Impl__obj::_hx_vtable = 0;

Dynamic Signal_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Signal_Impl__obj > _hx_result = new Signal_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Signal_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a93f67a;
}

::Dynamic Signal_Impl__obj::_new( ::Dynamic f, ::Dynamic init){
            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_22__new)
HXDLIN(  22)		::Dynamic this1 =  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX ,f,init);
HXDLIN(  22)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,_new,return )

::Dynamic Signal_Impl__obj::handle(::Dynamic this1, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_26_handle)
HXDLIN(  26)		return ::tink::core::_Signal::SignalObject_obj::listen(this1,handler);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,handle,return )

::Dynamic Signal_Impl__obj::map(::Dynamic this1, ::Dynamic f, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_501b0f390d781a71_33_map)
HXDLIN(  33)				 ::Dynamic fire1 = fire;
HXDLIN(  33)				fire1(f(v));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_33_map)
HXDLIN(  33)			return ::tink::core::_Signal::SignalObject_obj::listen(this1, ::Dynamic(new _hx_Closure_0(f,fire)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_33_map)
HXDLIN(  33)		return ::tink::core::_Signal::Suspendable_obj::over(this1, ::Dynamic(new _hx_Closure_1(this1,f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Signal_Impl__obj,map,return )

::Dynamic Signal_Impl__obj::flatMap(::Dynamic this1, ::Dynamic f, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_501b0f390d781a71_40_flatMap)
HXDLIN(  40)				::Dynamic this1 = f(v);
HXDLIN(  40)				::tink::core::_Future::FutureObject_obj::handle(this1,fire);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_40_flatMap)
HXDLIN(  40)			return ::tink::core::_Signal::SignalObject_obj::listen(this1, ::Dynamic(new _hx_Closure_0(f,fire)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_40_flatMap)
HXDLIN(  40)		return ::tink::core::_Signal::Suspendable_obj::over(this1, ::Dynamic(new _hx_Closure_1(this1,f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Signal_Impl__obj,flatMap,return )

::Dynamic Signal_Impl__obj::filter(::Dynamic this1, ::Dynamic f, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_501b0f390d781a71_46_filter)
HXDLIN(  46)				if (( (bool)(f(v)) )) {
HXDLIN(  46)					fire(v);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_46_filter)
HXDLIN(  46)			return ::tink::core::_Signal::SignalObject_obj::listen(this1, ::Dynamic(new _hx_Closure_0(f,fire)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_46_filter)
HXDLIN(  46)		return ::tink::core::_Signal::Suspendable_obj::over(this1, ::Dynamic(new _hx_Closure_1(this1,f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Signal_Impl__obj,filter,return )

::Dynamic Signal_Impl__obj::select(::Dynamic this1, ::Dynamic selector, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1, ::Dynamic,selector) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,selector, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_501b0f390d781a71_49_select)
HXDLIN(  49)				 ::haxe::ds::Option _g = selector(v);
HXDLIN(  49)				if ((_g->_hx_getIndex() == 0)) {
HXLINE(  50)					 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN(  50)					fire(v);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_49_select)
HXDLIN(  49)			return ::tink::core::_Signal::SignalObject_obj::listen(this1, ::Dynamic(new _hx_Closure_0(selector,fire)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_49_select)
HXDLIN(  49)		return ::tink::core::_Signal::Suspendable_obj::over(this1, ::Dynamic(new _hx_Closure_1(this1,selector)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Signal_Impl__obj,select,return )

::Dynamic Signal_Impl__obj::join(::Dynamic this1,::Dynamic that, ::Dynamic gather){
            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_60_join)
HXDLIN(  60)		if (::tink::core::Disposable_obj::get_disposed(this1)) {
HXDLIN(  60)			return that;
            		}
            		else {
HXLINE(  61)			if (::tink::core::Disposable_obj::get_disposed(that)) {
HXLINE(  61)				return this1;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,that,::Dynamic,this1) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic fire){
            					HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_63_join)
HXLINE(  64)					 ::Dynamic cb = fire;
HXLINE(  65)					::Dynamic this2 = ::tink::core::_Signal::SignalObject_obj::listen(this1,cb);
HXDLIN(  65)					return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,this2,::tink::core::_Signal::SignalObject_obj::listen(that,cb));
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::Dynamic,this1,::Dynamic,that) HXARGC(1)
            				void _hx_run(::Dynamic self){
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Dynamic,that,::Dynamic,this1,::Dynamic,self) HXARGC(0)
            					void _hx_run(){
            						HX_STACKFRAME(&_hx_pos_501b0f390d781a71_69_join)
HXLINE(  69)						bool release;
HXDLIN(  69)						if (::tink::core::Disposable_obj::get_disposed(this1)) {
HXLINE(  69)							release = ::tink::core::Disposable_obj::get_disposed(that);
            						}
            						else {
HXLINE(  69)							release = false;
            						}
HXDLIN(  69)						if (release) {
HXLINE(  69)							::tink::core::OwnedDisposable_obj::dispose(self);
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

            					HX_STACKFRAME(&_hx_pos_501b0f390d781a71_67_join)
HXLINE(  68)					 ::Dynamic release =  ::Dynamic(new _hx_Closure_1(that,this1,self));
HXLINE(  70)					::tink::core::Disposable_obj::ondispose(this1,release);
HXLINE(  71)					::tink::core::Disposable_obj::ondispose(that,release);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  62)				return  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(that,this1)), ::Dynamic(new _hx_Closure_2(this1,that)));
            			}
            		}
HXLINE(  60)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Signal_Impl__obj,join,return )

::Dynamic Signal_Impl__obj::nextTime(::Dynamic this1, ::Dynamic condition){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,condition) HXARGC(1)
            		 ::haxe::ds::Option _hx_run( ::Dynamic v){
            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_79_nextTime)
HXDLIN(  79)			bool _hx_tmp;
HXDLIN(  79)			if (::hx::IsNotNull( condition )) {
HXDLIN(  79)				_hx_tmp = ( (bool)(condition(v)) );
            			}
            			else {
HXDLIN(  79)				_hx_tmp = true;
            			}
HXDLIN(  79)			if (_hx_tmp) {
HXDLIN(  79)				return ::haxe::ds::Option_obj::Some(v);
            			}
            			else {
HXDLIN(  79)				return ::haxe::ds::Option_obj::None_dyn();
            			}
HXDLIN(  79)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_79_nextTime)
HXDLIN(  79)		return ::tink::core::_Signal::Signal_Impl__obj::pickNext(this1, ::Dynamic(new _hx_Closure_0(condition)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,nextTime,return )

::Dynamic Signal_Impl__obj::pickNext(::Dynamic this1, ::Dynamic selector){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,selector, ::tink::core::FutureTrigger,ret) HXARGC(1)
            		void _hx_run( ::Dynamic v){
            			HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_88_pickNext)
HXLINE(  88)			 ::haxe::ds::Option _g = selector(v);
HXDLIN(  88)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  90)					 ::Dynamic v = _g->_hx_getObject(0);
HXLINE(  91)					ret->trigger(v);
            				}
            				break;
            				case (int)1: {
            				}
            				break;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_84_pickNext)
HXLINE(  85)		 ::tink::core::FutureTrigger ret =  ::tink::core::FutureTrigger_obj::__alloc( HX_CTX );
HXDLIN(  85)		::Dynamic link = null();
HXLINE(  88)		link = ::tink::core::_Signal::SignalObject_obj::listen(this1, ::Dynamic(new _hx_Closure_0(selector,ret)));
HXLINE(  94)		 ::Dynamic _hx_tmp;
HXDLIN(  94)		if (::hx::IsNull( link )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_94_pickNext)
HXLINE(  94)				::tink::core::_Callback::CallbackLink_Impl__obj::noop();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  94)			_hx_tmp =  ::Dynamic(new _hx_Closure_1());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_94_pickNext)
HXLINE(  94)				f();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  94)			 ::Dynamic f = link->__Field(HX_("cancel",7a,ed,33,b8), ::hx::paccDynamic);
HXDLIN(  94)			_hx_tmp =  ::Dynamic(new _hx_Closure_2(f));
            		}
HXDLIN(  94)		ret->handle(_hx_tmp);
HXLINE(  96)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,pickNext,return )

::Dynamic Signal_Impl__obj::until(::Dynamic this1,::Dynamic end){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Dynamic,this1) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic yield){
            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_101_until)
HXLINE( 101)			return ::tink::core::_Signal::SignalObject_obj::listen(this1,yield);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Dynamic,end) HXARGC(1)
            		void _hx_run(::Dynamic self){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_501b0f390d781a71_102_until)
HXLINE( 102)				f();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_102_until)
HXLINE( 102)			 ::Dynamic f = self->__Field(HX_("dispose",9f,80,4c,bb), ::hx::paccDynamic);
HXDLIN( 102)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_1(f));
HXDLIN( 102)			::tink::core::_Future::FutureObject_obj::handle(end,_hx_tmp);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_100_until)
HXDLIN( 100)		return  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(this1)), ::Dynamic(new _hx_Closure_2(end)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,until,return )

::Dynamic Signal_Impl__obj::next(::Dynamic this1, ::Dynamic condition){
            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_107_next)
HXDLIN( 107)		return ::tink::core::_Signal::Signal_Impl__obj::nextTime(this1,condition);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,next,return )

::Dynamic Signal_Impl__obj::noise(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::Dynamic _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_113_noise)
HXDLIN( 113)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_113_noise)
HXDLIN( 113)		return ::tink::core::_Signal::Signal_Impl__obj::map(this1, ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Signal_Impl__obj,noise,return )

::Dynamic Signal_Impl__obj::gather(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_122_gather)
HXDLIN( 122)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Signal_Impl__obj,gather,return )

::Dynamic Signal_Impl__obj::create( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_126_create)
HXDLIN( 126)		 ::Dynamic init = null();
HXDLIN( 126)		::Dynamic this1 =  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX ,f,init);
HXDLIN( 126)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Signal_Impl__obj,create,return )

::Dynamic Signal_Impl__obj::generate( ::Dynamic generator, ::Dynamic init){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,generator) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_STACKFRAME(&_hx_pos_501b0f390d781a71_133_generate)
HXDLIN( 133)			generator(fire);
HXDLIN( 133)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_133_generate)
HXDLIN( 133)		::Dynamic this1 =  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(generator)),init);
HXDLIN( 133)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Signal_Impl__obj,generate,return )

 ::tink::core::SignalTrigger Signal_Impl__obj::trigger(){
            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_139_trigger)
HXDLIN( 139)		return  ::tink::core::SignalTrigger_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Signal_Impl__obj,trigger,return )

::Dynamic Signal_Impl__obj::ofClassical( ::Dynamic add, ::Dynamic remove, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,add, ::Dynamic,remove) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,a1, ::Dynamic,_g) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_501b0f390d781a71_148_ofClassical)
HXLINE( 148)				_g(a1);
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_146_ofClassical)
HXLINE( 147)			add(fire);
HXLINE( 148)			 ::Dynamic _g = remove;
HXDLIN( 148)			 ::Dynamic a1 = fire;
HXDLIN( 148)			::Dynamic this1 =  ::tink::core::SimpleLink_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(a1,_g)));
HXDLIN( 148)			return this1;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_501b0f390d781a71_146_ofClassical)
HXDLIN( 146)		return  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(add,remove)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Signal_Impl__obj,ofClassical,return )

::Dynamic Signal_Impl__obj::dead(){
            	HX_STACKFRAME(&_hx_pos_501b0f390d781a71_152_dead)
HXDLIN( 152)		return ::tink::core::_Signal::Disposed_obj::INST;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Signal_Impl__obj,dead,return )


Signal_Impl__obj::Signal_Impl__obj()
{
}

bool Signal_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dead") ) { outValue = dead_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"until") ) { outValue = until_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"noise") ) { outValue = noise_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { outValue = handle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gather") ) { outValue = gather_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { outValue = flatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trigger") ) { outValue = trigger_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextTime") ) { outValue = nextTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pickNext") ) { outValue = pickNext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"generate") ) { outValue = generate_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ofClassical") ) { outValue = ofClassical_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Signal_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Signal_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Signal_Impl__obj::__mClass;

static ::String Signal_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("handle",a8,83,fd,b7),
	HX_("map",9c,0a,53,00),
	HX_("flatMap",63,10,de,e6),
	HX_("filter",b8,1f,35,85),
	HX_("select",fc,1a,33,6a),
	HX_("join",ea,33,65,46),
	HX_("nextTime",a0,72,c9,f8),
	HX_("pickNext",74,1e,70,79),
	HX_("until",9e,b8,ef,a6),
	HX_("next",f3,84,02,49),
	HX_("noise",9a,8f,c2,9f),
	HX_("gather",fb,71,9c,55),
	HX_("create",fc,66,0f,7c),
	HX_("generate",35,5f,a2,d9),
	HX_("trigger",38,55,df,25),
	HX_("ofClassical",66,f3,06,0e),
	HX_("dead",a4,4e,66,42),
	::String(null())
};

void Signal_Impl__obj::__register()
{
	Signal_Impl__obj _hx_dummy;
	Signal_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Signal.Signal_Impl_",c2,aa,2b,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Signal_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Signal_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Signal_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Signal_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Signal_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Signal
