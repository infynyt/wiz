#ifndef INCLUDED_tink_core_SimpleDisposable
#define INCLUDED_tink_core_SimpleDisposable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SimpleDisposable)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES SimpleDisposable_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SimpleDisposable_obj OBJ_;
		SimpleDisposable_obj();

	public:
		enum { _hx_ClassId = 0x11eb7047 };

		void __construct( ::Dynamic dispose);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.SimpleDisposable")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.SimpleDisposable"); }
		static ::hx::ObjectPtr< SimpleDisposable_obj > __new( ::Dynamic dispose);
		static ::hx::ObjectPtr< SimpleDisposable_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic dispose);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleDisposable_obj();

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
		::String __ToString() const { return HX_("SimpleDisposable",92,24,4b,01); }

		static void noop();
		static ::Dynamic noop_dyn();

		 ::Dynamic f;
		Dynamic f_dyn() { return f;}
		::Array< ::Dynamic> disposeHandlers;
		bool get_disposed();
		::Dynamic get_disposed_dyn();

		void ondispose( ::Dynamic d);
		::Dynamic ondispose_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_SimpleDisposable */ 
