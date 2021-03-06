#ifndef INCLUDED_tink_http__Response_OutgoingResponseData
#define INCLUDED_tink_http__Response_OutgoingResponseData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,ResponseHeaderBase)
HX_DECLARE_CLASS3(tink,http,_Response,OutgoingResponseData)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{
namespace _Response{


class HXCPP_CLASS_ATTRIBUTES OutgoingResponseData_obj : public  ::tink::http::Message_obj
{
	public:
		typedef  ::tink::http::Message_obj super;
		typedef OutgoingResponseData_obj OBJ_;
		OutgoingResponseData_obj();

	public:
		enum { _hx_ClassId = 0x0dfa253d };

		void __construct( ::tink::http::ResponseHeaderBase header,::Dynamic body);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http._Response.OutgoingResponseData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http._Response.OutgoingResponseData"); }
		static ::hx::ObjectPtr< OutgoingResponseData_obj > __new( ::tink::http::ResponseHeaderBase header,::Dynamic body);
		static ::hx::ObjectPtr< OutgoingResponseData_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::http::ResponseHeaderBase header,::Dynamic body);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutgoingResponseData_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutgoingResponseData",f7,c7,68,aa); }

};

} // end namespace tink
} // end namespace http
} // end namespace _Response

#endif /* INCLUDED_tink_http__Response_OutgoingResponseData */ 
