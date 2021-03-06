#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_tink_core_Annex
#include <tink/core/Annex.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25c8717353d7500d_11_new,"tink.core.Annex","new",0xedf30493,"tink.core.Annex.new","tink/core/Annex.hx",11,0xf160aa9d)
namespace tink{
namespace core{

void Annex_obj::__construct( ::Dynamic target){
            	HX_GC_STACKFRAME(&_hx_pos_25c8717353d7500d_11_new)
HXLINE(  12)		this->target = target;
HXLINE(  13)		this->registry =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic Annex_obj::__CreateEmpty() { return new Annex_obj; }

void *Annex_obj::_hx_vtable = 0;

Dynamic Annex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Annex_obj > _hx_result = new Annex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Annex_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77bc8d83;
}


::hx::ObjectPtr< Annex_obj > Annex_obj::__new( ::Dynamic target) {
	::hx::ObjectPtr< Annex_obj > __this = new Annex_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Annex_obj > Annex_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target) {
	Annex_obj *__this = (Annex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Annex_obj), true, "tink.core.Annex"));
	*(void **)__this = Annex_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Annex_obj::Annex_obj()
{
}

void Annex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Annex);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(registry,"registry");
	HX_MARK_END_CLASS();
}

void Annex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(registry,"registry");
}

::hx::Val Annex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"registry") ) { return ::hx::Val( registry ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Annex_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"registry") ) { registry=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Annex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("registry",bd,b1,9f,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Annex_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Annex_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Annex_obj,registry),HX_("registry",bd,b1,9f,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Annex_obj_sStaticStorageInfo = 0;
#endif

static ::String Annex_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("registry",bd,b1,9f,d0),
	::String(null()) };

::hx::Class Annex_obj::__mClass;

void Annex_obj::__register()
{
	Annex_obj _hx_dummy;
	Annex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.Annex",21,bf,32,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Annex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Annex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Annex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Annex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
