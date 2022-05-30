#ifndef INCLUDED_tink_http__Header_ReadonlyMap_Impl_
#define INCLUDED_tink_http__Header_ReadonlyMap_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(tink,http,_Header,ReadonlyMap_Impl_)

namespace tink{
namespace http{
namespace _Header{


class HXCPP_CLASS_ATTRIBUTES ReadonlyMap_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ReadonlyMap_Impl__obj OBJ_;
		ReadonlyMap_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0944d2a8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._Header.ReadonlyMap_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._Header.ReadonlyMap_Impl_"); }

		inline static ::hx::ObjectPtr< ReadonlyMap_Impl__obj > __new() {
			::hx::ObjectPtr< ReadonlyMap_Impl__obj > __this = new ReadonlyMap_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ReadonlyMap_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ReadonlyMap_Impl__obj *__this = (ReadonlyMap_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ReadonlyMap_Impl__obj), false, "tink.http._Header.ReadonlyMap_Impl_"));
			*(void **)__this = ReadonlyMap_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ReadonlyMap_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ReadonlyMap_Impl_",fa,07,8c,63); }

		static  ::Dynamic get(::Dynamic this1, ::Dynamic key);
		static ::Dynamic get_dyn();

		static bool exists(::Dynamic this1, ::Dynamic key);
		static ::Dynamic exists_dyn();

		static  ::Dynamic iterator(::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static  ::Dynamic keys(::Dynamic this1);
		static ::Dynamic keys_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Header

#endif /* INCLUDED_tink_http__Header_ReadonlyMap_Impl_ */ 
