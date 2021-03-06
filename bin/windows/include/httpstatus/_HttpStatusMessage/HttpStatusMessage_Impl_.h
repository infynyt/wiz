#ifndef INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_
#define INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(httpstatus,_HttpStatusMessage,HttpStatusMessage_Impl_)

namespace httpstatus{
namespace _HttpStatusMessage{


class HXCPP_CLASS_ATTRIBUTES HttpStatusMessage_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HttpStatusMessage_Impl__obj OBJ_;
		HttpStatusMessage_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0de4d9f9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_"); }

		inline static ::hx::ObjectPtr< HttpStatusMessage_Impl__obj > __new() {
			::hx::ObjectPtr< HttpStatusMessage_Impl__obj > __this = new HttpStatusMessage_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HttpStatusMessage_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HttpStatusMessage_Impl__obj *__this = (HttpStatusMessage_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HttpStatusMessage_Impl__obj), false, "httpstatus._HttpStatusMessage.HttpStatusMessage_Impl_"));
			*(void **)__this = HttpStatusMessage_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HttpStatusMessage_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HttpStatusMessage_Impl_",4d,ec,1b,89); }

		static ::String _new(int statusCode);
		static ::Dynamic _new_dyn();

		static ::String fromCode(int statusCode);
		static ::Dynamic fromCode_dyn();

};

} // end namespace httpstatus
} // end namespace _HttpStatusMessage

#endif /* INCLUDED_httpstatus__HttpStatusMessage_HttpStatusMessage_Impl_ */ 
