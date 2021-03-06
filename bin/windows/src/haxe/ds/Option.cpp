#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
namespace haxe{
namespace ds{

::haxe::ds::Option Option_obj::None;

::haxe::ds::Option Option_obj::Some( ::Dynamic v)
{
	return ::hx::CreateEnum< Option_obj >(HX_("Some",14,4f,31,37),0,1)->_hx_init(0,v);
}

bool Option_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = Option_obj::None; return true; }
	if (inName==HX_("Some",14,4f,31,37)) { outValue = Option_obj::Some_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Option_obj)

int Option_obj::__FindIndex(::String inName)
{
	if (inName==HX_("None",d8,3e,e3,33)) return 1;
	if (inName==HX_("Some",14,4f,31,37)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Option_obj,Some,return)

int Option_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Some",14,4f,31,37)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Option_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("Some",14,4f,31,37)) return Some_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Option_obj_sStaticFields[] = {
	HX_("Some",14,4f,31,37),
	HX_("None",d8,3e,e3,33),
	::String(null())
};

::hx::Class Option_obj::__mClass;

Dynamic __Create_Option_obj() { return new Option_obj; }

void Option_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ds.Option",4c,90,17,ac), ::hx::TCanCast< Option_obj >,Option_obj_sStaticFields,0,
	&__Create_Option_obj, &__Create,
	&super::__SGetClass(), &CreateOption_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Option_obj::__GetStatic;
}

void Option_obj::__boot()
{
None = ::hx::CreateConstEnum< Option_obj >(HX_("None",d8,3e,e3,33),1);
}


} // end namespace haxe
} // end namespace ds
