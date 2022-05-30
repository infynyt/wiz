#include <hxcpp.h>

#ifndef INCLUDED_tink_url__Auth_Auth_Impl_
#include <tink/url/_Auth/Auth_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d543503fdae9ae9b_11__new,"tink.url._Auth.Auth_Impl_","_new",0x5fd5b3a5,"tink.url._Auth.Auth_Impl_._new","tink/url/Auth.hx",11,0xa8175279)
HX_LOCAL_STACK_FRAME(_hx_pos_d543503fdae9ae9b_16_get_user,"tink.url._Auth.Auth_Impl_","get_user",0xf8055e18,"tink.url._Auth.Auth_Impl_.get_user","tink/url/Auth.hx",16,0xa8175279)
HX_LOCAL_STACK_FRAME(_hx_pos_d543503fdae9ae9b_21_get_password,"tink.url._Auth.Auth_Impl_","get_password",0xcb8e5968,"tink.url._Auth.Auth_Impl_.get_password","tink/url/Auth.hx",21,0xa8175279)
HX_LOCAL_STACK_FRAME(_hx_pos_d543503fdae9ae9b_25_toString,"tink.url._Auth.Auth_Impl_","toString",0x630be0f0,"tink.url._Auth.Auth_Impl_.toString","tink/url/Auth.hx",25,0xa8175279)
namespace tink{
namespace url{
namespace _Auth{

void Auth_Impl__obj::__construct() { }

Dynamic Auth_Impl__obj::__CreateEmpty() { return new Auth_Impl__obj; }

void *Auth_Impl__obj::_hx_vtable = 0;

Dynamic Auth_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Auth_Impl__obj > _hx_result = new Auth_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Auth_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14f4a89e;
}

::String Auth_Impl__obj::_new(::String user,::String password){
            	HX_STACKFRAME(&_hx_pos_d543503fdae9ae9b_11__new)
HXDLIN(  11)		::String this1 = (((HX_("",00,00,00,00) + user) + HX_(":",3a,00,00,00)) + password);
HXDLIN(  11)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Auth_Impl__obj,_new,return )

::String Auth_Impl__obj::get_user(::String this1){
            	HX_STACKFRAME(&_hx_pos_d543503fdae9ae9b_16_get_user)
HXDLIN(  16)		if (::hx::IsNull( this1 )) {
HXDLIN(  16)			return null();
            		}
            		else {
HXLINE(  17)			return this1.split(HX_(":",3a,00,00,00))->__get(0);
            		}
HXLINE(  16)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Auth_Impl__obj,get_user,return )

::String Auth_Impl__obj::get_password(::String this1){
            	HX_STACKFRAME(&_hx_pos_d543503fdae9ae9b_21_get_password)
HXDLIN(  21)		if (::hx::IsNull( this1 )) {
HXDLIN(  21)			return null();
            		}
            		else {
HXLINE(  22)			return this1.split(HX_(":",3a,00,00,00))->__get(1);
            		}
HXLINE(  21)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Auth_Impl__obj,get_password,return )

::String Auth_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_d543503fdae9ae9b_25_toString)
HXDLIN(  25)		if (::hx::IsNull( this1 )) {
HXDLIN(  25)			return HX_("",00,00,00,00);
            		}
            		else {
HXDLIN(  25)			return ((HX_("",00,00,00,00) + this1) + HX_("@",40,00,00,00));
            		}
HXDLIN(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Auth_Impl__obj,toString,return )


Auth_Impl__obj::Auth_Impl__obj()
{
}

bool Auth_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_user") ) { outValue = get_user_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_password") ) { outValue = get_password_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Auth_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Auth_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Auth_Impl__obj::__mClass;

static ::String Auth_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_user",d4,4d,68,cd),
	HX_("get_password",24,d7,e9,fd),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Auth_Impl__obj::__register()
{
	Auth_Impl__obj _hx_dummy;
	Auth_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Auth.Auth_Impl_",aa,68,aa,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Auth_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Auth_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Auth_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Auth_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Auth_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _Auth
