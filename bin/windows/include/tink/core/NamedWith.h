#ifndef INCLUDED_tink_core_NamedWith
#define INCLUDED_tink_core_NamedWith

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_fe49a69a0def38bb_11_new)
HX_DECLARE_CLASS2(tink,core,NamedWith)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES NamedWith_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NamedWith_obj OBJ_;
		NamedWith_obj();

	public:
		enum { _hx_ClassId = 0x4df025ce };

		void __construct( ::Dynamic name, ::Dynamic value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.core.NamedWith")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.core.NamedWith"); }

		inline static ::hx::ObjectPtr< NamedWith_obj > __new( ::Dynamic name, ::Dynamic value) {
			::hx::ObjectPtr< NamedWith_obj > __this = new NamedWith_obj();
			__this->__construct(name,value);
			return __this;
		}

		inline static ::hx::ObjectPtr< NamedWith_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic name, ::Dynamic value) {
			NamedWith_obj *__this = (NamedWith_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NamedWith_obj), true, "tink.core.NamedWith"));
			*(void **)__this = NamedWith_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fe49a69a0def38bb_11_new)
HXLINE(  12)		( ( ::tink::core::NamedWith)(__this) )->name = name;
HXLINE(  13)		( ( ::tink::core::NamedWith)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NamedWith_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NamedWith",3f,e2,3d,d6); }

		 ::Dynamic name;
		 ::Dynamic value;
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_NamedWith */ 
