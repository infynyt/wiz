#ifndef INCLUDED_tink_core__Progress_Progress_Impl_
#define INCLUDED_tink_core__Progress_Progress_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,MPair)
HX_DECLARE_CLASS2(tink,core,ProgressTrigger)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Progress,ProgressObject)
HX_DECLARE_CLASS3(tink,core,_Progress,Progress_Impl_)

namespace tink{
namespace core{
namespace _Progress{


class HXCPP_CLASS_ATTRIBUTES Progress_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Progress_Impl__obj OBJ_;
		Progress_Impl__obj();

	public:
		enum { _hx_ClassId = 0x051a27e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Progress.Progress_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Progress.Progress_Impl_"); }

		inline static ::hx::ObjectPtr< Progress_Impl__obj > __new() {
			::hx::ObjectPtr< Progress_Impl__obj > __this = new Progress_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Progress_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Progress_Impl__obj *__this = (Progress_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Progress_Impl__obj), false, "tink.core._Progress.Progress_Impl_"));
			*(void **)__this = Progress_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Progress_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Progress_Impl_",2d,48,1e,c8); }

		static void __boot();
		static  ::tink::core::MPair INIT;
		static ::Dynamic listen( ::tink::core::_Progress::ProgressObject this1, ::Dynamic cb);
		static ::Dynamic listen_dyn();

		static ::Dynamic handle( ::tink::core::_Progress::ProgressObject this1, ::Dynamic cb);
		static ::Dynamic handle_dyn();

		static  ::tink::core::ProgressTrigger trigger();
		static ::Dynamic trigger_dyn();

		static  ::tink::core::_Progress::ProgressObject make( ::Dynamic f);
		static ::Dynamic make_dyn();

		static  ::tink::core::_Progress::ProgressObject map( ::tink::core::_Progress::ProgressObject this1, ::Dynamic f);
		static ::Dynamic map_dyn();

		static ::Dynamic asFuture( ::tink::core::_Progress::ProgressObject this1);
		static ::Dynamic asFuture_dyn();

		static  ::tink::core::_Progress::ProgressObject promise(::Dynamic v);
		static ::Dynamic promise_dyn();

		static  ::tink::core::_Progress::ProgressObject flatten(::Dynamic v);
		static ::Dynamic flatten_dyn();

		static  ::tink::core::_Progress::ProgressObject future(::Dynamic v);
		static ::Dynamic future_dyn();

		static ::Dynamic next( ::tink::core::_Progress::ProgressObject this1, ::Dynamic f);
		static ::Dynamic next_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Progress

#endif /* INCLUDED_tink_core__Progress_Progress_Impl_ */ 
