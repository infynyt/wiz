#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#define INCLUDED_tink_core__Promise_Promise_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,FutureTrigger)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
HX_DECLARE_CLASS3(tink,core,_Promise,Promise_Impl_)

namespace tink{
namespace core{
namespace _Promise{


class HXCPP_CLASS_ATTRIBUTES Promise_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Promise_Impl__obj OBJ_;
		Promise_Impl__obj();

	public:
		enum { _hx_ClassId = 0x03edc1ee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Promise.Promise_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Promise.Promise_Impl_"); }

		inline static ::hx::ObjectPtr< Promise_Impl__obj > __new() {
			::hx::ObjectPtr< Promise_Impl__obj > __this = new Promise_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Promise_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Promise_Impl__obj *__this = (Promise_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Promise_Impl__obj), false, "tink.core._Promise.Promise_Impl_"));
			*(void **)__this = Promise_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Promise_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Promise_Impl_",5b,00,ba,be); }

		static void __boot();
		static ::Dynamic NOISE;
		static ::Dynamic _hx_NULL;
		static ::Dynamic NEVER;
		static ::Dynamic _new( ::Dynamic f);
		static ::Dynamic _new_dyn();

		static ::Dynamic eager(::Dynamic this1);
		static ::Dynamic eager_dyn();

		static ::Dynamic map(::Dynamic this1, ::Dynamic f);
		static ::Dynamic map_dyn();

		static ::Dynamic flatMap(::Dynamic this1, ::Dynamic f);
		static ::Dynamic flatMap_dyn();

		static ::Dynamic tryRecover(::Dynamic this1, ::Dynamic f);
		static ::Dynamic tryRecover_dyn();

		static ::Dynamic recover(::Dynamic this1, ::Dynamic f);
		static ::Dynamic recover_dyn();

		static ::Dynamic mapError(::Dynamic this1, ::Dynamic f);
		static ::Dynamic mapError_dyn();

		static ::Dynamic handle(::Dynamic this1, ::Dynamic cb);
		static ::Dynamic handle_dyn();

		static ::Dynamic noise(::Dynamic this1);
		static ::Dynamic noise_dyn();

		static ::Dynamic isSuccess(::Dynamic this1);
		static ::Dynamic isSuccess_dyn();

		static ::Dynamic next(::Dynamic this1, ::Dynamic f, ::Dynamic gather);
		static ::Dynamic next_dyn();

		static ::Dynamic swap(::Dynamic this1, ::Dynamic v);
		static ::Dynamic swap_dyn();

		static ::Dynamic swapError(::Dynamic this1, ::tink::core::TypedError e);
		static ::Dynamic swapError_dyn();

		static ::Dynamic merge(::Dynamic this1,::Dynamic other, ::Dynamic merger, ::Dynamic gather);
		static ::Dynamic merge_dyn();

		static ::Dynamic _hx_and(::Dynamic a,::Dynamic b);
		static ::Dynamic _hx_and_dyn();

		static ::Dynamic iterate( ::Dynamic promises, ::Dynamic yield,::Dynamic fallback);
		static ::Dynamic iterate_dyn();

		static ::Dynamic retry( ::Dynamic gen, ::Dynamic next);
		static ::Dynamic retry_dyn();

		static ::Dynamic ofSpecific(::Dynamic s);
		static ::Dynamic ofSpecific_dyn();

		static ::Dynamic fromNever(::Dynamic l);
		static ::Dynamic fromNever_dyn();

		static ::Dynamic ofTrigger( ::tink::core::FutureTrigger f);
		static ::Dynamic ofTrigger_dyn();

		static ::Dynamic ofHappyTrigger( ::tink::core::FutureTrigger f);
		static ::Dynamic ofHappyTrigger_dyn();

		static ::Dynamic ofFuture(::Dynamic f);
		static ::Dynamic ofFuture_dyn();

		static ::Dynamic ofOutcome( ::tink::core::Outcome o);
		static ::Dynamic ofOutcome_dyn();

		static ::Dynamic ofError( ::tink::core::TypedError e);
		static ::Dynamic ofError_dyn();

		static ::Dynamic ofData( ::Dynamic d);
		static ::Dynamic ofData_dyn();

		static ::Dynamic lazy(::Dynamic p);
		static ::Dynamic lazy_dyn();

		static ::Dynamic inParallel(::Array< ::Dynamic> a, ::Dynamic concurrency);
		static ::Dynamic inParallel_dyn();

		static ::Dynamic many(::Array< ::Dynamic> a, ::Dynamic concurrency);
		static ::Dynamic many_dyn();

		static ::Dynamic inSequence(::Array< ::Dynamic> a);
		static ::Dynamic inSequence_dyn();

		static  ::Dynamic cache( ::Dynamic gen);
		static ::Dynamic cache_dyn();

		static ::Dynamic lift(::Dynamic p);
		static ::Dynamic lift_dyn();

		static  ::tink::core::FutureTrigger trigger();
		static ::Dynamic trigger_dyn();

		static ::Dynamic resolve( ::Dynamic v);
		static ::Dynamic resolve_dyn();

		static ::Dynamic reject( ::tink::core::TypedError e);
		static ::Dynamic reject_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Promise

#endif /* INCLUDED_tink_core__Promise_Promise_Impl_ */ 
