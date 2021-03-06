#include <hxcpp.h>

#ifndef INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_
#include <httpstatus/_HttpStatusMessage/HttpStatusMessage_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_29343a8e513e00a9_5__new,"httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_","_new",0xc9f9b52e,"httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_._new","httpstatus/HttpStatusMessage.hx",5,0x8734b7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_29343a8e513e00a9_9_fromCode,"httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_","fromCode",0x5ecb8a04,"httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_.fromCode","httpstatus/HttpStatusMessage.hx",9,0x8734b7a6)
namespace httpstatus{
namespace _HttpStatusMessage{

void HttpStatusMessage_Impl__obj::__construct() { }

Dynamic HttpStatusMessage_Impl__obj::__CreateEmpty() { return new HttpStatusMessage_Impl__obj; }

void *HttpStatusMessage_Impl__obj::_hx_vtable = 0;

Dynamic HttpStatusMessage_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HttpStatusMessage_Impl__obj > _hx_result = new HttpStatusMessage_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HttpStatusMessage_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0de4d9f9;
}

::String HttpStatusMessage_Impl__obj::_new(int statusCode){
            	HX_STACKFRAME(&_hx_pos_29343a8e513e00a9_5__new)
HXDLIN(   5)		::String this1 = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(statusCode);
HXDLIN(   5)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusMessage_Impl__obj,_new,return )

::String HttpStatusMessage_Impl__obj::fromCode(int statusCode){
            	HX_STACKFRAME(&_hx_pos_29343a8e513e00a9_9_fromCode)
HXDLIN(   9)		switch((int)(statusCode)){
            			case (int)100: {
HXLINE(  10)				return HX_("Continue",87,9c,7a,0b);
            			}
            			break;
            			case (int)101: {
HXLINE(  11)				return HX_("Switching Protocols",a9,d3,99,92);
            			}
            			break;
            			case (int)102: {
HXLINE(  12)				return HX_("Processing",f3,5d,e6,cd);
            			}
            			break;
            			case (int)200: {
HXLINE(  13)				return HX_("OK",1c,45,00,00);
            			}
            			break;
            			case (int)201: {
HXLINE(  14)				return HX_("Created",c8,dd,bb,de);
            			}
            			break;
            			case (int)202: {
HXLINE(  15)				return HX_("Accepted",87,79,c9,a1);
            			}
            			break;
            			case (int)203: {
HXLINE(  16)				return HX_("Non-Authoritative Information",bb,a3,63,e2);
            			}
            			break;
            			case (int)204: {
HXLINE(  17)				return HX_("No Content",5a,06,74,1a);
            			}
            			break;
            			case (int)205: {
HXLINE(  18)				return HX_("Reset Content",a8,79,f4,ab);
            			}
            			break;
            			case (int)206: {
HXLINE(  19)				return HX_("Partial Content",5a,c1,24,ef);
            			}
            			break;
            			case (int)207: {
HXLINE(  20)				return HX_("Multi-Status",06,2e,90,60);
            			}
            			break;
            			case (int)208: {
HXLINE(  21)				return HX_("Already Reported",db,97,92,dc);
            			}
            			break;
            			case (int)226: {
HXLINE(  22)				return HX_("IM Used",19,f4,72,4a);
            			}
            			break;
            			case (int)300: {
HXLINE(  23)				return HX_("Multiple Choices",e2,6f,07,3b);
            			}
            			break;
            			case (int)301: {
HXLINE(  24)				return HX_("Moved Permanently",8e,8c,fc,4c);
            			}
            			break;
            			case (int)302: {
HXLINE(  25)				return HX_("Found",22,72,c4,97);
            			}
            			break;
            			case (int)303: {
HXLINE(  26)				return HX_("See Other",43,4e,33,f2);
            			}
            			break;
            			case (int)304: {
HXLINE(  27)				return HX_("Not Modified",36,f0,28,59);
            			}
            			break;
            			case (int)305: {
HXLINE(  28)				return HX_("Use Proxy",95,e5,f1,4a);
            			}
            			break;
            			case (int)306: {
HXLINE(  29)				return HX_("Switch Proxy",42,6f,c6,d6);
            			}
            			break;
            			case (int)307: {
HXLINE(  30)				return HX_("Temporary Redirect",cb,73,f1,2d);
            			}
            			break;
            			case (int)308: {
HXLINE(  31)				return HX_("Permanent Redirect",8e,d3,f2,8e);
            			}
            			break;
            			case (int)400: {
HXLINE(  32)				return HX_("Bad Request",b4,61,00,b4);
            			}
            			break;
            			case (int)401: {
HXLINE(  33)				return HX_("Unauthorized",54,5a,51,93);
            			}
            			break;
            			case (int)402: {
HXLINE(  34)				return HX_("Payment Required",f9,4d,5e,c5);
            			}
            			break;
            			case (int)403: {
HXLINE(  35)				return HX_("Forbidden",d9,e8,e2,e5);
            			}
            			break;
            			case (int)404: {
HXLINE(  36)				return HX_("Not Found",35,47,57,4d);
            			}
            			break;
            			case (int)405: {
HXLINE(  37)				return HX_("Method Not Allowed",3c,b5,d0,70);
            			}
            			break;
            			case (int)406: {
HXLINE(  38)				return HX_("Not Acceptable",cf,0e,6b,35);
            			}
            			break;
            			case (int)407: {
HXLINE(  39)				return HX_("Proxy Authentication Required",35,f1,30,06);
            			}
            			break;
            			case (int)408: {
HXLINE(  40)				return HX_("Request Timeout",90,d4,9d,f8);
            			}
            			break;
            			case (int)409: {
HXLINE(  41)				return HX_("Conflict",72,46,d6,fd);
            			}
            			break;
            			case (int)410: {
HXLINE(  42)				return HX_("Gone",7f,c0,42,2f);
            			}
            			break;
            			case (int)411: {
HXLINE(  43)				return HX_("Length Required",d9,13,1b,e3);
            			}
            			break;
            			case (int)412: {
HXLINE(  44)				return HX_("Precondition Failed",c5,ef,a0,89);
            			}
            			break;
            			case (int)413: {
HXLINE(  45)				return HX_("Payload Too Large",bd,55,e7,53);
            			}
            			break;
            			case (int)414: {
HXLINE(  46)				return HX_("URI Too Long",1c,6e,93,1c);
            			}
            			break;
            			case (int)415: {
HXLINE(  47)				return HX_("Unsupported Media Type",61,45,31,c9);
            			}
            			break;
            			case (int)416: {
HXLINE(  48)				return HX_("Range Not Satisfiable",9d,7a,7b,53);
            			}
            			break;
            			case (int)417: {
HXLINE(  49)				return HX_("Expectation Failed",61,e3,49,ae);
            			}
            			break;
            			case (int)418: {
HXLINE(  50)				return HX_("I'm a teapot",f5,5a,78,47);
            			}
            			break;
            			case (int)421: {
HXLINE(  51)				return HX_("Misdirected Request",4e,3a,3b,51);
            			}
            			break;
            			case (int)422: {
HXLINE(  52)				return HX_("Unprocessable Entity",b3,bb,45,9b);
            			}
            			break;
            			case (int)423: {
HXLINE(  53)				return HX_("Locked",2a,79,5b,8e);
            			}
            			break;
            			case (int)424: {
HXLINE(  54)				return HX_("Failed Dependency",4e,8c,3e,61);
            			}
            			break;
            			case (int)426: {
HXLINE(  55)				return HX_("Upgrade Required",a3,21,95,bc);
            			}
            			break;
            			case (int)428: {
HXLINE(  56)				return HX_("Precondition Required",67,4d,69,a0);
            			}
            			break;
            			case (int)429: {
HXLINE(  57)				return HX_("Too Many Requests",39,d7,77,53);
            			}
            			break;
            			case (int)431: {
HXLINE(  58)				return HX_("Request Header Fields Too Large",8a,a4,23,6a);
            			}
            			break;
            			case (int)451: {
HXLINE(  59)				return HX_("Unavailable For Legal Reasons",a1,79,b9,fc);
            			}
            			break;
            			case (int)500: {
HXLINE(  60)				return HX_("Internal Server Error",4e,49,be,d4);
            			}
            			break;
            			case (int)501: {
HXLINE(  61)				return HX_("Not Implemented",f5,b5,64,18);
            			}
            			break;
            			case (int)502: {
HXLINE(  62)				return HX_("Bad Gateway",69,c2,d4,00);
            			}
            			break;
            			case (int)503: {
HXLINE(  63)				return HX_("Service Unavailable",a5,bb,e8,07);
            			}
            			break;
            			case (int)504: {
HXLINE(  64)				return HX_("Gateway Timeout",45,72,81,e5);
            			}
            			break;
            			case (int)505: {
HXLINE(  65)				return HX_("HTTP Version Not Supported",e1,52,c5,3e);
            			}
            			break;
            			case (int)506: {
HXLINE(  66)				return HX_("Variant Also Negotiates",f3,a2,fb,f7);
            			}
            			break;
            			case (int)507: {
HXLINE(  67)				return HX_("Insufficient Storage",1e,5a,8e,43);
            			}
            			break;
            			case (int)508: {
HXLINE(  68)				return HX_("Loop Detected",be,f6,5c,fa);
            			}
            			break;
            			case (int)510: {
HXLINE(  69)				return HX_("Not Extended",a6,e9,37,23);
            			}
            			break;
            			case (int)511: {
HXLINE(  70)				return HX_("Network Authentication Required",75,3f,0a,86);
            			}
            			break;
            			default:{
HXLINE(  71)				return HX_("Unknown Status",48,89,45,e6);
            			}
            		}
HXLINE(   9)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusMessage_Impl__obj,fromCode,return )


HttpStatusMessage_Impl__obj::HttpStatusMessage_Impl__obj()
{
}

bool HttpStatusMessage_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromCode") ) { outValue = fromCode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HttpStatusMessage_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HttpStatusMessage_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HttpStatusMessage_Impl__obj::__mClass;

static ::String HttpStatusMessage_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("fromCode",b7,7f,90,9f),
	::String(null())
};

void HttpStatusMessage_Impl__obj::__register()
{
	HttpStatusMessage_Impl__obj _hx_dummy;
	HttpStatusMessage_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_",c1,d3,37,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HttpStatusMessage_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HttpStatusMessage_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HttpStatusMessage_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HttpStatusMessage_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HttpStatusMessage_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace httpstatus
} // end namespace _HttpStatusMessage
