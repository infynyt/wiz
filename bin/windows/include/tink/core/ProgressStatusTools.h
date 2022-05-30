#ifndef INCLUDED_tink_core_ProgressStatusTools
#define INCLUDED_tink_core_ProgressStatusTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,ProgressStatus)
HX_DECLARE_CLASS2(tink,core,ProgressStatusTools)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ProgressStatusTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProgressStatusTools_obj OBJ_;
		ProgressStatusTools_obj();

	public:
		enum { _hx_ClassId = 0x17fc3f0b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core.ProgressStatusTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core.ProgressStatusTools"); }

		inline static ::hx::ObjectPtr< ProgressStatusTools_obj > __new() {
			::hx::ObjectPtr< ProgressStatusTools_obj > __this = new ProgressStatusTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ProgressStatusTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ProgressStatusTools_obj *__this = (ProgressStatusTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressStatusTools_obj), false, "tink.core.ProgressStatusTools"));
			*(void **)__this = ProgressStatusTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgressStatusTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProgressStatusTools",bc,52,7a,1b); }

		static  ::tink::core::ProgressStatus map( ::tink::core::ProgressStatus p, ::Dynamic f);
		static ::Dynamic map_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_ProgressStatusTools */ 
