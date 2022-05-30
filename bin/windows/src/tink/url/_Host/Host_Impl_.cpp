#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_tink_url__Host_Host_Impl_
#include <tink/url/_Host/Host_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d70b3ee84c2958dc_13__new,"tink.url._Host.Host_Impl_","_new",0x715bb3a5,"tink.url._Host.Host_Impl_._new","tink/url/Host.hx",13,0xd9916279)
HX_LOCAL_STACK_FRAME(_hx_pos_d70b3ee84c2958dc_21_get_name,"tink.url._Host.Host_Impl_","get_name",0x3fdd3e18,"tink.url._Host.Host_Impl_.get_name","tink/url/Host.hx",21,0xd9916279)
HX_LOCAL_STACK_FRAME(_hx_pos_d70b3ee84c2958dc_30_get_port,"tink.url._Host.Host_Impl_","get_port",0x413a4f4e,"tink.url._Host.Host_Impl_.get_port","tink/url/Host.hx",30,0xd9916279)
HX_LOCAL_STACK_FRAME(_hx_pos_d70b3ee84c2958dc_42_toString,"tink.url._Host.Host_Impl_","toString",0xaf91e0f0,"tink.url._Host.Host_Impl_.toString","tink/url/Host.hx",42,0xd9916279)
namespace tink{
namespace url{
namespace _Host{

void Host_Impl__obj::__construct() { }

Dynamic Host_Impl__obj::__CreateEmpty() { return new Host_Impl__obj; }

void *Host_Impl__obj::_hx_vtable = 0;

Dynamic Host_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Host_Impl__obj > _hx_result = new Host_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Host_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20d53a72;
}

::String Host_Impl__obj::_new(::String name, ::Dynamic port){
            	HX_STACKFRAME(&_hx_pos_d70b3ee84c2958dc_13__new)
HXDLIN(  13)		::String this1;
HXLINE(  15)		if (::hx::IsNull( port )) {
HXLINE(  15)			this1 = name;
            		}
            		else {
HXLINE(  16)			bool this2;
HXDLIN(  16)			if (::hx::IsLessEq( port,65535 )) {
HXLINE(  16)				this2 = ::hx::IsLessEq( port,0 );
            			}
            			else {
HXLINE(  16)				this2 = true;
            			}
HXDLIN(  16)			if (this2) {
HXLINE(  16)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid port",6a,65,69,91)));
            			}
            			else {
HXLINE(  17)				this1 = (((HX_("",00,00,00,00) + name) + HX_(":",3a,00,00,00)) + port);
            			}
            		}
HXLINE(  13)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Host_Impl__obj,_new,return )

::String Host_Impl__obj::get_name(::String this1){
            	HX_STACKFRAME(&_hx_pos_d70b3ee84c2958dc_21_get_name)
HXDLIN(  21)		if (::hx::IsNull( this1 )) {
HXDLIN(  21)			return null();
            		}
            		else {
HXLINE(  22)			::Array< ::String > _g = this1.split(HX_("]",5d,00,00,00));
HXDLIN(  22)			switch((int)(_g->length)){
            				case (int)1: {
HXLINE(  23)					::String v = _g->__get(0);
HXDLIN(  23)					return v.split(HX_(":",3a,00,00,00))->__get(0);
            				}
            				break;
            				case (int)2: {
HXLINE(  22)					::String _g1 = _g->__get(1);
HXLINE(  24)					::String v = _g->__get(0);
HXDLIN(  24)					return (v + HX_("]",5d,00,00,00));
            				}
            				break;
            				default:{
HXLINE(  25)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            			}
            		}
HXLINE(  21)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Host_Impl__obj,get_name,return )

 ::Dynamic Host_Impl__obj::get_port(::String this1){
            	HX_STACKFRAME(&_hx_pos_d70b3ee84c2958dc_30_get_port)
HXDLIN(  30)		if (::hx::IsNull( this1 )) {
HXDLIN(  30)			return null();
            		}
            		else {
HXLINE(  32)			::Array< ::String > _g = this1.split(HX_("]",5d,00,00,00));
HXDLIN(  32)			switch((int)(_g->length)){
            				case (int)1: {
HXLINE(  33)					::String v = _g->__get(0);
HXLINE(  34)					::String _g1 = v.split(HX_(":",3a,00,00,00))->__get(1);
HXLINE(  35)					if (::hx::IsNull( _g1 )) {
HXLINE(  35)						return null();
            					}
            					else {
HXLINE(  36)						::String p = _g1;
HXDLIN(  36)						return ::Std_obj::parseInt(p);
            					}
            				}
            				break;
            				case (int)2: {
HXLINE(  32)					::String _g1 = _g->__get(0);
HXLINE(  33)					::String v = _g->__get(1);
HXLINE(  34)					::String _g2 = v.split(HX_(":",3a,00,00,00))->__get(1);
HXLINE(  35)					if (::hx::IsNull( _g2 )) {
HXLINE(  35)						return null();
            					}
            					else {
HXLINE(  36)						::String p = _g2;
HXDLIN(  36)						return ::Std_obj::parseInt(p);
            					}
            				}
            				break;
            				default:{
HXLINE(  38)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            			}
            		}
HXLINE(  30)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Host_Impl__obj,get_port,return )

::String Host_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_d70b3ee84c2958dc_42_toString)
HXDLIN(  42)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Host_Impl__obj,toString,return )


Host_Impl__obj::Host_Impl__obj()
{
}

bool Host_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { outValue = get_name_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_port") ) { outValue = get_port_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Host_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Host_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Host_Impl__obj::__mClass;

static ::String Host_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_port",0a,3f,17,ca),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Host_Impl__obj::__register()
{
	Host_Impl__obj _hx_dummy;
	Host_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Host.Host_Impl_",aa,68,e4,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Host_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Host_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Host_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Host_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Host_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _Host
