#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Callback_LinkPair
#include <tink/core/_Callback/LinkPair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88f66442b3e2c0ca_115_new,"tink.core._Callback.LinkPair","new",0x96c50d63,"tink.core._Callback.LinkPair.new","tink/core/Callback.hx",115,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_88f66442b3e2c0ca_126_cancel,"tink.core._Callback.LinkPair","cancel",0x52627457,"tink.core._Callback.LinkPair.cancel","tink/core/Callback.hx",126,0x0104eb06)
namespace tink{
namespace core{
namespace _Callback{

void LinkPair_obj::__construct(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_88f66442b3e2c0ca_115_new)
HXLINE( 119)		this->dissolved = false;
HXLINE( 121)		this->a = a;
HXLINE( 122)		this->b = b;
            	}

Dynamic LinkPair_obj::__CreateEmpty() { return new LinkPair_obj; }

void *LinkPair_obj::_hx_vtable = 0;

Dynamic LinkPair_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinkPair_obj > _hx_result = new LinkPair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LinkPair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01531ffb;
}

static ::tink::core::LinkObject_obj _hx_tink_core__Callback_LinkPair__hx_tink_core_LinkObject= {
	( void (::hx::Object::*)())&::tink::core::_Callback::LinkPair_obj::cancel,
};

void *LinkPair_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0d15dd4a: return &_hx_tink_core__Callback_LinkPair__hx_tink_core_LinkObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void LinkPair_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_88f66442b3e2c0ca_126_cancel)
HXDLIN( 126)		if (!(this->dissolved)) {
HXLINE( 127)			this->dissolved = true;
HXLINE( 128)			{
HXLINE( 128)				::Dynamic this1 = this->a;
HXDLIN( 128)				if (::hx::IsNotNull( this1 )) {
HXLINE( 128)					::tink::core::LinkObject_obj::cancel(this1);
            				}
            			}
HXLINE( 129)			{
HXLINE( 129)				::Dynamic this2 = this->b;
HXDLIN( 129)				if (::hx::IsNotNull( this2 )) {
HXLINE( 129)					::tink::core::LinkObject_obj::cancel(this2);
            				}
            			}
HXLINE( 130)			this->a = null();
HXLINE( 131)			this->b = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LinkPair_obj,cancel,(void))


::hx::ObjectPtr< LinkPair_obj > LinkPair_obj::__new(::Dynamic a,::Dynamic b) {
	::hx::ObjectPtr< LinkPair_obj > __this = new LinkPair_obj();
	__this->__construct(a,b);
	return __this;
}

::hx::ObjectPtr< LinkPair_obj > LinkPair_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic a,::Dynamic b) {
	LinkPair_obj *__this = (LinkPair_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinkPair_obj), true, "tink.core._Callback.LinkPair"));
	*(void **)__this = LinkPair_obj::_hx_vtable;
	__this->__construct(a,b);
	return __this;
}

LinkPair_obj::LinkPair_obj()
{
}

void LinkPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinkPair);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(dissolved,"dissolved");
	HX_MARK_END_CLASS();
}

void LinkPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(dissolved,"dissolved");
}

::hx::Val LinkPair_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dissolved") ) { return ::hx::Val( dissolved ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinkPair_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dissolved") ) { dissolved=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinkPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("dissolved",d3,fb,63,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinkPair_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LinkPair_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LinkPair_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsBool,(int)offsetof(LinkPair_obj,dissolved),HX_("dissolved",d3,fb,63,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinkPair_obj_sStaticStorageInfo = 0;
#endif

static ::String LinkPair_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("dissolved",d3,fb,63,b6),
	HX_("cancel",7a,ed,33,b8),
	::String(null()) };

::hx::Class LinkPair_obj::__mClass;

void LinkPair_obj::__register()
{
	LinkPair_obj _hx_dummy;
	LinkPair_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Callback.LinkPair",f1,1f,7c,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinkPair_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinkPair_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinkPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinkPair_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Callback
