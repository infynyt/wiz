#ifndef INCLUDED_tink_core_SimpleLink
#define INCLUDED_tink_core_SimpleLink

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,SimpleLink)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES SimpleLink_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SimpleLink_obj OBJ_;
		SimpleLink_obj();

	public:
		enum { _hx_ClassId = 0x35e026fd };

		void __construct( ::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.SimpleLink")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.SimpleLink"); }
		static ::hx::ObjectPtr< SimpleLink_obj > __new( ::Dynamic f);
		static ::hx::ObjectPtr< SimpleLink_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleLink_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SimpleLink",6c,4d,97,f1); }

		 ::Dynamic f;
		Dynamic f_dyn() { return f;}
		void cancel();
		::Dynamic cancel_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_SimpleLink */ 
