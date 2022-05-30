#ifndef INCLUDED_tink_http_ChunkedDecoder
#define INCLUDED_tink_http_ChunkedDecoder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
HX_DECLARE_CLASS2(tink,http,ChunkedDecoder)
HX_DECLARE_CLASS2(tink,io,Transformer)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES ChunkedDecoder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChunkedDecoder_obj OBJ_;
		ChunkedDecoder_obj();

	public:
		enum { _hx_ClassId = 0x04e07196 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http.ChunkedDecoder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http.ChunkedDecoder"); }
		static ::hx::ObjectPtr< ChunkedDecoder_obj > __new();
		static ::hx::ObjectPtr< ChunkedDecoder_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChunkedDecoder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ChunkedDecoder",f8,6c,c7,5d); }

		::Dynamic transform(::Dynamic source);
		::Dynamic transform_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ChunkedDecoder */ 
