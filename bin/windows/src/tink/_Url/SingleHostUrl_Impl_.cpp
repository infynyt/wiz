#include <hxcpp.h>

#ifndef INCLUDED_tink__Url_SingleHostUrl_Impl_
#include <tink/_Url/SingleHostUrl_Impl_.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0627faef1d200060_190__new,"tink._Url.SingleHostUrl_Impl_","_new",0xb884ae92,"tink._Url.SingleHostUrl_Impl_._new","tink/Url.hx",190,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0627faef1d200060_193_ofUrl,"tink._Url.SingleHostUrl_Impl_","ofUrl",0xeca77c47,"tink._Url.SingleHostUrl_Impl_.ofUrl","tink/Url.hx",193,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0627faef1d200060_207_ofString,"tink._Url.SingleHostUrl_Impl_","ofString",0xb979eef9,"tink._Url.SingleHostUrl_Impl_.ofString","tink/Url.hx",207,0x591f7d8c)
namespace tink{
namespace _Url{

void SingleHostUrl_Impl__obj::__construct() { }

Dynamic SingleHostUrl_Impl__obj::__CreateEmpty() { return new SingleHostUrl_Impl__obj; }

void *SingleHostUrl_Impl__obj::_hx_vtable = 0;

Dynamic SingleHostUrl_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SingleHostUrl_Impl__obj > _hx_result = new SingleHostUrl_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SingleHostUrl_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19c781d9;
}

 ::Dynamic SingleHostUrl_Impl__obj::_new( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_0627faef1d200060_190__new)
HXDLIN( 190)		 ::Dynamic this1 = v;
HXDLIN( 190)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SingleHostUrl_Impl__obj,_new,return )

 ::Dynamic SingleHostUrl_Impl__obj::ofUrl( ::Dynamic u){
            	HX_STACKFRAME(&_hx_pos_0627faef1d200060_193_ofUrl)
HXDLIN( 193)		 ::Dynamic v;
HXDLIN( 193)		::Array< ::String > _g = ( (::Array< ::String >)(u->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) );
HXDLIN( 193)		switch((int)(_g->length)){
            			case (int)0: {
HXDLIN( 193)				v = u;
            			}
            			break;
            			case (int)1: {
HXDLIN( 193)				::String _g1 = _g->__get(0);
HXDLIN( 193)				v = u;
            			}
            			break;
            			default:{
HXLINE( 195)				::Array< ::String > v1 = _g;
HXLINE( 193)				v = ::tink::_Url::Url_Impl__obj::make( ::Dynamic(::hx::Anon_obj::Create(6)
            					->setFixed(0,HX_("hosts",0b,ac,62,2b),::Array_obj< ::String >::__new(1)->init(0,( (::Array< ::String >)(u->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) )->__get(0)))
            					->setFixed(1,HX_("auth",68,df,76,40), ::Dynamic(u->__Field(HX_("auth",68,df,76,40),::hx::paccDynamic)))
            					->setFixed(2,HX_("scheme",25,20,c1,40), ::Dynamic(u->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)))
            					->setFixed(3,HX_("hash",ce,2f,08,45), ::Dynamic(u->__Field(HX_("hash",ce,2f,08,45),::hx::paccDynamic)))
            					->setFixed(4,HX_("path",a5,e5,51,4a), ::Dynamic(u->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)))
            					->setFixed(5,HX_("query",08,8b,ea,5d), ::Dynamic(u->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)))));
            			}
            		}
HXDLIN( 193)		 ::Dynamic this1 = v;
HXDLIN( 193)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SingleHostUrl_Impl__obj,ofUrl,return )

 ::Dynamic SingleHostUrl_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_0627faef1d200060_207_ofString)
HXDLIN( 207)		return ::tink::_Url::SingleHostUrl_Impl__obj::ofUrl(::tink::_Url::Url_Impl__obj::fromString(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SingleHostUrl_Impl__obj,ofString,return )


SingleHostUrl_Impl__obj::SingleHostUrl_Impl__obj()
{
}

bool SingleHostUrl_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ofUrl") ) { outValue = ofUrl_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SingleHostUrl_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SingleHostUrl_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class SingleHostUrl_Impl__obj::__mClass;

static ::String SingleHostUrl_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("ofUrl",98,0a,27,2d),
	HX_("ofString",48,69,31,a4),
	::String(null())
};

void SingleHostUrl_Impl__obj::__register()
{
	SingleHostUrl_Impl__obj _hx_dummy;
	SingleHostUrl_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink._Url.SingleHostUrl_Impl_",dd,54,d7,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SingleHostUrl_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SingleHostUrl_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SingleHostUrl_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SingleHostUrl_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SingleHostUrl_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace _Url
