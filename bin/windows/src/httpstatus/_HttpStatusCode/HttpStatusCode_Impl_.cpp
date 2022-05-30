#include <hxcpp.h>

#ifndef INCLUDED_httpstatus__HttpStatusCode_HttpStatusCode_Impl_
#include <httpstatus/_HttpStatusCode/HttpStatusCode_Impl_.h>
#endif
#ifndef INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_
#include <httpstatus/_HttpStatusMessage/HttpStatusMessage_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Response_OutgoingResponseData
#include <tink/http/_Response/OutgoingResponseData.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_70_toMessage,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","toMessage",0x3eafd641,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.toMessage","httpstatus/HttpStatusCode.hx",70,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_74_toInt,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","toInt",0x0e426869,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.toInt","httpstatus/HttpStatusCode.hx",74,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_87_fromErrorCode,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","fromErrorCode",0x81fbd180,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.fromErrorCode","httpstatus/HttpStatusCode.hx",87,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_99_toOutgoingResponse,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","toOutgoingResponse",0x1a024f53,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.toOutgoingResponse","httpstatus/HttpStatusCode.hx",99,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_105_fromIncomingResponse,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","fromIncomingResponse",0x281b907c,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.fromIncomingResponse","httpstatus/HttpStatusCode.hx",105,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_6_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",6,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_7_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",7,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_8_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",8,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_9_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",9,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_10_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",10,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_11_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",11,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_12_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",12,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_13_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",13,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_14_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",14,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_15_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",15,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_16_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",16,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_17_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",17,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_18_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",18,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_19_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",19,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_20_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",20,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_21_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",21,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_22_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",22,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_23_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",23,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_24_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",24,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_25_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",25,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_26_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",26,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_27_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",27,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_28_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",28,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_29_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",29,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_30_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",30,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_31_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",31,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_32_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",32,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_33_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",33,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_34_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",34,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_35_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",35,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_36_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",36,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_37_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",37,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_38_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",38,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_39_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",39,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_40_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",40,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_41_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",41,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_42_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",42,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_43_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",43,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_44_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",44,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_45_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",45,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_46_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",46,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_47_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",47,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_48_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",48,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_49_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",49,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_50_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",50,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_51_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",51,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_52_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",52,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_53_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",53,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_54_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",54,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_55_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",55,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_56_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",56,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_57_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",57,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_58_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",58,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_59_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",59,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_60_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",60,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_61_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",61,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_62_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",62,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_63_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",63,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_64_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",64,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_65_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",65,0x25aa8002)
HX_LOCAL_STACK_FRAME(_hx_pos_898d1d349fd9ace4_66_boot,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_","boot",0xfc33d79d,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_.boot","httpstatus/HttpStatusCode.hx",66,0x25aa8002)
namespace httpstatus{
namespace _HttpStatusCode{

void HttpStatusCode_Impl__obj::__construct() { }

Dynamic HttpStatusCode_Impl__obj::__CreateEmpty() { return new HttpStatusCode_Impl__obj; }

void *HttpStatusCode_Impl__obj::_hx_vtable = 0;

Dynamic HttpStatusCode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HttpStatusCode_Impl__obj > _hx_result = new HttpStatusCode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HttpStatusCode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41133f53;
}

int HttpStatusCode_Impl__obj::Continue;

int HttpStatusCode_Impl__obj::SwitchingProtocols;

int HttpStatusCode_Impl__obj::Processing;

int HttpStatusCode_Impl__obj::OK;

int HttpStatusCode_Impl__obj::Created;

int HttpStatusCode_Impl__obj::Accepted;

int HttpStatusCode_Impl__obj::NonAuthoritativeInformation;

int HttpStatusCode_Impl__obj::NoContent;

int HttpStatusCode_Impl__obj::ResetContent;

int HttpStatusCode_Impl__obj::PartialContent;

int HttpStatusCode_Impl__obj::MultiStatus;

int HttpStatusCode_Impl__obj::AlreadyReported;

int HttpStatusCode_Impl__obj::IMUsed;

int HttpStatusCode_Impl__obj::MultipleChoices;

int HttpStatusCode_Impl__obj::MovedPermanently;

int HttpStatusCode_Impl__obj::Found;

int HttpStatusCode_Impl__obj::SeeOther;

int HttpStatusCode_Impl__obj::NotModified;

int HttpStatusCode_Impl__obj::UseProxy;

int HttpStatusCode_Impl__obj::SwitchProxy;

int HttpStatusCode_Impl__obj::TemporaryRedirect;

int HttpStatusCode_Impl__obj::PermanentRedirect;

int HttpStatusCode_Impl__obj::BadRequest;

int HttpStatusCode_Impl__obj::Unauthorized;

int HttpStatusCode_Impl__obj::PaymentRequired;

int HttpStatusCode_Impl__obj::Forbidden;

int HttpStatusCode_Impl__obj::NotFound;

int HttpStatusCode_Impl__obj::MethodNotAllowed;

int HttpStatusCode_Impl__obj::NotAcceptable;

int HttpStatusCode_Impl__obj::ProxyAuthenticationRequired;

int HttpStatusCode_Impl__obj::RequestTimeout;

int HttpStatusCode_Impl__obj::Conflict;

int HttpStatusCode_Impl__obj::Gone;

int HttpStatusCode_Impl__obj::LengthRequired;

int HttpStatusCode_Impl__obj::PreconditionFailed;

int HttpStatusCode_Impl__obj::PayloadTooLarge;

int HttpStatusCode_Impl__obj::URITooLong;

int HttpStatusCode_Impl__obj::UnsupportedMediaType;

int HttpStatusCode_Impl__obj::RangeNotSatisfiable;

int HttpStatusCode_Impl__obj::ExpectationFailed;

int HttpStatusCode_Impl__obj::ImATeapot;

int HttpStatusCode_Impl__obj::MisdirectedRequest;

int HttpStatusCode_Impl__obj::UnprocessableEntity;

int HttpStatusCode_Impl__obj::Locked;

int HttpStatusCode_Impl__obj::FailedDependency;

int HttpStatusCode_Impl__obj::UpgradeRequired;

int HttpStatusCode_Impl__obj::PreconditionRequired;

int HttpStatusCode_Impl__obj::TooManyRequests;

int HttpStatusCode_Impl__obj::RequestHeaderFieldsTooLarge;

int HttpStatusCode_Impl__obj::UnavailableForLegalReasons;

int HttpStatusCode_Impl__obj::InternalServerError;

int HttpStatusCode_Impl__obj::NotImplemented;

int HttpStatusCode_Impl__obj::BadGateway;

int HttpStatusCode_Impl__obj::ServiceUnavailable;

int HttpStatusCode_Impl__obj::GatewayTimeout;

int HttpStatusCode_Impl__obj::HTTPVersionNotSupported;

int HttpStatusCode_Impl__obj::VariantAlsoNegotiates;

int HttpStatusCode_Impl__obj::InsufficientStorage;

int HttpStatusCode_Impl__obj::LoopDetected;

int HttpStatusCode_Impl__obj::NotExtended;

int HttpStatusCode_Impl__obj::NetworkAuthenticationRequired;

::String HttpStatusCode_Impl__obj::toMessage(int this1){
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_70_toMessage)
HXDLIN(  70)		::String this2 = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(this1);
HXDLIN(  70)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusCode_Impl__obj,toMessage,return )

int HttpStatusCode_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_74_toInt)
HXDLIN(  74)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusCode_Impl__obj,toInt,return )

int HttpStatusCode_Impl__obj::fromErrorCode(int code){
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_87_fromErrorCode)
HXDLIN(  87)		return code;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusCode_Impl__obj,fromErrorCode,return )

 ::tink::http::_Response::OutgoingResponseData HttpStatusCode_Impl__obj::toOutgoingResponse(int this1){
            	HX_GC_STACKFRAME(&_hx_pos_898d1d349fd9ace4_99_toOutgoingResponse)
HXLINE( 100)		::String this2 = ::httpstatus::_HttpStatusMessage::HttpStatusMessage_Impl__obj::fromCode(this1);
HXDLIN( 100)		 ::tink::http::ResponseHeaderBase this3 =  ::tink::http::ResponseHeaderBase_obj::__alloc( HX_CTX ,this1,this2,::Array_obj< ::Dynamic>::__new(1)->init(0, ::tink::http::HeaderField_obj::__alloc( HX_CTX ,HX_("content-length",ba,f0,cc,86),HX_("0",30,00,00,00))),HX_("HTTP/1.1",6d,25,7a,80));
HXLINE(  99)		 ::tink::http::_Response::OutgoingResponseData this4 =  ::tink::http::_Response::OutgoingResponseData_obj::__alloc( HX_CTX ,this3,::tink::io::_Source::Source_Impl__obj::EMPTY);
HXDLIN(  99)		return this4;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusCode_Impl__obj,toOutgoingResponse,return )

int HttpStatusCode_Impl__obj::fromIncomingResponse( ::tink::http::IncomingResponse res){
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_105_fromIncomingResponse)
HXDLIN( 105)		return ( ( ::tink::http::ResponseHeaderBase)(res->header) )->statusCode;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpStatusCode_Impl__obj,fromIncomingResponse,return )


HttpStatusCode_Impl__obj::HttpStatusCode_Impl__obj()
{
}

bool HttpStatusCode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toMessage") ) { outValue = toMessage_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromErrorCode") ) { outValue = fromErrorCode_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"toOutgoingResponse") ) { outValue = toOutgoingResponse_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromIncomingResponse") ) { outValue = fromIncomingResponse_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HttpStatusCode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo HttpStatusCode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Continue,HX_("Continue",87,9c,7a,0b)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::SwitchingProtocols,HX_("SwitchingProtocols",ed,e9,23,57)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Processing,HX_("Processing",f3,5d,e6,cd)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::OK,HX_("OK",1c,45,00,00)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Created,HX_("Created",c8,dd,bb,de)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Accepted,HX_("Accepted",87,79,c9,a1)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NonAuthoritativeInformation,HX_("NonAuthoritativeInformation",ea,ac,38,65)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NoContent,HX_("NoContent",d8,2e,36,f9)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::ResetContent,HX_("ResetContent",4a,1f,68,53)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::PartialContent,HX_("PartialContent",d8,d3,35,c4)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::MultiStatus,HX_("MultiStatus",6b,1e,81,d6)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::AlreadyReported,HX_("AlreadyReported",ab,dd,fe,51)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::IMUsed,HX_("IMUsed",41,c0,6e,be)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::MultipleChoices,HX_("MultipleChoices",a2,65,cf,31)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::MovedPermanently,HX_("MovedPermanently",e8,b2,7b,0c)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Found,HX_("Found",22,72,c4,97)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::SeeOther,HX_("SeeOther",5d,22,02,1f)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NotModified,HX_("NotModified",5c,d3,eb,29)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::UseProxy,HX_("UseProxy",c7,0c,ad,69)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::SwitchProxy,HX_("SwitchProxy",ba,17,42,a0)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::TemporaryRedirect,HX_("TemporaryRedirect",ad,35,c3,4e)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::PermanentRedirect,HX_("PermanentRedirect",4a,3f,ea,ef)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::BadRequest,HX_("BadRequest",2a,4c,36,ea)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Unauthorized,HX_("Unauthorized",54,5a,51,93)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::PaymentRequired,HX_("PaymentRequired",65,36,03,e2)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Forbidden,HX_("Forbidden",d9,e8,e2,e5)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NotFound,HX_("NotFound",4f,90,57,6e)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::MethodNotAllowed,HX_("MethodNotAllowed",b6,72,18,45)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NotAcceptable,HX_("NotAcceptable",75,87,09,e7)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::ProxyAuthenticationRequired,HX_("ProxyAuthenticationRequired",e5,13,0f,d5)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::RequestTimeout,HX_("RequestTimeout",32,0f,94,fc)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Conflict,HX_("Conflict",72,46,d6,fd)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Gone,HX_("Gone",7f,c0,42,2f)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::LengthRequired,HX_("LengthRequired",85,cc,09,ca)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::PreconditionFailed,HX_("PreconditionFailed",15,2d,69,9d)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::PayloadTooLarge,HX_("PayloadTooLarge",15,a6,e2,5a)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::URITooLong,HX_("URITooLong",44,34,23,dc)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::UnsupportedMediaType,HX_("UnsupportedMediaType",69,a6,17,22)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::RangeNotSatisfiable,HX_("RangeNotSatisfiable",17,5e,eb,fb)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::ExpectationFailed,HX_("ExpectationFailed",f9,a0,a5,ad)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::ImATeapot,HX_("ImATeapot",62,a5,2a,0e)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::MisdirectedRequest,HX_("MisdirectedRequest",d0,04,dd,5e)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::UnprocessableEntity,HX_("UnprocessableEntity",f3,24,f4,c5)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::Locked,HX_("Locked",2a,79,5b,8e)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::FailedDependency,HX_("FailedDependency",08,2b,b1,05)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::UpgradeRequired,HX_("UpgradeRequired",fb,05,c2,b1)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::PreconditionRequired,HX_("PreconditionRequired",b7,7e,b7,64)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::TooManyRequests,HX_("TooManyRequests",97,fe,92,02)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::RequestHeaderFieldsTooLarge,HX_("RequestHeaderFieldsTooLarge",5c,ef,d9,1c)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::UnavailableForLegalReasons,HX_("UnavailableForLegalReasons",4f,df,8c,cb)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::InternalServerError,HX_("InternalServerError",a8,35,9d,62)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NotImplemented,HX_("NotImplemented",8f,ce,6f,d1)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::BadGateway,HX_("BadGateway",df,ac,0a,37)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::ServiceUnavailable,HX_("ServiceUnavailable",3b,b2,70,a4)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::GatewayTimeout,HX_("GatewayTimeout",1d,5f,b6,0d)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::HTTPVersionNotSupported,HX_("HTTPVersionNotSupported",2b,73,22,c1)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::VariantAlsoNegotiates,HX_("VariantAlsoNegotiates",e1,7b,3d,34)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::InsufficientStorage,HX_("InsufficientStorage",58,6d,ad,83)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::LoopDetected,HX_("LoopDetected",26,10,32,73)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NotExtended,HX_("NotExtended",cc,cc,fa,f3)},
	{::hx::fsInt,(void *) &HttpStatusCode_Impl__obj::NetworkAuthenticationRequired,HX_("NetworkAuthenticationRequired",25,52,6c,d4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void HttpStatusCode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Continue,"Continue");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::SwitchingProtocols,"SwitchingProtocols");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Processing,"Processing");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::OK,"OK");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Created,"Created");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Accepted,"Accepted");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NonAuthoritativeInformation,"NonAuthoritativeInformation");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NoContent,"NoContent");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::ResetContent,"ResetContent");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::PartialContent,"PartialContent");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::MultiStatus,"MultiStatus");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::AlreadyReported,"AlreadyReported");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::IMUsed,"IMUsed");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::MultipleChoices,"MultipleChoices");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::MovedPermanently,"MovedPermanently");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Found,"Found");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::SeeOther,"SeeOther");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NotModified,"NotModified");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::UseProxy,"UseProxy");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::SwitchProxy,"SwitchProxy");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::TemporaryRedirect,"TemporaryRedirect");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::PermanentRedirect,"PermanentRedirect");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::BadRequest,"BadRequest");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Unauthorized,"Unauthorized");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::PaymentRequired,"PaymentRequired");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Forbidden,"Forbidden");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NotFound,"NotFound");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::MethodNotAllowed,"MethodNotAllowed");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NotAcceptable,"NotAcceptable");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::ProxyAuthenticationRequired,"ProxyAuthenticationRequired");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::RequestTimeout,"RequestTimeout");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Conflict,"Conflict");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Gone,"Gone");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::LengthRequired,"LengthRequired");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::PreconditionFailed,"PreconditionFailed");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::PayloadTooLarge,"PayloadTooLarge");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::URITooLong,"URITooLong");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::UnsupportedMediaType,"UnsupportedMediaType");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::RangeNotSatisfiable,"RangeNotSatisfiable");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::ExpectationFailed,"ExpectationFailed");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::ImATeapot,"ImATeapot");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::MisdirectedRequest,"MisdirectedRequest");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::UnprocessableEntity,"UnprocessableEntity");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::Locked,"Locked");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::FailedDependency,"FailedDependency");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::UpgradeRequired,"UpgradeRequired");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::PreconditionRequired,"PreconditionRequired");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::TooManyRequests,"TooManyRequests");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::RequestHeaderFieldsTooLarge,"RequestHeaderFieldsTooLarge");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::UnavailableForLegalReasons,"UnavailableForLegalReasons");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::InternalServerError,"InternalServerError");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NotImplemented,"NotImplemented");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::BadGateway,"BadGateway");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::ServiceUnavailable,"ServiceUnavailable");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::GatewayTimeout,"GatewayTimeout");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::HTTPVersionNotSupported,"HTTPVersionNotSupported");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::VariantAlsoNegotiates,"VariantAlsoNegotiates");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::InsufficientStorage,"InsufficientStorage");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::LoopDetected,"LoopDetected");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NotExtended,"NotExtended");
	HX_MARK_MEMBER_NAME(HttpStatusCode_Impl__obj::NetworkAuthenticationRequired,"NetworkAuthenticationRequired");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HttpStatusCode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Continue,"Continue");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::SwitchingProtocols,"SwitchingProtocols");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Processing,"Processing");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Created,"Created");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Accepted,"Accepted");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NonAuthoritativeInformation,"NonAuthoritativeInformation");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NoContent,"NoContent");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::ResetContent,"ResetContent");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::PartialContent,"PartialContent");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::MultiStatus,"MultiStatus");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::AlreadyReported,"AlreadyReported");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::IMUsed,"IMUsed");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::MultipleChoices,"MultipleChoices");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::MovedPermanently,"MovedPermanently");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Found,"Found");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::SeeOther,"SeeOther");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NotModified,"NotModified");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::UseProxy,"UseProxy");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::SwitchProxy,"SwitchProxy");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::TemporaryRedirect,"TemporaryRedirect");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::PermanentRedirect,"PermanentRedirect");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::BadRequest,"BadRequest");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Unauthorized,"Unauthorized");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::PaymentRequired,"PaymentRequired");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Forbidden,"Forbidden");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NotFound,"NotFound");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::MethodNotAllowed,"MethodNotAllowed");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NotAcceptable,"NotAcceptable");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::ProxyAuthenticationRequired,"ProxyAuthenticationRequired");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::RequestTimeout,"RequestTimeout");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Conflict,"Conflict");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Gone,"Gone");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::LengthRequired,"LengthRequired");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::PreconditionFailed,"PreconditionFailed");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::PayloadTooLarge,"PayloadTooLarge");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::URITooLong,"URITooLong");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::UnsupportedMediaType,"UnsupportedMediaType");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::RangeNotSatisfiable,"RangeNotSatisfiable");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::ExpectationFailed,"ExpectationFailed");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::ImATeapot,"ImATeapot");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::MisdirectedRequest,"MisdirectedRequest");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::UnprocessableEntity,"UnprocessableEntity");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::Locked,"Locked");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::FailedDependency,"FailedDependency");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::UpgradeRequired,"UpgradeRequired");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::PreconditionRequired,"PreconditionRequired");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::TooManyRequests,"TooManyRequests");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::RequestHeaderFieldsTooLarge,"RequestHeaderFieldsTooLarge");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::UnavailableForLegalReasons,"UnavailableForLegalReasons");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::InternalServerError,"InternalServerError");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NotImplemented,"NotImplemented");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::BadGateway,"BadGateway");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::ServiceUnavailable,"ServiceUnavailable");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::GatewayTimeout,"GatewayTimeout");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::HTTPVersionNotSupported,"HTTPVersionNotSupported");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::VariantAlsoNegotiates,"VariantAlsoNegotiates");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::InsufficientStorage,"InsufficientStorage");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::LoopDetected,"LoopDetected");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NotExtended,"NotExtended");
	HX_VISIT_MEMBER_NAME(HttpStatusCode_Impl__obj::NetworkAuthenticationRequired,"NetworkAuthenticationRequired");
};

#endif

::hx::Class HttpStatusCode_Impl__obj::__mClass;

static ::String HttpStatusCode_Impl__obj_sStaticFields[] = {
	HX_("Continue",87,9c,7a,0b),
	HX_("SwitchingProtocols",ed,e9,23,57),
	HX_("Processing",f3,5d,e6,cd),
	HX_("OK",1c,45,00,00),
	HX_("Created",c8,dd,bb,de),
	HX_("Accepted",87,79,c9,a1),
	HX_("NonAuthoritativeInformation",ea,ac,38,65),
	HX_("NoContent",d8,2e,36,f9),
	HX_("ResetContent",4a,1f,68,53),
	HX_("PartialContent",d8,d3,35,c4),
	HX_("MultiStatus",6b,1e,81,d6),
	HX_("AlreadyReported",ab,dd,fe,51),
	HX_("IMUsed",41,c0,6e,be),
	HX_("MultipleChoices",a2,65,cf,31),
	HX_("MovedPermanently",e8,b2,7b,0c),
	HX_("Found",22,72,c4,97),
	HX_("SeeOther",5d,22,02,1f),
	HX_("NotModified",5c,d3,eb,29),
	HX_("UseProxy",c7,0c,ad,69),
	HX_("SwitchProxy",ba,17,42,a0),
	HX_("TemporaryRedirect",ad,35,c3,4e),
	HX_("PermanentRedirect",4a,3f,ea,ef),
	HX_("BadRequest",2a,4c,36,ea),
	HX_("Unauthorized",54,5a,51,93),
	HX_("PaymentRequired",65,36,03,e2),
	HX_("Forbidden",d9,e8,e2,e5),
	HX_("NotFound",4f,90,57,6e),
	HX_("MethodNotAllowed",b6,72,18,45),
	HX_("NotAcceptable",75,87,09,e7),
	HX_("ProxyAuthenticationRequired",e5,13,0f,d5),
	HX_("RequestTimeout",32,0f,94,fc),
	HX_("Conflict",72,46,d6,fd),
	HX_("Gone",7f,c0,42,2f),
	HX_("LengthRequired",85,cc,09,ca),
	HX_("PreconditionFailed",15,2d,69,9d),
	HX_("PayloadTooLarge",15,a6,e2,5a),
	HX_("URITooLong",44,34,23,dc),
	HX_("UnsupportedMediaType",69,a6,17,22),
	HX_("RangeNotSatisfiable",17,5e,eb,fb),
	HX_("ExpectationFailed",f9,a0,a5,ad),
	HX_("ImATeapot",62,a5,2a,0e),
	HX_("MisdirectedRequest",d0,04,dd,5e),
	HX_("UnprocessableEntity",f3,24,f4,c5),
	HX_("Locked",2a,79,5b,8e),
	HX_("FailedDependency",08,2b,b1,05),
	HX_("UpgradeRequired",fb,05,c2,b1),
	HX_("PreconditionRequired",b7,7e,b7,64),
	HX_("TooManyRequests",97,fe,92,02),
	HX_("RequestHeaderFieldsTooLarge",5c,ef,d9,1c),
	HX_("UnavailableForLegalReasons",4f,df,8c,cb),
	HX_("InternalServerError",a8,35,9d,62),
	HX_("NotImplemented",8f,ce,6f,d1),
	HX_("BadGateway",df,ac,0a,37),
	HX_("ServiceUnavailable",3b,b2,70,a4),
	HX_("GatewayTimeout",1d,5f,b6,0d),
	HX_("HTTPVersionNotSupported",2b,73,22,c1),
	HX_("VariantAlsoNegotiates",e1,7b,3d,34),
	HX_("InsufficientStorage",58,6d,ad,83),
	HX_("LoopDetected",26,10,32,73),
	HX_("NotExtended",cc,cc,fa,f3),
	HX_("NetworkAuthenticationRequired",25,52,6c,d4),
	HX_("toMessage",8c,6d,a5,c9),
	HX_("toInt",34,be,11,14),
	HX_("fromErrorCode",4b,6a,16,dc),
	HX_("toOutgoingResponse",a8,f6,f2,4a),
	HX_("fromIncomingResponse",11,77,04,f4),
	::String(null())
};

void HttpStatusCode_Impl__obj::__register()
{
	HttpStatusCode_Impl__obj _hx_dummy;
	HttpStatusCode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("httpstatus._HttpStatusCode.HttpStatusCode_Impl_",e3,c4,d2,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HttpStatusCode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HttpStatusCode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HttpStatusCode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HttpStatusCode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HttpStatusCode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HttpStatusCode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HttpStatusCode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HttpStatusCode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_6_boot)
HXDLIN(   6)		Continue = 100;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_7_boot)
HXDLIN(   7)		SwitchingProtocols = 101;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_8_boot)
HXDLIN(   8)		Processing = 102;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_9_boot)
HXDLIN(   9)		OK = 200;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_10_boot)
HXDLIN(  10)		Created = 201;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_11_boot)
HXDLIN(  11)		Accepted = 202;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_12_boot)
HXDLIN(  12)		NonAuthoritativeInformation = 203;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_13_boot)
HXDLIN(  13)		NoContent = 204;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_14_boot)
HXDLIN(  14)		ResetContent = 205;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_15_boot)
HXDLIN(  15)		PartialContent = 206;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_16_boot)
HXDLIN(  16)		MultiStatus = 207;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_17_boot)
HXDLIN(  17)		AlreadyReported = 208;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_18_boot)
HXDLIN(  18)		IMUsed = 226;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_19_boot)
HXDLIN(  19)		MultipleChoices = 300;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_20_boot)
HXDLIN(  20)		MovedPermanently = 301;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_21_boot)
HXDLIN(  21)		Found = 302;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_22_boot)
HXDLIN(  22)		SeeOther = 303;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_23_boot)
HXDLIN(  23)		NotModified = 304;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_24_boot)
HXDLIN(  24)		UseProxy = 305;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_25_boot)
HXDLIN(  25)		SwitchProxy = 306;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_26_boot)
HXDLIN(  26)		TemporaryRedirect = 307;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_27_boot)
HXDLIN(  27)		PermanentRedirect = 308;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_28_boot)
HXDLIN(  28)		BadRequest = 400;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_29_boot)
HXDLIN(  29)		Unauthorized = 401;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_30_boot)
HXDLIN(  30)		PaymentRequired = 402;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_31_boot)
HXDLIN(  31)		Forbidden = 403;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_32_boot)
HXDLIN(  32)		NotFound = 404;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_33_boot)
HXDLIN(  33)		MethodNotAllowed = 405;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_34_boot)
HXDLIN(  34)		NotAcceptable = 406;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_35_boot)
HXDLIN(  35)		ProxyAuthenticationRequired = 407;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_36_boot)
HXDLIN(  36)		RequestTimeout = 408;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_37_boot)
HXDLIN(  37)		Conflict = 409;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_38_boot)
HXDLIN(  38)		Gone = 410;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_39_boot)
HXDLIN(  39)		LengthRequired = 411;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_40_boot)
HXDLIN(  40)		PreconditionFailed = 412;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_41_boot)
HXDLIN(  41)		PayloadTooLarge = 413;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_42_boot)
HXDLIN(  42)		URITooLong = 414;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_43_boot)
HXDLIN(  43)		UnsupportedMediaType = 415;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_44_boot)
HXDLIN(  44)		RangeNotSatisfiable = 416;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_45_boot)
HXDLIN(  45)		ExpectationFailed = 417;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_46_boot)
HXDLIN(  46)		ImATeapot = 418;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_47_boot)
HXDLIN(  47)		MisdirectedRequest = 421;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_48_boot)
HXDLIN(  48)		UnprocessableEntity = 422;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_49_boot)
HXDLIN(  49)		Locked = 423;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_50_boot)
HXDLIN(  50)		FailedDependency = 424;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_51_boot)
HXDLIN(  51)		UpgradeRequired = 426;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_52_boot)
HXDLIN(  52)		PreconditionRequired = 428;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_53_boot)
HXDLIN(  53)		TooManyRequests = 429;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_54_boot)
HXDLIN(  54)		RequestHeaderFieldsTooLarge = 431;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_55_boot)
HXDLIN(  55)		UnavailableForLegalReasons = 451;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_56_boot)
HXDLIN(  56)		InternalServerError = 500;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_57_boot)
HXDLIN(  57)		NotImplemented = 501;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_58_boot)
HXDLIN(  58)		BadGateway = 502;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_59_boot)
HXDLIN(  59)		ServiceUnavailable = 503;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_60_boot)
HXDLIN(  60)		GatewayTimeout = 504;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_61_boot)
HXDLIN(  61)		HTTPVersionNotSupported = 505;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_62_boot)
HXDLIN(  62)		VariantAlsoNegotiates = 506;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_63_boot)
HXDLIN(  63)		InsufficientStorage = 507;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_64_boot)
HXDLIN(  64)		LoopDetected = 508;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_65_boot)
HXDLIN(  65)		NotExtended = 510;
            	}
{
            	HX_STACKFRAME(&_hx_pos_898d1d349fd9ace4_66_boot)
HXDLIN(  66)		NetworkAuthenticationRequired = 511;
            	}
}

} // end namespace httpstatus
} // end namespace _HttpStatusCode
