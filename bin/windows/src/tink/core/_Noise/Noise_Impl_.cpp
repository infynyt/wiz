#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Noise_Noise_Impl_
#include <tink/core/_Noise/Noise_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_35ce40f35cc54925_6_ofAny,"tink.core._Noise.Noise_Impl_","ofAny",0x13fed241,"tink.core._Noise.Noise_Impl_.ofAny","tink/core/Noise.hx",6,0x05ca3057)
HX_LOCAL_STACK_FRAME(_hx_pos_35ce40f35cc54925_4_boot,"tink.core._Noise.Noise_Impl_","boot",0x85dfb586,"tink.core._Noise.Noise_Impl_.boot","tink/core/Noise.hx",4,0x05ca3057)
namespace tink{
namespace core{
namespace _Noise{

void Noise_Impl__obj::__construct() { }

Dynamic Noise_Impl__obj::__CreateEmpty() { return new Noise_Impl__obj; }

void *Noise_Impl__obj::_hx_vtable = 0;

Dynamic Noise_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Noise_Impl__obj > _hx_result = new Noise_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Noise_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x106d6caa;
}

 ::Dynamic Noise_Impl__obj::Noise;

 ::Dynamic Noise_Impl__obj::ofAny( ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_35ce40f35cc54925_6_ofAny)
HXDLIN(   6)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Noise_Impl__obj,ofAny,return )


Noise_Impl__obj::Noise_Impl__obj()
{
}

bool Noise_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ofAny") ) { outValue = ofAny_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Noise_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Noise_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Noise_Impl__obj::Noise,HX_("Noise",7a,ff,ef,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Noise_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Noise_Impl__obj::Noise,"Noise");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Noise_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Noise_Impl__obj::Noise,"Noise");
};

#endif

::hx::Class Noise_Impl__obj::__mClass;

static ::String Noise_Impl__obj_sStaticFields[] = {
	HX_("Noise",7a,ff,ef,32),
	HX_("ofAny",15,da,17,2d),
	::String(null())
};

void Noise_Impl__obj::__register()
{
	Noise_Impl__obj _hx_dummy;
	Noise_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Noise.Noise_Impl_",9a,af,a5,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Noise_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Noise_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Noise_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Noise_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Noise_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Noise_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Noise_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Noise_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_35ce40f35cc54925_4_boot)
HXDLIN(   4)		Noise = null();
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Noise
