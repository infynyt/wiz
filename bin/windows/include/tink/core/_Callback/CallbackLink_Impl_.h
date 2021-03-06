#ifndef INCLUDED_tink_core__Callback_CallbackLink_Impl_
#define INCLUDED_tink_core__Callback_CallbackLink_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Callback,CallbackLink_Impl_)

namespace tink{
namespace core{
namespace _Callback{


class HXCPP_CLASS_ATTRIBUTES CallbackLink_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CallbackLink_Impl__obj OBJ_;
		CallbackLink_Impl__obj();

	public:
		enum { _hx_ClassId = 0x35cb0572 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Callback.CallbackLink_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Callback.CallbackLink_Impl_"); }

		inline static ::hx::ObjectPtr< CallbackLink_Impl__obj > __new() {
			::hx::ObjectPtr< CallbackLink_Impl__obj > __this = new CallbackLink_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CallbackLink_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CallbackLink_Impl__obj *__this = (CallbackLink_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallbackLink_Impl__obj), false, "tink.core._Callback.CallbackLink_Impl_"));
			*(void **)__this = CallbackLink_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallbackLink_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallbackLink_Impl_",5f,16,19,6c); }

		static ::Dynamic _new( ::Dynamic link);
		static ::Dynamic _new_dyn();

		static void cancel(::Dynamic this1);
		static ::Dynamic cancel_dyn();

		static void dissolve(::Dynamic this1);
		static ::Dynamic dissolve_dyn();

		static void noop();
		static ::Dynamic noop_dyn();

		static  ::Dynamic toFunction(::Dynamic this1);
		static ::Dynamic toFunction_dyn();

		static  ::Dynamic toCallback(::Dynamic this1);
		static ::Dynamic toCallback_dyn();

		static ::Dynamic fromFunction( ::Dynamic f);
		static ::Dynamic fromFunction_dyn();

		static ::Dynamic join(::Dynamic this1,::Dynamic b);
		static ::Dynamic join_dyn();

		static ::Dynamic fromMany(::Array< ::Dynamic> callbacks);
		static ::Dynamic fromMany_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Callback

#endif /* INCLUDED_tink_core__Callback_CallbackLink_Impl_ */ 
