#ifndef INCLUDED_tink_core__Progress_ProgressValue_Impl_
#define INCLUDED_tink_core__Progress_ProgressValue_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,MPair)
HX_DECLARE_CLASS3(tink,core,_Progress,ProgressValue_Impl_)

namespace tink{
namespace core{
namespace _Progress{


class HXCPP_CLASS_ATTRIBUTES ProgressValue_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProgressValue_Impl__obj OBJ_;
		ProgressValue_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3d54350d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Progress.ProgressValue_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Progress.ProgressValue_Impl_"); }

		inline static ::hx::ObjectPtr< ProgressValue_Impl__obj > __new() {
			::hx::ObjectPtr< ProgressValue_Impl__obj > __this = new ProgressValue_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ProgressValue_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ProgressValue_Impl__obj *__this = (ProgressValue_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressValue_Impl__obj), false, "tink.core._Progress.ProgressValue_Impl_"));
			*(void **)__this = ProgressValue_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgressValue_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProgressValue_Impl_",04,f4,eb,b2); }

		static void __boot();
		static  ::tink::core::MPair ZERO;
		static  ::tink::core::MPair _new(Float value, ::haxe::ds::Option total);
		static ::Dynamic _new_dyn();

		static  ::haxe::ds::Option normalize( ::tink::core::MPair this1);
		static ::Dynamic normalize_dyn();

		static Float get_value( ::tink::core::MPair this1);
		static ::Dynamic get_value_dyn();

		static  ::haxe::ds::Option get_total( ::tink::core::MPair this1);
		static ::Dynamic get_total_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Progress

#endif /* INCLUDED_tink_core__Progress_ProgressValue_Impl_ */ 
