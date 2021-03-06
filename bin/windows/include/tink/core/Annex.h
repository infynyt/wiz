#ifndef INCLUDED_tink_core_Annex
#define INCLUDED_tink_core_Annex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(tink,core,Annex)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Annex_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Annex_obj OBJ_;
		Annex_obj();

	public:
		enum { _hx_ClassId = 0x77bc8d83 };

		void __construct( ::Dynamic target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.Annex")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.Annex"); }
		static ::hx::ObjectPtr< Annex_obj > __new( ::Dynamic target);
		static ::hx::ObjectPtr< Annex_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Annex_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Annex",74,fd,14,b6); }

		 ::Dynamic target;
		 ::haxe::ds::ObjectMap registry;
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_Annex */ 
