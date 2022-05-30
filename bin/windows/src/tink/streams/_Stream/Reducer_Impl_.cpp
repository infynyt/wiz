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
#ifndef INCLUDED_tink_streams_ReductionStep
#include <tink/streams/ReductionStep.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Reducer_Impl_
#include <tink/streams/_Stream/Reducer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_506__new,"tink.streams._Stream.Reducer_Impl_","_new",0x97fac0e9,"tink.streams._Stream.Reducer_Impl_._new","tink/streams/Stream.hx",506,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_510_apply,"tink.streams._Stream.Reducer_Impl_","apply",0x8b95f0e6,"tink.streams._Stream.Reducer_Impl_.apply","tink/streams/Stream.hx",510,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_513_ofSafeSync,"tink.streams._Stream.Reducer_Impl_","ofSafeSync",0xbd641c07,"tink.streams._Stream.Reducer_Impl_.ofSafeSync","tink/streams/Stream.hx",513,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_516_ofUnknownSync,"tink.streams._Stream.Reducer_Impl_","ofUnknownSync",0xdc22eaa6,"tink.streams._Stream.Reducer_Impl_.ofUnknownSync","tink/streams/Stream.hx",516,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_519_ofSafe,"tink.streams._Stream.Reducer_Impl_","ofSafe",0x5b667f8c,"tink.streams._Stream.Reducer_Impl_.ofSafe","tink/streams/Stream.hx",519,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_522_ofPlainSync,"tink.streams._Stream.Reducer_Impl_","ofPlainSync",0x32c926e6,"tink.streams._Stream.Reducer_Impl_.ofPlainSync","tink/streams/Stream.hx",522,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_525_ofUnknown,"tink.streams._Stream.Reducer_Impl_","ofUnknown",0x0413d2ab,"tink.streams._Stream.Reducer_Impl_.ofUnknown","tink/streams/Stream.hx",525,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_da1e61088440453e_528_ofPromiseBased,"tink.streams._Stream.Reducer_Impl_","ofPromiseBased",0x3afb70d7,"tink.streams._Stream.Reducer_Impl_.ofPromiseBased","tink/streams/Stream.hx",528,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void Reducer_Impl__obj::__construct() { }

Dynamic Reducer_Impl__obj::__CreateEmpty() { return new Reducer_Impl__obj; }

void *Reducer_Impl__obj::_hx_vtable = 0;

Dynamic Reducer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reducer_Impl__obj > _hx_result = new Reducer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reducer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18a49ca6;
}

 ::Dynamic Reducer_Impl__obj::_new( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_506__new)
HXDLIN( 506)		 ::Dynamic this1 = f;
HXDLIN( 506)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,_new,return )

::Dynamic Reducer_Impl__obj::apply( ::Dynamic this1, ::Dynamic res, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_510_apply)
HXDLIN( 510)		return this1(res,item);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reducer_Impl__obj,apply,return )

 ::Dynamic Reducer_Impl__obj::ofSafeSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic res, ::Dynamic cur){
            			HX_GC_STACKFRAME(&_hx_pos_da1e61088440453e_513_ofSafeSync)
HXDLIN( 513)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(res,cur)));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_513_ofSafeSync)
HXDLIN( 513)		 ::Dynamic this1 =  ::Dynamic(new _hx_Closure_0(f));
HXDLIN( 513)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,ofSafeSync,return )

 ::Dynamic Reducer_Impl__obj::ofUnknownSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic res, ::Dynamic cur){
            			HX_GC_STACKFRAME(&_hx_pos_da1e61088440453e_516_ofUnknownSync)
HXDLIN( 516)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(res,cur)));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_516_ofUnknownSync)
HXDLIN( 516)		 ::Dynamic this1 =  ::Dynamic(new _hx_Closure_0(f));
HXDLIN( 516)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,ofUnknownSync,return )

 ::Dynamic Reducer_Impl__obj::ofSafe( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_519_ofSafe)
HXDLIN( 519)		 ::Dynamic this1 = f;
HXDLIN( 519)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,ofSafe,return )

 ::Dynamic Reducer_Impl__obj::ofPlainSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic res, ::Dynamic cur){
            			HX_GC_STACKFRAME(&_hx_pos_da1e61088440453e_522_ofPlainSync)
HXDLIN( 522)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::ReductionStep_obj::Progress(f(res,cur))));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_522_ofPlainSync)
HXDLIN( 522)		 ::Dynamic this1 =  ::Dynamic(new _hx_Closure_0(f));
HXDLIN( 522)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,ofPlainSync,return )

 ::Dynamic Reducer_Impl__obj::ofUnknown( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_525_ofUnknown)
HXDLIN( 525)		 ::Dynamic this1 = f;
HXDLIN( 525)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,ofUnknown,return )

 ::Dynamic Reducer_Impl__obj::ofPromiseBased( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic res, ::Dynamic cur){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::tink::streams::ReductionStep _hx_run( ::tink::core::Outcome s){
            				HX_STACKFRAME(&_hx_pos_da1e61088440453e_528_ofPromiseBased)
HXDLIN( 528)				switch((int)(s->_hx_getIndex())){
            					case (int)0: {
HXLINE( 529)						 ::Dynamic r = s->_hx_getObject(0);
HXDLIN( 529)						return ::tink::streams::ReductionStep_obj::Progress(r);
            					}
            					break;
            					case (int)1: {
HXLINE( 530)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(s->_hx_getObject(0)) );
HXDLIN( 530)						return ::tink::streams::ReductionStep_obj::Crash(e);
            					}
            					break;
            				}
HXLINE( 528)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_da1e61088440453e_528_ofPromiseBased)
HXDLIN( 528)			return ::tink::core::_Future::Future_Impl__obj::map(f(res,cur), ::Dynamic(new _hx_Closure_0()),null());
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_da1e61088440453e_528_ofPromiseBased)
HXDLIN( 528)		 ::Dynamic this1 =  ::Dynamic(new _hx_Closure_1(f));
HXDLIN( 528)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reducer_Impl__obj,ofPromiseBased,return )


Reducer_Impl__obj::Reducer_Impl__obj()
{
}

bool Reducer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofSafe") ) { outValue = ofSafe_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ofUnknown") ) { outValue = ofUnknown_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofSafeSync") ) { outValue = ofSafeSync_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ofPlainSync") ) { outValue = ofPlainSync_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ofUnknownSync") ) { outValue = ofUnknownSync_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ofPromiseBased") ) { outValue = ofPromiseBased_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Reducer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Reducer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Reducer_Impl__obj::__mClass;

static ::String Reducer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("apply",6e,85,3b,24),
	HX_("ofSafeSync",7f,1a,8f,e0),
	HX_("ofUnknownSync",2e,47,bc,c2),
	HX_("ofSafe",04,e2,a2,53),
	HX_("ofPlainSync",6e,d1,3c,d5),
	HX_("ofUnknown",33,4b,92,ef),
	HX_("ofPromiseBased",4f,0b,93,1a),
	::String(null())
};

void Reducer_Impl__obj::__register()
{
	Reducer_Impl__obj _hx_dummy;
	Reducer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.Reducer_Impl_",e6,61,a8,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reducer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reducer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Reducer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reducer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reducer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
