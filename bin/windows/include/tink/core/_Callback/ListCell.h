#ifndef INCLUDED_tink_core__Callback_ListCell
#define INCLUDED_tink_core__Callback_ListCell

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,CallbackList)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SimpleDisposable)
HX_DECLARE_CLASS3(tink,core,_Callback,ListCell)

namespace tink{
namespace core{
namespace _Callback{


class HXCPP_CLASS_ATTRIBUTES ListCell_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ListCell_obj OBJ_;
		ListCell_obj();

	public:
		enum { _hx_ClassId = 0x05a024cb };

		void __construct( ::Dynamic cb, ::tink::core::CallbackList list);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Callback.ListCell")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Callback.ListCell"); }
		static ::hx::ObjectPtr< ListCell_obj > __new( ::Dynamic cb, ::tink::core::CallbackList list);
		static ::hx::ObjectPtr< ListCell_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic cb, ::tink::core::CallbackList list);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListCell_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ListCell",40,ad,63,fb); }

		 ::Dynamic cb;
		Dynamic cb_dyn() { return cb;}
		 ::tink::core::CallbackList list;
		void invoke( ::Dynamic data);
		::Dynamic invoke_dyn();

		void clear();
		::Dynamic clear_dyn();

		void cancel();
		::Dynamic cancel_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Callback

#endif /* INCLUDED_tink_core__Callback_ListCell */ 
