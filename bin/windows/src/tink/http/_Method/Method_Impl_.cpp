#include <hxcpp.h>

#ifndef INCLUDED_tink_http__Method_Method_Impl_
#include <tink/http/_Method/Method_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_14_ofString,"tink.http._Method.Method_Impl_","ofString",0x57729d3d,"tink.http._Method.Method_Impl_.ofString","tink/http/Method.hx",14,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_4_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",4,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_5_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",5,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_6_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",6,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_8_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",8,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_9_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",9,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_10_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",10,0x7c6f2d93)
HX_LOCAL_STACK_FRAME(_hx_pos_048be8f8464c3d42_11_boot,"tink.http._Method.Method_Impl_","boot",0x14ec59a7,"tink.http._Method.Method_Impl_.boot","tink/http/Method.hx",11,0x7c6f2d93)
namespace tink{
namespace http{
namespace _Method{

void Method_Impl__obj::__construct() { }

Dynamic Method_Impl__obj::__CreateEmpty() { return new Method_Impl__obj; }

void *Method_Impl__obj::_hx_vtable = 0;

Dynamic Method_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Method_Impl__obj > _hx_result = new Method_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Method_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d57aac7;
}

::String Method_Impl__obj::GET;

::String Method_Impl__obj::HEAD;

::String Method_Impl__obj::OPTIONS;

::String Method_Impl__obj::POST;

::String Method_Impl__obj::PUT;

::String Method_Impl__obj::PATCH;

::String Method_Impl__obj::DELETE;

::String Method_Impl__obj::ofString(::String s, ::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_14_ofString)
HXDLIN(  14)		::String _g = s.toUpperCase();
HXDLIN(  14)		::String _hx_switch_0 = _g;
            		if (  (_hx_switch_0==HX_("DELETE",2b,6c,5b,1d)) ){
HXLINE(  21)			return HX_("DELETE",2b,6c,5b,1d);
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("GET",76,1c,36,00)) ){
HXLINE(  15)			return HX_("GET",76,1c,36,00);
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("HEAD",20,f1,cb,2f)) ){
HXLINE(  16)			return HX_("HEAD",20,f1,cb,2f);
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("OPTIONS",3e,07,d2,5f)) ){
HXLINE(  17)			return HX_("OPTIONS",3e,07,d2,5f);
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("PATCH",a8,3e,45,3b)) ){
HXLINE(  20)			return HX_("PATCH",a8,3e,45,3b);
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("POST",60,4c,1d,35)) ){
HXLINE(  18)			return HX_("POST",60,4c,1d,35);
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("PUT",af,fe,3c,00)) ){
HXLINE(  19)			return HX_("PUT",af,fe,3c,00);
HXDLIN(  19)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  22)			::String v = _g;
HXDLIN(  22)			return ( (::String)(fallback(v)) );
            		}
            		_hx_goto_0:;
HXLINE(  14)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Method_Impl__obj,ofString,return )


Method_Impl__obj::Method_Impl__obj()
{
}

bool Method_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Method_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Method_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Method_Impl__obj::GET,HX_("GET",76,1c,36,00)},
	{::hx::fsString,(void *) &Method_Impl__obj::HEAD,HX_("HEAD",20,f1,cb,2f)},
	{::hx::fsString,(void *) &Method_Impl__obj::OPTIONS,HX_("OPTIONS",3e,07,d2,5f)},
	{::hx::fsString,(void *) &Method_Impl__obj::POST,HX_("POST",60,4c,1d,35)},
	{::hx::fsString,(void *) &Method_Impl__obj::PUT,HX_("PUT",af,fe,3c,00)},
	{::hx::fsString,(void *) &Method_Impl__obj::PATCH,HX_("PATCH",a8,3e,45,3b)},
	{::hx::fsString,(void *) &Method_Impl__obj::DELETE,HX_("DELETE",2b,6c,5b,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Method_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Method_Impl__obj::GET,"GET");
	HX_MARK_MEMBER_NAME(Method_Impl__obj::HEAD,"HEAD");
	HX_MARK_MEMBER_NAME(Method_Impl__obj::OPTIONS,"OPTIONS");
	HX_MARK_MEMBER_NAME(Method_Impl__obj::POST,"POST");
	HX_MARK_MEMBER_NAME(Method_Impl__obj::PUT,"PUT");
	HX_MARK_MEMBER_NAME(Method_Impl__obj::PATCH,"PATCH");
	HX_MARK_MEMBER_NAME(Method_Impl__obj::DELETE,"DELETE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Method_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::GET,"GET");
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::HEAD,"HEAD");
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::OPTIONS,"OPTIONS");
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::POST,"POST");
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::PUT,"PUT");
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::PATCH,"PATCH");
	HX_VISIT_MEMBER_NAME(Method_Impl__obj::DELETE,"DELETE");
};

#endif

::hx::Class Method_Impl__obj::__mClass;

static ::String Method_Impl__obj_sStaticFields[] = {
	HX_("GET",76,1c,36,00),
	HX_("HEAD",20,f1,cb,2f),
	HX_("OPTIONS",3e,07,d2,5f),
	HX_("POST",60,4c,1d,35),
	HX_("PUT",af,fe,3c,00),
	HX_("PATCH",a8,3e,45,3b),
	HX_("DELETE",2b,6c,5b,1d),
	HX_("ofString",48,69,31,a4),
	::String(null())
};

void Method_Impl__obj::__register()
{
	Method_Impl__obj _hx_dummy;
	Method_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Method.Method_Impl_",19,7f,3d,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Method_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Method_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Method_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Method_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Method_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Method_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Method_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Method_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_4_boot)
HXDLIN(   4)		GET = HX_("GET",76,1c,36,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_5_boot)
HXDLIN(   5)		HEAD = HX_("HEAD",20,f1,cb,2f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_6_boot)
HXDLIN(   6)		OPTIONS = HX_("OPTIONS",3e,07,d2,5f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_8_boot)
HXDLIN(   8)		POST = HX_("POST",60,4c,1d,35);
            	}
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_9_boot)
HXDLIN(   9)		PUT = HX_("PUT",af,fe,3c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_10_boot)
HXDLIN(  10)		PATCH = HX_("PATCH",a8,3e,45,3b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_048be8f8464c3d42_11_boot)
HXDLIN(  11)		DELETE = HX_("DELETE",2b,6c,5b,1d);
            	}
}

} // end namespace tink
} // end namespace http
} // end namespace _Method
