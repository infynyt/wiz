#ifndef INCLUDED_tink_core__Signal_Gather_Impl_
#define INCLUDED_tink_core__Signal_Gather_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Signal,Gather_Impl_)

namespace tink{
namespace core{
namespace _Signal{


class HXCPP_CLASS_ATTRIBUTES Gather_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Gather_Impl__obj OBJ_;
		Gather_Impl__obj();

	public:
		enum { _hx_ClassId = 0x731a6431 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Signal.Gather_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Signal.Gather_Impl_"); }

		inline static ::hx::ObjectPtr< Gather_Impl__obj > __new() {
			::hx::ObjectPtr< Gather_Impl__obj > __this = new Gather_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Gather_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Gather_Impl__obj *__this = (Gather_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Gather_Impl__obj), false, "tink.core._Signal.Gather_Impl_"));
			*(void **)__this = Gather_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Gather_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Gather_Impl_",fb,28,2e,46); }

		static bool _new(bool v);
		static ::Dynamic _new_dyn();

		static bool ofBool(bool b);
		static ::Dynamic ofBool_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Signal

#endif /* INCLUDED_tink_core__Signal_Gather_Impl_ */ 
