#ifndef INCLUDED_tink_core_CallbackLinkRef
#define INCLUDED_tink_core_CallbackLinkRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,CallbackLinkRef)
HX_DECLARE_CLASS2(tink,core,LinkObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES CallbackLinkRef_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CallbackLinkRef_obj OBJ_;
		CallbackLinkRef_obj();

	public:
		enum { _hx_ClassId = 0x2af492e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.CallbackLinkRef")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.CallbackLinkRef"); }
		static ::hx::ObjectPtr< CallbackLinkRef_obj > __new();
		static ::hx::ObjectPtr< CallbackLinkRef_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallbackLinkRef_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CallbackLinkRef",14,ba,30,89); }

		::Dynamic link;
		void cancel();
		::Dynamic cancel_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_CallbackLinkRef */ 
