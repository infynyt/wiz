#ifndef INCLUDED_tink_http_IncomingRequestHeader
#define INCLUDED_tink_http_IncomingRequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,IncomingRequestHeader)
HX_DECLARE_CLASS2(tink,http,RequestHeader)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES IncomingRequestHeader_obj : public  ::tink::http::RequestHeader_obj
{
	public:
		typedef  ::tink::http::RequestHeader_obj super;
		typedef IncomingRequestHeader_obj OBJ_;
		IncomingRequestHeader_obj();

	public:
		enum { _hx_ClassId = 0x1c840e5c };

		void __construct(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.IncomingRequestHeader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.IncomingRequestHeader"); }
		static ::hx::ObjectPtr< IncomingRequestHeader_obj > __new(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		static ::hx::ObjectPtr< IncomingRequestHeader_obj > __alloc(::hx::Ctx *_hx_ctx,::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IncomingRequestHeader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IncomingRequestHeader",56,69,89,e3); }

		static ::Dynamic parser();
		static ::Dynamic parser_dyn();

		 ::haxe::ds::StringMap cookies;
		 ::haxe::ds::StringMap getCookies();
		::Dynamic getCookies_dyn();

		 ::tink::http::Header concat(::Array< ::Dynamic> fields);

		 ::Dynamic cookieNames();
		::Dynamic cookieNames_dyn();

		::String getCookie(::String name);
		::Dynamic getCookie_dyn();

		 ::tink::core::Outcome getAuth();
		::Dynamic getAuth_dyn();

		 ::tink::core::Outcome getAuthWith( ::Dynamic parser);
		::Dynamic getAuthWith_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_IncomingRequestHeader */ 
