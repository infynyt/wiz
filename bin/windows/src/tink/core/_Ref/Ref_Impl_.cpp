#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_tink_core__Ref_Ref_Impl_
#include <tink/core/_Ref/Ref_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_82cde6fbddeaf9cd_6__new,"tink.core._Ref.Ref_Impl_","_new",0x2daf1903,"tink.core._Ref.Ref_Impl_._new","tink/core/Ref.hx",6,0xca8bcd7e)
HX_LOCAL_STACK_FRAME(_hx_pos_82cde6fbddeaf9cd_8_get_value,"tink.core._Ref.Ref_Impl_","get_value",0x94b76ce6,"tink.core._Ref.Ref_Impl_.get_value","tink/core/Ref.hx",8,0xca8bcd7e)
HX_LOCAL_STACK_FRAME(_hx_pos_82cde6fbddeaf9cd_9_set_value,"tink.core._Ref.Ref_Impl_","set_value",0x780858f2,"tink.core._Ref.Ref_Impl_.set_value","tink/core/Ref.hx",9,0xca8bcd7e)
HX_LOCAL_STACK_FRAME(_hx_pos_82cde6fbddeaf9cd_11_toString,"tink.core._Ref.Ref_Impl_","toString",0x29a64d4e,"tink.core._Ref.Ref_Impl_.toString","tink/core/Ref.hx",11,0xca8bcd7e)
HX_LOCAL_STACK_FRAME(_hx_pos_82cde6fbddeaf9cd_13_to,"tink.core._Ref.Ref_Impl_","to",0x55aadc9d,"tink.core._Ref.Ref_Impl_.to","tink/core/Ref.hx",13,0xca8bcd7e)
namespace tink{
namespace core{
namespace _Ref{

void Ref_Impl__obj::__construct() { }

Dynamic Ref_Impl__obj::__CreateEmpty() { return new Ref_Impl__obj; }

void *Ref_Impl__obj::_hx_vtable = 0;

Dynamic Ref_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ref_Impl__obj > _hx_result = new Ref_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ref_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0217c4a6;
}

::cpp::VirtualArray Ref_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_82cde6fbddeaf9cd_6__new)
HXDLIN(   6)		::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(1);
HXDLIN(   6)		::cpp::VirtualArray this2 = this1;
HXDLIN(   6)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ref_Impl__obj,_new,return )

 ::Dynamic Ref_Impl__obj::get_value(::cpp::VirtualArray this1){
            	HX_STACKFRAME(&_hx_pos_82cde6fbddeaf9cd_8_get_value)
HXDLIN(   8)		return _hx_array_unsafe_get(this1,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ref_Impl__obj,get_value,return )

 ::Dynamic Ref_Impl__obj::set_value(::cpp::VirtualArray this1, ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_82cde6fbddeaf9cd_9_set_value)
HXDLIN(   9)		return this1->__unsafe_set(0,param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ref_Impl__obj,set_value,return )

::String Ref_Impl__obj::toString(::cpp::VirtualArray this1){
            	HX_STACKFRAME(&_hx_pos_82cde6fbddeaf9cd_11_toString)
HXDLIN(  11)		return ((HX_("@[",1b,38,00,00) + ::Std_obj::string(_hx_array_unsafe_get(this1,0))) + HX_("]",5d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ref_Impl__obj,toString,return )

::cpp::VirtualArray Ref_Impl__obj::to( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_82cde6fbddeaf9cd_13_to)
HXLINE(  14)		::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(1);
HXDLIN(  14)		::cpp::VirtualArray this2 = this1;
HXDLIN(  14)		::cpp::VirtualArray ret = this2;
HXLINE(  15)		ret->__unsafe_set(0,v);
HXLINE(  16)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ref_Impl__obj,to,return )


Ref_Impl__obj::Ref_Impl__obj()
{
}

bool Ref_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { outValue = to_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_value") ) { outValue = set_value_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Ref_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Ref_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Ref_Impl__obj::__mClass;

static ::String Ref_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("toString",ac,d0,6e,38),
	HX_("to",7b,65,00,00),
	::String(null())
};

void Ref_Impl__obj::__register()
{
	Ref_Impl__obj _hx_dummy;
	Ref_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Ref.Ref_Impl_",0c,00,c7,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ref_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Ref_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Ref_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ref_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ref_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Ref
