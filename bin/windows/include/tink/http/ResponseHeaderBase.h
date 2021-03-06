#ifndef INCLUDED_tink_http_ResponseHeaderBase
#define INCLUDED_tink_http_ResponseHeaderBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,ResponseHeaderBase)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES ResponseHeaderBase_obj : public  ::tink::http::Header_obj
{
	public:
		typedef  ::tink::http::Header_obj super;
		typedef ResponseHeaderBase_obj OBJ_;
		ResponseHeaderBase_obj();

	public:
		enum { _hx_ClassId = 0x68228641 };

		void __construct(int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.ResponseHeaderBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.ResponseHeaderBase"); }
		static ::hx::ObjectPtr< ResponseHeaderBase_obj > __new(int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol);
		static ::hx::ObjectPtr< ResponseHeaderBase_obj > __alloc(::hx::Ctx *_hx_ctx,int statusCode,::String reason,::Array< ::Dynamic> fields,::String __o_protocol);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ResponseHeaderBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ResponseHeaderBase",3f,ca,db,63); }

		static ::Dynamic parser();
		static ::Dynamic parser_dyn();

		int statusCode;
		::String reason;
		::String protocol;
		 ::tink::http::Header concat(::Array< ::Dynamic> fields);

		virtual ::String toString();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ResponseHeaderBase */ 
