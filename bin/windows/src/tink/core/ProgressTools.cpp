#include <hxcpp.h>

#ifndef INCLUDED_tink_core_ProgressTools
#include <tink/core/ProgressTools.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_845d516834c235e0_218_asPromise,"tink.core.ProgressTools","asPromise",0x83074256,"tink.core.ProgressTools.asPromise","tink/core/Progress.hx",218,0x1a922e1e)
namespace tink{
namespace core{

void ProgressTools_obj::__construct() { }

Dynamic ProgressTools_obj::__CreateEmpty() { return new ProgressTools_obj; }

void *ProgressTools_obj::_hx_vtable = 0;

Dynamic ProgressTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressTools_obj > _hx_result = new ProgressTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProgressTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a07b255;
}

::Dynamic ProgressTools_obj::asPromise( ::tink::core::_Progress::ProgressObject p){
            	HX_STACKFRAME(&_hx_pos_845d516834c235e0_218_asPromise)
HXDLIN( 218)		return p->result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProgressTools_obj,asPromise,return )


ProgressTools_obj::ProgressTools_obj()
{
}

bool ProgressTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"asPromise") ) { outValue = asPromise_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ProgressTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ProgressTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ProgressTools_obj::__mClass;

static ::String ProgressTools_obj_sStaticFields[] = {
	HX_("asPromise",c9,02,5d,64),
	::String(null())
};

void ProgressTools_obj::__register()
{
	ProgressTools_obj _hx_dummy;
	ProgressTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.ProgressTools",bb,1d,2a,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProgressTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ProgressTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ProgressTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
