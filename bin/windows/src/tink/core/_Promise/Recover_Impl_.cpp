#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
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
#ifndef INCLUDED_tink_core__Promise_Recover_Impl_
#include <tink/core/_Promise/Recover_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6de255a1f14c7557_309_ofSync,"tink.core._Promise.Recover_Impl_","ofSync",0xc708837b,"tink.core._Promise.Recover_Impl_.ofSync","tink/core/Promise.hx",309,0x59ef4bb6)
namespace tink{
namespace core{
namespace _Promise{

void Recover_Impl__obj::__construct() { }

Dynamic Recover_Impl__obj::__CreateEmpty() { return new Recover_Impl__obj; }

void *Recover_Impl__obj::_hx_vtable = 0;

Dynamic Recover_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Recover_Impl__obj > _hx_result = new Recover_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Recover_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60f533b7;
}

 ::Dynamic Recover_Impl__obj::ofSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::TypedError e){
            			HX_GC_STACKFRAME(&_hx_pos_6de255a1f14c7557_309_ofSync)
HXDLIN( 309)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(e)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_6de255a1f14c7557_309_ofSync)
HXDLIN( 309)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Recover_Impl__obj,ofSync,return )


Recover_Impl__obj::Recover_Impl__obj()
{
}

bool Recover_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ofSync") ) { outValue = ofSync_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Recover_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Recover_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Recover_Impl__obj::__mClass;

static ::String Recover_Impl__obj_sStaticFields[] = {
	HX_("ofSync",12,1f,b5,53),
	::String(null())
};

void Recover_Impl__obj::__register()
{
	Recover_Impl__obj _hx_dummy;
	Recover_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Promise.Recover_Impl_",e5,08,59,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Recover_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Recover_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Recover_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Recover_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Recover_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Promise
