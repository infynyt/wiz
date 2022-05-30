#include <hxcpp.h>

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
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_streams_FutureStream
#include <tink/streams/FutureStream.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
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
#ifndef INCLUDED_tink_streams__Stream_ErrorStream
#include <tink/streams/_Stream/ErrorStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Regrouper_Impl_
#include <tink/streams/_Stream/Regrouper_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_12_get_depleted,"tink.streams._Stream.Stream_Impl_","get_depleted",0x2547041c,"tink.streams._Stream.Stream_Impl_.get_depleted","tink/streams/Stream.hx",12,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_15_dirty,"tink.streams._Stream.Stream_Impl_","dirty",0xa8994fca,"tink.streams._Stream.Stream_Impl_.dirty","tink/streams/Stream.hx",15,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_18_single,"tink.streams._Stream.Stream_Impl_","single",0xda3827d0,"tink.streams._Stream.Stream_Impl_.single","tink/streams/Stream.hx",18,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_21_ofIterator,"tink.streams._Stream.Stream_Impl_","ofIterator",0x08aadb6d,"tink.streams._Stream.Stream_Impl_.ofIterator","tink/streams/Stream.hx",21,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_25_flatten,"tink.streams._Stream.Stream_Impl_","flatten",0xb9ce097c,"tink.streams._Stream.Stream_Impl_.flatten","tink/streams/Stream.hx",25,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_37_future,"tink.streams._Stream.Stream_Impl_","future",0x9465598b,"tink.streams._Stream.Stream_Impl_.future","tink/streams/Stream.hx",37,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_51_promiseIdeal,"tink.streams._Stream.Stream_Impl_","promiseIdeal",0x9e8d8f42,"tink.streams._Stream.Stream_Impl_.promiseIdeal","tink/streams/Stream.hx",51,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_54_promiseReal,"tink.streams._Stream.Stream_Impl_","promiseReal",0x14704851,"tink.streams._Stream.Stream_Impl_.promiseReal","tink/streams/Stream.hx",54,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_57_promise,"tink.streams._Stream.Stream_Impl_","promise",0xcabc2b53,"tink.streams._Stream.Stream_Impl_.promise","tink/streams/Stream.hx",57,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_39c5ebc767f26d40_63_ofError,"tink.streams._Stream.Stream_Impl_","ofError",0xa95ee4e9,"tink.streams._Stream.Stream_Impl_.ofError","tink/streams/Stream.hx",63,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void Stream_Impl__obj::__construct() { }

Dynamic Stream_Impl__obj::__CreateEmpty() { return new Stream_Impl__obj; }

void *Stream_Impl__obj::_hx_vtable = 0;

Dynamic Stream_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stream_Impl__obj > _hx_result = new Stream_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stream_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5036bc9e;
}

bool Stream_Impl__obj::get_depleted(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_12_get_depleted)
HXDLIN(  12)		return ::tink::streams::StreamObject_obj::get_depleted(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,get_depleted,return )

::Dynamic Stream_Impl__obj::dirty(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_15_dirty)
HXDLIN(  15)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,dirty,return )

::Dynamic Stream_Impl__obj::single( ::Dynamic i){
            	HX_GC_STACKFRAME(&_hx_pos_39c5ebc767f26d40_18_single)
HXDLIN(  18)		return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,i));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,single,return )

::Dynamic Stream_Impl__obj::ofIterator( ::Dynamic i){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,next, ::Dynamic,i) HXARGC(1)
            		void _hx_run( ::Dynamic step){
            			HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_21_ofIterator)
HXDLIN(  21)			 ::tink::streams::Step _hx_tmp;
HXDLIN(  21)			if (( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )) {
HXDLIN(  21)				 ::Dynamic _hx_tmp1 = i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  21)				_hx_tmp = ::tink::streams::Step_obj::Link(_hx_tmp1,::tink::streams::Generator_obj::stream(next->__get(0)));
            			}
            			else {
HXDLIN(  21)				_hx_tmp = ::tink::streams::Step_obj::End_dyn();
            			}
HXDLIN(  21)			step(_hx_tmp);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_21_ofIterator)
HXDLIN(  21)		::Array< ::Dynamic> next = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN(  21)		next[0] =  ::Dynamic(new _hx_Closure_0(next,i));
HXDLIN(  21)		return ::tink::streams::Generator_obj::stream(next->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,ofIterator,return )

::Dynamic Stream_Impl__obj::flatten(::Dynamic stream){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::tink::streams::RegroupResult _hx_run(::Array< ::Dynamic> arr){
            			HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_25_flatten)
HXDLIN(  25)			return ::tink::streams::RegroupResult_obj::Converted(arr->__get(0),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_25_flatten)
HXDLIN(  25)		return ::tink::streams::StreamObject_obj::regroup(stream,::tink::streams::_Stream::Regrouper_Impl__obj::ofIgnoranceSync( ::Dynamic(new _hx_Closure_0())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,flatten,return )

::Dynamic Stream_Impl__obj::future(::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_39c5ebc767f26d40_37_future)
HXDLIN(  37)		return  ::tink::streams::FutureStream_obj::__alloc( HX_CTX ,f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,future,return )

::Dynamic Stream_Impl__obj::promiseIdeal(::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_51_promiseIdeal)
HXDLIN(  51)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,promiseIdeal,return )

::Dynamic Stream_Impl__obj::promiseReal(::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_54_promiseReal)
HXDLIN(  54)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,promiseReal,return )

::Dynamic Stream_Impl__obj::promise(::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_57_promise)
HXDLIN(  57)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  58)					::Dynamic s = o->_hx_getObject(0);
HXDLIN(  58)					return ::tink::streams::_Stream::Stream_Impl__obj::dirty(s);
            				}
            				break;
            				case (int)1: {
HXLINE(  59)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  59)					return ::tink::streams::_Stream::Stream_Impl__obj::ofError(e);
            				}
            				break;
            			}
HXLINE(  57)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_39c5ebc767f26d40_57_promise)
HXDLIN(  57)		return ::tink::streams::_Stream::Stream_Impl__obj::future(::tink::core::_Future::Future_Impl__obj::map(f, ::Dynamic(new _hx_Closure_0()),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,promise,return )

::Dynamic Stream_Impl__obj::ofError( ::tink::core::TypedError e){
            	HX_GC_STACKFRAME(&_hx_pos_39c5ebc767f26d40_63_ofError)
HXDLIN(  63)		return  ::tink::streams::_Stream::ErrorStream_obj::__alloc( HX_CTX ,e);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_Impl__obj,ofError,return )


Stream_Impl__obj::Stream_Impl__obj()
{
}

bool Stream_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { outValue = dirty_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"single") ) { outValue = single_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"future") ) { outValue = future_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatten") ) { outValue = flatten_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promise") ) { outValue = promise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofError") ) { outValue = ofError_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofIterator") ) { outValue = ofIterator_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"promiseReal") ) { outValue = promiseReal_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_depleted") ) { outValue = get_depleted_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promiseIdeal") ) { outValue = promiseIdeal_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Stream_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Stream_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Stream_Impl__obj::__mClass;

static ::String Stream_Impl__obj_sStaticFields[] = {
	HX_("get_depleted",d4,1c,20,af),
	HX_("dirty",12,50,d0,d9),
	HX_("single",88,66,21,b9),
	HX_("ofIterator",25,d6,c5,d9),
	HX_("flatten",c4,ab,fb,e6),
	HX_("future",43,98,4e,73),
	HX_("promiseIdeal",fa,a7,66,28),
	HX_("promiseReal",99,ae,f0,3a),
	HX_("promise",9b,cd,e9,f7),
	HX_("ofError",31,87,8c,d6),
	::String(null())
};

void Stream_Impl__obj::__register()
{
	Stream_Impl__obj _hx_dummy;
	Stream_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.Stream_Impl_",26,46,36,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stream_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stream_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Stream_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stream_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stream_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
