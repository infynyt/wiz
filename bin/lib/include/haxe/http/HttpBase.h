#ifndef INCLUDED_haxe_http_HttpBase
#define INCLUDED_haxe_http_HttpBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1732ad8959875cda_71_new)
HX_DECLARE_CLASS2(haxe,http,HttpBase)

namespace haxe{
namespace http{


class HXCPP_CLASS_ATTRIBUTES HttpBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HttpBase_obj OBJ_;
		HttpBase_obj();

	public:
		enum { _hx_ClassId = 0x10c0921f };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.http.HttpBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.http.HttpBase"); }

		inline static ::hx::ObjectPtr< HttpBase_obj > __new(::String url) {
			::hx::ObjectPtr< HttpBase_obj > __this = new HttpBase_obj();
			__this->__construct(url);
			return __this;
		}

		inline static ::hx::ObjectPtr< HttpBase_obj > __alloc(::hx::Ctx *_hx_ctx,::String url) {
			HttpBase_obj *__this = (HttpBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HttpBase_obj), true, "haxe.http.HttpBase"));
			*(void **)__this = HttpBase_obj::_hx_vtable;
			haxe::http::HttpBase_obj::__alloc_dynamic_functions(_hx_ctx,__this);
{
            	HX_STACKFRAME(&_hx_pos_1732ad8959875cda_71_new)
HXLINE(  72)		( ( ::haxe::http::HttpBase)(__this) )->url = url;
HXLINE(  73)		( ( ::haxe::http::HttpBase)(__this) )->headers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  74)		( ( ::haxe::http::HttpBase)(__this) )->params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  75)		( ( ::haxe::http::HttpBase)(__this) )->emptyOnData = ( ( ::haxe::http::HttpBase)(__this) )->onData;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,HttpBase_obj *_hx_obj);
		//~HttpBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HttpBase",d9,cf,1a,f8); }

		::String url;
		::Array< ::Dynamic> headers;
		::Array< ::Dynamic> params;
		 ::Dynamic emptyOnData;
		Dynamic emptyOnData_dyn() { return emptyOnData;}
		::Dynamic onData;
		inline ::Dynamic &onData_dyn() {return onData; }

		::Dynamic onError;
		inline ::Dynamic &onError_dyn() {return onError; }

};

} // end namespace haxe
} // end namespace http

#endif /* INCLUDED_haxe_http_HttpBase */ 
