#ifndef INCLUDED_tink_url__Auth_Auth_Impl_
#define INCLUDED_tink_url__Auth_Auth_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,url,_Auth,Auth_Impl_)

namespace tink{
namespace url{
namespace _Auth{


class HXCPP_CLASS_ATTRIBUTES Auth_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Auth_Impl__obj OBJ_;
		Auth_Impl__obj();

	public:
		enum { _hx_ClassId = 0x14f4a89e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._Auth.Auth_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._Auth.Auth_Impl_"); }

		inline static ::hx::ObjectPtr< Auth_Impl__obj > __new() {
			::hx::ObjectPtr< Auth_Impl__obj > __this = new Auth_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Auth_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Auth_Impl__obj *__this = (Auth_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Auth_Impl__obj), false, "tink.url._Auth.Auth_Impl_"));
			*(void **)__this = Auth_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Auth_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Auth_Impl_",28,9e,5a,57); }

		static ::String _new(::String user,::String password);
		static ::Dynamic _new_dyn();

		static ::String get_user(::String this1);
		static ::Dynamic get_user_dyn();

		static ::String get_password(::String this1);
		static ::Dynamic get_password_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _Auth

#endif /* INCLUDED_tink_url__Auth_Auth_Impl_ */ 
