#include <hxcpp.h>

#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fe49a69a0def38bb_11_new,"tink.core.NamedWith","new",0xae3bc55e,"tink.core.NamedWith.new","tink/core/Named.hx",11,0x48c5cd98)
namespace tink{
namespace core{

void NamedWith_obj::__construct( ::Dynamic name, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fe49a69a0def38bb_11_new)
HXLINE(  12)		this->name = name;
HXLINE(  13)		this->value = value;
            	}

Dynamic NamedWith_obj::__CreateEmpty() { return new NamedWith_obj; }

void *NamedWith_obj::_hx_vtable = 0;

Dynamic NamedWith_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NamedWith_obj > _hx_result = new NamedWith_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NamedWith_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4df025ce;
}


NamedWith_obj::NamedWith_obj()
{
}

void NamedWith_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NamedWith);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void NamedWith_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val NamedWith_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NamedWith_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NamedWith_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NamedWith_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NamedWith_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NamedWith_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NamedWith_obj_sStaticStorageInfo = 0;
#endif

static ::String NamedWith_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class NamedWith_obj::__mClass;

void NamedWith_obj::__register()
{
	NamedWith_obj _hx_dummy;
	NamedWith_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.NamedWith",6c,7e,22,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NamedWith_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NamedWith_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NamedWith_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NamedWith_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
