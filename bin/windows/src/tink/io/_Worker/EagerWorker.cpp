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
#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#include <tink/core/_Lazy/Lazy_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Worker_EagerWorker
#include <tink/io/_Worker/EagerWorker.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ca6c9939fc183b9_33_new,"tink.io._Worker.EagerWorker","new",0x41522d6b,"tink.io._Worker.EagerWorker.new","tink/io/Worker.hx",33,0x9c62dcb4)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca6c9939fc183b9_36_work,"tink.io._Worker.EagerWorker","work",0xec900e66,"tink.io._Worker.EagerWorker.work","tink/io/Worker.hx",36,0x9c62dcb4)
namespace tink{
namespace io{
namespace _Worker{

void EagerWorker_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ca6c9939fc183b9_33_new)
            	}

Dynamic EagerWorker_obj::__CreateEmpty() { return new EagerWorker_obj; }

void *EagerWorker_obj::_hx_vtable = 0;

Dynamic EagerWorker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EagerWorker_obj > _hx_result = new EagerWorker_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EagerWorker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49fe0131;
}

static ::tink::io::WorkerObject_obj _hx_tink_io__Worker_EagerWorker__hx_tink_io_WorkerObject= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::io::_Worker::EagerWorker_obj::work,
};

void *EagerWorker_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdcf3fb55: return &_hx_tink_io__Worker_EagerWorker__hx_tink_io_WorkerObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic EagerWorker_obj::work(::Dynamic task){
            	HX_GC_STACKFRAME(&_hx_pos_0ca6c9939fc183b9_36_work)
HXDLIN(  36)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::_Lazy::Lazy_Impl__obj::get(task)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(EagerWorker_obj,work,return )


::hx::ObjectPtr< EagerWorker_obj > EagerWorker_obj::__new() {
	::hx::ObjectPtr< EagerWorker_obj > __this = new EagerWorker_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EagerWorker_obj > EagerWorker_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EagerWorker_obj *__this = (EagerWorker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EagerWorker_obj), false, "tink.io._Worker.EagerWorker"));
	*(void **)__this = EagerWorker_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EagerWorker_obj::EagerWorker_obj()
{
}

::hx::Val EagerWorker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"work") ) { return ::hx::Val( work_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EagerWorker_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EagerWorker_obj_sStaticStorageInfo = 0;
#endif

static ::String EagerWorker_obj_sMemberFields[] = {
	HX_("work",d1,01,fd,4e),
	::String(null()) };

::hx::Class EagerWorker_obj::__mClass;

void EagerWorker_obj::__register()
{
	EagerWorker_obj _hx_dummy;
	EagerWorker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Worker.EagerWorker",f9,9b,e6,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EagerWorker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EagerWorker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EagerWorker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EagerWorker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace _Worker
