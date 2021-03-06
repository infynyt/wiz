#ifndef INCLUDED_tink_core__Signal_Signal_Impl_
#define INCLUDED_tink_core__Signal_Signal_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SignalTrigger)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)
HX_DECLARE_CLASS3(tink,core,_Signal,Signal_Impl_)

namespace tink{
namespace core{
namespace _Signal{


class HXCPP_CLASS_ATTRIBUTES Signal_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Signal_Impl__obj OBJ_;
		Signal_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1a93f67a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Signal.Signal_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Signal.Signal_Impl_"); }

		inline static ::hx::ObjectPtr< Signal_Impl__obj > __new() {
			::hx::ObjectPtr< Signal_Impl__obj > __this = new Signal_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Signal_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Signal_Impl__obj *__this = (Signal_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Signal_Impl__obj), false, "tink.core._Signal.Signal_Impl_"));
			*(void **)__this = Signal_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Signal_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Signal_Impl_",28,75,b0,b1); }

		static ::Dynamic _new( ::Dynamic f, ::Dynamic init);
		static ::Dynamic _new_dyn();

		static ::Dynamic handle(::Dynamic this1, ::Dynamic handler);
		static ::Dynamic handle_dyn();

		static ::Dynamic map(::Dynamic this1, ::Dynamic f, ::Dynamic gather);
		static ::Dynamic map_dyn();

		static ::Dynamic flatMap(::Dynamic this1, ::Dynamic f, ::Dynamic gather);
		static ::Dynamic flatMap_dyn();

		static ::Dynamic filter(::Dynamic this1, ::Dynamic f, ::Dynamic gather);
		static ::Dynamic filter_dyn();

		static ::Dynamic select(::Dynamic this1, ::Dynamic selector, ::Dynamic gather);
		static ::Dynamic select_dyn();

		static ::Dynamic join(::Dynamic this1,::Dynamic that, ::Dynamic gather);
		static ::Dynamic join_dyn();

		static ::Dynamic nextTime(::Dynamic this1, ::Dynamic condition);
		static ::Dynamic nextTime_dyn();

		static ::Dynamic pickNext(::Dynamic this1, ::Dynamic selector);
		static ::Dynamic pickNext_dyn();

		static ::Dynamic until(::Dynamic this1,::Dynamic end);
		static ::Dynamic until_dyn();

		static ::Dynamic next(::Dynamic this1, ::Dynamic condition);
		static ::Dynamic next_dyn();

		static ::Dynamic noise(::Dynamic this1);
		static ::Dynamic noise_dyn();

		static ::Dynamic gather(::Dynamic this1);
		static ::Dynamic gather_dyn();

		static ::Dynamic create( ::Dynamic f);
		static ::Dynamic create_dyn();

		static ::Dynamic generate( ::Dynamic generator, ::Dynamic init);
		static ::Dynamic generate_dyn();

		static  ::tink::core::SignalTrigger trigger();
		static ::Dynamic trigger_dyn();

		static ::Dynamic ofClassical( ::Dynamic add, ::Dynamic remove, ::Dynamic gather);
		static ::Dynamic ofClassical_dyn();

		static ::Dynamic dead();
		static ::Dynamic dead_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Signal

#endif /* INCLUDED_tink_core__Signal_Signal_Impl_ */ 
