#ifndef INCLUDED_httpstatus__HttpStatusCode_HttpStatusCode_Impl_
#define INCLUDED_httpstatus__HttpStatusCode_HttpStatusCode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(httpstatus,_HttpStatusCode,HttpStatusCode_Impl_)
HX_DECLARE_CLASS2(tink,http,IncomingResponse)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS3(tink,http,_Response,OutgoingResponseData)

namespace httpstatus{
namespace _HttpStatusCode{


class HXCPP_CLASS_ATTRIBUTES HttpStatusCode_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HttpStatusCode_Impl__obj OBJ_;
		HttpStatusCode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x41133f53 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="httpstatus._HttpStatusCode.HttpStatusCode_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"httpstatus._HttpStatusCode.HttpStatusCode_Impl_"); }

		inline static ::hx::ObjectPtr< HttpStatusCode_Impl__obj > __new() {
			::hx::ObjectPtr< HttpStatusCode_Impl__obj > __this = new HttpStatusCode_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HttpStatusCode_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HttpStatusCode_Impl__obj *__this = (HttpStatusCode_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HttpStatusCode_Impl__obj), false, "httpstatus._HttpStatusCode.HttpStatusCode_Impl_"));
			*(void **)__this = HttpStatusCode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HttpStatusCode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HttpStatusCode_Impl_",27,9f,7d,f2); }

		static void __boot();
		static int Continue;
		static int SwitchingProtocols;
		static int Processing;
		static int OK;
		static int Created;
		static int Accepted;
		static int NonAuthoritativeInformation;
		static int NoContent;
		static int ResetContent;
		static int PartialContent;
		static int MultiStatus;
		static int AlreadyReported;
		static int IMUsed;
		static int MultipleChoices;
		static int MovedPermanently;
		static int Found;
		static int SeeOther;
		static int NotModified;
		static int UseProxy;
		static int SwitchProxy;
		static int TemporaryRedirect;
		static int PermanentRedirect;
		static int BadRequest;
		static int Unauthorized;
		static int PaymentRequired;
		static int Forbidden;
		static int NotFound;
		static int MethodNotAllowed;
		static int NotAcceptable;
		static int ProxyAuthenticationRequired;
		static int RequestTimeout;
		static int Conflict;
		static int Gone;
		static int LengthRequired;
		static int PreconditionFailed;
		static int PayloadTooLarge;
		static int URITooLong;
		static int UnsupportedMediaType;
		static int RangeNotSatisfiable;
		static int ExpectationFailed;
		static int ImATeapot;
		static int MisdirectedRequest;
		static int UnprocessableEntity;
		static int Locked;
		static int FailedDependency;
		static int UpgradeRequired;
		static int PreconditionRequired;
		static int TooManyRequests;
		static int RequestHeaderFieldsTooLarge;
		static int UnavailableForLegalReasons;
		static int InternalServerError;
		static int NotImplemented;
		static int BadGateway;
		static int ServiceUnavailable;
		static int GatewayTimeout;
		static int HTTPVersionNotSupported;
		static int VariantAlsoNegotiates;
		static int InsufficientStorage;
		static int LoopDetected;
		static int NotExtended;
		static int NetworkAuthenticationRequired;
		static ::String toMessage(int this1);
		static ::Dynamic toMessage_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static int fromErrorCode(int code);
		static ::Dynamic fromErrorCode_dyn();

		static  ::tink::http::_Response::OutgoingResponseData toOutgoingResponse(int this1);
		static ::Dynamic toOutgoingResponse_dyn();

		static int fromIncomingResponse( ::tink::http::IncomingResponse res);
		static ::Dynamic fromIncomingResponse_dyn();

};

} // end namespace httpstatus
} // end namespace _HttpStatusCode

#endif /* INCLUDED_httpstatus__HttpStatusCode_HttpStatusCode_Impl_ */ 
