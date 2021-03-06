#ifndef INCLUDED_tink_io__Worker_EagerWorker
#define INCLUDED_tink_io__Worker_EagerWorker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_WorkerObject
#include <tink/io/WorkerObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
HX_DECLARE_CLASS2(tink,io,WorkerObject)
HX_DECLARE_CLASS3(tink,io,_Worker,EagerWorker)

namespace tink{
namespace io{
namespace _Worker{


class HXCPP_CLASS_ATTRIBUTES EagerWorker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EagerWorker_obj OBJ_;
		EagerWorker_obj();

	public:
		enum { _hx_ClassId = 0x49fe0131 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._Worker.EagerWorker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._Worker.EagerWorker"); }
		static ::hx::ObjectPtr< EagerWorker_obj > __new();
		static ::hx::ObjectPtr< EagerWorker_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EagerWorker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("EagerWorker",36,20,f4,8a); }

		::Dynamic work(::Dynamic task);
		::Dynamic work_dyn();

};

} // end namespace tink
} // end namespace io
} // end namespace _Worker

#endif /* INCLUDED_tink_io__Worker_EagerWorker */ 
