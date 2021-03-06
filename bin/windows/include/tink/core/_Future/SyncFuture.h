#ifndef INCLUDED_tink_core__Future_SyncFuture
#define INCLUDED_tink_core__Future_SyncFuture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Future,SyncFuture)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES SyncFuture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SyncFuture_obj OBJ_;
		SyncFuture_obj();

	public:
		enum { _hx_ClassId = 0x03763767 };

		void __construct(::Dynamic value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Future.SyncFuture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Future.SyncFuture"); }
		static ::hx::ObjectPtr< SyncFuture_obj > __new(::Dynamic value);
		static ::hx::ObjectPtr< SyncFuture_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SyncFuture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SyncFuture",1e,81,9c,5c); }

		::Dynamic value;
		 ::tink::core::FutureStatus getStatus();
		::Dynamic getStatus_dyn();

		::Dynamic handle( ::Dynamic cb);
		::Dynamic handle_dyn();

		void eager();
		::Dynamic eager_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_SyncFuture */ 
