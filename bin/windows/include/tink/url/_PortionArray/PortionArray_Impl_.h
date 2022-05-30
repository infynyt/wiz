#ifndef INCLUDED_tink_url__PortionArray_PortionArray_Impl_
#define INCLUDED_tink_url__PortionArray_PortionArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,url,_PortionArray,PortionArray_Impl_)

namespace tink{
namespace url{
namespace _PortionArray{


class HXCPP_CLASS_ATTRIBUTES PortionArray_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PortionArray_Impl__obj OBJ_;
		PortionArray_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0112ea86 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._PortionArray.PortionArray_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._PortionArray.PortionArray_Impl_"); }

		inline static ::hx::ObjectPtr< PortionArray_Impl__obj > __new() {
			::hx::ObjectPtr< PortionArray_Impl__obj > __this = new PortionArray_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PortionArray_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PortionArray_Impl__obj *__this = (PortionArray_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PortionArray_Impl__obj), false, "tink.url._PortionArray.PortionArray_Impl_"));
			*(void **)__this = PortionArray_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PortionArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PortionArray_Impl_",72,19,a7,fd); }

		static ::Array< ::String > toStringArray(::Array< ::String > this1);
		static ::Dynamic toStringArray_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _PortionArray

#endif /* INCLUDED_tink_url__PortionArray_PortionArray_Impl_ */ 
