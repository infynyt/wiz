#ifndef INCLUDED_tink_io_Splitter
#define INCLUDED_tink_io_Splitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS2(tink,io,BytewiseParser)
HX_DECLARE_CLASS2(tink,io,ParseStep)
HX_DECLARE_CLASS2(tink,io,Splitter)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Splitter_obj : public  ::tink::io::BytewiseParser_obj
{
	public:
		typedef  ::tink::io::BytewiseParser_obj super;
		typedef Splitter_obj OBJ_;
		Splitter_obj();

	public:
		enum { _hx_ClassId = 0x08b3637f };

		void __construct(::Dynamic delim);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.io.Splitter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.io.Splitter"); }
		static ::hx::ObjectPtr< Splitter_obj > __new(::Dynamic delim);
		static ::hx::ObjectPtr< Splitter_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic delim);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Splitter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Splitter",67,f3,61,ad); }

		::Dynamic delim;
		::Dynamic buf;
		 ::tink::io::ParseStep read(int _hx_char);

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_Splitter */ 
