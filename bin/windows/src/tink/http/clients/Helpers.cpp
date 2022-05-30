#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_http_clients_Helpers
#include <tink/http/clients/Helpers.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_14350225be92a871_7_checkScheme,"tink.http.clients.Helpers","checkScheme",0x0bcad9b4,"tink.http.clients.Helpers.checkScheme","tink/http/clients/Helpers.hx",7,0xcb0444ea)
HX_LOCAL_STACK_FRAME(_hx_pos_14350225be92a871_14_missingSchemeError,"tink.http.clients.Helpers","missingSchemeError",0x934da7d6,"tink.http.clients.Helpers.missingSchemeError","tink/http/clients/Helpers.hx",14,0xcb0444ea)
HX_LOCAL_STACK_FRAME(_hx_pos_14350225be92a871_17_invalidSchemeError,"tink.http.clients.Helpers","invalidSchemeError",0xda6783e5,"tink.http.clients.Helpers.invalidSchemeError","tink/http/clients/Helpers.hx",17,0xcb0444ea)
namespace tink{
namespace http{
namespace clients{

void Helpers_obj::__construct() { }

Dynamic Helpers_obj::__CreateEmpty() { return new Helpers_obj; }

void *Helpers_obj::_hx_vtable = 0;

Dynamic Helpers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Helpers_obj > _hx_result = new Helpers_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Helpers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dfdf71f;
}

 ::haxe::ds::Option Helpers_obj::checkScheme(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_14350225be92a871_7_checkScheme)
HXDLIN(   7)		if (::hx::IsNull( s )) {
HXLINE(   8)			return ::haxe::ds::Option_obj::Some( ::tink::core::TypedError_obj::__alloc( HX_CTX ,400,HX_("Missing Scheme (expected http/https)",44,64,de,d5),::hx::SourceInfo(HX_("tink/http/clients/Helpers.hx",ea,44,04,cb),14,HX_("tink.http.clients.Helpers",95,28,6d,fc),HX_("missingSchemeError",9d,5b,f4,bc))));
            		}
            		else {
HXDLIN(   7)			::String _hx_switch_0 = s;
            			if (  (_hx_switch_0==HX_("http",88,9b,16,45)) ||  (_hx_switch_0==HX_("https",eb,7b,b1,2e)) ){
HXLINE(   9)				return ::haxe::ds::Option_obj::None_dyn();
HXDLIN(   9)				goto _hx_goto_0;
            			}
            			/* default */{
HXLINE(  10)				::String v = s;
HXDLIN(  10)				return ::haxe::ds::Option_obj::Some( ::tink::core::TypedError_obj::__alloc( HX_CTX ,400,((HX_("Invalid Scheme \"",f0,95,05,b3) + v) + HX_("\" (expected http/https)",c7,d4,d0,02)),::hx::SourceInfo(HX_("tink/http/clients/Helpers.hx",ea,44,04,cb),17,HX_("tink.http.clients.Helpers",95,28,6d,fc),HX_("invalidSchemeError",ac,37,0e,04))));
            			}
            			_hx_goto_0:;
            		}
HXLINE(   7)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Helpers_obj,checkScheme,return )

 ::tink::core::TypedError Helpers_obj::missingSchemeError(){
            	HX_GC_STACKFRAME(&_hx_pos_14350225be92a871_14_missingSchemeError)
HXDLIN(  14)		return  ::tink::core::TypedError_obj::__alloc( HX_CTX ,400,HX_("Missing Scheme (expected http/https)",44,64,de,d5),::hx::SourceInfo(HX_("tink/http/clients/Helpers.hx",ea,44,04,cb),14,HX_("tink.http.clients.Helpers",95,28,6d,fc),HX_("missingSchemeError",9d,5b,f4,bc)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Helpers_obj,missingSchemeError,return )

 ::tink::core::TypedError Helpers_obj::invalidSchemeError(::String v){
            	HX_GC_STACKFRAME(&_hx_pos_14350225be92a871_17_invalidSchemeError)
HXDLIN(  17)		return  ::tink::core::TypedError_obj::__alloc( HX_CTX ,400,((HX_("Invalid Scheme \"",f0,95,05,b3) + v) + HX_("\" (expected http/https)",c7,d4,d0,02)),::hx::SourceInfo(HX_("tink/http/clients/Helpers.hx",ea,44,04,cb),17,HX_("tink.http.clients.Helpers",95,28,6d,fc),HX_("invalidSchemeError",ac,37,0e,04)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Helpers_obj,invalidSchemeError,return )


Helpers_obj::Helpers_obj()
{
}

bool Helpers_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"checkScheme") ) { outValue = checkScheme_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"missingSchemeError") ) { outValue = missingSchemeError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"invalidSchemeError") ) { outValue = invalidSchemeError_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Helpers_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Helpers_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Helpers_obj::__mClass;

static ::String Helpers_obj_sStaticFields[] = {
	HX_("checkScheme",0d,f3,d2,22),
	HX_("missingSchemeError",9d,5b,f4,bc),
	HX_("invalidSchemeError",ac,37,0e,04),
	::String(null())
};

void Helpers_obj::__register()
{
	Helpers_obj _hx_dummy;
	Helpers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.clients.Helpers",95,28,6d,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Helpers_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Helpers_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Helpers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Helpers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Helpers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace clients
