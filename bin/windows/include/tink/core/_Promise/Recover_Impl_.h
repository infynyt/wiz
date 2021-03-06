#ifndef INCLUDED_tink_core__Promise_Recover_Impl_
#define INCLUDED_tink_core__Promise_Recover_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Promise,Recover_Impl_)

namespace tink{
namespace core{
namespace _Promise{


class HXCPP_CLASS_ATTRIBUTES Recover_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Recover_Impl__obj OBJ_;
		Recover_Impl__obj();

	public:
		enum { _hx_ClassId = 0x60f533b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Promise.Recover_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Promise.Recover_Impl_"); }

		inline static ::hx::ObjectPtr< Recover_Impl__obj > __new() {
			::hx::ObjectPtr< Recover_Impl__obj > __this = new Recover_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Recover_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Recover_Impl__obj *__this = (Recover_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Recover_Impl__obj), false, "tink.core._Promise.Recover_Impl_"));
			*(void **)__this = Recover_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Recover_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Recover_Impl_",24,72,c1,1b); }

		static  ::Dynamic ofSync( ::Dynamic f);
		static ::Dynamic ofSync_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Promise

#endif /* INCLUDED_tink_core__Promise_Recover_Impl_ */ 
