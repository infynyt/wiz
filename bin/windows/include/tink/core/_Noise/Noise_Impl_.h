#ifndef INCLUDED_tink_core__Noise_Noise_Impl_
#define INCLUDED_tink_core__Noise_Noise_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Noise,Noise_Impl_)

namespace tink{
namespace core{
namespace _Noise{


class HXCPP_CLASS_ATTRIBUTES Noise_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Noise_Impl__obj OBJ_;
		Noise_Impl__obj();

	public:
		enum { _hx_ClassId = 0x106d6caa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Noise.Noise_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Noise.Noise_Impl_"); }

		inline static ::hx::ObjectPtr< Noise_Impl__obj > __new() {
			::hx::ObjectPtr< Noise_Impl__obj > __this = new Noise_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Noise_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Noise_Impl__obj *__this = (Noise_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Noise_Impl__obj), false, "tink.core._Noise.Noise_Impl_"));
			*(void **)__this = Noise_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Noise_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Noise_Impl_",9a,13,3d,8f); }

		static void __boot();
		static  ::Dynamic Noise;
		static  ::Dynamic ofAny( ::Dynamic t);
		static ::Dynamic ofAny_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Noise

#endif /* INCLUDED_tink_core__Noise_Noise_Impl_ */ 
