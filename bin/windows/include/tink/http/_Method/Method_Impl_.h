#ifndef INCLUDED_tink_http__Method_Method_Impl_
#define INCLUDED_tink_http__Method_Method_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,http,_Method,Method_Impl_)

namespace tink{
namespace http{
namespace _Method{


class HXCPP_CLASS_ATTRIBUTES Method_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Method_Impl__obj OBJ_;
		Method_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3d57aac7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Method.Method_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Method.Method_Impl_"); }

		inline static ::hx::ObjectPtr< Method_Impl__obj > __new() {
			::hx::ObjectPtr< Method_Impl__obj > __this = new Method_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Method_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Method_Impl__obj *__this = (Method_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Method_Impl__obj), false, "tink.http._Method.Method_Impl_"));
			*(void **)__this = Method_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Method_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Method_Impl_",61,5e,f0,c9); }

		static void __boot();
		static ::String GET;
		static ::String HEAD;
		static ::String OPTIONS;
		static ::String POST;
		static ::String PUT;
		static ::String PATCH;
		static ::String DELETE;
		static ::String ofString(::String s, ::Dynamic fallback);
		static ::Dynamic ofString_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Method

#endif /* INCLUDED_tink_http__Method_Method_Impl_ */ 
