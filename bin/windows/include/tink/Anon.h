#ifndef INCLUDED_tink_Anon
#define INCLUDED_tink_Anon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tink,Anon)

namespace tink{


class HXCPP_CLASS_ATTRIBUTES Anon_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Anon_obj OBJ_;
		Anon_obj();

	public:
		enum { _hx_ClassId = 0x74e67b5e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.Anon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.Anon"); }

		inline static ::hx::ObjectPtr< Anon_obj > __new() {
			::hx::ObjectPtr< Anon_obj > __this = new Anon_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Anon_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Anon_obj *__this = (Anon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Anon_obj), false, "tink.Anon"));
			*(void **)__this = Anon_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Anon_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Anon",6c,b7,4a,2b); }

		static  ::Dynamic getExistentFields( ::Dynamic o);
		static ::Dynamic getExistentFields_dyn();

};

} // end namespace tink

#endif /* INCLUDED_tink_Anon */ 
