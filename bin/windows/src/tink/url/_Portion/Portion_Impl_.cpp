#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#include <tink/url/_Portion/Portion_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_286a68bcdf9148f2_10_get_raw,"tink.url._Portion.Portion_Impl_","get_raw",0x65bee32d,"tink.url._Portion.Portion_Impl_.get_raw","tink/url/Portion.hx",10,0x2f7775f4)
HX_LOCAL_STACK_FRAME(_hx_pos_286a68bcdf9148f2_14_isValid,"tink.url._Portion.Portion_Impl_","isValid",0x0d315d60,"tink.url._Portion.Portion_Impl_.isValid","tink/url/Portion.hx",14,0x2f7775f4)
HX_LOCAL_STACK_FRAME(_hx_pos_286a68bcdf9148f2_21__new,"tink.url._Portion.Portion_Impl_","_new",0x214e37f3,"tink.url._Portion.Portion_Impl_._new","tink/url/Portion.hx",21,0x2f7775f4)
HX_LOCAL_STACK_FRAME(_hx_pos_286a68bcdf9148f2_25_stringly,"tink.url._Portion.Portion_Impl_","stringly",0xb211f130,"tink.url._Portion.Portion_Impl_.stringly","tink/url/Portion.hx",25,0x2f7775f4)
HX_LOCAL_STACK_FRAME(_hx_pos_286a68bcdf9148f2_29_toString,"tink.url._Portion.Portion_Impl_","toString",0x0e57a43e,"tink.url._Portion.Portion_Impl_.toString","tink/url/Portion.hx",29,0x2f7775f4)
HX_LOCAL_STACK_FRAME(_hx_pos_286a68bcdf9148f2_35_ofString,"tink.url._Portion.Portion_Impl_","ofString",0x7a1a3cda,"tink.url._Portion.Portion_Impl_.ofString","tink/url/Portion.hx",35,0x2f7775f4)
namespace tink{
namespace url{
namespace _Portion{

void Portion_Impl__obj::__construct() { }

Dynamic Portion_Impl__obj::__CreateEmpty() { return new Portion_Impl__obj; }

void *Portion_Impl__obj::_hx_vtable = 0;

Dynamic Portion_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Portion_Impl__obj > _hx_result = new Portion_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Portion_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38058d4a;
}

::String Portion_Impl__obj::get_raw(::String this1){
            	HX_STACKFRAME(&_hx_pos_286a68bcdf9148f2_10_get_raw)
HXDLIN(  10)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Portion_Impl__obj,get_raw,return )

bool Portion_Impl__obj::isValid(::String this1){
            	HX_STACKFRAME(&_hx_pos_286a68bcdf9148f2_14_isValid)
HXDLIN(  14)		if (::hx::IsNotNull( this1 )) {
HXLINE(  15)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  16)				::StringTools_obj::urlDecode(this1);
HXLINE(  17)				return true;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  19)					{
HXLINE(  19)						null();
            					}
HXDLIN(  19)					return false;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXDLIN(  14)			return true;
            		}
HXDLIN(  14)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Portion_Impl__obj,isValid,return )

::String Portion_Impl__obj::_new(::String v){
            	HX_STACKFRAME(&_hx_pos_286a68bcdf9148f2_21__new)
HXDLIN(  21)		::String this1 = v;
HXDLIN(  21)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Portion_Impl__obj,_new,return )

::String Portion_Impl__obj::stringly(::String this1){
            	HX_STACKFRAME(&_hx_pos_286a68bcdf9148f2_25_stringly)
HXDLIN(  25)		return ::tink::url::_Portion::Portion_Impl__obj::toString(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Portion_Impl__obj,stringly,return )

::String Portion_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_286a68bcdf9148f2_29_toString)
HXDLIN(  29)		if (::hx::IsNull( this1 )) {
HXDLIN(  29)			return null();
            		}
            		else {
HXLINE(  31)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  31)				return ::StringTools_obj::urlDecode(this1);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  32)					{
HXLINE(  32)						null();
            					}
HXDLIN(  32)					return HX_("",00,00,00,00);
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE(  29)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Portion_Impl__obj,toString,return )

::String Portion_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_286a68bcdf9148f2_35_ofString)
HXDLIN(  35)		::String v;
HXDLIN(  35)		if (::hx::IsNull( s )) {
HXDLIN(  35)			v = HX_("",00,00,00,00);
            		}
            		else {
HXDLIN(  35)			v = ::StringTools_obj::urlEncode(s);
            		}
HXDLIN(  35)		::String this1 = v;
HXDLIN(  35)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Portion_Impl__obj,ofString,return )


Portion_Impl__obj::Portion_Impl__obj()
{
}

bool Portion_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_raw") ) { outValue = get_raw_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stringly") ) { outValue = stringly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Portion_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Portion_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Portion_Impl__obj::__mClass;

static ::String Portion_Impl__obj_sStaticFields[] = {
	HX_("get_raw",7f,9e,cb,26),
	HX_("isValid",b2,18,3e,ce),
	HX_("_new",61,15,1f,3f),
	HX_("stringly",9e,1d,29,dc),
	HX_("toString",ac,d0,6e,38),
	HX_("ofString",48,69,31,a4),
	::String(null())
};

void Portion_Impl__obj::__register()
{
	Portion_Impl__obj _hx_dummy;
	Portion_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Portion.Portion_Impl_",1c,47,5c,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Portion_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Portion_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Portion_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Portion_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Portion_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _Portion
