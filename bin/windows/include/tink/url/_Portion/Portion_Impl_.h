#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#define INCLUDED_tink_url__Portion_Portion_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,url,_Portion,Portion_Impl_)

namespace tink{
namespace url{
namespace _Portion{


class HXCPP_CLASS_ATTRIBUTES Portion_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Portion_Impl__obj OBJ_;
		Portion_Impl__obj();

	public:
		enum { _hx_ClassId = 0x38058d4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._Portion.Portion_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._Portion.Portion_Impl_"); }

		inline static ::hx::ObjectPtr< Portion_Impl__obj > __new() {
			::hx::ObjectPtr< Portion_Impl__obj > __this = new Portion_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Portion_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Portion_Impl__obj *__this = (Portion_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Portion_Impl__obj), false, "tink.url._Portion.Portion_Impl_"));
			*(void **)__this = Portion_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Portion_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Portion_Impl_",a7,a4,97,4f); }

		static ::String get_raw(::String this1);
		static ::Dynamic get_raw_dyn();

		static bool isValid(::String this1);
		static ::Dynamic isValid_dyn();

		static ::String _new(::String v);
		static ::Dynamic _new_dyn();

		static ::String stringly(::String this1);
		static ::Dynamic stringly_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

		static ::String ofString(::String s);
		static ::Dynamic ofString_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _Portion

#endif /* INCLUDED_tink_url__Portion_Portion_Impl_ */ 
