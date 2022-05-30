#ifndef INCLUDED_tink_http__Response_ResponseHeader_Impl_
#define INCLUDED_tink_http__Response_ResponseHeader_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,ResponseHeaderBase)
HX_DECLARE_CLASS3(tink,http,_Response,ResponseHeader_Impl_)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace http{
namespace _Response{


class HXCPP_CLASS_ATTRIBUTES ResponseHeader_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ResponseHeader_Impl__obj OBJ_;
		ResponseHeader_Impl__obj();

	public:
		enum { _hx_ClassId = 0x10706f74 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Response.ResponseHeader_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Response.ResponseHeader_Impl_"); }

		inline static ::hx::ObjectPtr< ResponseHeader_Impl__obj > __new() {
			::hx::ObjectPtr< ResponseHeader_Impl__obj > __this = new ResponseHeader_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ResponseHeader_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ResponseHeader_Impl__obj *__this = (ResponseHeader_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResponseHeader_Impl__obj), false, "tink.http._Response.ResponseHeader_Impl_"));
			*(void **)__this = ResponseHeader_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ResponseHeader_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ResponseHeader_Impl_",2e,12,df,ac); }

		static  ::tink::http::ResponseHeaderBase _new(int statusCode,::String reason,::Array< ::Dynamic> fields,::String protocol);
		static ::Dynamic _new_dyn();

		static  ::tink::http::ResponseHeaderBase fromStatusCode(int code);
		static ::Dynamic fromStatusCode_dyn();

		static  ::tink::http::ResponseHeaderBase fromHeaderFields(::Array< ::Dynamic> fields);
		static ::Dynamic fromHeaderFields_dyn();

		static ::Dynamic parser();
		static ::Dynamic parser_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Response

#endif /* INCLUDED_tink_http__Response_ResponseHeader_Impl_ */ 
