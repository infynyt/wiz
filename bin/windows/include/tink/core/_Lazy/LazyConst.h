#ifndef INCLUDED_tink_core__Lazy_LazyConst
#define INCLUDED_tink_core__Lazy_LazyConst

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyConst)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{
namespace _Lazy{


class HXCPP_CLASS_ATTRIBUTES LazyConst_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LazyConst_obj OBJ_;
		LazyConst_obj();

	public:
		enum { _hx_ClassId = 0x43104c2d };

		void __construct( ::Dynamic value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core._Lazy.LazyConst")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core._Lazy.LazyConst"); }
		static ::hx::ObjectPtr< LazyConst_obj > __new( ::Dynamic value);
		static ::hx::ObjectPtr< LazyConst_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LazyConst_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LazyConst",2f,14,bd,5b); }

		 ::Dynamic value;
		bool isComputed();
		::Dynamic isComputed_dyn();

		 ::Dynamic get();
		::Dynamic get_dyn();

		void compute();
		::Dynamic compute_dyn();

		::Dynamic underlying();
		::Dynamic underlying_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Lazy

#endif /* INCLUDED_tink_core__Lazy_LazyConst */ 
