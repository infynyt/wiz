#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
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
#ifndef INCLUDED_tink_core__Promise_Next_Impl_
#include <tink/core/_Promise/Next_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e94dd746376366a6_291_ofSafe,"tink.core._Promise.Next_Impl_","ofSafe",0x55933a60,"tink.core._Promise.Next_Impl_.ofSafe","tink/core/Promise.hx",291,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e94dd746376366a6_294_ofSync,"tink.core._Promise.Next_Impl_","ofSync",0x55a5776e,"tink.core._Promise.Next_Impl_.ofSync","tink/core/Promise.hx",294,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e94dd746376366a6_297_ofSafeSync,"tink.core._Promise.Next_Impl_","ofSafeSync",0xd668d0db,"tink.core._Promise.Next_Impl_.ofSafeSync","tink/core/Promise.hx",297,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e94dd746376366a6_300__chain,"tink.core._Promise.Next_Impl_","_chain",0x438b349e,"tink.core._Promise.Next_Impl_._chain","tink/core/Promise.hx",300,0x59ef4bb6)
namespace tink{
namespace core{
namespace _Promise{

void Next_Impl__obj::__construct() { }

Dynamic Next_Impl__obj::__CreateEmpty() { return new Next_Impl__obj; }

void *Next_Impl__obj::_hx_vtable = 0;

Dynamic Next_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Next_Impl__obj > _hx_result = new Next_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Next_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ff35280;
}

 ::Dynamic Next_Impl__obj::ofSafe( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_e94dd746376366a6_291_ofSafe)
HXDLIN( 291)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(x)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e94dd746376366a6_291_ofSafe)
HXDLIN( 291)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Next_Impl__obj,ofSafe,return )

 ::Dynamic Next_Impl__obj::ofSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic x){
            			HX_STACKFRAME(&_hx_pos_e94dd746376366a6_294_ofSync)
HXDLIN( 294)			return ::tink::core::_Future::Future_Impl__obj::map(f(x),::tink::core::Outcome_obj::Success_dyn(),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e94dd746376366a6_294_ofSync)
HXDLIN( 294)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Next_Impl__obj,ofSync,return )

 ::Dynamic Next_Impl__obj::ofSafeSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic x){
            			HX_GC_STACKFRAME(&_hx_pos_e94dd746376366a6_297_ofSafeSync)
HXDLIN( 297)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(f(x))));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e94dd746376366a6_297_ofSafeSync)
HXDLIN( 297)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Next_Impl__obj,ofSafeSync,return )

 ::Dynamic Next_Impl__obj::_chain( ::Dynamic a, ::Dynamic b){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,a, ::Dynamic,b) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic v){
            			HX_STACKFRAME(&_hx_pos_e94dd746376366a6_300__chain)
HXDLIN( 300)			::Dynamic _hx_tmp = a(v);
HXDLIN( 300)			return ::tink::core::_Promise::Promise_Impl__obj::next(_hx_tmp,b,null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_e94dd746376366a6_300__chain)
HXDLIN( 300)		return  ::Dynamic(new _hx_Closure_0(a,b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Next_Impl__obj,_chain,return )


Next_Impl__obj::Next_Impl__obj()
{
}

bool Next_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ofSafe") ) { outValue = ofSafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofSync") ) { outValue = ofSync_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_chain") ) { outValue = _chain_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofSafeSync") ) { outValue = ofSafeSync_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Next_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Next_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Next_Impl__obj::__mClass;

static ::String Next_Impl__obj_sStaticFields[] = {
	HX_("ofSafe",04,e2,a2,53),
	HX_("ofSync",12,1f,b5,53),
	HX_("ofSafeSync",7f,1a,8f,e0),
	HX_("_chain",42,dc,9a,41),
	::String(null())
};

void Next_Impl__obj::__register()
{
	Next_Impl__obj _hx_dummy;
	Next_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Promise.Next_Impl_",92,94,ea,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Next_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Next_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Next_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Next_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Next_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Promise
