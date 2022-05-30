#ifndef INCLUDED_tink_streams__IdealStream_IdealStream_Impl_
#define INCLUDED_tink_streams__IdealStream_IdealStream_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_IdealStream,IdealStream_Impl_)

namespace tink{
namespace streams{
namespace _IdealStream{


class HXCPP_CLASS_ATTRIBUTES IdealStream_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IdealStream_Impl__obj OBJ_;
		IdealStream_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0501f2ee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._IdealStream.IdealStream_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams._IdealStream.IdealStream_Impl_"); }

		inline static ::hx::ObjectPtr< IdealStream_Impl__obj > __new() {
			::hx::ObjectPtr< IdealStream_Impl__obj > __this = new IdealStream_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IdealStream_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			IdealStream_Impl__obj *__this = (IdealStream_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IdealStream_Impl__obj), false, "tink.streams._IdealStream.IdealStream_Impl_"));
			*(void **)__this = IdealStream_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IdealStream_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IdealStream_Impl_",35,80,09,5c); }

		static ::Dynamic promiseOfIdealStream(::Dynamic p);
		static ::Dynamic promiseOfIdealStream_dyn();

		static ::Dynamic promiseOfStreamNoise(::Dynamic p);
		static ::Dynamic promiseOfStreamNoise_dyn();

		static ::Dynamic collect(::Dynamic this1);
		static ::Dynamic collect_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _IdealStream

#endif /* INCLUDED_tink_streams__IdealStream_IdealStream_Impl_ */ 
