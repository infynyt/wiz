#ifndef INCLUDED_tink_io_SimpleBytewiseParser
#define INCLUDED_tink_io_SimpleBytewiseParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
HX_DECLARE_CLASS2(tink,io,BytewiseParser)
HX_DECLARE_CLASS2(tink,io,ParseStep)
HX_DECLARE_CLASS2(tink,io,SimpleBytewiseParser)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES SimpleBytewiseParser_obj : public  ::tink::io::BytewiseParser_obj
{
	public:
		typedef  ::tink::io::BytewiseParser_obj super;
		typedef SimpleBytewiseParser_obj OBJ_;
		SimpleBytewiseParser_obj();

	public:
		enum { _hx_ClassId = 0x741c9e35 };

		void __construct( ::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.io.SimpleBytewiseParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.io.SimpleBytewiseParser"); }
		static ::hx::ObjectPtr< SimpleBytewiseParser_obj > __new( ::Dynamic f);
		static ::hx::ObjectPtr< SimpleBytewiseParser_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleBytewiseParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SimpleBytewiseParser",1d,6a,57,22); }

		 ::Dynamic _read;
		Dynamic _read_dyn() { return _read;}
		 ::tink::io::ParseStep read(int _hx_char);

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_SimpleBytewiseParser */ 
