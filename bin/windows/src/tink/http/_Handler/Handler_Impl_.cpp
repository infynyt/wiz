#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_http_HandlerObject
#include <tink/http/HandlerObject.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequest
#include <tink/http/IncomingRequest.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_SimpleHandler
#include <tink/http/SimpleHandler.h>
#endif
#ifndef INCLUDED_tink_http__Handler_Handler_Impl_
#include <tink/http/_Handler/Handler_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9e97d29aaa91a2ad_29_ofFunc,"tink.http._Handler.Handler_Impl_","ofFunc",0xb89e32d8,"tink.http._Handler.Handler_Impl_.ofFunc","tink/http/Handler.hx",29,0xe735215e)
namespace tink{
namespace http{
namespace _Handler{

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
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c1c8ec5;
}

::Dynamic Handler_Impl__obj::ofFunc( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_9e97d29aaa91a2ad_29_ofFunc)
HXDLIN(  29)		return  ::tink::http::SimpleHandler_obj::__alloc( HX_CTX ,f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_Impl__obj,ofFunc,return )


Handler_Impl__obj::Handler_Impl__obj()
{
}

bool Handler_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ofFunc") ) { outValue = ofFunc_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Handler_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Handler_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Handler_Impl__obj::__mClass;

static ::String Handler_Impl__obj_sStaticFields[] = {
	HX_("ofFunc",fb,4f,1a,4b),
	::String(null())
};

void Handler_Impl__obj::__register()
{
	Handler_Impl__obj _hx_dummy;
	Handler_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Handler.Handler_Impl_",f1,43,13,90);
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
} // end namespace http
} // end namespace _Handler
