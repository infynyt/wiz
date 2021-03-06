#ifndef INCLUDED_tink_io__Worker_Worker_Impl_
#define INCLUDED_tink_io__Worker_Worker_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
HX_DECLARE_CLASS2(tink,io,WorkerObject)
HX_DECLARE_CLASS3(tink,io,_Worker,Worker_Impl_)

namespace tink{
namespace io{
namespace _Worker{


class HXCPP_CLASS_ATTRIBUTES Worker_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Worker_Impl__obj OBJ_;
		Worker_Impl__obj();

	public:
		enum { _hx_ClassId = 0x132db49b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._Worker.Worker_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._Worker.Worker_Impl_"); }

		inline static ::hx::ObjectPtr< Worker_Impl__obj > __new() {
			::hx::ObjectPtr< Worker_Impl__obj > __this = new Worker_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Worker_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Worker_Impl__obj *__this = (Worker_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Worker_Impl__obj), false, "tink.io._Worker.Worker_Impl_"));
			*(void **)__this = Worker_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Worker_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Worker_Impl_",be,2b,8e,66); }

		static void __boot();
		static ::Dynamic EAGER;
		static ::Array< ::Dynamic> pool;
		static ::Dynamic ensure(::Dynamic this1);
		static ::Dynamic ensure_dyn();

		static ::Dynamic get();
		static ::Dynamic get_dyn();

		static ::Dynamic work(::Dynamic this1,::Dynamic task);
		static ::Dynamic work_dyn();

};

} // end namespace tink
} // end namespace io
} // end namespace _Worker

#endif /* INCLUDED_tink_io__Worker_Worker_Impl_ */ 
