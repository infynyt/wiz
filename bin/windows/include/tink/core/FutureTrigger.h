#ifndef INCLUDED_tink_core_FutureTrigger
#define INCLUDED_tink_core_FutureTrigger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,CallbackList)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,FutureTrigger)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SimpleDisposable)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES FutureTrigger_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FutureTrigger_obj OBJ_;
		FutureTrigger_obj();

	public:
		enum { _hx_ClassId = 0x4165ca24 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.FutureTrigger")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.FutureTrigger"); }
		static ::hx::ObjectPtr< FutureTrigger_obj > __new();
		static ::hx::ObjectPtr< FutureTrigger_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FutureTrigger_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FutureTrigger",15,13,89,d9); }

		 ::tink::core::FutureStatus status;
		 ::tink::core::CallbackList list;
		 ::tink::core::FutureStatus getStatus();
		::Dynamic getStatus_dyn();

		::Dynamic handle( ::Dynamic callback);
		::Dynamic handle_dyn();

		void eager();
		::Dynamic eager_dyn();

		::Dynamic asFuture();
		::Dynamic asFuture_dyn();

		bool trigger( ::Dynamic result);
		::Dynamic trigger_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_FutureTrigger */ 
