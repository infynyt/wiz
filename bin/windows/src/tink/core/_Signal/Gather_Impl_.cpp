#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Signal_Gather_Impl_
#include <tink/core/_Signal/Gather_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e038c0bd887066aa_9__new,"tink.core._Signal.Gather_Impl_","_new",0xba5c69da,"tink.core._Signal.Gather_Impl_._new","tink/core/Signal.hx",9,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_e038c0bd887066aa_12_ofBool,"tink.core._Signal.Gather_Impl_","ofBool",0x0d070d9a,"tink.core._Signal.Gather_Impl_.ofBool","tink/core/Signal.hx",12,0x5ae99903)
namespace tink{
namespace core{
namespace _Signal{

void Gather_Impl__obj::__construct() { }

Dynamic Gather_Impl__obj::__CreateEmpty() { return new Gather_Impl__obj; }

void *Gather_Impl__obj::_hx_vtable = 0;

Dynamic Gather_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Gather_Impl__obj > _hx_result = new Gather_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Gather_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x731a6431;
}

bool Gather_Impl__obj::_new(bool v){
            	HX_STACKFRAME(&_hx_pos_e038c0bd887066aa_9__new)
HXDLIN(   9)		bool this1 = v;
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gather_Impl__obj,_new,return )

bool Gather_Impl__obj::ofBool(bool b){
            	HX_STACKFRAME(&_hx_pos_e038c0bd887066aa_12_ofBool)
HXDLIN(  12)		bool this1 = b;
HXDLIN(  12)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gather_Impl__obj,ofBool,return )


Gather_Impl__obj::Gather_Impl__obj()
{
}

bool Gather_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofBool") ) { outValue = ofBool_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Gather_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Gather_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Gather_Impl__obj::__mClass;

static ::String Gather_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("ofBool",e1,e8,70,48),
	::String(null())
};

void Gather_Impl__obj::__register()
{
	Gather_Impl__obj _hx_dummy;
	Gather_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Signal.Gather_Impl_",95,5e,a9,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gather_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Gather_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Gather_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gather_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gather_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Signal
