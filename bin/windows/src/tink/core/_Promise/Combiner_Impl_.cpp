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
#ifndef INCLUDED_tink_core__Promise_Combiner_Impl_
#include <tink/core/_Promise/Combiner_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6fd4e598c3617773_316_ofSync,"tink.core._Promise.Combiner_Impl_","ofSync",0xc00607ce,"tink.core._Promise.Combiner_Impl_.ofSync","tink/core/Promise.hx",316,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_6fd4e598c3617773_319_ofSafe,"tink.core._Promise.Combiner_Impl_","ofSafe",0xbff3cac0,"tink.core._Promise.Combiner_Impl_.ofSafe","tink/core/Promise.hx",319,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_6fd4e598c3617773_322_ofSafeSync,"tink.core._Promise.Combiner_Impl_","ofSafeSync",0xeac9113b,"tink.core._Promise.Combiner_Impl_.ofSafeSync","tink/core/Promise.hx",322,0x59ef4bb6)
namespace tink{
namespace core{
namespace _Promise{

void Combiner_Impl__obj::__construct() { }

Dynamic Combiner_Impl__obj::__CreateEmpty() { return new Combiner_Impl__obj; }

void *Combiner_Impl__obj::_hx_vtable = 0;

Dynamic Combiner_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Combiner_Impl__obj > _hx_result = new Combiner_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Combiner_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61af7884;
}

 ::Dynamic Combiner_Impl__obj::ofSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic x1, ::Dynamic x2){
            			HX_GC_STACKFRAME(&_hx_pos_6fd4e598c3617773_316_ofSync)
HXDLIN( 316)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(x1,x2)));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_6fd4e598c3617773_316_ofSync)
HXDLIN( 316)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Combiner_Impl__obj,ofSync,return )

 ::Dynamic Combiner_Impl__obj::ofSafe( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic x1, ::Dynamic x2){
            			HX_STACKFRAME(&_hx_pos_6fd4e598c3617773_319_ofSafe)
HXDLIN( 319)			return ::tink::core::_Future::Future_Impl__obj::map(f(x1,x2),::tink::core::Outcome_obj::Success_dyn(),null());
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_6fd4e598c3617773_319_ofSafe)
HXDLIN( 319)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Combiner_Impl__obj,ofSafe,return )

 ::Dynamic Combiner_Impl__obj::ofSafeSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic x1, ::Dynamic x2){
            			HX_GC_STACKFRAME(&_hx_pos_6fd4e598c3617773_322_ofSafeSync)
HXDLIN( 322)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(f(x1,x2))));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_6fd4e598c3617773_322_ofSafeSync)
HXDLIN( 322)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Combiner_Impl__obj,ofSafeSync,return )


Combiner_Impl__obj::Combiner_Impl__obj()
{
}

bool Combiner_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ofSync") ) { outValue = ofSync_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofSafe") ) { outValue = ofSafe_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofSafeSync") ) { outValue = ofSafeSync_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Combiner_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Combiner_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Combiner_Impl__obj::__mClass;

static ::String Combiner_Impl__obj_sStaticFields[] = {
	HX_("ofSync",12,1f,b5,53),
	HX_("ofSafe",04,e2,a2,53),
	HX_("ofSafeSync",7f,1a,8f,e0),
	::String(null())
};

void Combiner_Impl__obj::__register()
{
	Combiner_Impl__obj _hx_dummy;
	Combiner_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Promise.Combiner_Impl_",32,b8,cb,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Combiner_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Combiner_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Combiner_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Combiner_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Combiner_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Promise
