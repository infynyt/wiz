#ifndef INCLUDED_tink_core__Progress_ProgressObject
#define INCLUDED_tink_core__Progress_ProgressObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,ProgressStatus)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Progress,ProgressObject)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)

namespace tink{
namespace core{
namespace _Progress{


class HXCPP_CLASS_ATTRIBUTES ProgressObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProgressObject_obj OBJ_;
		ProgressObject_obj();

	public:
		enum { _hx_ClassId = 0x0264de1f };

		void __construct(::Dynamic changed, ::Dynamic getStatus);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Progress.ProgressObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Progress.ProgressObject"); }
		static ::hx::ObjectPtr< ProgressObject_obj > __new(::Dynamic changed, ::Dynamic getStatus);
		static ::hx::ObjectPtr< ProgressObject_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic changed, ::Dynamic getStatus);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgressObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProgressObject",6c,fe,68,c5); }

		 ::tink::core::ProgressStatus get_status();
		::Dynamic get_status_dyn();

		 ::Dynamic getStatus;
		Dynamic getStatus_dyn() { return getStatus;}
		::Dynamic changed;
		::Dynamic progressed;
		::Dynamic result;
};

} // end namespace tink
} // end namespace core
} // end namespace _Progress

#endif /* INCLUDED_tink_core__Progress_ProgressObject */ 
