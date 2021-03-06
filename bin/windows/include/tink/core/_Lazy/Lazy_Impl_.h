#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#define INCLUDED_tink_core__Lazy_Lazy_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Lazy_Impl_)

namespace tink{
namespace core{
namespace _Lazy{


class HXCPP_CLASS_ATTRIBUTES Lazy_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Lazy_Impl__obj OBJ_;
		Lazy_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7f55432a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Lazy.Lazy_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Lazy.Lazy_Impl_"); }

		inline static ::hx::ObjectPtr< Lazy_Impl__obj > __new() {
			::hx::ObjectPtr< Lazy_Impl__obj > __this = new Lazy_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Lazy_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Lazy_Impl__obj *__this = (Lazy_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Lazy_Impl__obj), false, "tink.core._Lazy.Lazy_Impl_"));
			*(void **)__this = Lazy_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Lazy_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Lazy_Impl_",34,20,cd,39); }

		static void __boot();
		static ::Dynamic NOISE;
		static ::Dynamic _hx_NULL;
		static bool get_computed(::Dynamic this1);
		static ::Dynamic get_computed_dyn();

		static  ::Dynamic get(::Dynamic this1);
		static ::Dynamic get_dyn();

		static ::Dynamic fromNoise(::Dynamic l);
		static ::Dynamic fromNoise_dyn();

		static ::Dynamic ofFunc( ::Dynamic f);
		static ::Dynamic ofFunc_dyn();

		static ::Dynamic map(::Dynamic this1, ::Dynamic f);
		static ::Dynamic map_dyn();

		static ::Dynamic flatMap(::Dynamic this1, ::Dynamic f);
		static ::Dynamic flatMap_dyn();

		static ::Dynamic ofConst( ::Dynamic c);
		static ::Dynamic ofConst_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Lazy

#endif /* INCLUDED_tink_core__Lazy_Lazy_Impl_ */ 
