#ifndef INCLUDED_tink_core_ProgressTrigger
#define INCLUDED_tink_core_ProgressTrigger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,OwnedDisposable)
HX_DECLARE_CLASS2(tink,core,ProgressStatus)
HX_DECLARE_CLASS2(tink,core,ProgressTrigger)
HX_DECLARE_CLASS2(tink,core,SignalTrigger)
HX_DECLARE_CLASS3(tink,core,_Progress,ProgressObject)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ProgressTrigger_obj : public  ::tink::core::_Progress::ProgressObject_obj
{
	public:
		typedef  ::tink::core::_Progress::ProgressObject_obj super;
		typedef ProgressTrigger_obj OBJ_;
		ProgressTrigger_obj();

	public:
		enum { _hx_ClassId = 0x3bc965ba };

		void __construct( ::tink::core::ProgressStatus status);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.ProgressTrigger")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.ProgressTrigger"); }
		static ::hx::ObjectPtr< ProgressTrigger_obj > __new( ::tink::core::ProgressStatus status);
		static ::hx::ObjectPtr< ProgressTrigger_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::core::ProgressStatus status);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgressTrigger_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProgressTrigger",eb,8c,05,9a); }

		 ::tink::core::ProgressStatus _status;
		 ::tink::core::SignalTrigger _changed;
		 ::tink::core::_Progress::ProgressObject asProgress();
		::Dynamic asProgress_dyn();

		void progress(Float v, ::haxe::ds::Option total);
		::Dynamic progress_dyn();

		void finish( ::Dynamic v);
		::Dynamic finish_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_ProgressTrigger */ 
