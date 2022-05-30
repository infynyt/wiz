#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__RealStream_RealStream_Impl_
#include <tink/streams/_RealStream/RealStream_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_11_promiseOfIdealStream,"tink.streams._RealStream.RealStream_Impl_","promiseOfIdealStream",0x095c170b,"tink.streams._RealStream.RealStream_Impl_.promiseOfIdealStream","tink/streams/RealStream.hx",11,0xff98ce67)
HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_15_promiseOfStreamNoise,"tink.streams._RealStream.RealStream_Impl_","promiseOfStreamNoise",0x6a689410,"tink.streams._RealStream.RealStream_Impl_.promiseOfStreamNoise","tink/streams/RealStream.hx",15,0xff98ce67)
HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_19_promiseOfRealStream,"tink.streams._RealStream.RealStream_Impl_","promiseOfRealStream",0xf628ea28,"tink.streams._RealStream.RealStream_Impl_.promiseOfRealStream","tink/streams/RealStream.hx",19,0xff98ce67)
HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_23_promiseOfStreamError,"tink.streams._RealStream.RealStream_Impl_","promiseOfStreamError",0x3dcfd03e,"tink.streams._RealStream.RealStream_Impl_.promiseOfStreamError","tink/streams/RealStream.hx",23,0xff98ce67)
HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_27_collect,"tink.streams._RealStream.RealStream_Impl_","collect",0xc6b8af22,"tink.streams._RealStream.RealStream_Impl_.collect","tink/streams/RealStream.hx",27,0xff98ce67)
HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_30_collect,"tink.streams._RealStream.RealStream_Impl_","collect",0xc6b8af22,"tink.streams._RealStream.RealStream_Impl_.collect","tink/streams/RealStream.hx",30,0xff98ce67)
HX_LOCAL_STACK_FRAME(_hx_pos_3dfc5c1a0c0a6412_25_collect,"tink.streams._RealStream.RealStream_Impl_","collect",0xc6b8af22,"tink.streams._RealStream.RealStream_Impl_.collect","tink/streams/RealStream.hx",25,0xff98ce67)
namespace tink{
namespace streams{
namespace _RealStream{

void RealStream_Impl__obj::__construct() { }

Dynamic RealStream_Impl__obj::__CreateEmpty() { return new RealStream_Impl__obj; }

void *RealStream_Impl__obj::_hx_vtable = 0;

Dynamic RealStream_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RealStream_Impl__obj > _hx_result = new RealStream_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RealStream_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76df9c56;
}

::Dynamic RealStream_Impl__obj::promiseOfIdealStream(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_11_promiseOfIdealStream)
HXDLIN(  11)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RealStream_Impl__obj,promiseOfIdealStream,return )

::Dynamic RealStream_Impl__obj::promiseOfStreamNoise(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_15_promiseOfStreamNoise)
HXDLIN(  15)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RealStream_Impl__obj,promiseOfStreamNoise,return )

::Dynamic RealStream_Impl__obj::promiseOfRealStream(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_19_promiseOfRealStream)
HXDLIN(  19)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RealStream_Impl__obj,promiseOfRealStream,return )

::Dynamic RealStream_Impl__obj::promiseOfStreamError(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_23_promiseOfStreamError)
HXDLIN(  23)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RealStream_Impl__obj,promiseOfStreamError,return )

::Dynamic RealStream_Impl__obj::collect(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,buf) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_27_collect)
HXLINE(  28)			buf->push(x);
HXLINE(  29)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Handled_obj::Resume_dyn()));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::cpp::VirtualArray,buf) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::streams::Conclusion c){
            			HX_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_30_collect)
HXLINE(  30)			switch((int)(c->_hx_getIndex())){
            				case (int)0: {
HXLINE(  33)					::Dynamic _g = c->_hx_getObject(0);
HXDLIN(  33)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unreachable",14,c9,19,7f)));
            				}
            				break;
            				case (int)2: {
HXLINE(  32)					 ::tink::core::TypedError e = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  32)					return ::tink::core::Outcome_obj::Failure(e);
            				}
            				break;
            				case (int)3: {
HXLINE(  31)					return ::tink::core::Outcome_obj::Success(buf);
            				}
            				break;
            			}
HXLINE(  30)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_3dfc5c1a0c0a6412_25_collect)
HXLINE(  26)		::cpp::VirtualArray buf = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  27)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::streams::StreamObject_obj::forEach(this1,::tink::streams::_Stream::Handler_Impl__obj::ofSafe( ::Dynamic(new _hx_Closure_0(buf)))), ::Dynamic(new _hx_Closure_1(buf)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RealStream_Impl__obj,collect,return )


RealStream_Impl__obj::RealStream_Impl__obj()
{
}

bool RealStream_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"collect") ) { outValue = collect_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promiseOfRealStream") ) { outValue = promiseOfRealStream_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"promiseOfIdealStream") ) { outValue = promiseOfIdealStream_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promiseOfStreamNoise") ) { outValue = promiseOfStreamNoise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promiseOfStreamError") ) { outValue = promiseOfStreamError_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RealStream_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RealStream_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class RealStream_Impl__obj::__mClass;

static ::String RealStream_Impl__obj_sStaticFields[] = {
	HX_("promiseOfIdealStream",83,ab,86,80),
	HX_("promiseOfStreamNoise",88,28,93,e1),
	HX_("promiseOfRealStream",b0,8c,2c,02),
	HX_("promiseOfStreamError",b6,64,fa,b4),
	HX_("collect",aa,a5,60,ed),
	::String(null())
};

void RealStream_Impl__obj::__register()
{
	RealStream_Impl__obj _hx_dummy;
	RealStream_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._RealStream.RealStream_Impl_",e6,31,4a,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RealStream_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RealStream_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RealStream_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RealStream_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RealStream_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _RealStream
