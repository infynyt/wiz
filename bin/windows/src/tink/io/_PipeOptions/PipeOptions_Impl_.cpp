#include <hxcpp.h>

#ifndef INCLUDED_tink_io__PipeOptions_PipeOptions_Impl_
#include <tink/io/_PipeOptions/PipeOptions_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b46f737e929cdc53_12_get_end,"tink.io._PipeOptions.PipeOptions_Impl_","get_end",0x5202a263,"tink.io._PipeOptions.PipeOptions_Impl_.get_end","tink/io/PipeOptions.hx",12,0xe822e7ba)
HX_LOCAL_STACK_FRAME(_hx_pos_b46f737e929cdc53_16_get_destructive,"tink.io._PipeOptions.PipeOptions_Impl_","get_destructive",0x194cd38a,"tink.io._PipeOptions.PipeOptions_Impl_.get_destructive","tink/io/PipeOptions.hx",16,0xe822e7ba)
namespace tink{
namespace io{
namespace _PipeOptions{

void PipeOptions_Impl__obj::__construct() { }

Dynamic PipeOptions_Impl__obj::__CreateEmpty() { return new PipeOptions_Impl__obj; }

void *PipeOptions_Impl__obj::_hx_vtable = 0;

Dynamic PipeOptions_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PipeOptions_Impl__obj > _hx_result = new PipeOptions_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PipeOptions_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fe80d67;
}

bool PipeOptions_Impl__obj::get_end( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b46f737e929cdc53_12_get_end)
HXDLIN(  12)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  12)			return ( (bool)(this1->__Field(HX_("end",db,03,4d,00),::hx::paccDynamic)) );
            		}
            		else {
HXDLIN(  12)			return false;
            		}
HXDLIN(  12)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipeOptions_Impl__obj,get_end,return )

bool PipeOptions_Impl__obj::get_destructive( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b46f737e929cdc53_16_get_destructive)
HXDLIN(  16)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  16)			return ( (bool)(this1->__Field(HX_("destructive",02,6d,89,7b),::hx::paccDynamic)) );
            		}
            		else {
HXDLIN(  16)			return false;
            		}
HXDLIN(  16)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PipeOptions_Impl__obj,get_destructive,return )


PipeOptions_Impl__obj::PipeOptions_Impl__obj()
{
}

bool PipeOptions_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"get_end") ) { outValue = get_end_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_destructive") ) { outValue = get_destructive_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PipeOptions_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PipeOptions_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PipeOptions_Impl__obj::__mClass;

static ::String PipeOptions_Impl__obj_sStaticFields[] = {
	HX_("get_end",72,cc,c1,26),
	HX_("get_destructive",99,24,6b,3c),
	::String(null())
};

void PipeOptions_Impl__obj::__register()
{
	PipeOptions_Impl__obj _hx_dummy;
	PipeOptions_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._PipeOptions.PipeOptions_Impl_",5f,5d,75,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PipeOptions_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PipeOptions_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PipeOptions_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PipeOptions_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PipeOptions_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace _PipeOptions
