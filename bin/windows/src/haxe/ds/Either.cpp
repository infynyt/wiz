#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Either
#include <haxe/ds/Either.h>
#endif
namespace haxe{
namespace ds{

::haxe::ds::Either Either_obj::Left( ::Dynamic v)
{
	return ::hx::CreateEnum< Either_obj >(HX_("Left",27,34,89,32),0,1)->_hx_init(0,v);
}

::haxe::ds::Either Either_obj::Right( ::Dynamic v)
{
	return ::hx::CreateEnum< Either_obj >(HX_("Right",bc,7b,91,7c),1,1)->_hx_init(0,v);
}

bool Either_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Left",27,34,89,32)) { outValue = Either_obj::Left_dyn(); return true; }
	if (inName==HX_("Right",bc,7b,91,7c)) { outValue = Either_obj::Right_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Either_obj)

int Either_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either_obj,Left,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either_obj,Right,return)

int Either_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Left",27,34,89,32)) return 1;
	if (inName==HX_("Right",bc,7b,91,7c)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Either_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Left",27,34,89,32)) return Left_dyn();
	if (inName==HX_("Right",bc,7b,91,7c)) return Right_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Either_obj_sStaticFields[] = {
	HX_("Left",27,34,89,32),
	HX_("Right",bc,7b,91,7c),
	::String(null())
};

::hx::Class Either_obj::__mClass;

Dynamic __Create_Either_obj() { return new Either_obj; }

void Either_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ds.Either",1c,1a,b7,a4), ::hx::TCanCast< Either_obj >,Either_obj_sStaticFields,0,
	&__Create_Either_obj, &__Create,
	&super::__SGetClass(), &CreateEither_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Either_obj::__GetStatic;
}

void Either_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ds
