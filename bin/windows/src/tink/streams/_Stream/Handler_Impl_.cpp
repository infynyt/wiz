#include <hxcpp.h>

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
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_815929985b86a838_486__new,"tink.streams._Stream.Handler_Impl_","_new",0x8f8811eb,"tink.streams._Stream.Handler_Impl_._new","tink/streams/Stream.hx",486,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_815929985b86a838_490_apply,"tink.streams._Stream.Handler_Impl_","apply",0x2faf81a4,"tink.streams._Stream.Handler_Impl_.apply","tink/streams/Stream.hx",490,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_815929985b86a838_493_ofSafeSync,"tink.streams._Stream.Handler_Impl_","ofSafeSync",0xfa6f1a89,"tink.streams._Stream.Handler_Impl_.ofSafeSync","tink/streams/Stream.hx",493,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_815929985b86a838_496_ofUnknownSync,"tink.streams._Stream.Handler_Impl_","ofUnknownSync",0x1b786964,"tink.streams._Stream.Handler_Impl_.ofUnknownSync","tink/streams/Stream.hx",496,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_815929985b86a838_499_ofSafe,"tink.streams._Stream.Handler_Impl_","ofSafe",0x4dab950e,"tink.streams._Stream.Handler_Impl_.ofSafe","tink/streams/Stream.hx",499,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_815929985b86a838_502_ofUnknown,"tink.streams._Stream.Handler_Impl_","ofUnknown",0x42579a69,"tink.streams._Stream.Handler_Impl_.ofUnknown","tink/streams/Stream.hx",502,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void Handler_Impl__obj::__construct() { }

Dynamic Handler_Impl__obj::__CreateEmpty() { return new Handler_Impl__obj; }

void *Handler_Impl__obj::_hx_vtable = 0;

Dynamic Handler_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Handler_Impl__obj > _hx_result = new Handler_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Handler_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x065ceae4;
}

 ::Dynamic Handler_Impl__obj::_new( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_815929985b86a838_486__new)
HXDLIN( 486)		 ::Dynamic this1 = f;
HXDLIN( 486)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_Impl__obj,_new,return )

::Dynamic Handler_Impl__obj::apply( ::Dynamic this1, ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_815929985b86a838_490_apply)
HXDLIN( 490)		return this1(item);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Handler_Impl__obj,apply,return )

 ::Dynamic Handler_Impl__obj::ofSafeSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic i){
            			HX_GC_STACKFRAME(&_hx_pos_815929985b86a838_493_ofSafeSync)
HXDLIN( 493)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(i)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_815929985b86a838_493_ofSafeSync)
HXDLIN( 493)		 ::Dynamic this1 =  ::Dynamic(new _hx_Closure_0(f));
HXDLIN( 493)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_Impl__obj,ofSafeSync,return )

 ::Dynamic Handler_Impl__obj::ofUnknownSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic i){
            			HX_GC_STACKFRAME(&_hx_pos_815929985b86a838_496_ofUnknownSync)
HXDLIN( 496)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(i)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_815929985b86a838_496_ofUnknownSync)
HXDLIN( 496)		 ::Dynamic this1 =  ::Dynamic(new _hx_Closure_0(f));
HXDLIN( 496)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_Impl__obj,ofUnknownSync,return )

 ::Dynamic Handler_Impl__obj::ofSafe( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_815929985b86a838_499_ofSafe)
HXDLIN( 499)		 ::Dynamic this1 = f;
HXDLIN( 499)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_Impl__obj,ofSafe,return )

 ::Dynamic Handler_Impl__obj::ofUnknown( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_815929985b86a838_502_ofUnknown)
HXDLIN( 502)		 ::Dynamic this1 = f;
HXDLIN( 502)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_Impl__obj,ofUnknown,return )


Handler_Impl__obj::Handler_Impl__obj()
{
}

bool Handler_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
	case 13:
		if (HX_FIELD_EQ(inName,"ofUnknownSync") ) { outValue = ofUnknownSync_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Handler_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Handler_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Handler_Impl__obj::__mClass;

static ::String Handler_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("apply",6e,85,3b,24),
	HX_("ofSafeSync",7f,1a,8f,e0),
	HX_("ofUnknownSync",2e,47,bc,c2),
	HX_("ofSafe",04,e2,a2,53),
	HX_("ofUnknown",33,4b,92,ef),
	::String(null())
};

void Handler_Impl__obj::__register()
{
	Handler_Impl__obj _hx_dummy;
	Handler_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.Handler_Impl_",24,b0,60,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Handler_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Handler_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Handler_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Handler_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Handler_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
