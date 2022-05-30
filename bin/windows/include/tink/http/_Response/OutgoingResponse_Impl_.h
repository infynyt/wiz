#ifndef INCLUDED_tink_http__Response_OutgoingResponse_Impl_
#define INCLUDED_tink_http__Response_OutgoingResponse_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,ResponseHeaderBase)
HX_DECLARE_CLASS3(tink,http,_Response,OutgoingResponseData)
HX_DECLARE_CLASS3(tink,http,_Response,OutgoingResponse_Impl_)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{
namespace _Response{


class HXCPP_CLASS_ATTRIBUTES OutgoingResponse_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OutgoingResponse_Impl__obj OBJ_;
		OutgoingResponse_Impl__obj();

	public:
		enum { _hx_ClassId = 0x122bc253 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Response.OutgoingResponse_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Response.OutgoingResponse_Impl_"); }

		inline static ::hx::ObjectPtr< OutgoingResponse_Impl__obj > __new() {
			::hx::ObjectPtr< OutgoingResponse_Impl__obj > __this = new OutgoingResponse_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OutgoingResponse_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			OutgoingResponse_Impl__obj *__this = (OutgoingResponse_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutgoingResponse_Impl__obj), false, "tink.http._Response.OutgoingResponse_Impl_"));
			*(void **)__this = OutgoingResponse_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutgoingResponse_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutgoingResponse_Impl_",8d,07,94,a1); }

		static  ::tink::http::_Response::OutgoingResponseData _new( ::tink::http::ResponseHeaderBase header,::Dynamic body);
		static ::Dynamic _new_dyn();

		static  ::tink::http::_Response::OutgoingResponseData blob( ::Dynamic code,::Dynamic chunk,::String contentType,::Array< ::Dynamic> headers);
		static ::Dynamic blob_dyn();

		static void chunked(::String contentType, ::Dynamic headers,::Dynamic source);
		static ::Dynamic chunked_dyn();

		static  ::tink::http::_Response::OutgoingResponseData ofString(::String s);
		static ::Dynamic ofString_dyn();

		static  ::tink::http::_Response::OutgoingResponseData ofChunk(::Dynamic c);
		static ::Dynamic ofChunk_dyn();

		static  ::tink::http::_Response::OutgoingResponseData reportError( ::tink::core::TypedError e);
		static ::Dynamic reportError_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Response

#endif /* INCLUDED_tink_http__Response_OutgoingResponse_Impl_ */ 
