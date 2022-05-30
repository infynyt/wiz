#ifndef INCLUDED_tink_core__Progress_SuspendableProgress
#define INCLUDED_tink_core__Progress_SuspendableProgress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,ProgressStatus)
HX_DECLARE_CLASS3(tink,core,_Progress,ProgressObject)
HX_DECLARE_CLASS3(tink,core,_Progress,SuspendableProgress)

namespace tink{
namespace core{
namespace _Progress{


class HXCPP_CLASS_ATTRIBUTES SuspendableProgress_obj : public  ::tink::core::_Progress::ProgressObject_obj
{
	public:
		typedef  ::tink::core::_Progress::ProgressObject_obj super;
		typedef SuspendableProgress_obj OBJ_;
		SuspendableProgress_obj();

	public:
		enum { _hx_ClassId = 0x320f7dcc };

		void __construct( ::Dynamic wakeup, ::tink::core::ProgressStatus status);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Progress.SuspendableProgress")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Progress.SuspendableProgress"); }
		static ::hx::ObjectPtr< SuspendableProgress_obj > __new( ::Dynamic wakeup, ::tink::core::ProgressStatus status);
		static ::hx::ObjectPtr< SuspendableProgress_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic wakeup, ::tink::core::ProgressStatus status);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SuspendableProgress_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SuspendableProgress",c3,3c,a7,a7); }

		 ::Dynamic noop( ::Dynamic _, ::Dynamic _1);
		::Dynamic noop_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Progress

#endif /* INCLUDED_tink_core__Progress_SuspendableProgress */ 
