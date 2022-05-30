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
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Recover_Impl_
#include <tink/core/_Promise/Recover_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Empty
#include <tink/streams/Empty.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupStatus
#include <tink/streams/RegroupStatus.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Filter_Impl_
#include <tink/streams/_Stream/Filter_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_312__new,"tink.streams._Stream.Filter_Impl_","_new",0x85f74471,"tink.streams._Stream.Filter_Impl_._new","tink/streams/Stream.hx",312,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_317_ofNext,"tink.streams._Stream.Filter_Impl_","ofNext",0x20e5fcba,"tink.streams._Stream.Filter_Impl_.ofNext","tink/streams/Stream.hx",317,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_316_ofNext,"tink.streams._Stream.Filter_Impl_","ofNext",0x20e5fcba,"tink.streams._Stream.Filter_Impl_.ofNext","tink/streams/Stream.hx",316,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_322_ofAsync,"tink.streams._Stream.Filter_Impl_","ofAsync",0x35635595,"tink.streams._Stream.Filter_Impl_.ofAsync","tink/streams/Stream.hx",322,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_321_ofAsync,"tink.streams._Stream.Filter_Impl_","ofAsync",0x35635595,"tink.streams._Stream.Filter_Impl_.ofAsync","tink/streams/Stream.hx",321,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_327_ofSync,"tink.streams._Stream.Filter_Impl_","ofSync",0x24433222,"tink.streams._Stream.Filter_Impl_.ofSync","tink/streams/Stream.hx",327,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_326_ofSync,"tink.streams._Stream.Filter_Impl_","ofSync",0x24433222,"tink.streams._Stream.Filter_Impl_.ofSync","tink/streams/Stream.hx",326,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_335_ofPlain,"tink.streams._Stream.Filter_Impl_","ofPlain",0xd3b35063,"tink.streams._Stream.Filter_Impl_.ofPlain","tink/streams/Stream.hx",335,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_f3c88cd1a8261bdf_334_ofPlain,"tink.streams._Stream.Filter_Impl_","ofPlain",0xd3b35063,"tink.streams._Stream.Filter_Impl_.ofPlain","tink/streams/Stream.hx",334,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void Filter_Impl__obj::__construct() { }

Dynamic Filter_Impl__obj::__CreateEmpty() { return new Filter_Impl__obj; }

void *Filter_Impl__obj::_hx_vtable = 0;

Dynamic Filter_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter_Impl__obj > _hx_result = new Filter_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Filter_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ebfe89e;
}

 ::Dynamic Filter_Impl__obj::_new( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_312__new)
HXDLIN( 312)		 ::Dynamic this1 = o;
HXDLIN( 312)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_Impl__obj,_new,return )

 ::Dynamic Filter_Impl__obj::ofNext( ::Dynamic n){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,n) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,i) HXARGC(1)
            			::Dynamic _hx_run(bool matched){
            				HX_GC_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_317_ofNext)
HXLINE( 317)				::Dynamic d;
HXDLIN( 317)				if (matched) {
HXLINE( 317)					d = ::tink::streams::_Stream::Stream_Impl__obj::single(i->__get(0));
            				}
            				else {
HXLINE( 317)					d = ::tink::streams::Empty_obj::inst;
            				}
HXDLIN( 317)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(::tink::streams::RegroupResult_obj::Converted(d,null()))));
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(1)
            			::Dynamic _hx_run( ::tink::core::Outcome o){
            				HX_GC_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_317_ofNext)
HXLINE( 317)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 317)						 ::tink::streams::RegroupResult d = o->_hx_getObject(0);
HXDLIN( 317)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,d));
            					}
            					break;
            					case (int)1: {
HXLINE( 317)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN( 317)						return f(e);
            					}
            					break;
            				}
HXDLIN( 317)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_317_ofNext)
HXLINE( 317)			::Dynamic this1 = ::tink::core::_Promise::Promise_Impl__obj::next(n(i->__get(0)), ::Dynamic(new _hx_Closure_0(i)),null());
HXDLIN( 317)			 ::Dynamic f = ::tink::core::_Promise::Recover_Impl__obj::ofSync(::tink::streams::RegroupResult_obj::Errored_dyn());
HXDLIN( 317)			return ::tink::core::_Future::Future_Impl__obj::flatMap(this1, ::Dynamic(new _hx_Closure_1(f)),null());
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_316_ofNext)
HXDLIN( 316)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_2(n))));
HXDLIN( 316)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_Impl__obj,ofNext,return )

 ::Dynamic Filter_Impl__obj::ofAsync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,i) HXARGC(1)
            			 ::tink::streams::RegroupResult _hx_run(bool matched){
            				HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_322_ofAsync)
HXLINE( 322)				::Dynamic this1;
HXDLIN( 322)				if (matched) {
HXLINE( 322)					this1 = ::tink::streams::_Stream::Stream_Impl__obj::single(i->__get(0));
            				}
            				else {
HXLINE( 322)					this1 = ::tink::streams::Empty_obj::inst;
            				}
HXDLIN( 322)				return ::tink::streams::RegroupResult_obj::Converted(this1,null());
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_322_ofAsync)
HXLINE( 322)			return ::tink::core::_Future::Future_Impl__obj::map(f(i->__get(0)), ::Dynamic(new _hx_Closure_0(i)),null());
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_321_ofAsync)
HXDLIN( 321)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_1(f))));
HXDLIN( 321)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_Impl__obj,ofAsync,return )

 ::Dynamic Filter_Impl__obj::ofSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_GC_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_327_ofSync)
HXLINE( 327)			 ::tink::streams::RegroupResult v;
HXDLIN( 327)			 ::tink::core::Outcome _g = f(i->__get(0));
HXDLIN( 327)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 328)					bool v1 = ( (bool)(_g->_hx_getObject(0)) );
HXDLIN( 328)					::Dynamic v2;
HXDLIN( 328)					if (v1) {
HXLINE( 328)						v2 = ::tink::streams::_Stream::Stream_Impl__obj::single(i->__get(0));
            					}
            					else {
HXLINE( 328)						v2 = ::tink::streams::Empty_obj::inst;
            					}
HXLINE( 327)					v = ::tink::streams::RegroupResult_obj::Converted(v2,null());
            				}
            				break;
            				case (int)1: {
HXLINE( 329)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE( 327)					v = ::tink::streams::RegroupResult_obj::Errored(e);
            				}
            				break;
            			}
HXDLIN( 327)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_326_ofSync)
HXDLIN( 326)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
HXDLIN( 326)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_Impl__obj,ofSync,return )

 ::Dynamic Filter_Impl__obj::ofPlain( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_GC_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_335_ofPlain)
HXLINE( 335)			::Dynamic v;
HXDLIN( 335)			if (( (bool)(f(i->__get(0))) )) {
HXLINE( 335)				v = ::tink::streams::_Stream::Stream_Impl__obj::single(i->__get(0));
            			}
            			else {
HXLINE( 335)				v = ::tink::streams::Empty_obj::inst;
            			}
HXDLIN( 335)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::RegroupResult_obj::Converted(v,null())));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f3c88cd1a8261bdf_334_ofPlain)
HXDLIN( 334)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
HXDLIN( 334)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_Impl__obj,ofPlain,return )


Filter_Impl__obj::Filter_Impl__obj()
{
}

bool Filter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofNext") ) { outValue = ofNext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofSync") ) { outValue = ofSync_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofAsync") ) { outValue = ofAsync_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofPlain") ) { outValue = ofPlain_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Filter_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Filter_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Filter_Impl__obj::__mClass;

static ::String Filter_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("ofNext",aa,e9,57,50),
	HX_("ofAsync",a5,ba,a0,89),
	HX_("ofSync",12,1f,b5,53),
	HX_("ofPlain",73,b5,f0,27),
	::String(null())
};

void Filter_Impl__obj::__register()
{
	Filter_Impl__obj _hx_dummy;
	Filter_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.Filter_Impl_",5e,8b,0a,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Filter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Filter_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Filter_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
