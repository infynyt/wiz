#ifndef INCLUDED_tink_http_HeaderParser
#define INCLUDED_tink_http_HeaderParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,http,HeaderField)
HX_DECLARE_CLASS2(tink,http,HeaderParser)
HX_DECLARE_CLASS2(tink,io,BytewiseParser)
HX_DECLARE_CLASS2(tink,io,ParseStep)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES HeaderParser_obj : public  ::tink::io::BytewiseParser_obj
{
	public:
		typedef  ::tink::io::BytewiseParser_obj super;
		typedef HeaderParser_obj OBJ_;
		HeaderParser_obj();

	public:
		enum { _hx_ClassId = 0x3af4a226 };

		void __construct( ::Dynamic makeHeader);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.HeaderParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.HeaderParser"); }
		static ::hx::ObjectPtr< HeaderParser_obj > __new( ::Dynamic makeHeader);
		static ::hx::ObjectPtr< HeaderParser_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic makeHeader);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HeaderParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HeaderParser",6c,8e,ae,cf); }

		static void __boot();
		static  ::tink::io::ParseStep INVALID;
		 ::Dynamic header;
		::Array< ::Dynamic> fields;
		 ::StringBuf buf;
		int last;
		 ::Dynamic makeHeader;
		Dynamic makeHeader_dyn() { return makeHeader;}
		 ::tink::io::ParseStep read(int c);

		 ::tink::io::ParseStep nextLine();
		::Dynamic nextLine_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_HeaderParser */ 
