#ifndef INCLUDED_tink_streams__RealStream_RealStream_Impl_
#define INCLUDED_tink_streams__RealStream_RealStream_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_RealStream,RealStream_Impl_)

namespace tink{
namespace streams{
namespace _RealStream{


class HXCPP_CLASS_ATTRIBUTES RealStream_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RealStream_Impl__obj OBJ_;
		RealStream_Impl__obj();

	public:
		enum { _hx_ClassId = 0x76df9c56 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._RealStream.RealStream_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams._RealStream.RealStream_Impl_"); }

		inline static ::hx::ObjectPtr< RealStream_Impl__obj > __new() {
			::hx::ObjectPtr< RealStream_Impl__obj > __this = new RealStream_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RealStream_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			RealStream_Impl__obj *__this = (RealStream_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RealStream_Impl__obj), false, "tink.streams._RealStream.RealStream_Impl_"));
			*(void **)__this = RealStream_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RealStream_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RealStream_Impl_",be,b9,1f,03); }

		static ::Dynamic promiseOfIdealStream(::Dynamic p);
		static ::Dynamic promiseOfIdealStream_dyn();

		static ::Dynamic promiseOfStreamNoise(::Dynamic p);
		static ::Dynamic promiseOfStreamNoise_dyn();

		static ::Dynamic promiseOfRealStream(::Dynamic p);
		static ::Dynamic promiseOfRealStream_dyn();

		static ::Dynamic promiseOfStreamError(::Dynamic p);
		static ::Dynamic promiseOfStreamError_dyn();

		static ::Dynamic collect(::Dynamic this1);
		static ::Dynamic collect_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _RealStream

#endif /* INCLUDED_tink_streams__RealStream_RealStream_Impl_ */ 
