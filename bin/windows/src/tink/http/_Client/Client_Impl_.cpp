#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_http_Fetch
#include <tink/http/Fetch.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequest
#include <tink/http/OutgoingRequest.h>
#endif
#ifndef INCLUDED_tink_http__Client_Client_Impl_
#include <tink/http/_Client/Client_Impl_.h>
#endif
#ifndef INCLUDED_tink_http__Client_CustomClient
#include <tink/http/_Client/CustomClient.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_715515b0470ea76d_19_fetch,"tink.http._Client.Client_Impl_","fetch",0xe9e48665,"tink.http._Client.Client_Impl_.fetch","tink/http/Client.hx",19,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_715515b0470ea76d_23_augment,"tink.http._Client.Client_Impl_","augment",0xb10dcefc,"tink.http._Client.Client_Impl_.augment","tink/http/Client.hx",23,0x4a10d869)
namespace tink{
namespace http{
namespace _Client{

void Client_Impl__obj::__construct() { }

Dynamic Client_Impl__obj::__CreateEmpty() { return new Client_Impl__obj; }

void *Client_Impl__obj::_hx_vtable = 0;

Dynamic Client_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Client_Impl__obj > _hx_result = new Client_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Client_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ee0229b;
}

::Dynamic Client_Impl__obj::fetch( ::Dynamic url, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_715515b0470ea76d_19_fetch)
HXDLIN(  19)		return ::tink::http::Fetch_obj::fetch(url,options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Client_Impl__obj,fetch,return )

::Dynamic Client_Impl__obj::augment(::Dynamic this1, ::Dynamic pipeline){
            	HX_STACKFRAME(&_hx_pos_715515b0470ea76d_23_augment)
HXDLIN(  23)		return ::tink::http::_Client::CustomClient_obj::create(this1,( (::Array< ::Dynamic>)(pipeline->__Field(HX_("before",7f,54,32,9a),::hx::paccDynamic)) ),( (::Array< ::Dynamic>)(pipeline->__Field(HX_("after",1c,66,a2,1d),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Client_Impl__obj,augment,return )


Client_Impl__obj::Client_Impl__obj()
{
}

bool Client_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fetch") ) { outValue = fetch_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"augment") ) { outValue = augment_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Client_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Client_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Client_Impl__obj::__mClass;

static ::String Client_Impl__obj_sStaticFields[] = {
	HX_("fetch",3a,14,fa,fd),
	HX_("augment",11,3c,02,20),
	::String(null())
};

void Client_Impl__obj::__register()
{
	Client_Impl__obj _hx_dummy;
	Client_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Client.Client_Impl_",59,90,fd,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Client_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Client_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Client_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Client_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Client_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Client
