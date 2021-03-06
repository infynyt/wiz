#ifndef INCLUDED_tink_http_RequestHeader
#define INCLUDED_tink_http_RequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,RequestHeader)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES RequestHeader_obj : public  ::tink::http::Header_obj
{
	public:
		typedef  ::tink::http::Header_obj super;
		typedef RequestHeader_obj OBJ_;
		RequestHeader_obj();

	public:
		enum { _hx_ClassId = 0x72a5c122 };

		void __construct(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.RequestHeader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.RequestHeader"); }
		static ::hx::ObjectPtr< RequestHeader_obj > __new(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		static ::hx::ObjectPtr< RequestHeader_obj > __alloc(::hx::Ctx *_hx_ctx,::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RequestHeader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RequestHeader",1c,92,9a,00); }

		::String method;
		 ::Dynamic url;
		::String protocol;
		virtual  ::tink::http::Header concat(::Array< ::Dynamic> fields);

		virtual ::String toString();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_RequestHeader */ 
