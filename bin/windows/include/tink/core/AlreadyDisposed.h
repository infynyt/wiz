#ifndef INCLUDED_tink_core_AlreadyDisposed
#define INCLUDED_tink_core_AlreadyDisposed

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
HX_DECLARE_CLASS2(tink,core,AlreadyDisposed)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES AlreadyDisposed_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AlreadyDisposed_obj OBJ_;
		AlreadyDisposed_obj();

	public:
		enum { _hx_ClassId = 0x3dd2974c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core.AlreadyDisposed")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core.AlreadyDisposed"); }
		static ::hx::ObjectPtr< AlreadyDisposed_obj > __new();
		static ::hx::ObjectPtr< AlreadyDisposed_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AlreadyDisposed_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AlreadyDisposed",7d,be,0e,9c); }

		static void __boot();
		static ::Dynamic INST;
		bool get_disposed();
		::Dynamic get_disposed_dyn();

		void ondispose( ::Dynamic d);
		::Dynamic ondispose_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_AlreadyDisposed */ 
