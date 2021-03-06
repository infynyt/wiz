#ifndef INCLUDED_tink_core__Future_NeverFuture
#define INCLUDED_tink_core__Future_NeverFuture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Future,NeverFuture)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES NeverFuture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NeverFuture_obj OBJ_;
		NeverFuture_obj();

	public:
		enum { _hx_ClassId = 0x10733a9e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Future.NeverFuture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Future.NeverFuture"); }
		static ::hx::ObjectPtr< NeverFuture_obj > __new();
		static ::hx::ObjectPtr< NeverFuture_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NeverFuture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("NeverFuture",cf,53,c5,19); }

		 ::tink::core::FutureStatus getStatus();
		::Dynamic getStatus_dyn();

		::Dynamic handle( ::Dynamic callback);
		::Dynamic handle_dyn();

		void eager();
		::Dynamic eager_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_NeverFuture */ 
