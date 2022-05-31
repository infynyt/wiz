#ifndef INCLUDED_tech_infynyt_wiz_Handler
#define INCLUDED_tech_infynyt_wiz_Handler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(tech,infynyt,wiz,Handler)

namespace tech{
namespace infynyt{
namespace wiz{


class HXCPP_CLASS_ATTRIBUTES Handler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Handler_obj OBJ_;
		Handler_obj();

	public:
		enum { _hx_ClassId = 0x079238d1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tech.infynyt.wiz.Handler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tech.infynyt.wiz.Handler"); }

		inline static ::hx::ObjectPtr< Handler_obj > __new() {
			::hx::ObjectPtr< Handler_obj > __this = new Handler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Handler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Handler_obj *__this = (Handler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Handler_obj), false, "tech.infynyt.wiz.Handler"));
			*(void **)__this = Handler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Handler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Handler",aa,d7,26,13); }

		static bool install(::String name);
		static ::Dynamic install_dyn();

		static bool uninstall(::String name);
		static ::Dynamic uninstall_dyn();

		static  ::Dynamic fetch(::String name);
		static ::Dynamic fetch_dyn();

		static  ::haxe::io::Bytes download( ::Dynamic pkg);
		static ::Dynamic download_dyn();

		static bool execute(::String bin);
		static ::Dynamic execute_dyn();

		static bool clean(::String dir);
		static ::Dynamic clean_dyn();

};

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz

#endif /* INCLUDED_tech_infynyt_wiz_Handler */ 
