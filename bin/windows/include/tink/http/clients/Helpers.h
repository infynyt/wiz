#ifndef INCLUDED_tink_http_clients_Helpers
#define INCLUDED_tink_http_clients_Helpers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,http,clients,Helpers)

namespace tink{
namespace http{
namespace clients{


class HXCPP_CLASS_ATTRIBUTES Helpers_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Helpers_obj OBJ_;
		Helpers_obj();

	public:
		enum { _hx_ClassId = 0x1dfdf71f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http.clients.Helpers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http.clients.Helpers"); }

		inline static ::hx::ObjectPtr< Helpers_obj > __new() {
			::hx::ObjectPtr< Helpers_obj > __this = new Helpers_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Helpers_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Helpers_obj *__this = (Helpers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Helpers_obj), false, "tink.http.clients.Helpers"));
			*(void **)__this = Helpers_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Helpers_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Helpers",25,6b,b0,8d); }

		static  ::haxe::ds::Option checkScheme(::String s);
		static ::Dynamic checkScheme_dyn();

		static  ::tink::core::TypedError missingSchemeError();
		static ::Dynamic missingSchemeError_dyn();

		static  ::tink::core::TypedError invalidSchemeError(::String v);
		static ::Dynamic invalidSchemeError_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace clients

#endif /* INCLUDED_tink_http_clients_Helpers */ 
