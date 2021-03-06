#ifndef INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_
#define INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Outcome,OutcomeMapper_Impl_)

namespace tink{
namespace core{
namespace _Outcome{


class HXCPP_CLASS_ATTRIBUTES OutcomeMapper_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OutcomeMapper_Impl__obj OBJ_;
		OutcomeMapper_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3602302f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Outcome.OutcomeMapper_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Outcome.OutcomeMapper_Impl_"); }

		inline static ::hx::ObjectPtr< OutcomeMapper_Impl__obj > __new() {
			::hx::ObjectPtr< OutcomeMapper_Impl__obj > __this = new OutcomeMapper_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OutcomeMapper_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			OutcomeMapper_Impl__obj *__this = (OutcomeMapper_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutcomeMapper_Impl__obj), false, "tink.core._Outcome.OutcomeMapper_Impl_"));
			*(void **)__this = OutcomeMapper_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutcomeMapper_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutcomeMapper_Impl_",b3,e6,b4,bd); }

		static  ::Dynamic _new( ::Dynamic f);
		static ::Dynamic _new_dyn();

		static  ::tink::core::Outcome apply( ::Dynamic this1, ::tink::core::Outcome o);
		static ::Dynamic apply_dyn();

		static  ::Dynamic withSameError( ::Dynamic f);
		static ::Dynamic withSameError_dyn();

		static  ::Dynamic withEitherError( ::Dynamic f);
		static ::Dynamic withEitherError_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Outcome

#endif /* INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_ */ 
