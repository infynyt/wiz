#ifndef INCLUDED_haxe_zip_Tools
#define INCLUDED_haxe_zip_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,zip,Tools)

namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x7e588a84 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.zip.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.zip.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "haxe.zip.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static void uncompress( ::Dynamic f);
		static ::Dynamic uncompress_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_Tools */ 
