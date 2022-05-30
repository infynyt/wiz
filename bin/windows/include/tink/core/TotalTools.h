#ifndef INCLUDED_tink_core_TotalTools
#define INCLUDED_tink_core_TotalTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,TotalTools)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TotalTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TotalTools_obj OBJ_;
		TotalTools_obj();

	public:
		enum { _hx_ClassId = 0x55c96568 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core.TotalTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core.TotalTools"); }

		inline static ::hx::ObjectPtr< TotalTools_obj > __new() {
			::hx::ObjectPtr< TotalTools_obj > __this = new TotalTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TotalTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TotalTools_obj *__this = (TotalTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TotalTools_obj), false, "tink.core.TotalTools"));
			*(void **)__this = TotalTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TotalTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TotalTools",d7,8b,80,11); }

		static bool eq( ::haxe::ds::Option a, ::haxe::ds::Option b);
		static ::Dynamic eq_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_TotalTools */ 
