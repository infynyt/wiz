#ifndef INCLUDED_tink_core_CallbackList
#define INCLUDED_tink_core_CallbackList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif
HX_DECLARE_CLASS2(tink,core,CallbackList)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,SimpleDisposable)
HX_DECLARE_CLASS3(tink,core,_Callback,ListCell)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES CallbackList_obj : public  ::tink::core::SimpleDisposable_obj
{
	public:
		typedef  ::tink::core::SimpleDisposable_obj super;
		typedef CallbackList_obj OBJ_;
		CallbackList_obj();

	public:
		enum { _hx_ClassId = 0x12a8ef7c };

		void __construct(::hx::Null< bool >  __o_destructive);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.CallbackList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.CallbackList"); }
		static ::hx::ObjectPtr< CallbackList_obj > __new(::hx::Null< bool >  __o_destructive);
		static ::hx::ObjectPtr< CallbackList_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_destructive);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallbackList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallbackList",e3,f4,55,31); }

		bool destructive;
		::Array< ::Dynamic> cells;
		int get_length();
		::Dynamic get_length_dyn();

		int used;
		::Array< ::Dynamic> queue;
		bool busy;
		 ::Dynamic ondrain;
		Dynamic ondrain_dyn() { return ondrain;}
		 ::Dynamic onfill;
		Dynamic onfill_dyn() { return onfill;}
		void release();
		::Dynamic release_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void drain();
		::Dynamic drain_dyn();

		::Dynamic add( ::Dynamic cb);
		::Dynamic add_dyn();

		void invoke( ::Dynamic data);
		::Dynamic invoke_dyn();

		void compact();
		::Dynamic compact_dyn();

		void resize(int length);
		::Dynamic resize_dyn();

		void clear();
		::Dynamic clear_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_CallbackList */ 
