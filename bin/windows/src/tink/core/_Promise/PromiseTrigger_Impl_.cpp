#include <hxcpp.h>

#ifndef INCLUDED_tink_core_FutureTrigger
#include <tink/core/FutureTrigger.h>
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
#ifndef INCLUDED_tink_core__Promise_PromiseTrigger_Impl_
#include <tink/core/_Promise/PromiseTrigger_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2bb42bc344a004dc_329__new,"tink.core._Promise.PromiseTrigger_Impl_","_new",0x2691d253,"tink.core._Promise.PromiseTrigger_Impl_._new","tink/core/Promise.hx",329,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_2bb42bc344a004dc_333_resolve,"tink.core._Promise.PromiseTrigger_Impl_","resolve",0x1740793a,"tink.core._Promise.PromiseTrigger_Impl_.resolve","tink/core/Promise.hx",333,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_2bb42bc344a004dc_336_reject,"tink.core._Promise.PromiseTrigger_Impl_","reject",0xb9d6aed1,"tink.core._Promise.PromiseTrigger_Impl_.reject","tink/core/Promise.hx",336,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_2bb42bc344a004dc_338_asPromise,"tink.core._Promise.PromiseTrigger_Impl_","asPromise",0x19de1897,"tink.core._Promise.PromiseTrigger_Impl_.asPromise","tink/core/Promise.hx",338,0x59ef4bb6)
namespace tink{
namespace core{
namespace _Promise{

void PromiseTrigger_Impl__obj::__construct() { }

Dynamic PromiseTrigger_Impl__obj::__CreateEmpty() { return new PromiseTrigger_Impl__obj; }

void *PromiseTrigger_Impl__obj::_hx_vtable = 0;

Dynamic PromiseTrigger_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PromiseTrigger_Impl__obj > _hx_result = new PromiseTrigger_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PromiseTrigger_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x047d7c2a;
}

 ::tink::core::FutureTrigger PromiseTrigger_Impl__obj::_new(){
            	HX_GC_STACKFRAME(&_hx_pos_2bb42bc344a004dc_329__new)
HXDLIN( 329)		 ::tink::core::FutureTrigger this1 =  ::tink::core::FutureTrigger_obj::__alloc( HX_CTX );
HXDLIN( 329)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PromiseTrigger_Impl__obj,_new,return )

bool PromiseTrigger_Impl__obj::resolve( ::tink::core::FutureTrigger this1, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_2bb42bc344a004dc_333_resolve)
HXDLIN( 333)		return this1->trigger(::tink::core::Outcome_obj::Success(v));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PromiseTrigger_Impl__obj,resolve,return )

bool PromiseTrigger_Impl__obj::reject( ::tink::core::FutureTrigger this1, ::tink::core::TypedError e){
            	HX_STACKFRAME(&_hx_pos_2bb42bc344a004dc_336_reject)
HXDLIN( 336)		return this1->trigger(::tink::core::Outcome_obj::Failure(e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PromiseTrigger_Impl__obj,reject,return )

::Dynamic PromiseTrigger_Impl__obj::asPromise( ::tink::core::FutureTrigger this1){
            	HX_STACKFRAME(&_hx_pos_2bb42bc344a004dc_338_asPromise)
HXDLIN( 338)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseTrigger_Impl__obj,asPromise,return )


PromiseTrigger_Impl__obj::PromiseTrigger_Impl__obj()
{
}

bool PromiseTrigger_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { outValue = reject_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"asPromise") ) { outValue = asPromise_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PromiseTrigger_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PromiseTrigger_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PromiseTrigger_Impl__obj::__mClass;

static ::String PromiseTrigger_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("resolve",ec,12,60,67),
	HX_("reject",5f,51,85,02),
	HX_("asPromise",c9,02,5d,64),
	::String(null())
};

void PromiseTrigger_Impl__obj::__register()
{
	PromiseTrigger_Impl__obj _hx_dummy;
	PromiseTrigger_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Promise.PromiseTrigger_Impl_",bc,c8,7e,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PromiseTrigger_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PromiseTrigger_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PromiseTrigger_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PromiseTrigger_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PromiseTrigger_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Promise
