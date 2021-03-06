#ifndef INCLUDED_tink_core__Callback_LinkPair
#define INCLUDED_tink_core__Callback_LinkPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Callback,LinkPair)

namespace tink{
namespace core{
namespace _Callback{


class HXCPP_CLASS_ATTRIBUTES LinkPair_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LinkPair_obj OBJ_;
		LinkPair_obj();

	public:
		enum { _hx_ClassId = 0x01531ffb };

		void __construct(::Dynamic a,::Dynamic b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Callback.LinkPair")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Callback.LinkPair"); }
		static ::hx::ObjectPtr< LinkPair_obj > __new(::Dynamic a,::Dynamic b);
		static ::hx::ObjectPtr< LinkPair_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic a,::Dynamic b);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinkPair_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LinkPair",54,61,94,d5); }

		::Dynamic a;
		::Dynamic b;
		bool dissolved;
		void cancel();
		::Dynamic cancel_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Callback

#endif /* INCLUDED_tink_core__Callback_LinkPair */ 
