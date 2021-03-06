#ifndef INCLUDED_tink_http_Fetch
#define INCLUDED_tink_http_Fetch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS2(tink,http,ClientType)
HX_DECLARE_CLASS2(tink,http,Fetch)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES Fetch_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Fetch_obj OBJ_;
		Fetch_obj();

	public:
		enum { _hx_ClassId = 0x7f806d70 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http.Fetch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http.Fetch"); }

		inline static ::hx::ObjectPtr< Fetch_obj > __new() {
			::hx::ObjectPtr< Fetch_obj > __this = new Fetch_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Fetch_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Fetch_obj *__this = (Fetch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Fetch_obj), false, "tink.http.Fetch"));
			*(void **)__this = Fetch_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Fetch_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Fetch",1a,84,27,91); }

		static void __boot();
		static  ::haxe::ds::EnumValueMap cache;
		static ::Dynamic fetch( ::Dynamic url, ::Dynamic options);
		static ::Dynamic fetch_dyn();

		static ::Dynamic getClient( ::tink::http::ClientType type);
		static ::Dynamic getClient_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_Fetch */ 
