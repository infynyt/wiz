#ifndef INCLUDED_tink_core__Promise_Next_Impl_
#define INCLUDED_tink_core__Promise_Next_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Promise,Next_Impl_)

namespace tink{
namespace core{
namespace _Promise{


class HXCPP_CLASS_ATTRIBUTES Next_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Next_Impl__obj OBJ_;
		Next_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3ff35280 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Promise.Next_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Promise.Next_Impl_"); }

		inline static ::hx::ObjectPtr< Next_Impl__obj > __new() {
			::hx::ObjectPtr< Next_Impl__obj > __this = new Next_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Next_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Next_Impl__obj *__this = (Next_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Next_Impl__obj), false, "tink.core._Promise.Next_Impl_"));
			*(void **)__this = Next_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Next_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Next_Impl_",f3,7d,d7,c3); }

		static  ::Dynamic ofSafe( ::Dynamic f);
		static ::Dynamic ofSafe_dyn();

		static  ::Dynamic ofSync( ::Dynamic f);
		static ::Dynamic ofSync_dyn();

		static  ::Dynamic ofSafeSync( ::Dynamic f);
		static ::Dynamic ofSafeSync_dyn();

		static  ::Dynamic _chain( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _chain_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Promise

#endif /* INCLUDED_tink_core__Promise_Next_Impl_ */ 
