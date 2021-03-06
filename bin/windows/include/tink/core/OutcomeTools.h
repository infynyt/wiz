#ifndef INCLUDED_tink_core_OutcomeTools
#define INCLUDED_tink_core_OutcomeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,core,OutcomeTools)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES OutcomeTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OutcomeTools_obj OBJ_;
		OutcomeTools_obj();

	public:
		enum { _hx_ClassId = 0x2617517e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core.OutcomeTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core.OutcomeTools"); }

		inline static ::hx::ObjectPtr< OutcomeTools_obj > __new() {
			::hx::ObjectPtr< OutcomeTools_obj > __this = new OutcomeTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OutcomeTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OutcomeTools_obj *__this = (OutcomeTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutcomeTools_obj), false, "tink.core.OutcomeTools"));
			*(void **)__this = OutcomeTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutcomeTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutcomeTools",49,44,be,6f); }

		static  ::Dynamic sure( ::tink::core::Outcome outcome);
		static ::Dynamic sure_dyn();

		static  ::haxe::ds::Option toOption( ::tink::core::Outcome outcome);
		static ::Dynamic toOption_dyn();

		static  ::Dynamic orNull( ::tink::core::Outcome outcome);
		static ::Dynamic orNull_dyn();

		static  ::Dynamic orUse( ::tink::core::Outcome outcome,::Dynamic fallback);
		static ::Dynamic orUse_dyn();

		static  ::Dynamic _hx_or( ::tink::core::Outcome outcome,::Dynamic fallback);
		static ::Dynamic _hx_or_dyn();

		static  ::tink::core::Outcome orTry( ::tink::core::Outcome outcome,::Dynamic fallback);
		static ::Dynamic orTry_dyn();

		static bool equals( ::tink::core::Outcome outcome, ::Dynamic to);
		static ::Dynamic equals_dyn();

		static  ::tink::core::Outcome map( ::tink::core::Outcome outcome, ::Dynamic transform);
		static ::Dynamic map_dyn();

		static bool isSuccess( ::tink::core::Outcome outcome);
		static ::Dynamic isSuccess_dyn();

		static  ::tink::core::Outcome flatMap( ::tink::core::Outcome o, ::Dynamic mapper);
		static ::Dynamic flatMap_dyn();

		static  ::tink::core::Outcome swap( ::tink::core::Outcome outcome, ::Dynamic v);
		static ::Dynamic swap_dyn();

		static ::Dynamic next( ::tink::core::Outcome outcome, ::Dynamic f);
		static ::Dynamic next_dyn();

		static  ::tink::core::Outcome attempt( ::Dynamic f, ::Dynamic report);
		static ::Dynamic attempt_dyn();

		static  ::tink::core::Outcome flatten( ::tink::core::Outcome o);
		static ::Dynamic flatten_dyn();

};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_OutcomeTools */ 
