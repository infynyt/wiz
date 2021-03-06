#ifndef INCLUDED_tink_core_OptionTools
#define INCLUDED_tink_core_OptionTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,OptionIter)
HX_DECLARE_CLASS2(tink,core,OptionTools)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES OptionTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OptionTools_obj OBJ_;
		OptionTools_obj();

	public:
		enum { _hx_ClassId = 0x162da395 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core.OptionTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core.OptionTools"); }

		inline static ::hx::ObjectPtr< OptionTools_obj > __new() {
			::hx::ObjectPtr< OptionTools_obj > __this = new OptionTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OptionTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OptionTools_obj *__this = (OptionTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionTools_obj), false, "tink.core.OptionTools"));
			*(void **)__this = OptionTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionTools",46,1e,b8,9a); }

		static  ::Dynamic force( ::haxe::ds::Option o, ::Dynamic pos);
		static ::Dynamic force_dyn();

		static  ::Dynamic sure( ::haxe::ds::Option o, ::Dynamic pos);
		static ::Dynamic sure_dyn();

		static  ::tink::core::Outcome toOutcome( ::haxe::ds::Option o, ::Dynamic pos);
		static ::Dynamic toOutcome_dyn();

		static  ::Dynamic _hx_or( ::haxe::ds::Option o,::Dynamic l);
		static ::Dynamic _hx_or_dyn();

		static  ::haxe::ds::Option orTry( ::haxe::ds::Option o,::Dynamic fallback);
		static ::Dynamic orTry_dyn();

		static  ::Dynamic orNull( ::haxe::ds::Option o);
		static ::Dynamic orNull_dyn();

		static  ::haxe::ds::Option filter( ::haxe::ds::Option o, ::Dynamic f);
		static ::Dynamic filter_dyn();

		static bool satisfies( ::haxe::ds::Option o, ::Dynamic f);
		static ::Dynamic satisfies_dyn();

		static bool equals( ::haxe::ds::Option o, ::Dynamic v);
		static ::Dynamic equals_dyn();

		static  ::haxe::ds::Option map( ::haxe::ds::Option o, ::Dynamic f);
		static ::Dynamic map_dyn();

		static  ::haxe::ds::Option flatMap( ::haxe::ds::Option o, ::Dynamic f);
		static ::Dynamic flatMap_dyn();

		static  ::tink::core::OptionIter iterator( ::haxe::ds::Option o);
		static ::Dynamic iterator_dyn();

		static ::cpp::VirtualArray toArray( ::haxe::ds::Option o);
		static ::Dynamic toArray_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_OptionTools */ 
