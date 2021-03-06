#ifndef INCLUDED_tink_core__Promise_PromiseTrigger_Impl_
#define INCLUDED_tink_core__Promise_PromiseTrigger_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,FutureTrigger)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Promise,PromiseTrigger_Impl_)

namespace tink{
namespace core{
namespace _Promise{


class HXCPP_CLASS_ATTRIBUTES PromiseTrigger_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PromiseTrigger_Impl__obj OBJ_;
		PromiseTrigger_Impl__obj();

	public:
		enum { _hx_ClassId = 0x047d7c2a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Promise.PromiseTrigger_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Promise.PromiseTrigger_Impl_"); }

		inline static ::hx::ObjectPtr< PromiseTrigger_Impl__obj > __new() {
			::hx::ObjectPtr< PromiseTrigger_Impl__obj > __this = new PromiseTrigger_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PromiseTrigger_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PromiseTrigger_Impl__obj *__this = (PromiseTrigger_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PromiseTrigger_Impl__obj), false, "tink.core._Promise.PromiseTrigger_Impl_"));
			*(void **)__this = PromiseTrigger_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PromiseTrigger_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PromiseTrigger_Impl_",5d,95,4f,0d); }

		static  ::tink::core::FutureTrigger _new();
		static ::Dynamic _new_dyn();

		static bool resolve( ::tink::core::FutureTrigger this1, ::Dynamic v);
		static ::Dynamic resolve_dyn();

		static bool reject( ::tink::core::FutureTrigger this1, ::tink::core::TypedError e);
		static ::Dynamic reject_dyn();

		static ::Dynamic asPromise( ::tink::core::FutureTrigger this1);
		static ::Dynamic asPromise_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Promise

#endif /* INCLUDED_tink_core__Promise_PromiseTrigger_Impl_ */ 
