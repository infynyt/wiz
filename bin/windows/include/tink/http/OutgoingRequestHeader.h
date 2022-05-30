#ifndef INCLUDED_tink_http_OutgoingRequestHeader
#define INCLUDED_tink_http_OutgoingRequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,OutgoingRequestHeader)
HX_DECLARE_CLASS2(tink,http,RequestHeader)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES OutgoingRequestHeader_obj : public  ::tink::http::RequestHeader_obj
{
	public:
		typedef  ::tink::http::RequestHeader_obj super;
		typedef OutgoingRequestHeader_obj OBJ_;
		OutgoingRequestHeader_obj();

	public:
		enum { _hx_ClassId = 0x17e6c132 };

		void __construct(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.OutgoingRequestHeader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.OutgoingRequestHeader"); }
		static ::hx::ObjectPtr< OutgoingRequestHeader_obj > __new(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		static ::hx::ObjectPtr< OutgoingRequestHeader_obj > __alloc(::hx::Ctx *_hx_ctx,::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutgoingRequestHeader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutgoingRequestHeader",10,d6,f4,a2); }

		static  ::haxe::ds::Option extractAuth( ::Dynamic url);
		static ::Dynamic extractAuth_dyn();

		 ::tink::http::Header concat(::Array< ::Dynamic> fields);

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_OutgoingRequestHeader */ 
