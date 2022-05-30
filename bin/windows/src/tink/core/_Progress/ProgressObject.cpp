#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatus
#include <tink/core/ProgressStatus.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_SuspendableFuture
#include <tink/core/_Future/SuspendableFuture.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Suspendable
#include <tink/core/_Signal/Suspendable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_168897cb0d6e5d98_107_new,"tink.core._Progress.ProgressObject","new",0xf0ca3d53,"tink.core._Progress.ProgressObject.new","tink/core/Progress.hx",107,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_168897cb0d6e5d98_112_new,"tink.core._Progress.ProgressObject","new",0xf0ca3d53,"tink.core._Progress.ProgressObject.new","tink/core/Progress.hx",112,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_168897cb0d6e5d98_115_new,"tink.core._Progress.ProgressObject","new",0xf0ca3d53,"tink.core._Progress.ProgressObject.new","tink/core/Progress.hx",115,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_168897cb0d6e5d98_105_new,"tink.core._Progress.ProgressObject","new",0xf0ca3d53,"tink.core._Progress.ProgressObject.new","tink/core/Progress.hx",105,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_168897cb0d6e5d98_97_get_status,"tink.core._Progress.ProgressObject","get_status",0x33d4be68,"tink.core._Progress.ProgressObject.get_status","tink/core/Progress.hx",97,0x1a922e1e)
namespace tink{
namespace core{
namespace _Progress{

void ProgressObject_obj::__construct(::Dynamic changed, ::Dynamic getStatus){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Dynamic,changed) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,fire) HXARGC(1)
            			void _hx_run( ::tink::core::ProgressStatus s){
            				HX_STACKFRAME(&_hx_pos_168897cb0d6e5d98_107_new)
HXLINE( 107)				if ((s->_hx_getIndex() == 0)) {
HXLINE( 108)					 ::tink::core::MPair v = s->_hx_getObject(0).StaticCast<  ::tink::core::MPair >();
HXDLIN( 108)					fire(v);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_168897cb0d6e5d98_107_new)
HXLINE( 107)			return ::tink::core::_Signal::SignalObject_obj::listen(changed, ::Dynamic(new _hx_Closure_0(fire)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::Dynamic,changed, ::Dynamic,getStatus) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic fire){
            			HX_GC_STACKFRAME(&_hx_pos_168897cb0d6e5d98_112_new)
HXLINE( 112)			 ::tink::core::ProgressStatus _g = getStatus();
HXDLIN( 112)			if ((_g->_hx_getIndex() == 1)) {
HXLINE( 113)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 113)				fire(v);
HXDLIN( 113)				return null();
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,fire) HXARGC(1)
            				void _hx_run( ::tink::core::ProgressStatus s){
            					HX_GC_STACKFRAME(&_hx_pos_168897cb0d6e5d98_115_new)
HXLINE( 115)					if ((s->_hx_getIndex() == 1)) {
HXLINE( 117)						 ::Dynamic v = s->_hx_getObject(0);
HXDLIN( 117)						fire(v);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 115)				return ::tink::core::_Signal::SignalObject_obj::listen(changed, ::Dynamic(new _hx_Closure_2(fire)));
            			}
HXLINE( 112)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_168897cb0d6e5d98_105_new)
HXLINE( 106)		this->changed = changed;
HXLINE( 107)		 ::Dynamic init = null();
HXDLIN( 107)		::Dynamic this1 =  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(changed)),init);
HXDLIN( 107)		this->progressed = this1;
HXLINE( 111)		this->getStatus = getStatus;
HXLINE( 112)		::Dynamic this2 =  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_3(changed,getStatus)));
HXDLIN( 112)		this->result = this2;
            	}

Dynamic ProgressObject_obj::__CreateEmpty() { return new ProgressObject_obj; }

void *ProgressObject_obj::_hx_vtable = 0;

Dynamic ProgressObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressObject_obj > _hx_result = new ProgressObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ProgressObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0264de1f;
}

 ::tink::core::ProgressStatus ProgressObject_obj::get_status(){
            	HX_STACKFRAME(&_hx_pos_168897cb0d6e5d98_97_get_status)
HXDLIN(  97)		return this->getStatus();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgressObject_obj,get_status,return )


::hx::ObjectPtr< ProgressObject_obj > ProgressObject_obj::__new(::Dynamic changed, ::Dynamic getStatus) {
	::hx::ObjectPtr< ProgressObject_obj > __this = new ProgressObject_obj();
	__this->__construct(changed,getStatus);
	return __this;
}

::hx::ObjectPtr< ProgressObject_obj > ProgressObject_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic changed, ::Dynamic getStatus) {
	ProgressObject_obj *__this = (ProgressObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressObject_obj), true, "tink.core._Progress.ProgressObject"));
	*(void **)__this = ProgressObject_obj::_hx_vtable;
	__this->__construct(changed,getStatus);
	return __this;
}

ProgressObject_obj::ProgressObject_obj()
{
}

void ProgressObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgressObject);
	HX_MARK_MEMBER_NAME(getStatus,"getStatus");
	HX_MARK_MEMBER_NAME(changed,"changed");
	HX_MARK_MEMBER_NAME(progressed,"progressed");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

void ProgressObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(getStatus,"getStatus");
	HX_VISIT_MEMBER_NAME(changed,"changed");
	HX_VISIT_MEMBER_NAME(progressed,"progressed");
	HX_VISIT_MEMBER_NAME(result,"result");
}

::hx::Val ProgressObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_status() ); }
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"changed") ) { return ::hx::Val( changed ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getStatus") ) { return ::hx::Val( getStatus ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_status") ) { return ::hx::Val( get_status_dyn() ); }
		if (HX_FIELD_EQ(inName,"progressed") ) { return ::hx::Val( progressed ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ProgressObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"changed") ) { changed=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getStatus") ) { getStatus=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"progressed") ) { progressed=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("changed",f4,b0,cc,cc));
	outFields->push(HX_("progressed",4c,55,9a,a0));
	outFields->push(HX_("result",dd,68,84,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ProgressObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ProgressObject_obj,getStatus),HX_("getStatus",68,70,52,82)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ProgressObject_obj,changed),HX_("changed",f4,b0,cc,cc)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ProgressObject_obj,progressed),HX_("progressed",4c,55,9a,a0)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ProgressObject_obj,result),HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ProgressObject_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressObject_obj_sMemberFields[] = {
	HX_("get_status",fb,56,83,f6),
	HX_("getStatus",68,70,52,82),
	HX_("changed",f4,b0,cc,cc),
	HX_("progressed",4c,55,9a,a0),
	HX_("result",dd,68,84,08),
	::String(null()) };

::hx::Class ProgressObject_obj::__mClass;

void ProgressObject_obj::__register()
{
	ProgressObject_obj _hx_dummy;
	ProgressObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Progress.ProgressObject",e1,97,4e,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ProgressObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ProgressObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Progress
