#ifndef INCLUDED_tink_core__Ref_Ref_Impl_
#define INCLUDED_tink_core__Ref_Ref_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Ref,Ref_Impl_)

namespace tink{
namespace core{
namespace _Ref{


class HXCPP_CLASS_ATTRIBUTES Ref_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ref_Impl__obj OBJ_;
		Ref_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0217c4a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Ref.Ref_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Ref.Ref_Impl_"); }

		inline static ::hx::ObjectPtr< Ref_Impl__obj > __new() {
			::hx::ObjectPtr< Ref_Impl__obj > __this = new Ref_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Ref_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Ref_Impl__obj *__this = (Ref_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ref_Impl__obj), false, "tink.core._Ref.Ref_Impl_"));
			*(void **)__this = Ref_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ref_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ref_Impl_",13,36,51,00); }

		static ::cpp::VirtualArray _new();
		static ::Dynamic _new_dyn();

		static  ::Dynamic get_value(::cpp::VirtualArray this1);
		static ::Dynamic get_value_dyn();

		static  ::Dynamic set_value(::cpp::VirtualArray this1, ::Dynamic param);
		static ::Dynamic set_value_dyn();

		static ::String toString(::cpp::VirtualArray this1);
		static ::Dynamic toString_dyn();

		static ::cpp::VirtualArray to( ::Dynamic v);
		static ::Dynamic to_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Ref

#endif /* INCLUDED_tink_core__Ref_Ref_Impl_ */ 
