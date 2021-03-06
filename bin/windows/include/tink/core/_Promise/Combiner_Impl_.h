#ifndef INCLUDED_tink_core__Promise_Combiner_Impl_
#define INCLUDED_tink_core__Promise_Combiner_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Promise,Combiner_Impl_)

namespace tink{
namespace core{
namespace _Promise{


class HXCPP_CLASS_ATTRIBUTES Combiner_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Combiner_Impl__obj OBJ_;
		Combiner_Impl__obj();

	public:
		enum { _hx_ClassId = 0x61af7884 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Promise.Combiner_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Promise.Combiner_Impl_"); }

		inline static ::hx::ObjectPtr< Combiner_Impl__obj > __new() {
			::hx::ObjectPtr< Combiner_Impl__obj > __this = new Combiner_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Combiner_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Combiner_Impl__obj *__this = (Combiner_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Combiner_Impl__obj), false, "tink.core._Promise.Combiner_Impl_"));
			*(void **)__this = Combiner_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Combiner_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Combiner_Impl_",13,66,bf,69); }

		static  ::Dynamic ofSync( ::Dynamic f);
		static ::Dynamic ofSync_dyn();

		static  ::Dynamic ofSafe( ::Dynamic f);
		static ::Dynamic ofSafe_dyn();

		static  ::Dynamic ofSafeSync( ::Dynamic f);
		static ::Dynamic ofSafeSync_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Promise

#endif /* INCLUDED_tink_core__Promise_Combiner_Impl_ */ 
