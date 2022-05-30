#ifndef INCLUDED_tink_core_ProgressTools
#define INCLUDED_tink_core_ProgressTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,ProgressTools)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Progress,ProgressObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ProgressTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProgressTools_obj OBJ_;
		ProgressTools_obj();

	public:
		enum { _hx_ClassId = 0x6a07b255 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core.ProgressTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core.ProgressTools"); }

		inline static ::hx::ObjectPtr< ProgressTools_obj > __new() {
			::hx::ObjectPtr< ProgressTools_obj > __this = new ProgressTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ProgressTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ProgressTools_obj *__this = (ProgressTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressTools_obj), false, "tink.core.ProgressTools"));
			*(void **)__this = ProgressTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgressTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProgressTools",0e,67,bf,22); }

		static ::Dynamic asPromise( ::tink::core::_Progress::ProgressObject p);
		static ::Dynamic asPromise_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_ProgressTools */ 
