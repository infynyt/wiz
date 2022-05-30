#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_CallbackList
#include <tink/core/CallbackList.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
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
#ifndef INCLUDED_tink_core_ProgressTrigger
#include <tink/core/ProgressTrigger.h>
#endif
#ifndef INCLUDED_tink_core_SignalTrigger
#include <tink/core/SignalTrigger.h>
#endif
#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressValue_Impl_
#include <tink/core/_Progress/ProgressValue_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Signal_Impl_
#include <tink/core/_Signal/Signal_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a345f2fb669fd876_131_new,"tink.core.ProgressTrigger","new",0xd0f9f5ca,"tink.core.ProgressTrigger.new","tink/core/Progress.hx",131,0x1a922e1e)
HX_DEFINE_STACK_FRAME(_hx_pos_a345f2fb669fd876_123_new,"tink.core.ProgressTrigger","new",0xd0f9f5ca,"tink.core.ProgressTrigger.new","tink/core/Progress.hx",123,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_a345f2fb669fd876_135_asProgress,"tink.core.ProgressTrigger","asProgress",0x28020695,"tink.core.ProgressTrigger.asProgress","tink/core/Progress.hx",135,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_a345f2fb669fd876_138_progress,"tink.core.ProgressTrigger","progress",0x31f2f203,"tink.core.ProgressTrigger.progress","tink/core/Progress.hx",138,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_a345f2fb669fd876_142_finish,"tink.core.ProgressTrigger","finish",0xdc8ed929,"tink.core.ProgressTrigger.finish","tink/core/Progress.hx",142,0x1a922e1e)
namespace tink{
namespace core{

void ProgressTrigger_obj::__construct( ::tink::core::ProgressStatus status){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::core::ProgressTrigger,_gthis) HXARGC(0)
            		 ::tink::core::ProgressStatus _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a345f2fb669fd876_131_new)
HXLINE( 131)			return _gthis->_status;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a345f2fb669fd876_123_new)
HXLINE( 126)		this->_changed = null();
HXLINE( 128)		 ::tink::core::ProgressTrigger _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 129)		if (::hx::IsNull( status )) {
HXLINE( 130)			status = ::tink::core::ProgressStatus_obj::InProgress(::tink::core::_Progress::ProgressValue_Impl__obj::ZERO);
HXDLIN( 130)			this->_status = status;
            		}
HXLINE( 131)		::Dynamic _hx_tmp;
HXDLIN( 131)		bool _hx_tmp1;
HXDLIN( 131)		if (::hx::IsNull( status )) {
HXLINE( 131)			_hx_tmp1 = false;
            		}
            		else {
HXLINE( 131)			if ((status->_hx_getIndex() == 1)) {
HXLINE( 131)				 ::Dynamic _g = status->_hx_getObject(0);
HXDLIN( 131)				_hx_tmp1 = true;
            			}
            			else {
HXLINE( 131)				_hx_tmp1 = false;
            			}
            		}
HXDLIN( 131)		if (_hx_tmp1) {
HXLINE( 131)			_hx_tmp = ::tink::core::_Signal::Signal_Impl__obj::dead();
            		}
            		else {
HXLINE( 131)			_hx_tmp = (this->_changed = ::tink::core::_Signal::Signal_Impl__obj::trigger());
            		}
HXDLIN( 131)		super::__construct(_hx_tmp, ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic ProgressTrigger_obj::__CreateEmpty() { return new ProgressTrigger_obj; }

void *ProgressTrigger_obj::_hx_vtable = 0;

Dynamic ProgressTrigger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressTrigger_obj > _hx_result = new ProgressTrigger_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressTrigger_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0264de1f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0264de1f;
	} else {
		return inClassId==(int)0x3bc965ba;
	}
}

 ::tink::core::_Progress::ProgressObject ProgressTrigger_obj::asProgress(){
            	HX_STACKFRAME(&_hx_pos_a345f2fb669fd876_135_asProgress)
HXDLIN( 135)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgressTrigger_obj,asProgress,return )

void ProgressTrigger_obj::progress(Float v, ::haxe::ds::Option total){
            	HX_GC_STACKFRAME(&_hx_pos_a345f2fb669fd876_138_progress)
HXDLIN( 138)		 ::tink::core::ProgressStatus _g = this->_status;
HXDLIN( 138)		bool _hx_tmp;
HXDLIN( 138)		if ((_g->_hx_getIndex() == 1)) {
HXDLIN( 138)			 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 138)			_hx_tmp = true;
            		}
            		else {
HXDLIN( 138)			_hx_tmp = false;
            		}
HXDLIN( 138)		if (!(_hx_tmp)) {
HXLINE( 139)			 ::tink::core::SignalTrigger _this = this->_changed;
HXDLIN( 139)			 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,v,total);
HXDLIN( 139)			 ::tink::core::MPair this2 = this1;
HXDLIN( 139)			_this->handlers->invoke((this->_status = ::tink::core::ProgressStatus_obj::InProgress(this2)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ProgressTrigger_obj,progress,(void))

void ProgressTrigger_obj::finish( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_a345f2fb669fd876_142_finish)
HXDLIN( 142)		 ::tink::core::ProgressStatus _g = this->_status;
HXDLIN( 142)		bool _hx_tmp;
HXDLIN( 142)		if ((_g->_hx_getIndex() == 1)) {
HXDLIN( 142)			 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 142)			_hx_tmp = true;
            		}
            		else {
HXDLIN( 142)			_hx_tmp = false;
            		}
HXDLIN( 142)		if (!(_hx_tmp)) {
HXLINE( 143)			this->_changed->handlers->invoke((this->_status = ::tink::core::ProgressStatus_obj::Finished(v)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgressTrigger_obj,finish,(void))


::hx::ObjectPtr< ProgressTrigger_obj > ProgressTrigger_obj::__new( ::tink::core::ProgressStatus status) {
	::hx::ObjectPtr< ProgressTrigger_obj > __this = new ProgressTrigger_obj();
	__this->__construct(status);
	return __this;
}

::hx::ObjectPtr< ProgressTrigger_obj > ProgressTrigger_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::core::ProgressStatus status) {
	ProgressTrigger_obj *__this = (ProgressTrigger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressTrigger_obj), true, "tink.core.ProgressTrigger"));
	*(void **)__this = ProgressTrigger_obj::_hx_vtable;
	__this->__construct(status);
	return __this;
}

ProgressTrigger_obj::ProgressTrigger_obj()
{
}

void ProgressTrigger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgressTrigger);
	HX_MARK_MEMBER_NAME(_status,"_status");
	HX_MARK_MEMBER_NAME(_changed,"_changed");
	 ::tink::core::_Progress::ProgressObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProgressTrigger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_status,"_status");
	HX_VISIT_MEMBER_NAME(_changed,"_changed");
	 ::tink::core::_Progress::ProgressObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ProgressTrigger_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { return ::hx::Val( finish_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_status") ) { return ::hx::Val( _status ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_changed") ) { return ::hx::Val( _changed ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asProgress") ) { return ::hx::Val( asProgress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ProgressTrigger_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_status") ) { _status=inValue.Cast<  ::tink::core::ProgressStatus >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_changed") ) { _changed=inValue.Cast<  ::tink::core::SignalTrigger >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressTrigger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_status",d1,f8,72,74));
	outFields->push(HX_("_changed",75,0a,85,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ProgressTrigger_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::ProgressStatus */ ,(int)offsetof(ProgressTrigger_obj,_status),HX_("_status",d1,f8,72,74)},
	{::hx::fsObject /*  ::tink::core::SignalTrigger */ ,(int)offsetof(ProgressTrigger_obj,_changed),HX_("_changed",75,0a,85,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ProgressTrigger_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressTrigger_obj_sMemberFields[] = {
	HX_("_status",d1,f8,72,74),
	HX_("_changed",75,0a,85,06),
	HX_("asProgress",bf,4a,86,fe),
	HX_("progress",ad,f7,2a,86),
	HX_("finish",53,40,7f,86),
	::String(null()) };

::hx::Class ProgressTrigger_obj::__mClass;

void ProgressTrigger_obj::__register()
{
	ProgressTrigger_obj _hx_dummy;
	ProgressTrigger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.ProgressTrigger",d8,08,8d,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ProgressTrigger_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ProgressTrigger_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressTrigger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressTrigger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
