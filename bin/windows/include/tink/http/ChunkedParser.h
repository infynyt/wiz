#ifndef INCLUDED_tink_http_ChunkedParser
#define INCLUDED_tink_http_ChunkedParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,http,ChunkedParser)
HX_DECLARE_CLASS2(tink,io,ParseStep)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES ChunkedParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChunkedParser_obj OBJ_;
		ChunkedParser_obj();

	public:
		enum { _hx_ClassId = 0x0b2474f1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http.ChunkedParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http.ChunkedParser"); }
		static ::hx::ObjectPtr< ChunkedParser_obj > __new();
		static ::hx::ObjectPtr< ChunkedParser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChunkedParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ChunkedParser",eb,45,19,99); }

		static void __boot();
		static ::Array< int > LINEBREAK;
		int chunkSize;
		void reset();
		::Dynamic reset_dyn();

		 ::tink::io::ParseStep progress( ::tink::chunk::ChunkCursor cursor);
		::Dynamic progress_dyn();

		 ::tink::core::Outcome eof( ::tink::chunk::ChunkCursor rest);
		::Dynamic eof_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ChunkedParser */ 
