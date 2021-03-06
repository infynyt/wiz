#ifndef INCLUDED_tink_core_OptionIter
#define INCLUDED_tink_core_OptionIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,OptionIter)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES OptionIter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OptionIter_obj OBJ_;
		OptionIter_obj();

	public:
		enum { _hx_ClassId = 0x4d280d42 };

		void __construct( ::haxe::ds::Option o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.OptionIter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.OptionIter"); }
		static ::hx::ObjectPtr< OptionIter_obj > __new( ::haxe::ds::Option o);
		static ::hx::ObjectPtr< OptionIter_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::Option o);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionIter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionIter",4d,27,0c,82); }

		 ::Dynamic value;
		bool alive;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_OptionIter */ 
