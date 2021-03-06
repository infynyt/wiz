#ifndef INCLUDED_tink_http_HeaderField
#define INCLUDED_tink_http_HeaderField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_80f54cb31df217e8_249_new)
HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,http,HeaderField)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES HeaderField_obj : public  ::tink::core::NamedWith_obj
{
	public:
		typedef  ::tink::core::NamedWith_obj super;
		typedef HeaderField_obj OBJ_;
		HeaderField_obj();

	public:
		enum { _hx_ClassId = 0x67181553 };

		void __construct(::String name,::String value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.HeaderField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.HeaderField"); }

		inline static ::hx::ObjectPtr< HeaderField_obj > __new(::String name,::String value) {
			::hx::ObjectPtr< HeaderField_obj > __this = new HeaderField_obj();
			__this->__construct(name,value);
			return __this;
		}

		inline static ::hx::ObjectPtr< HeaderField_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String value) {
			HeaderField_obj *__this = (HeaderField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HeaderField_obj), true, "tink.http.HeaderField"));
			*(void **)__this = HeaderField_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_80f54cb31df217e8_249_new)
HXDLIN( 249)		__this->super::__construct(name,value);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HeaderField_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HeaderField",cd,d3,84,f1); }

		static  ::tink::http::HeaderField ofString(::String s);
		static ::Dynamic ofString_dyn();

		static  ::tink::http::HeaderField setCookie(::String key,::String value, ::Dynamic options);
		static ::Dynamic setCookie_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_HeaderField */ 
