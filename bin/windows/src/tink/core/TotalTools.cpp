#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_TotalTools
#include <tink/core/TotalTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3a22be35ab2d1845_208_eq,"tink.core.TotalTools","eq",0xced32b50,"tink.core.TotalTools.eq","tink/core/Progress.hx",208,0x1a922e1e)
namespace tink{
namespace core{

void TotalTools_obj::__construct() { }

Dynamic TotalTools_obj::__CreateEmpty() { return new TotalTools_obj; }

void *TotalTools_obj::_hx_vtable = 0;

Dynamic TotalTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TotalTools_obj > _hx_result = new TotalTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TotalTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55c96568;
}

bool TotalTools_obj::eq( ::haxe::ds::Option a, ::haxe::ds::Option b){
            	HX_STACKFRAME(&_hx_pos_3a22be35ab2d1845_208_eq)
HXDLIN( 208)		switch((int)(a->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 208)				if ((b->_hx_getIndex() == 0)) {
HXLINE( 209)					Float t2 = ( (Float)(b->_hx_getObject(0)) );
HXDLIN( 209)					Float t1 = ( (Float)(a->_hx_getObject(0)) );
HXDLIN( 209)					return (t1 == t2);
            				}
            				else {
HXLINE( 211)					return false;
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 208)				if ((b->_hx_getIndex() == 1)) {
HXLINE( 210)					return true;
            				}
            				else {
HXLINE( 211)					return false;
            				}
            			}
            			break;
            		}
HXLINE( 208)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TotalTools_obj,eq,return )


TotalTools_obj::TotalTools_obj()
{
}

bool TotalTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"eq") ) { outValue = eq_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TotalTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TotalTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TotalTools_obj::__mClass;

static ::String TotalTools_obj_sStaticFields[] = {
	HX_("eq",6c,58,00,00),
	::String(null())
};

void TotalTools_obj::__register()
{
	TotalTools_obj _hx_dummy;
	TotalTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.TotalTools",0a,97,a4,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TotalTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TotalTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TotalTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TotalTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TotalTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
