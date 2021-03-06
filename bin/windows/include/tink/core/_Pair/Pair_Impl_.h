#ifndef INCLUDED_tink_core__Pair_Pair_Impl_
#define INCLUDED_tink_core__Pair_Pair_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,MPair)
HX_DECLARE_CLASS3(tink,core,_Pair,Pair_Impl_)

namespace tink{
namespace core{
namespace _Pair{


class HXCPP_CLASS_ATTRIBUTES Pair_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pair_Impl__obj OBJ_;
		Pair_Impl__obj();

	public:
		enum { _hx_ClassId = 0x13ff9f42 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Pair.Pair_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Pair.Pair_Impl_"); }

		inline static ::hx::ObjectPtr< Pair_Impl__obj > __new() {
			::hx::ObjectPtr< Pair_Impl__obj > __this = new Pair_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Pair_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Pair_Impl__obj *__this = (Pair_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pair_Impl__obj), false, "tink.core._Pair.Pair_Impl_"));
			*(void **)__this = Pair_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pair_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pair_Impl_",5a,2c,87,4b); }

		static  ::tink::core::MPair _new( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _new_dyn();

		static  ::Dynamic get_a( ::tink::core::MPair this1);
		static ::Dynamic get_a_dyn();

		static  ::Dynamic get_b( ::tink::core::MPair this1);
		static ::Dynamic get_b_dyn();

		static bool toBool( ::tink::core::MPair this1);
		static ::Dynamic toBool_dyn();

		static bool isNil( ::tink::core::MPair this1);
		static ::Dynamic isNil_dyn();

		static  ::tink::core::MPair nil();
		static ::Dynamic nil_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Pair

#endif /* INCLUDED_tink_core__Pair_Pair_Impl_ */ 
