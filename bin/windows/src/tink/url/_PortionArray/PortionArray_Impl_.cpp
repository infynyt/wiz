#include <hxcpp.h>

#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#include <tink/url/_Portion/Portion_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__PortionArray_PortionArray_Impl_
#include <tink/url/_PortionArray/PortionArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7595225e5286e054_7_toStringArray,"tink.url._PortionArray.PortionArray_Impl_","toStringArray",0x57b4ee49,"tink.url._PortionArray.PortionArray_Impl_.toStringArray","tink/url/PortionArray.hx",7,0x53e1bfef)
namespace tink{
namespace url{
namespace _PortionArray{

void PortionArray_Impl__obj::__construct() { }

Dynamic PortionArray_Impl__obj::__CreateEmpty() { return new PortionArray_Impl__obj; }

void *PortionArray_Impl__obj::_hx_vtable = 0;

Dynamic PortionArray_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PortionArray_Impl__obj > _hx_result = new PortionArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PortionArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0112ea86;
}

::Array< ::String > PortionArray_Impl__obj::toStringArray(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_7595225e5286e054_7_toStringArray)
HXDLIN(   7)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(   7)		{
HXDLIN(   7)			int _g1 = 0;
HXDLIN(   7)			while((_g1 < this1->length)){
HXDLIN(   7)				::String p = this1->__get(_g1);
HXDLIN(   7)				_g1 = (_g1 + 1);
HXDLIN(   7)				_g->push(::tink::url::_Portion::Portion_Impl__obj::toString(p));
            			}
            		}
HXDLIN(   7)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PortionArray_Impl__obj,toStringArray,return )


PortionArray_Impl__obj::PortionArray_Impl__obj()
{
}

bool PortionArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"toStringArray") ) { outValue = toStringArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PortionArray_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PortionArray_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PortionArray_Impl__obj::__mClass;

static ::String PortionArray_Impl__obj_sStaticFields[] = {
	HX_("toStringArray",4d,1d,fe,31),
	::String(null())
};

void PortionArray_Impl__obj::__register()
{
	PortionArray_Impl__obj _hx_dummy;
	PortionArray_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._PortionArray.PortionArray_Impl_",6a,b0,cd,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PortionArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PortionArray_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PortionArray_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PortionArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PortionArray_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _PortionArray
