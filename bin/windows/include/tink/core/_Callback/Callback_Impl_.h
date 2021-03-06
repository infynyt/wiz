#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#define INCLUDED_tink_core__Callback_Callback_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Callback,Callback_Impl_)

namespace tink{
namespace core{
namespace _Callback{


class HXCPP_CLASS_ATTRIBUTES Callback_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Callback_Impl__obj OBJ_;
		Callback_Impl__obj();

	public:
		enum { _hx_ClassId = 0x10af39f4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Callback.Callback_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Callback.Callback_Impl_"); }

		inline static ::hx::ObjectPtr< Callback_Impl__obj > __new() {
			::hx::ObjectPtr< Callback_Impl__obj > __this = new Callback_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Callback_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Callback_Impl__obj *__this = (Callback_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Callback_Impl__obj), false, "tink.core._Callback.Callback_Impl_"));
			*(void **)__this = Callback_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Callback_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Callback_Impl_",45,8c,62,d2); }

		static void __boot();
		static  ::Dynamic _new( ::Dynamic f);
		static ::Dynamic _new_dyn();

		static  ::Dynamic toFunction( ::Dynamic this1);
		static ::Dynamic toFunction_dyn();

		static int depth;
		static int MAX_DEPTH;
		static void invoke( ::Dynamic this1, ::Dynamic data);
		static ::Dynamic invoke_dyn();

		static  ::Dynamic fromNiladic( ::Dynamic f);
		static ::Dynamic fromNiladic_dyn();

		static  ::Dynamic fromMany(::Array< ::Dynamic> callbacks);
		static ::Dynamic fromMany_dyn();

		static void defer( ::Dynamic f);
		static ::Dynamic defer_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Callback

#endif /* INCLUDED_tink_core__Callback_Callback_Impl_ */ 
