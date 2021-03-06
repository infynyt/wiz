#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
#ifndef INCLUDED_tink_io__Worker_EagerWorker
#include <tink/io/_Worker/EagerWorker.h>
#endif
#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#include <tink/io/_Worker/Worker_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ba1492c6739e3774_17_ensure,"tink.io._Worker.Worker_Impl_","ensure",0xb06dab31,"tink.io._Worker.Worker_Impl_.ensure","tink/io/Worker.hx",17,0x9c62dcb4)
HX_LOCAL_STACK_FRAME(_hx_pos_ba1492c6739e3774_20_get,"tink.io._Worker.Worker_Impl_","get",0x631f3543,"tink.io._Worker.Worker_Impl_.get","tink/io/Worker.hx",20,0x9c62dcb4)
HX_LOCAL_STACK_FRAME(_hx_pos_ba1492c6739e3774_23_work,"tink.io._Worker.Worker_Impl_","work",0x62ca6484,"tink.io._Worker.Worker_Impl_.work","tink/io/Worker.hx",23,0x9c62dcb4)
HX_LOCAL_STACK_FRAME(_hx_pos_ba1492c6739e3774_7_boot,"tink.io._Worker.Worker_Impl_","boot",0x54e8e6e5,"tink.io._Worker.Worker_Impl_.boot","tink/io/Worker.hx",7,0x9c62dcb4)
HX_LOCAL_STACK_FRAME(_hx_pos_ba1492c6739e3774_12_boot,"tink.io._Worker.Worker_Impl_","boot",0x54e8e6e5,"tink.io._Worker.Worker_Impl_.boot","tink/io/Worker.hx",12,0x9c62dcb4)
namespace tink{
namespace io{
namespace _Worker{

void Worker_Impl__obj::__construct() { }

Dynamic Worker_Impl__obj::__CreateEmpty() { return new Worker_Impl__obj; }

void *Worker_Impl__obj::_hx_vtable = 0;

Dynamic Worker_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Worker_Impl__obj > _hx_result = new Worker_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Worker_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x132db49b;
}

::Dynamic Worker_Impl__obj::EAGER;

::Array< ::Dynamic> Worker_Impl__obj::pool;

::Dynamic Worker_Impl__obj::ensure(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ba1492c6739e3774_17_ensure)
HXDLIN(  17)		if (::hx::IsNull( this1 )) {
HXDLIN(  17)			return ::tink::io::_Worker::Worker_Impl__obj::get();
            		}
            		else {
HXDLIN(  17)			return this1;
            		}
HXDLIN(  17)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Worker_Impl__obj,ensure,return )

::Dynamic Worker_Impl__obj::get(){
            	HX_STACKFRAME(&_hx_pos_ba1492c6739e3774_20_get)
HXDLIN(  20)		return ::tink::io::_Worker::Worker_Impl__obj::pool->__get(::Std_obj::random(::tink::io::_Worker::Worker_Impl__obj::pool->length));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Worker_Impl__obj,get,return )

::Dynamic Worker_Impl__obj::work(::Dynamic this1,::Dynamic task){
            	HX_STACKFRAME(&_hx_pos_ba1492c6739e3774_23_work)
HXDLIN(  23)		return ::tink::io::WorkerObject_obj::work(this1,task);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Worker_Impl__obj,work,return )


Worker_Impl__obj::Worker_Impl__obj()
{
}

bool Worker_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"work") ) { outValue = work_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ensure") ) { outValue = ensure_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Worker_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Worker_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Worker_Impl__obj::EAGER,HX_("EAGER",98,01,d3,e5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Worker_Impl__obj::pool,HX_("pool",dc,80,5c,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Worker_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Worker_Impl__obj::EAGER,"EAGER");
	HX_MARK_MEMBER_NAME(Worker_Impl__obj::pool,"pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Worker_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Worker_Impl__obj::EAGER,"EAGER");
	HX_VISIT_MEMBER_NAME(Worker_Impl__obj::pool,"pool");
};

#endif

::hx::Class Worker_Impl__obj::__mClass;

static ::String Worker_Impl__obj_sStaticFields[] = {
	HX_("EAGER",98,01,d3,e5),
	HX_("pool",dc,80,5c,4a),
	HX_("ensure",be,f5,7b,04),
	HX_("get",96,80,4e,00),
	HX_("work",d1,01,fd,4e),
	::String(null())
};

void Worker_Impl__obj::__register()
{
	Worker_Impl__obj _hx_dummy;
	Worker_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Worker.Worker_Impl_",9b,fa,c7,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Worker_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Worker_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Worker_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Worker_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Worker_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Worker_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Worker_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Worker_Impl__obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_ba1492c6739e3774_7_boot)
HXDLIN(   7)		EAGER =  ::tink::io::_Worker::EagerWorker_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_ba1492c6739e3774_12_boot)
HXDLIN(  12)		pool = ::Array_obj< ::Dynamic>::__new(1)->init(0,::tink::io::_Worker::Worker_Impl__obj::EAGER);
            	}
}

} // end namespace tink
} // end namespace io
} // end namespace _Worker
