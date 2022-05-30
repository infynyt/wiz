#ifndef INCLUDED_tink_http_IncomingResponse
#define INCLUDED_tink_http_IncomingResponse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,IncomingResponse)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,ResponseHeaderBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES IncomingResponse_obj : public  ::tink::http::Message_obj
{
	public:
		typedef  ::tink::http::Message_obj super;
		typedef IncomingResponse_obj OBJ_;
		IncomingResponse_obj();

	public:
		enum { _hx_ClassId = 0x68c65661 };

		void __construct( ::tink::http::ResponseHeaderBase header,::Dynamic body);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.IncomingResponse")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.IncomingResponse"); }
		static ::hx::ObjectPtr< IncomingResponse_obj > __new( ::tink::http::ResponseHeaderBase header,::Dynamic body);
		static ::hx::ObjectPtr< IncomingResponse_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::http::ResponseHeaderBase header,::Dynamic body);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IncomingResponse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IncomingResponse",a7,dd,f2,2c); }

		static ::Dynamic readAll( ::tink::http::IncomingResponse res);
		static ::Dynamic readAll_dyn();

		static  ::tink::http::IncomingResponse reportError( ::tink::core::TypedError e);
		static ::Dynamic reportError_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_IncomingResponse */ 
