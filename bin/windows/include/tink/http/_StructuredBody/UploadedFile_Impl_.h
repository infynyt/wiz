#ifndef INCLUDED_tink_http__StructuredBody_UploadedFile_Impl_
#define INCLUDED_tink_http__StructuredBody_UploadedFile_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(tink,http,_StructuredBody,UploadedFile_Impl_)

namespace tink{
namespace http{
namespace _StructuredBody{


class HXCPP_CLASS_ATTRIBUTES UploadedFile_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UploadedFile_Impl__obj OBJ_;
		UploadedFile_Impl__obj();

	public:
		enum { _hx_ClassId = 0x526d574c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.http._StructuredBody.UploadedFile_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.http._StructuredBody.UploadedFile_Impl_"); }

		inline static ::hx::ObjectPtr< UploadedFile_Impl__obj > __new() {
			::hx::ObjectPtr< UploadedFile_Impl__obj > __this = new UploadedFile_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< UploadedFile_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			UploadedFile_Impl__obj *__this = (UploadedFile_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UploadedFile_Impl__obj), false, "tink.http._StructuredBody.UploadedFile_Impl_"));
			*(void **)__this = UploadedFile_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UploadedFile_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UploadedFile_Impl_",fc,a4,b5,40); }

		static  ::Dynamic ofBlob(::String name,::String type, ::haxe::io::Bytes data);
		static ::Dynamic ofBlob_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _StructuredBody

#endif /* INCLUDED_tink_http__StructuredBody_UploadedFile_Impl_ */ 
