#include <hxcpp.h>

#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core__Pair_Pair_Impl_
#include <tink/core/_Pair/Pair_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a469a2b040cec2a5_9__new,"tink.core._Pair.Pair_Impl_","_new",0x1e15474d,"tink.core._Pair.Pair_Impl_._new","tink/core/Pair.hx",9,0x6a29d151)
HX_LOCAL_STACK_FRAME(_hx_pos_a469a2b040cec2a5_11_get_a,"tink.core._Pair.Pair_Impl_","get_a",0xc9d621cc,"tink.core._Pair.Pair_Impl_.get_a","tink/core/Pair.hx",11,0x6a29d151)
HX_LOCAL_STACK_FRAME(_hx_pos_a469a2b040cec2a5_12_get_b,"tink.core._Pair.Pair_Impl_","get_b",0xc9d621cd,"tink.core._Pair.Pair_Impl_.get_b","tink/core/Pair.hx",12,0x6a29d151)
HX_LOCAL_STACK_FRAME(_hx_pos_a469a2b040cec2a5_15_toBool,"tink.core._Pair.Pair_Impl_","toBool",0xa52c7431,"tink.core._Pair.Pair_Impl_.toBool","tink/core/Pair.hx",15,0x6a29d151)
HX_LOCAL_STACK_FRAME(_hx_pos_a469a2b040cec2a5_18_isNil,"tink.core._Pair.Pair_Impl_","isNil",0xf9c77a9b,"tink.core._Pair.Pair_Impl_.isNil","tink/core/Pair.hx",18,0x6a29d151)
HX_LOCAL_STACK_FRAME(_hx_pos_a469a2b040cec2a5_21_nil,"tink.core._Pair.Pair_Impl_","nil",0xcb5f4365,"tink.core._Pair.Pair_Impl_.nil","tink/core/Pair.hx",21,0x6a29d151)
namespace tink{
namespace core{
namespace _Pair{

void Pair_Impl__obj::__construct() { }

Dynamic Pair_Impl__obj::__CreateEmpty() { return new Pair_Impl__obj; }

void *Pair_Impl__obj::_hx_vtable = 0;

Dynamic Pair_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pair_Impl__obj > _hx_result = new Pair_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pair_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13ff9f42;
}

 ::tink::core::MPair Pair_Impl__obj::_new( ::Dynamic a, ::Dynamic b){
            	HX_GC_STACKFRAME(&_hx_pos_a469a2b040cec2a5_9__new)
HXDLIN(   9)		 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,a,b);
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Pair_Impl__obj,_new,return )

 ::Dynamic Pair_Impl__obj::get_a( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_a469a2b040cec2a5_11_get_a)
HXDLIN(  11)		return this1->a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pair_Impl__obj,get_a,return )

 ::Dynamic Pair_Impl__obj::get_b( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_a469a2b040cec2a5_12_get_b)
HXDLIN(  12)		return this1->b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pair_Impl__obj,get_b,return )

bool Pair_Impl__obj::toBool( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_a469a2b040cec2a5_15_toBool)
HXDLIN(  15)		return ::hx::IsNotNull( this1 );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pair_Impl__obj,toBool,return )

bool Pair_Impl__obj::isNil( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_a469a2b040cec2a5_18_isNil)
HXDLIN(  18)		return ::hx::IsNull( this1 );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pair_Impl__obj,isNil,return )

 ::tink::core::MPair Pair_Impl__obj::nil(){
            	HX_STACKFRAME(&_hx_pos_a469a2b040cec2a5_21_nil)
HXDLIN(  21)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Pair_Impl__obj,nil,return )


Pair_Impl__obj::Pair_Impl__obj()
{
}

bool Pair_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nil") ) { outValue = nil_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNil") ) { outValue = isNil_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toBool") ) { outValue = toBool_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Pair_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Pair_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Pair_Impl__obj::__mClass;

static ::String Pair_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_a",38,a5,60,91),
	HX_("get_b",39,a5,60,91),
	HX_("toBool",45,ef,d4,76),
	HX_("isNil",07,fe,51,c1),
	HX_("nil",d1,d3,53,00),
	::String(null())
};

void Pair_Impl__obj::__register()
{
	Pair_Impl__obj _hx_dummy;
	Pair_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Pair.Pair_Impl_",02,76,e3,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pair_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Pair_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Pair_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pair_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pair_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Pair
