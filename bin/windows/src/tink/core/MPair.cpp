#include <hxcpp.h>

#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7fda083185addcb6_27_new,"tink.core.MPair","new",0x25c97fa6,"tink.core.MPair.new","tink/core/Pair.hx",27,0x6a29d151)
namespace tink{
namespace core{

void MPair_obj::__construct( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_7fda083185addcb6_27_new)
HXLINE(  28)		this->a = a;
HXLINE(  29)		this->b = b;
            	}

Dynamic MPair_obj::__CreateEmpty() { return new MPair_obj; }

void *MPair_obj::_hx_vtable = 0;

Dynamic MPair_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MPair_obj > _hx_result = new MPair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MPair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cad4316;
}


MPair_obj::MPair_obj()
{
}

void MPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MPair);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void MPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
}

::hx::Val MPair_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MPair_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MPair_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MPair_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MPair_obj,b),HX_("b",62,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MPair_obj_sStaticStorageInfo = 0;
#endif

static ::String MPair_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	::String(null()) };

::hx::Class MPair_obj::__mClass;

void MPair_obj::__register()
{
	MPair_obj _hx_dummy;
	MPair_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.MPair",b4,74,23,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MPair_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MPair_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MPair_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
