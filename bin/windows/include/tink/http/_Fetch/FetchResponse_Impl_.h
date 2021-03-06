#ifndef INCLUDED_tink_http__Fetch_FetchResponse_Impl_
#define INCLUDED_tink_http__Fetch_FetchResponse_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,http,_Fetch,FetchResponse_Impl_)

namespace tink{
namespace http{
namespace _Fetch{


class HXCPP_CLASS_ATTRIBUTES FetchResponse_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FetchResponse_Impl__obj OBJ_;
		FetchResponse_Impl__obj();

	public:
		enum { _hx_ClassId = 0x706f0b26 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Fetch.FetchResponse_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Fetch.FetchResponse_Impl_"); }

		inline static ::hx::ObjectPtr< FetchResponse_Impl__obj > __new() {
			::hx::ObjectPtr< FetchResponse_Impl__obj > __this = new FetchResponse_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FetchResponse_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FetchResponse_Impl__obj *__this = (FetchResponse_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FetchResponse_Impl__obj), false, "tink.http._Fetch.FetchResponse_Impl_"));
			*(void **)__this = FetchResponse_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FetchResponse_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FetchResponse_Impl_",9b,93,47,bc); }

		static ::Dynamic all(::Dynamic this1);
		static ::Dynamic all_dyn();

		static ::Dynamic progress(::Dynamic this1);
		static ::Dynamic progress_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Fetch

#endif /* INCLUDED_tink_http__Fetch_FetchResponse_Impl_ */ 
