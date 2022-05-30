#include <hxcpp.h>

#ifndef INCLUDED_tink_core_CallbackLinkRef
#include <tink/core/CallbackLinkRef.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b019900c03d6ae52_61_new,"tink.core.CallbackLinkRef","new",0xd52d6b73,"tink.core.CallbackLinkRef.new","tink/core/Callback.hx",61,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_b019900c03d6ae52_63_cancel,"tink.core.CallbackLinkRef","cancel",0x319c4047,"tink.core.CallbackLinkRef.cancel","tink/core/Callback.hx",63,0x0104eb06)
namespace tink{
namespace core{

void CallbackLinkRef_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b019900c03d6ae52_61_new)
            	}

Dynamic CallbackLinkRef_obj::__CreateEmpty() { return new CallbackLinkRef_obj; }

void *CallbackLinkRef_obj::_hx_vtable = 0;

Dynamic CallbackLinkRef_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallbackLinkRef_obj > _hx_result = new CallbackLinkRef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallbackLinkRef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2af492e3;
}

static ::tink::core::LinkObject_obj _hx_tink_core_CallbackLinkRef__hx_tink_core_LinkObject= {
	( void (::hx::Object::*)())&::tink::core::CallbackLinkRef_obj::cancel,
};

void *CallbackLinkRef_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0d15dd4a: return &_hx_tink_core_CallbackLinkRef__hx_tink_core_LinkObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void CallbackLinkRef_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_b019900c03d6ae52_63_cancel)
HXDLIN(  63)		::Dynamic this1 = this->link;
HXDLIN(  63)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  63)			::tink::core::LinkObject_obj::cancel(this1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackLinkRef_obj,cancel,(void))


::hx::ObjectPtr< CallbackLinkRef_obj > CallbackLinkRef_obj::__new() {
	::hx::ObjectPtr< CallbackLinkRef_obj > __this = new CallbackLinkRef_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CallbackLinkRef_obj > CallbackLinkRef_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CallbackLinkRef_obj *__this = (CallbackLinkRef_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallbackLinkRef_obj), true, "tink.core.CallbackLinkRef"));
	*(void **)__this = CallbackLinkRef_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CallbackLinkRef_obj::CallbackLinkRef_obj()
{
}

void CallbackLinkRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallbackLinkRef);
	HX_MARK_MEMBER_NAME(link,"link");
	HX_MARK_END_CLASS();
}

void CallbackLinkRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(link,"link");
}

::hx::Val CallbackLinkRef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CallbackLinkRef_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { link=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CallbackLinkRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("link",fa,17,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CallbackLinkRef_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(CallbackLinkRef_obj,link),HX_("link",fa,17,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CallbackLinkRef_obj_sStaticStorageInfo = 0;
#endif

static ::String CallbackLinkRef_obj_sMemberFields[] = {
	HX_("link",fa,17,b3,47),
	HX_("cancel",7a,ed,33,b8),
	::String(null()) };

::hx::Class CallbackLinkRef_obj::__mClass;

void CallbackLinkRef_obj::__register()
{
	CallbackLinkRef_obj _hx_dummy;
	CallbackLinkRef_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.CallbackLinkRef",01,36,b8,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CallbackLinkRef_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CallbackLinkRef_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackLinkRef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackLinkRef_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
