#ifndef INCLUDED_tink_url__Host_Host_Impl_
#define INCLUDED_tink_url__Host_Host_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,url,_Host,Host_Impl_)

namespace tink{
namespace url{
namespace _Host{


class HXCPP_CLASS_ATTRIBUTES Host_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Host_Impl__obj OBJ_;
		Host_Impl__obj();

	public:
		enum { _hx_ClassId = 0x20d53a72 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._Host.Host_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._Host.Host_Impl_"); }

		inline static ::hx::ObjectPtr< Host_Impl__obj > __new() {
			::hx::ObjectPtr< Host_Impl__obj > __this = new Host_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Host_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Host_Impl__obj *__this = (Host_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Host_Impl__obj), false, "tink.url._Host.Host_Impl_"));
			*(void **)__this = Host_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Host_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Host_Impl_",28,8e,8a,61); }

		static ::String _new(::String name, ::Dynamic port);
		static ::Dynamic _new_dyn();

		static ::String get_name(::String this1);
		static ::Dynamic get_name_dyn();

		static  ::Dynamic get_port(::String this1);
		static ::Dynamic get_port_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _Host

#endif /* INCLUDED_tink_url__Host_Host_Impl_ */ 
