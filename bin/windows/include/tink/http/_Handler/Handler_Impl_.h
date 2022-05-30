#ifndef INCLUDED_tink_http__Handler_Handler_Impl_
#define INCLUDED_tink_http__Handler_Handler_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,HandlerObject)
HX_DECLARE_CLASS2(tink,http,IncomingRequest)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS3(tink,http,_Handler,Handler_Impl_)

namespace tink{
namespace http{
namespace _Handler{


class HXCPP_CLASS_ATTRIBUTES Handler_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Handler_Impl__obj OBJ_;
		Handler_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5c1c8ec5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Handler.Handler_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Handler.Handler_Impl_"); }

		inline static ::hx::ObjectPtr< Handler_Impl__obj > __new() {
			::hx::ObjectPtr< Handler_Impl__obj > __this = new Handler_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Handler_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Handler_Impl__obj *__this = (Handler_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Handler_Impl__obj), false, "tink.http._Handler.Handler_Impl_"));
			*(void **)__this = Handler_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Handler_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Handler_Impl_",ca,2f,2c,64); }

		static ::Dynamic ofFunc( ::Dynamic f);
		static ::Dynamic ofFunc_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Handler

#endif /* INCLUDED_tink_http__Handler_Handler_Impl_ */ 
