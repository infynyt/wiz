#ifndef INCLUDED_tink_core__Future_SuspendableFuture
#define INCLUDED_tink_core__Future_SuspendableFuture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,CallbackList)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SimpleDisposable)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Future,SuspendableFuture)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES SuspendableFuture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SuspendableFuture_obj OBJ_;
		SuspendableFuture_obj();

	public:
		enum { _hx_ClassId = 0x1fbfb7e8 };

		void __construct( ::Dynamic wakeup);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Future.SuspendableFuture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Future.SuspendableFuture"); }
		static ::hx::ObjectPtr< SuspendableFuture_obj > __new( ::Dynamic wakeup);
		static ::hx::ObjectPtr< SuspendableFuture_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic wakeup);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SuspendableFuture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SuspendableFuture",d9,4b,c6,80); }

		 ::tink::core::CallbackList callbacks;
		 ::tink::core::FutureStatus status;
		::Dynamic link;
		 ::Dynamic wakeup;
		Dynamic wakeup_dyn() { return wakeup;}
		 ::tink::core::FutureStatus getStatus();
		::Dynamic getStatus_dyn();

		void trigger( ::Dynamic value);
		::Dynamic trigger_dyn();

		::Dynamic handle( ::Dynamic callback);
		::Dynamic handle_dyn();

		void arm();
		::Dynamic arm_dyn();

		void eager();
		::Dynamic eager_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_SuspendableFuture */ 
