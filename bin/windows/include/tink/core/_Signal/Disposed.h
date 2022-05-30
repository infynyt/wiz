#ifndef INCLUDED_tink_core__Signal_Disposed
#define INCLUDED_tink_core__Signal_Disposed

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_AlreadyDisposed
#include <tink/core/AlreadyDisposed.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,AlreadyDisposed)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS3(tink,core,_Signal,Disposed)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)

namespace tink{
namespace core{
namespace _Signal{


class HXCPP_CLASS_ATTRIBUTES Disposed_obj : public  ::tink::core::AlreadyDisposed_obj
{
	public:
		typedef  ::tink::core::AlreadyDisposed_obj super;
		typedef Disposed_obj OBJ_;
		Disposed_obj();

	public:
		enum { _hx_ClassId = 0x7fa8eb7f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Signal.Disposed")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Signal.Disposed"); }
		static ::hx::ObjectPtr< Disposed_obj > __new();
		static ::hx::ObjectPtr< Disposed_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Disposed_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Disposed",05,c7,55,01); }

		static void __boot();
		static ::Dynamic INST;
		::Dynamic listen( ::Dynamic cb);
		::Dynamic listen_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Signal

#endif /* INCLUDED_tink_core__Signal_Disposed */ 
