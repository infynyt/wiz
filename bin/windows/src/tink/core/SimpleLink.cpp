#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_SimpleLink
#include <tink/core/SimpleLink.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da9a9b98efb51741_106_new,"tink.core.SimpleLink","new",0xedb93511,"tink.core.SimpleLink.new","tink/core/Callback.hx",106,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_da9a9b98efb51741_109_cancel,"tink.core.SimpleLink","cancel",0x0643cd69,"tink.core.SimpleLink.cancel","tink/core/Callback.hx",109,0x0104eb06)
namespace tink{
namespace core{

void SimpleLink_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_da9a9b98efb51741_106_new)
HXDLIN( 106)		this->f = f;
            	}

Dynamic SimpleLink_obj::__CreateEmpty() { return new SimpleLink_obj; }

void *SimpleLink_obj::_hx_vtable = 0;

Dynamic SimpleLink_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleLink_obj > _hx_result = new SimpleLink_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SimpleLink_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x35e026fd;
}

static ::tink::core::LinkObject_obj _hx_tink_core_SimpleLink__hx_tink_core_LinkObject= {
	( void (::hx::Object::*)())&::tink::core::SimpleLink_obj::cancel,
};

void *SimpleLink_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0d15dd4a: return &_hx_tink_core_SimpleLink__hx_tink_core_LinkObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void SimpleLink_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_da9a9b98efb51741_109_cancel)
HXDLIN( 109)		if (::hx::IsNotNull( this->f )) {
HXLINE( 110)			this->f();
HXLINE( 111)			this->f = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleLink_obj,cancel,(void))


::hx::ObjectPtr< SimpleLink_obj > SimpleLink_obj::__new( ::Dynamic f) {
	::hx::ObjectPtr< SimpleLink_obj > __this = new SimpleLink_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< SimpleLink_obj > SimpleLink_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f) {
	SimpleLink_obj *__this = (SimpleLink_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleLink_obj), true, "tink.core.SimpleLink"));
	*(void **)__this = SimpleLink_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

SimpleLink_obj::SimpleLink_obj()
{
}

void SimpleLink_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleLink);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_END_CLASS();
}

void SimpleLink_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
}

::hx::Val SimpleLink_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SimpleLink_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleLink_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SimpleLink_obj,f),HX_("f",66,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SimpleLink_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleLink_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("cancel",7a,ed,33,b8),
	::String(null()) };

::hx::Class SimpleLink_obj::__mClass;

void SimpleLink_obj::__register()
{
	SimpleLink_obj _hx_dummy;
	SimpleLink_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.SimpleLink",9f,58,bb,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleLink_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleLink_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleLink_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleLink_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
