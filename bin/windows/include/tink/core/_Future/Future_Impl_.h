#ifndef INCLUDED_tink_core__Future_Future_Impl_
#define INCLUDED_tink_core__Future_Future_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,FutureTrigger)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Future,Future_Impl_)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES Future_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Future_Impl__obj OBJ_;
		Future_Impl__obj();

	public:
		enum { _hx_ClassId = 0x78864394 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Future.Future_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Future.Future_Impl_"); }

		inline static ::hx::ObjectPtr< Future_Impl__obj > __new() {
			::hx::ObjectPtr< Future_Impl__obj > __this = new Future_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Future_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Future_Impl__obj *__this = (Future_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Future_Impl__obj), false, "tink.core._Future.Future_Impl_"));
			*(void **)__this = Future_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Future_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Future_Impl_",43,35,0a,97); }

		static void __boot();
		static ::Dynamic NOISE;
		static ::Dynamic _hx_NULL;
		static ::Dynamic NEVER;
		static  ::tink::core::FutureStatus get_status(::Dynamic this1);
		static ::Dynamic get_status_dyn();

		static ::Dynamic _new( ::Dynamic wakeup);
		static ::Dynamic _new_dyn();

		static ::Dynamic handle(::Dynamic this1, ::Dynamic callback);
		static ::Dynamic handle_dyn();

		static ::Dynamic eager(::Dynamic this1);
		static ::Dynamic eager_dyn();

		static ::Dynamic noise(::Dynamic this1);
		static ::Dynamic noise_dyn();

		static ::Dynamic first(::Dynamic this1,::Dynamic that);
		static ::Dynamic first_dyn();

		static ::Dynamic map(::Dynamic this1, ::Dynamic f, ::Dynamic gather);
		static ::Dynamic map_dyn();

		static ::Dynamic flatMap(::Dynamic this1, ::Dynamic next, ::Dynamic gather);
		static ::Dynamic flatMap_dyn();

		static ::Dynamic next(::Dynamic this1, ::Dynamic n);
		static ::Dynamic next_dyn();

		static ::Dynamic gather(::Dynamic this1);
		static ::Dynamic gather_dyn();

		static ::Dynamic merge(::Dynamic this1,::Dynamic that, ::Dynamic combine);
		static ::Dynamic merge_dyn();

		static ::Dynamic flatten(::Dynamic f);
		static ::Dynamic flatten_dyn();

		static ::Dynamic neverToAny(::Dynamic l);
		static ::Dynamic neverToAny_dyn();

		static ::Dynamic ofAny( ::Dynamic v);
		static ::Dynamic ofAny_dyn();

		static ::Dynamic asPromise(::Dynamic s);
		static ::Dynamic asPromise_dyn();

		static ::Dynamic ofMany(::Array< ::Dynamic> futures, ::Dynamic gather);
		static ::Dynamic ofMany_dyn();

		static ::Dynamic inParallel(::Array< ::Dynamic> futures, ::Dynamic concurrency);
		static ::Dynamic inParallel_dyn();

		static ::Dynamic inSequence(::Array< ::Dynamic> futures);
		static ::Dynamic inSequence_dyn();

		static ::Dynamic many(::Array< ::Dynamic> a, ::Dynamic concurrency);
		static ::Dynamic many_dyn();

		static ::Dynamic processMany(::Array< ::Dynamic> a, ::Dynamic concurrency, ::Dynamic fn, ::Dynamic lift);
		static ::Dynamic processMany_dyn();

		static ::Dynamic lazy(::Dynamic l);
		static ::Dynamic lazy_dyn();

		static ::Dynamic sync( ::Dynamic v);
		static ::Dynamic sync_dyn();

		static bool isFuture( ::Dynamic maybeFuture);
		static ::Dynamic isFuture_dyn();

		static ::Dynamic async( ::Dynamic init, ::Dynamic lazy);
		static ::Dynamic async_dyn();

		static ::Dynamic irreversible( ::Dynamic init);
		static ::Dynamic irreversible_dyn();

		static ::Dynamic _hx_or(::Dynamic a,::Dynamic b);
		static ::Dynamic _hx_or_dyn();

		static ::Dynamic either(::Dynamic a,::Dynamic b);
		static ::Dynamic either_dyn();

		static ::Dynamic _hx_and(::Dynamic a,::Dynamic b);
		static ::Dynamic _hx_and_dyn();

		static ::Dynamic _tryFailingFlatMap(::Dynamic f, ::Dynamic map);
		static ::Dynamic _tryFailingFlatMap_dyn();

		static ::Dynamic _tryFlatMap(::Dynamic f, ::Dynamic map);
		static ::Dynamic _tryFlatMap_dyn();

		static ::Dynamic _tryFailingMap(::Dynamic f, ::Dynamic map);
		static ::Dynamic _tryFailingMap_dyn();

		static ::Dynamic _tryMap(::Dynamic f, ::Dynamic map);
		static ::Dynamic _tryMap_dyn();

		static ::Dynamic _flatMap(::Dynamic f, ::Dynamic map);
		static ::Dynamic _flatMap_dyn();

		static ::Dynamic _map(::Dynamic f, ::Dynamic map);
		static ::Dynamic _map_dyn();

		static  ::tink::core::FutureTrigger trigger();
		static ::Dynamic trigger_dyn();

		static ::Dynamic delay(int ms,::Dynamic value);
		static ::Dynamic delay_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_Future_Impl_ */ 
