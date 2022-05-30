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
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupStatus
#include <tink/streams/RegroupStatus.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Regrouper_Impl_
#include <tink/streams/_Stream/Regrouper_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8f2bdb5c598f7536_89_ofIgnorance,"tink.streams._Stream.Regrouper_Impl_","ofIgnorance",0xa5761370,"tink.streams._Stream.Regrouper_Impl_.ofIgnorance","tink/streams/Stream.hx",89,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f2bdb5c598f7536_92_ofIgnoranceSync,"tink.streams._Stream.Regrouper_Impl_","ofIgnoranceSync",0xe99571eb,"tink.streams._Stream.Regrouper_Impl_.ofIgnoranceSync","tink/streams/Stream.hx",92,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f2bdb5c598f7536_95_ofFunc,"tink.streams._Stream.Regrouper_Impl_","ofFunc",0x088c18d6,"tink.streams._Stream.Regrouper_Impl_.ofFunc","tink/streams/Stream.hx",95,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f2bdb5c598f7536_98_ofFuncSync,"tink.streams._Stream.Regrouper_Impl_","ofFuncSync",0x4b712251,"tink.streams._Stream.Regrouper_Impl_.ofFuncSync","tink/streams/Stream.hx",98,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void Regrouper_Impl__obj::__construct() { }

Dynamic Regrouper_Impl__obj::__CreateEmpty() { return new Regrouper_Impl__obj; }

void *Regrouper_Impl__obj::_hx_vtable = 0;

Dynamic Regrouper_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Regrouper_Impl__obj > _hx_result = new Regrouper_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Regrouper_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74da6ebb;
}

 ::Dynamic Regrouper_Impl__obj::ofIgnorance( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_89_ofIgnorance)
HXDLIN(  89)			return f(i);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_89_ofIgnorance)
HXDLIN(  89)		return  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Regrouper_Impl__obj,ofIgnorance,return )

 ::Dynamic Regrouper_Impl__obj::ofIgnoranceSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus _){
            			HX_GC_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_92_ofIgnoranceSync)
HXDLIN(  92)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(i)));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_92_ofIgnoranceSync)
HXDLIN(  92)		return  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Regrouper_Impl__obj,ofIgnoranceSync,return )

 ::Dynamic Regrouper_Impl__obj::ofFunc( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_95_ofFunc)
HXDLIN(  95)		return  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24),f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Regrouper_Impl__obj,ofFunc,return )

 ::Dynamic Regrouper_Impl__obj::ofFuncSync( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(2)
            		::Dynamic _hx_run(::cpp::VirtualArray i, ::tink::streams::RegroupStatus s){
            			HX_GC_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_98_ofFuncSync)
HXDLIN(  98)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,f(i,s)));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_8f2bdb5c598f7536_98_ofFuncSync)
HXDLIN(  98)		return  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("apply",6e,85,3b,24), ::Dynamic(new _hx_Closure_0(f))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Regrouper_Impl__obj,ofFuncSync,return )


Regrouper_Impl__obj::Regrouper_Impl__obj()
{
}

bool Regrouper_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ofFunc") ) { outValue = ofFunc_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ofFuncSync") ) { outValue = ofFuncSync_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ofIgnorance") ) { outValue = ofIgnorance_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ofIgnoranceSync") ) { outValue = ofIgnoranceSync_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Regrouper_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Regrouper_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Regrouper_Impl__obj::__mClass;

static ::String Regrouper_Impl__obj_sStaticFields[] = {
	HX_("ofIgnorance",2b,d6,34,cc),
	HX_("ofIgnoranceSync",26,ae,cb,af),
	HX_("ofFunc",fb,4f,1a,4b),
	HX_("ofFuncSync",f6,4f,ba,44),
	::String(null())
};

void Regrouper_Impl__obj::__register()
{
	Regrouper_Impl__obj _hx_dummy;
	Regrouper_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.Regrouper_Impl_",33,8a,5b,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Regrouper_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Regrouper_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Regrouper_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Regrouper_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Regrouper_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
