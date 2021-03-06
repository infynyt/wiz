#ifndef INCLUDED_tink_core_MPair
#define INCLUDED_tink_core_MPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7fda083185addcb6_27_new)
HX_DECLARE_CLASS2(tink,core,MPair)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES MPair_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MPair_obj OBJ_;
		MPair_obj();

	public:
		enum { _hx_ClassId = 0x4cad4316 };

		void __construct( ::Dynamic a, ::Dynamic b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.MPair")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.MPair"); }

		inline static ::hx::ObjectPtr< MPair_obj > __new( ::Dynamic a, ::Dynamic b) {
			::hx::ObjectPtr< MPair_obj > __this = new MPair_obj();
			__this->__construct(a,b);
			return __this;
		}

		inline static ::hx::ObjectPtr< MPair_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic a, ::Dynamic b) {
			MPair_obj *__this = (MPair_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MPair_obj), true, "tink.core.MPair"));
			*(void **)__this = MPair_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7fda083185addcb6_27_new)
HXLINE(  28)		( ( ::tink::core::MPair)(__this) )->a = a;
HXLINE(  29)		( ( ::tink::core::MPair)(__this) )->b = b;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MPair_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MPair",07,b3,05,8b); }

		 ::Dynamic a;
		 ::Dynamic b;
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_MPair */ 
