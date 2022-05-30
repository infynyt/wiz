#ifndef INCLUDED_tink__Url_SingleHostUrl_Impl_
#define INCLUDED_tink__Url_SingleHostUrl_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,_Url,SingleHostUrl_Impl_)

namespace tink{
namespace _Url{


class HXCPP_CLASS_ATTRIBUTES SingleHostUrl_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SingleHostUrl_Impl__obj OBJ_;
		SingleHostUrl_Impl__obj();

	public:
		enum { _hx_ClassId = 0x19c781d9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink._Url.SingleHostUrl_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink._Url.SingleHostUrl_Impl_"); }

		inline static ::hx::ObjectPtr< SingleHostUrl_Impl__obj > __new() {
			::hx::ObjectPtr< SingleHostUrl_Impl__obj > __this = new SingleHostUrl_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SingleHostUrl_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			SingleHostUrl_Impl__obj *__this = (SingleHostUrl_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SingleHostUrl_Impl__obj), false, "tink._Url.SingleHostUrl_Impl_"));
			*(void **)__this = SingleHostUrl_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SingleHostUrl_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SingleHostUrl_Impl_",ff,f4,ea,bf); }

		static  ::Dynamic _new( ::Dynamic v);
		static ::Dynamic _new_dyn();

		static  ::Dynamic ofUrl( ::Dynamic u);
		static ::Dynamic ofUrl_dyn();

		static  ::Dynamic ofString(::String s);
		static ::Dynamic ofString_dyn();

};

} // end namespace tink
} // end namespace _Url

#endif /* INCLUDED_tink__Url_SingleHostUrl_Impl_ */ 
