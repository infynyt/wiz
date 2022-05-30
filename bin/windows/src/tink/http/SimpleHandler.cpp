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

HX_DEFINE_STACK_FRAME(_hx_pos_5c96c4446d7200bc_102_new,"tink.http.SimpleHandler","new",0x40c2e820,"tink.http.SimpleHandler.new","tink/http/Handler.hx",102,0xe735215e)
HX_LOCAL_STACK_FRAME(_hx_pos_5c96c4446d7200bc_105_process,"tink.http.SimpleHandler","process",0x59809a2f,"tink.http.SimpleHandler.process","tink/http/Handler.hx",105,0xe735215e)
namespace tink{
namespace http{

void SimpleHandler_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_5c96c4446d7200bc_102_new)
HXDLIN( 102)		this->f = f;
            	}

Dynamic SimpleHandler_obj::__CreateEmpty() { return new SimpleHandler_obj; }

void *SimpleHandler_obj::_hx_vtable = 0;

Dynamic SimpleHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleHandler_obj > _hx_result = new SimpleHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SimpleHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17dbe6ba;
}

static ::tink::http::HandlerObject_obj _hx_tink_http_SimpleHandler__hx_tink_http_HandlerObject= {
	( ::Dynamic (::hx::Object::*)( ::tink::http::IncomingRequest))&::tink::http::SimpleHandler_obj::process,
};

void *SimpleHandler_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xee501fcf: return &_hx_tink_http_SimpleHandler__hx_tink_http_HandlerObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic SimpleHandler_obj::process( ::tink::http::IncomingRequest req){
            	HX_STACKFRAME(&_hx_pos_5c96c4446d7200bc_105_process)
HXDLIN( 105)		return this->f(req);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleHandler_obj,process,return )


::hx::ObjectPtr< SimpleHandler_obj > SimpleHandler_obj::__new( ::Dynamic f) {
	::hx::ObjectPtr< SimpleHandler_obj > __this = new SimpleHandler_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< SimpleHandler_obj > SimpleHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f) {
	SimpleHandler_obj *__this = (SimpleHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleHandler_obj), true, "tink.http.SimpleHandler"));
	*(void **)__this = SimpleHandler_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

SimpleHandler_obj::SimpleHandler_obj()
{
}

void SimpleHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleHandler);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_END_CLASS();
}

void SimpleHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
}

::hx::Val SimpleHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return ::hx::Val( process_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SimpleHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SimpleHandler_obj,f),HX_("f",66,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SimpleHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleHandler_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("process",6f,a2,4a,f1),
	::String(null()) };

::hx::Class SimpleHandler_obj::__mClass;

void SimpleHandler_obj::__register()
{
	SimpleHandler_obj _hx_dummy;
	SimpleHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.SimpleHandler",2e,98,6c,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
