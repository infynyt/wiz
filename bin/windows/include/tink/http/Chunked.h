#ifndef INCLUDED_tink_http_Chunked
#define INCLUDED_tink_http_Chunked

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,http,Chunked)
HX_DECLARE_CLASS2(tink,http,ChunkedDecoder)
HX_DECLARE_CLASS2(tink,http,ChunkedEncoder)
HX_DECLARE_CLASS2(tink,io,Transformer)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES Chunked_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Chunked_obj OBJ_;
		Chunked_obj();

	public:
		enum { _hx_ClassId = 0x2f4b0272 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http.Chunked")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http.Chunked"); }

		inline static ::hx::ObjectPtr< Chunked_obj > __new() {
			::hx::ObjectPtr< Chunked_obj > __this = new Chunked_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Chunked_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Chunked_obj *__this = (Chunked_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Chunked_obj), false, "tink.http.Chunked"));
			*(void **)__this = Chunked_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Chunked_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Chunked",ec,7b,24,1e); }

		static  ::tink::http::ChunkedEncoder _encoder;
		static  ::tink::http::ChunkedDecoder _decoder;
		static  ::tink::http::ChunkedEncoder encoder();
		static ::Dynamic encoder_dyn();

		static  ::tink::http::ChunkedDecoder decoder();
		static ::Dynamic decoder_dyn();

		static ::Dynamic encode(::Dynamic source);
		static ::Dynamic encode_dyn();

		static ::Dynamic decode(::Dynamic source);
		static ::Dynamic decode_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_Chunked */ 
