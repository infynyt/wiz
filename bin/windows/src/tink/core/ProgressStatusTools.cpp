#include <hxcpp.h>

#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatus
#include <tink/core/ProgressStatus.h>
#endif
#ifndef INCLUDED_tink_core_ProgressStatusTools
#include <tink/core/ProgressStatusTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_928cb8e1f760b1d2_199_map,"tink.core.ProgressStatusTools","map",0xfa93ecd7,"tink.core.ProgressStatusTools.map","tink/core/Progress.hx",199,0x1a922e1e)
namespace tink{
namespace core{

void ProgressStatusTools_obj::__construct() { }

Dynamic ProgressStatusTools_obj::__CreateEmpty() { return new ProgressStatusTools_obj; }

void *ProgressStatusTools_obj::_hx_vtable = 0;

Dynamic ProgressStatusTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressStatusTools_obj > _hx_result = new ProgressStatusTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProgressStatusTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17fc3f0b;
}

 ::tink::core::ProgressStatus ProgressStatusTools_obj::map( ::tink::core::ProgressStatus p, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_928cb8e1f760b1d2_199_map)
HXDLIN( 199)		switch((int)(p->_hx_getIndex())){
            			case (int)0: {
HXLINE( 200)				 ::tink::core::MPair v = p->_hx_getObject(0).StaticCast<  ::tink::core::MPair >();
HXDLIN( 200)				return ::tink::core::ProgressStatus_obj::InProgress(v);
            			}
            			break;
            			case (int)1: {
HXLINE( 201)				 ::Dynamic v = p->_hx_getObject(0);
HXDLIN( 201)				return ::tink::core::ProgressStatus_obj::Finished(f(v));
            			}
            			break;
            		}
HXLINE( 199)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ProgressStatusTools_obj,map,return )


ProgressStatusTools_obj::ProgressStatusTools_obj()
{
}

bool ProgressStatusTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ProgressStatusTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ProgressStatusTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ProgressStatusTools_obj::__mClass;

static ::String ProgressStatusTools_obj_sStaticFields[] = {
	HX_("map",9c,0a,53,00),
	::String(null())
};

void ProgressStatusTools_obj::__register()
{
	ProgressStatusTools_obj _hx_dummy;
	ProgressStatusTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.ProgressStatusTools",29,c9,d2,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProgressStatusTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ProgressStatusTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ProgressStatusTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressStatusTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressStatusTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
