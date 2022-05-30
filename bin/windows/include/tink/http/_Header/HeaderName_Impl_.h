#ifndef INCLUDED_tink_http__Header_HeaderName_Impl_
#define INCLUDED_tink_http__Header_HeaderName_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,http,_Header,HeaderName_Impl_)

namespace tink{
namespace http{
namespace _Header{


class HXCPP_CLASS_ATTRIBUTES HeaderName_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HeaderName_Impl__obj OBJ_;
		HeaderName_Impl__obj();

	public:
		enum { _hx_ClassId = 0x07f2e282 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Header.HeaderName_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Header.HeaderName_Impl_"); }

		inline static ::hx::ObjectPtr< HeaderName_Impl__obj > __new() {
			::hx::ObjectPtr< HeaderName_Impl__obj > __this = new HeaderName_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HeaderName_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HeaderName_Impl__obj *__this = (HeaderName_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HeaderName_Impl__obj), false, "tink.http._Header.HeaderName_Impl_"));
			*(void **)__this = HeaderName_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HeaderName_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HeaderName_Impl_",38,35,66,b6); }

		static void __boot();
		static ::String REFERER;
		static ::String HOST;
		static ::String SET_COOKIE;
		static ::String COOKIE;
		static ::String CONTENT_TYPE;
		static ::String CONTENT_LENGTH;
		static ::String CONTENT_DISPOSITION;
		static ::String CONTENT_RANGE;
		static ::String ACCEPT;
		static ::String ACCEPT_ENCODING;
		static ::String TRANSFER_ENCODING;
		static ::String RANGE;
		static ::String LOCATION;
		static ::String AUTHORIZATION;
		static ::String ORIGIN;
		static ::String VARY;
		static ::String CACHE_CONTROL;
		static ::String EXPIRES;
		static ::String ACCESS_CONTROL_REQUEST_METHOD;
		static ::String ACCESS_CONTROL_REQUEST_HEADERS;
		static ::String ACCESS_CONTROL_ALLOW_ORIGIN;
		static ::String ACCESS_CONTROL_ALLOW_CREDENTIALS;
		static ::String ACCESS_CONTROL_EXPOSE_HEADERS;
		static ::String ACCESS_CONTROL_MAX_AGE;
		static ::String ACCESS_CONTROL_ALLOW_METHODS;
		static ::String ACCESS_CONTROL_ALLOW_HEADERS;
		static ::String _new(::String s);
		static ::Dynamic _new_dyn();

		static ::String ofString(::String s);
		static ::Dynamic ofString_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Header

#endif /* INCLUDED_tink_http__Header_HeaderName_Impl_ */ 
