#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink_core__Progress_UnitInterval_Impl_
#include <tink/core/_Progress/UnitInterval_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_85230d82bc9db477_171_toPercentageString,"tink.core._Progress.UnitInterval_Impl_","toPercentageString",0x36fa8c36,"tink.core._Progress.UnitInterval_Impl_.toPercentageString","tink/core/Progress.hx",171,0x1a922e1e)
namespace tink{
namespace core{
namespace _Progress{

void UnitInterval_Impl__obj::__construct() { }

Dynamic UnitInterval_Impl__obj::__CreateEmpty() { return new UnitInterval_Impl__obj; }

void *UnitInterval_Impl__obj::_hx_vtable = 0;

Dynamic UnitInterval_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UnitInterval_Impl__obj > _hx_result = new UnitInterval_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UnitInterval_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15e48a64;
}

::String UnitInterval_Impl__obj::toPercentageString(Float this1,int dp){
            	HX_STACKFRAME(&_hx_pos_85230d82bc9db477_171_toPercentageString)
HXLINE( 172)		Float m = ::Math_obj::pow(( (Float)(10) ),( (Float)(dp) ));
HXLINE( 173)		Float v = (( (Float)(::Math_obj::round(((this1 * m) * ( (Float)(100) )))) ) / m);
HXLINE( 174)		::String s = ::Std_obj::string(v);
HXLINE( 175)		int _g = s.indexOf(HX_(".",2e,00,00,00),null());
HXDLIN( 175)		if ((_g == -1)) {
HXLINE( 176)			return (((s + HX_(".",2e,00,00,00)) + ::StringTools_obj::lpad(HX_("",00,00,00,00),HX_("0",30,00,00,00),dp)) + HX_("%",25,00,00,00));
            		}
            		else {
HXLINE( 177)			int i = _g;
HXDLIN( 177)			if (((s.length - i) > dp)) {
HXLINE( 177)				return (s.substr(0,((dp + i) + 1)) + HX_("%",25,00,00,00));
            			}
            			else {
HXLINE( 178)				int i = _g;
HXDLIN( 178)				return (::StringTools_obj::rpad(s,HX_("0",30,00,00,00),((i + dp) + 1)) + HX_("%",25,00,00,00));
            			}
            		}
HXLINE( 175)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UnitInterval_Impl__obj,toPercentageString,return )


UnitInterval_Impl__obj::UnitInterval_Impl__obj()
{
}

bool UnitInterval_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"toPercentageString") ) { outValue = toPercentageString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UnitInterval_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UnitInterval_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class UnitInterval_Impl__obj::__mClass;

static ::String UnitInterval_Impl__obj_sStaticFields[] = {
	HX_("toPercentageString",26,a7,4a,de),
	::String(null())
};

void UnitInterval_Impl__obj::__register()
{
	UnitInterval_Impl__obj _hx_dummy;
	UnitInterval_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Progress.UnitInterval_Impl_",5e,d1,84,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UnitInterval_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UnitInterval_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UnitInterval_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UnitInterval_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UnitInterval_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Progress
