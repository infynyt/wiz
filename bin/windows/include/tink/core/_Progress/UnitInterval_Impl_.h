#ifndef INCLUDED_tink_core__Progress_UnitInterval_Impl_
#define INCLUDED_tink_core__Progress_UnitInterval_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Progress,UnitInterval_Impl_)

namespace tink{
namespace core{
namespace _Progress{


class HXCPP_CLASS_ATTRIBUTES UnitInterval_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UnitInterval_Impl__obj OBJ_;
		UnitInterval_Impl__obj();

	public:
		enum { _hx_ClassId = 0x15e48a64 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Progress.UnitInterval_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Progress.UnitInterval_Impl_"); }

		inline static ::hx::ObjectPtr< UnitInterval_Impl__obj > __new() {
			::hx::ObjectPtr< UnitInterval_Impl__obj > __this = new UnitInterval_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< UnitInterval_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			UnitInterval_Impl__obj *__this = (UnitInterval_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UnitInterval_Impl__obj), false, "tink.core._Progress.UnitInterval_Impl_"));
			*(void **)__this = UnitInterval_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UnitInterval_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UnitInterval_Impl_",69,d9,7c,13); }

		static ::String toPercentageString(Float this1,int dp);
		static ::Dynamic toPercentageString_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Progress

#endif /* INCLUDED_tink_core__Progress_UnitInterval_Impl_ */ 
