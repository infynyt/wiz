#ifndef INCLUDED_tink_core__Signal_Suspendable
#define INCLUDED_tink_core__Signal_Suspendable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,CallbackList)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SimpleDisposable)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)
HX_DECLARE_CLASS3(tink,core,_Signal,Suspendable)

namespace tink{
namespace core{
namespace _Signal{


class HXCPP_CLASS_ATTRIBUTES Suspendable_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Suspendable_obj OBJ_;
		Suspendable_obj();

	public:
		enum { _hx_ClassId = 0x5b5b4080 };

		void __construct( ::Dynamic activate, ::Dynamic init);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Signal.Suspendable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Signal.Suspendable"); }
		static ::hx::ObjectPtr< Suspendable_obj > __new( ::Dynamic activate, ::Dynamic init);
		static ::hx::ObjectPtr< Suspendable_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic activate, ::Dynamic init);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Suspendable_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Suspendable",f6,a2,5d,aa); }

		static ::Dynamic over(::Dynamic s, ::Dynamic activate);
		static ::Dynamic over_dyn();

		 ::tink::core::CallbackList handlers;
		 ::Dynamic activate;
		Dynamic activate_dyn() { return activate;}
		 ::Dynamic init;
		Dynamic init_dyn() { return init;}
		::Dynamic subscription;
		bool get_disposed();
		::Dynamic get_disposed_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void ondispose( ::Dynamic handler);
		::Dynamic ondispose_dyn();

		::Dynamic listen( ::Dynamic cb);
		::Dynamic listen_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Signal

#endif /* INCLUDED_tink_core__Signal_Suspendable */ 
