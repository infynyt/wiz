#ifndef INCLUDED_tink_http_OutgoingRequest
#define INCLUDED_tink_http_OutgoingRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,OutgoingRequest)
HX_DECLARE_CLASS2(tink,http,OutgoingRequestHeader)
HX_DECLARE_CLASS2(tink,http,RequestHeader)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES OutgoingRequest_obj : public  ::tink::http::Message_obj
{
	public:
		typedef  ::tink::http::Message_obj super;
		typedef OutgoingRequest_obj OBJ_;
		OutgoingRequest_obj();

	public:
		enum { _hx_ClassId = 0x08bf21c5 };

		void __construct( ::tink::http::OutgoingRequestHeader header,::Dynamic body);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.OutgoingRequest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.OutgoingRequest"); }
		static ::hx::ObjectPtr< OutgoingRequest_obj > __new( ::tink::http::OutgoingRequestHeader header,::Dynamic body);
		static ::hx::ObjectPtr< OutgoingRequest_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::http::OutgoingRequestHeader header,::Dynamic body);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutgoingRequest_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutgoingRequest",23,1c,f4,79); }

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_OutgoingRequest */ 
