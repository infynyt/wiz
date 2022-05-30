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
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupStatus
#include <tink/streams/RegroupStatus.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Mapping_Impl_
#include <tink/streams/_Stream/Mapping_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_282__new,"tink.streams._Stream.Mapping_Impl_","_new",0xce2a4527,"tink.streams._Stream.Mapping_Impl_._new","tink/streams/Stream.hx",282,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_287_ofNext,"tink.streams._Stream.Mapping_Impl_","ofNext",0x1c6316f0,"tink.streams._Stream.Mapping_Impl_.ofNext","tink/streams/Stream.hx",287,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_286_ofNext,"tink.streams._Stream.Mapping_Impl_","ofNext",0x1c6316f0,"tink.streams._Stream.Mapping_Impl_.ofNext","tink/streams/Stream.hx",286,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_292_ofAsync,"tink.streams._Stream.Mapping_Impl_","ofAsync",0x475d2a9f,"tink.streams._Stream.Mapping_Impl_.ofAsync","tink/streams/Stream.hx",292,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_291_ofAsync,"tink.streams._Stream.Mapping_Impl_","ofAsync",0x475d2a9f,"tink.streams._Stream.Mapping_Impl_.ofAsync","tink/streams/Stream.hx",291,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_297_ofSync,"tink.streams._Stream.Mapping_Impl_","ofSync",0x1fc04c58,"tink.streams._Stream.Mapping_Impl_.ofSync","tink/streams/Stream.hx",297,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_296_ofSync,"tink.streams._Stream.Mapping_Impl_","ofSync",0x1fc04c58,"tink.streams._Stream.Mapping_Impl_.ofSync","tink/streams/Stream.hx",296,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_305_ofPlain,"tink.streams._Stream.Mapping_Impl_","ofPlain",0xe5ad256d,"tink.streams._Stream.Mapping_Impl_.ofPlain","tink/streams/Stream.hx",305,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_ad09e466a4d1510c_304_ofPlain,"tink.streams._Stream.Mapping_Impl_","ofPlain",0xe5ad256d,"tink.streams._Stream.Mapping_Impl_.ofPlain","tink/streams/Stream.hx",304,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void Mapping_Impl__obj::__construct() { }

Dynamic Mapping_Impl__obj::__CreateEmpty() { return new Mapping_Impl__obj; }

void *Mapping_Impl__obj::_hx_vtable = 0;

Dynamic Mapping_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mapping_Impl__obj > _hx_result = new Mapping_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mapping_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28df8128;
}

 ::Dynamic Mapping_Impl__obj::_new( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_282__new)
HXDLIN( 282)		 ::Dynamic this1 = o;
HXDLIN( 282)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mapping_Impl__obj,_new,return )

 ::Dynamic Mapping_Impl__obj::ofNext( ::Dynamic n){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,n) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			::Dynamic _hx_run( ::Dynamic o){
            				HX_GC_STACKFRAME(&_hx_pos_ad09e466a4d1510c_287_ofNext)
HXLINE( 287)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(::tink::streams::RegroupResult_obj::Converted(::tink::streams::_Stream::Stream_Impl__obj::single(o),null()))));
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(1)
            			::Dynamic _hx_run( ::tink::core::Outcome o){
            				HX_GC_STACKFRAME(&_hx_pos_ad09e466a4d1510c_287_ofNext)
HXLINE( 287)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 287)						 ::tink::streams::RegroupResult d = o->_hx_getObject(0);
HXDLIN( 287)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,d));
            					}
            					break;
            					case (int)1: {
HXLINE( 287)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN( 287)						return f(e);
            					}
            					break;
            				}
HXDLIN( 287)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_287_ofNext)
HXLINE( 287)			::Dynamic this1 = ::tink::core::_Promise::Promise_Impl__obj::next(n(i->__get(0)), ::Dynamic(new _hx_Closure_0()),null());
HXDLIN( 287)			 ::Dynamic f = ::tink::core::_Promise::Recover_Impl__obj::ofSync(::tink::streams::RegroupResult_obj::Errored_dyn());
HXDLIN( 287)			return ::tink::core::_Future::Future_Impl__obj::flatMap(this1, ::Dynamic(new _hx_Closure_1(f)),null());
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_286_ofNext)
HXDLIN( 286)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_2(n))));
HXDLIN( 286)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mapping_Impl__obj,ofNext,return )

 ::Dynamic Mapping_Impl__obj::ofAsync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::tink::streams::RegroupResult _hx_run( ::Dynamic o){
            				HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_292_ofAsync)
HXLINE( 292)				return ::tink::streams::RegroupResult_obj::Converted(::tink::streams::_Stream::Stream_Impl__obj::single(o),null());
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_292_ofAsync)
HXLINE( 292)			return ::tink::core::_Future::Future_Impl__obj::map(f(i->__get(0)), ::Dynamic(new _hx_Closure_0()),null());
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_291_ofAsync)
HXDLIN( 291)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_1(f))));
HXDLIN( 291)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mapping_Impl__obj,ofAsync,return )

 ::Dynamic Mapping_Impl__obj::ofSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_GC_STACKFRAME(&_hx_pos_ad09e466a4d1510c_297_ofSync)
HXLINE( 297)			 ::tink::streams::RegroupResult v;
HXDLIN( 297)			 ::tink::core::Outcome _g = f(i->__get(0));
HXDLIN( 297)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 298)					 ::Dynamic v1 = _g->_hx_getObject(0);
HXLINE( 297)					v = ::tink::streams::RegroupResult_obj::Converted(::tink::streams::_Stream::Stream_Impl__obj::single(v1),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 299)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE( 297)					v = ::tink::streams::RegroupResult_obj::Errored(e);
            				}
            				break;
            			}
HXDLIN( 297)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_296_ofSync)
HXDLIN( 296)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
HXDLIN( 296)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mapping_Impl__obj,ofSync,return )

 ::Dynamic Mapping_Impl__obj::ofPlain( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_GC_STACKFRAME(&_hx_pos_ad09e466a4d1510c_305_ofPlain)
HXLINE( 305)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::RegroupResult_obj::Converted(::tink::streams::_Stream::Stream_Impl__obj::single(f(i->__get(0))),null())));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_ad09e466a4d1510c_304_ofPlain)
HXDLIN( 304)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
HXDLIN( 304)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mapping_Impl__obj,ofPlain,return )


Mapping_Impl__obj::Mapping_Impl__obj()
{
}

bool Mapping_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Mapping_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Mapping_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Mapping_Impl__obj::__mClass;

static ::String Mapping_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("ofNext",aa,e9,57,50),
	HX_("ofAsync",a5,ba,a0,89),
	HX_("ofSync",12,1f,b5,53),
	HX_("ofPlain",73,b5,f0,27),
	::String(null())
};

void Mapping_Impl__obj::__register()
{
	Mapping_Impl__obj _hx_dummy;
	Mapping_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.Mapping_Impl_",68,46,e3,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mapping_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mapping_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Mapping_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mapping_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mapping_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
