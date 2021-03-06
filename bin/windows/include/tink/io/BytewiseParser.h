#ifndef INCLUDED_tink_io_BytewiseParser
#define INCLUDED_tink_io_BytewiseParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,io,BytewiseParser)
HX_DECLARE_CLASS2(tink,io,ParseStep)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES BytewiseParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BytewiseParser_obj OBJ_;
		BytewiseParser_obj();

	public:
		enum { _hx_ClassId = 0x66915863 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io.BytewiseParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io.BytewiseParser"); }

		inline static ::hx::ObjectPtr< BytewiseParser_obj > __new() {
			::hx::ObjectPtr< BytewiseParser_obj > __this = new BytewiseParser_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BytewiseParser_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BytewiseParser_obj *__this = (BytewiseParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BytewiseParser_obj), false, "tink.io.BytewiseParser"));
			*(void **)__this = BytewiseParser_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BytewiseParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BytewiseParser",4b,c6,88,ee); }

		virtual  ::tink::io::ParseStep read(int _hx_char);
		::Dynamic read_dyn();

		 ::tink::io::ParseStep progress( ::tink::chunk::ChunkCursor cursor);
		::Dynamic progress_dyn();

		 ::tink::core::Outcome eof( ::tink::chunk::ChunkCursor rest);
		::Dynamic eof_dyn();

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_BytewiseParser */ 
