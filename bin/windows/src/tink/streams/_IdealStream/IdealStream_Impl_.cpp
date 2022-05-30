#include <hxcpp.h>

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
#ifndef INCLUDED_tink_streams__IdealStream_IdealStream_Impl_
#include <tink/streams/_IdealStream/IdealStream_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_51365b40c466b697_11_promiseOfIdealStream,"tink.streams._IdealStream.IdealStream_Impl_","promiseOfIdealStream",0xc853807d,"tink.streams._IdealStream.IdealStream_Impl_.promiseOfIdealStream","tink/streams/IdealStream.hx",11,0x04ec6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_51365b40c466b697_15_promiseOfStreamNoise,"tink.streams._IdealStream.IdealStream_Impl_","promiseOfStreamNoise",0x295ffd82,"tink.streams._IdealStream.IdealStream_Impl_.promiseOfStreamNoise","tink/streams/IdealStream.hx",15,0x04ec6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_51365b40c466b697_19_collect,"tink.streams._IdealStream.IdealStream_Impl_","collect",0x5a063cf0,"tink.streams._IdealStream.IdealStream_Impl_.collect","tink/streams/IdealStream.hx",19,0x04ec6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_51365b40c466b697_22_collect,"tink.streams._IdealStream.IdealStream_Impl_","collect",0x5a063cf0,"tink.streams._IdealStream.IdealStream_Impl_.collect","tink/streams/IdealStream.hx",22,0x04ec6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_51365b40c466b697_17_collect,"tink.streams._IdealStream.IdealStream_Impl_","collect",0x5a063cf0,"tink.streams._IdealStream.IdealStream_Impl_.collect","tink/streams/IdealStream.hx",17,0x04ec6ea2)
namespace tink{
namespace streams{
namespace _IdealStream{

void IdealStream_Impl__obj::__construct() { }

Dynamic IdealStream_Impl__obj::__CreateEmpty() { return new IdealStream_Impl__obj; }

void *IdealStream_Impl__obj::_hx_vtable = 0;

Dynamic IdealStream_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IdealStream_Impl__obj > _hx_result = new IdealStream_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IdealStream_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0501f2ee;
}

::Dynamic IdealStream_Impl__obj::promiseOfIdealStream(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_51365b40c466b697_11_promiseOfIdealStream)
HXDLIN(  11)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IdealStream_Impl__obj,promiseOfIdealStream,return )

::Dynamic IdealStream_Impl__obj::promiseOfStreamNoise(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_51365b40c466b697_15_promiseOfStreamNoise)
HXDLIN(  15)		return ::tink::streams::_Stream::Stream_Impl__obj::promise(p);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IdealStream_Impl__obj,promiseOfStreamNoise,return )

::Dynamic IdealStream_Impl__obj::collect(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,buf) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_51365b40c466b697_19_collect)
HXLINE(  20)			buf->push(x);
HXLINE(  21)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Handled_obj::Resume_dyn()));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::cpp::VirtualArray,buf) HXARGC(1)
            		::cpp::VirtualArray _hx_run( ::tink::streams::Conclusion c){
            			HX_STACKFRAME(&_hx_pos_51365b40c466b697_22_collect)
HXLINE(  22)			return buf;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_51365b40c466b697_17_collect)
HXLINE(  18)		::cpp::VirtualArray buf = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  19)		return ::tink::core::_Future::Future_Impl__obj::map(::tink::streams::StreamObject_obj::forEach(this1,::tink::streams::_Stream::Handler_Impl__obj::ofSafe( ::Dynamic(new _hx_Closure_0(buf)))), ::Dynamic(new _hx_Closure_1(buf)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IdealStream_Impl__obj,collect,return )


IdealStream_Impl__obj::IdealStream_Impl__obj()
{
}

bool IdealStream_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"collect") ) { outValue = collect_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"promiseOfIdealStream") ) { outValue = promiseOfIdealStream_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"promiseOfStreamNoise") ) { outValue = promiseOfStreamNoise_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IdealStream_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IdealStream_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class IdealStream_Impl__obj::__mClass;

static ::String IdealStream_Impl__obj_sStaticFields[] = {
	HX_("promiseOfIdealStream",83,ab,86,80),
	HX_("promiseOfStreamNoise",88,28,93,e1),
	HX_("collect",aa,a5,60,ed),
	::String(null())
};

void IdealStream_Impl__obj::__register()
{
	IdealStream_Impl__obj _hx_dummy;
	IdealStream_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._IdealStream.IdealStream_Impl_",b4,41,2e,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IdealStream_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IdealStream_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IdealStream_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IdealStream_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IdealStream_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _IdealStream
