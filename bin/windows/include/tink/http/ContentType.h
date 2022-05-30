#ifndef INCLUDED_tink_http_ContentType
#define INCLUDED_tink_http_ContentType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(tink,http,ContentType)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES ContentType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ContentType_obj OBJ_;
		ContentType_obj();

	public:
		enum { _hx_ClassId = 0x67f0ac31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.ContentType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.ContentType"); }
		static ::hx::ObjectPtr< ContentType_obj > __new();
		static ::hx::ObjectPtr< ContentType_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ContentType_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ContentType",73,d4,ad,0e); }

		static  ::tink::http::ContentType ofString(::String s);
		static ::Dynamic ofString_dyn();

		::String get_fullType();
		::Dynamic get_fullType_dyn();

		::String type;
		::String subtype;
		 ::haxe::ds::StringMap extensions;
		::String raw;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ContentType */ 
