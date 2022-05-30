#ifndef INCLUDED_tink_io__PipeOptions_PipeOptions_Impl_
#define INCLUDED_tink_io__PipeOptions_PipeOptions_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,io,_PipeOptions,PipeOptions_Impl_)

namespace tink{
namespace io{
namespace _PipeOptions{


class HXCPP_CLASS_ATTRIBUTES PipeOptions_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PipeOptions_Impl__obj OBJ_;
		PipeOptions_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6fe80d67 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._PipeOptions.PipeOptions_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._PipeOptions.PipeOptions_Impl_"); }

		inline static ::hx::ObjectPtr< PipeOptions_Impl__obj > __new() {
			::hx::ObjectPtr< PipeOptions_Impl__obj > __this = new PipeOptions_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PipeOptions_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PipeOptions_Impl__obj *__this = (PipeOptions_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PipeOptions_Impl__obj), false, "tink.io._PipeOptions.PipeOptions_Impl_"));
			*(void **)__this = PipeOptions_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PipeOptions_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PipeOptions_Impl_",50,e1,eb,2d); }

		static bool get_end( ::Dynamic this1);
		static ::Dynamic get_end_dyn();

		static bool get_destructive( ::Dynamic this1);
		static ::Dynamic get_destructive_dyn();

};

} // end namespace tink
} // end namespace io
} // end namespace _PipeOptions

#endif /* INCLUDED_tink_io__PipeOptions_PipeOptions_Impl_ */ 
