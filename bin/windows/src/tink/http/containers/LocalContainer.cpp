#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SignalTrigger
#include <tink/core/SignalTrigger.h>
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
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
#ifndef INCLUDED_tink_http_ContainerResult
#include <tink/http/ContainerResult.h>
#endif
#ifndef INCLUDED_tink_http_HandlerObject
#include <tink/http/HandlerObject.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequest
#include <tink/http/IncomingRequest.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Response_OutgoingResponseData
#include <tink/http/_Response/OutgoingResponseData.h>
#endif
#ifndef INCLUDED_tink_http_containers_LocalContainer
#include <tink/http/containers/LocalContainer.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7b671b15c8cf7cf_16_new,"tink.http.containers.LocalContainer","new",0x208677da,"tink.http.containers.LocalContainer.new","tink/http/containers/LocalContainer.hx",16,0x03f5dc15)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b671b15c8cf7cf_23_run,"tink.http.containers.LocalContainer","run",0x20898ec5,"tink.http.containers.LocalContainer.run","tink/http/containers/LocalContainer.hx",23,0x03f5dc15)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b671b15c8cf7cf_18_run,"tink.http.containers.LocalContainer","run",0x20898ec5,"tink.http.containers.LocalContainer.run","tink/http/containers/LocalContainer.hx",18,0x03f5dc15)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b671b15c8cf7cf_29_serve,"tink.http.containers.LocalContainer","serve",0x09f524c9,"tink.http.containers.LocalContainer.serve","tink/http/containers/LocalContainer.hx",29,0x03f5dc15)
namespace tink{
namespace http{
namespace containers{

void LocalContainer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7b671b15c8cf7cf_16_new)
            	}

Dynamic LocalContainer_obj::__CreateEmpty() { return new LocalContainer_obj; }

void *LocalContainer_obj::_hx_vtable = 0;

Dynamic LocalContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocalContainer_obj > _hx_result = new LocalContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocalContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x315b134a;
}

static ::tink::http::Container_obj _hx_tink_http_containers_LocalContainer__hx_tink_http_Container= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::http::containers::LocalContainer_obj::run,
};

void *LocalContainer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x68c1b3e7: return &_hx_tink_http_containers_LocalContainer__hx_tink_http_Container;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic LocalContainer_obj::run(::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::http::containers::LocalContainer,_gthis) HXARGC(1)
            		::Dynamic _hx_run(bool hard){
            			HX_GC_STACKFRAME(&_hx_pos_b7b671b15c8cf7cf_23_run)
HXLINE(  24)			_gthis->running = false;
HXLINE(  25)			return ::tink::core::_Future::Future_Impl__obj::map( ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,true)),::tink::core::Outcome_obj::Success_dyn(),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_b7b671b15c8cf7cf_18_run)
HXDLIN(  18)		 ::tink::http::containers::LocalContainer _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  19)		this->handler = handler;
HXLINE(  20)		this->running = true;
HXLINE(  21)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::http::ContainerResult_obj::Running( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("failures",e9,d0,27,04), ::tink::core::SignalTrigger_obj::__alloc( HX_CTX ))
            			->setFixed(1,HX_("shutdown",96,fc,0b,6b), ::Dynamic(new _hx_Closure_0(_gthis)))))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalContainer_obj,run,return )

::Dynamic LocalContainer_obj::serve( ::tink::http::IncomingRequest req){
            	HX_GC_STACKFRAME(&_hx_pos_b7b671b15c8cf7cf_29_serve)
HXLINE(  30)		if (!(this->running)) {
HXLINE(  31)			 ::tink::http::ResponseHeaderBase this1 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,503,HX_("Server stopped",d0,ef,79,87),::Array_obj< ::Dynamic>::__new(0),HX_("HTTP/1.1",6d,25,7a,80));
HXLINE(  30)			 ::tink::http::_Response::OutgoingResponseData this2 =  ::tink::http::_Response::OutgoingResponseData_obj::__alloc( HX_CTX ,this1,::tink::io::_Source::Source_Impl__obj::EMPTY);
HXDLIN(  30)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,this2));
            		}
HXLINE(  34)		return ::tink::http::HandlerObject_obj::process(this->handler,req);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalContainer_obj,serve,return )


::hx::ObjectPtr< LocalContainer_obj > LocalContainer_obj::__new() {
	::hx::ObjectPtr< LocalContainer_obj > __this = new LocalContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocalContainer_obj > LocalContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocalContainer_obj *__this = (LocalContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocalContainer_obj), true, "tink.http.containers.LocalContainer"));
	*(void **)__this = LocalContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocalContainer_obj::LocalContainer_obj()
{
}

void LocalContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalContainer);
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_END_CLASS();
}

void LocalContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(running,"running");
}

::hx::Val LocalContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"serve") ) { return ::hx::Val( serve_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return ::hx::Val( handler ); }
		if (HX_FIELD_EQ(inName,"running") ) { return ::hx::Val( running ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocalContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocalContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handler",ca,af,d5,45));
	outFields->push(HX_("running",ff,6d,69,eb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocalContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LocalContainer_obj,handler),HX_("handler",ca,af,d5,45)},
	{::hx::fsBool,(int)offsetof(LocalContainer_obj,running),HX_("running",ff,6d,69,eb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocalContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String LocalContainer_obj_sMemberFields[] = {
	HX_("handler",ca,af,d5,45),
	HX_("running",ff,6d,69,eb),
	HX_("run",4b,e7,56,00),
	HX_("serve",cf,2a,2e,7a),
	::String(null()) };

::hx::Class LocalContainer_obj::__mClass;

void LocalContainer_obj::__register()
{
	LocalContainer_obj _hx_dummy;
	LocalContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.containers.LocalContainer",e8,42,0b,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocalContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocalContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace containers
