#ifndef INCLUDED_tink_http__Client_Client_Impl_
#define INCLUDED_tink_http__Client_Client_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS3(tink,http,_Client,Client_Impl_)

namespace tink{
namespace http{
namespace _Client{


class HXCPP_CLASS_ATTRIBUTES Client_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Client_Impl__obj OBJ_;
		Client_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2ee0229b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Client.Client_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Client.Client_Impl_"); }

		inline static ::hx::ObjectPtr< Client_Impl__obj > __new() {
			::hx::ObjectPtr< Client_Impl__obj > __this = new Client_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Client_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Client_Impl__obj *__this = (Client_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Client_Impl__obj), false, "tink.http._Client.Client_Impl_"));
			*(void **)__this = Client_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Client_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Client_Impl_",4b,9d,a8,62); }

		static ::Dynamic fetch( ::Dynamic url, ::Dynamic options);
		static ::Dynamic fetch_dyn();

		static ::Dynamic augment(::Dynamic this1, ::Dynamic pipeline);
		static ::Dynamic augment_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Client

#endif /* INCLUDED_tink_http__Client_Client_Impl_ */ 
