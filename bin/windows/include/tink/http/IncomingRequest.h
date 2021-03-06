#ifndef INCLUDED_tink_http_IncomingRequest
#define INCLUDED_tink_http_IncomingRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,IncomingRequest)
HX_DECLARE_CLASS2(tink,http,IncomingRequestBody)
HX_DECLARE_CLASS2(tink,http,IncomingRequestHeader)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,RequestHeader)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES IncomingRequest_obj : public  ::tink::http::Message_obj
{
	public:
		typedef  ::tink::http::Message_obj super;
		typedef IncomingRequest_obj OBJ_;
		IncomingRequest_obj();

	public:
		enum { _hx_ClassId = 0x0386f7df };

		void __construct(::String clientIp, ::tink::http::IncomingRequestHeader header, ::tink::http::IncomingRequestBody body);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.IncomingRequest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.IncomingRequest"); }
		static ::hx::ObjectPtr< IncomingRequest_obj > __new(::String clientIp, ::tink::http::IncomingRequestHeader header, ::tink::http::IncomingRequestBody body);
		static ::hx::ObjectPtr< IncomingRequest_obj > __alloc(::hx::Ctx *_hx_ctx,::String clientIp, ::tink::http::IncomingRequestHeader header, ::tink::http::IncomingRequestBody body);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IncomingRequest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IncomingRequest",e9,56,c7,13); }

		static ::Dynamic parse(::String clientIp,::Dynamic source);
		static ::Dynamic parse_dyn();

		::String clientIp;
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_IncomingRequest */ 
