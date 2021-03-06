#ifndef INCLUDED_tink_http_Header
#define INCLUDED_tink_http_Header

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,iterators,ArrayIterator)
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,http,Header)
HX_DECLARE_CLASS2(tink,http,HeaderField)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES Header_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Header_obj OBJ_;
		Header_obj();

	public:
		enum { _hx_ClassId = 0x4094a9e7 };

		void __construct(::Array< ::Dynamic> fields);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.Header")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.Header"); }
		static ::hx::ObjectPtr< Header_obj > __new(::Array< ::Dynamic> fields);
		static ::hx::ObjectPtr< Header_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> fields);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Header_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Header",ad,7d,94,31); }

		::Array< ::Dynamic> fields;
		::Array< ::String > get(::String name);
		::Dynamic get_dyn();

		 ::tink::core::Outcome byName(::String name);
		::Dynamic byName_dyn();

		 ::tink::core::Outcome contentType();
		::Dynamic contentType_dyn();

		 ::haxe::iterators::ArrayIterator iterator();
		::Dynamic iterator_dyn();

		virtual  ::tink::http::Header concat(::Array< ::Dynamic> fields);
		::Dynamic concat_dyn();

		 ::tink::core::Outcome getContentLength();
		::Dynamic getContentLength_dyn();

		 ::tink::core::Outcome accepts(::String type);
		::Dynamic accepts_dyn();

		::String get_LINEBREAK();
		::Dynamic get_LINEBREAK_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::String headerNotFound(::String name);
		::Dynamic headerNotFound_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_Header */ 
