#ifndef INCLUDED_tink__Url_Url_Impl_
#define INCLUDED_tink__Url_Url_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,_Url,Url_Impl_)

namespace tink{
namespace _Url{


class HXCPP_CLASS_ATTRIBUTES Url_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Url_Impl__obj OBJ_;
		Url_Impl__obj();

	public:
		enum { _hx_ClassId = 0x142a69a5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink._Url.Url_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink._Url.Url_Impl_"); }

		inline static ::hx::ObjectPtr< Url_Impl__obj > __new() {
			::hx::ObjectPtr< Url_Impl__obj > __this = new Url_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Url_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Url_Impl__obj *__this = (Url_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Url_Impl__obj), false, "tink._Url.Url_Impl_"));
			*(void **)__this = Url_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Url_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Url_Impl_",2f,05,36,5a); }

		static void __boot();
		static int SCHEME;
		static int PAYLOAD;
		static int AUTH;
		static int HOSTNAMES;
		static int PATH;
		static int QUERY;
		static int HASH;
		static ::String get_host( ::Dynamic this1);
		static ::Dynamic get_host_dyn();

		static ::Array< ::String > get_hosts( ::Dynamic this1);
		static ::Dynamic get_hosts_dyn();

		static ::String get_pathWithQuery( ::Dynamic this1);
		static ::Dynamic get_pathWithQuery_dyn();

		static  ::Dynamic _new( ::Dynamic parts);
		static ::Dynamic _new_dyn();

		static  ::Dynamic resolve( ::Dynamic this1, ::Dynamic that);
		static ::Dynamic resolve_dyn();

		static void makePayload( ::Dynamic parts);
		static ::Dynamic makePayload_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

		static  ::Dynamic fromString(::String s);
		static ::Dynamic fromString_dyn();

		static void noop(::String _);
		static ::Dynamic noop_dyn();

		static  ::Dynamic parse(::String s, ::Dynamic onError);
		static ::Dynamic parse_dyn();

		static  ::Dynamic make( ::Dynamic parts);
		static ::Dynamic make_dyn();

};

} // end namespace tink
} // end namespace _Url

#endif /* INCLUDED_tink__Url_Url_Impl_ */ 
