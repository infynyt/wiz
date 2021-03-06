#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#define INCLUDED_tink_streams__Stream_Stream_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,Stream_Impl_)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES Stream_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stream_Impl__obj OBJ_;
		Stream_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5036bc9e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._Stream.Stream_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams._Stream.Stream_Impl_"); }

		inline static ::hx::ObjectPtr< Stream_Impl__obj > __new() {
			::hx::ObjectPtr< Stream_Impl__obj > __this = new Stream_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Stream_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Stream_Impl__obj *__this = (Stream_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stream_Impl__obj), false, "tink.streams._Stream.Stream_Impl_"));
			*(void **)__this = Stream_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stream_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stream_Impl_",40,fd,8a,3d); }

		static bool get_depleted(::Dynamic this1);
		static ::Dynamic get_depleted_dyn();

		static ::Dynamic dirty(::Dynamic this1);
		static ::Dynamic dirty_dyn();

		static ::Dynamic single( ::Dynamic i);
		static ::Dynamic single_dyn();

		static ::Dynamic ofIterator( ::Dynamic i);
		static ::Dynamic ofIterator_dyn();

		static ::Dynamic flatten(::Dynamic stream);
		static ::Dynamic flatten_dyn();

		static ::Dynamic future(::Dynamic f);
		static ::Dynamic future_dyn();

		static ::Dynamic promiseIdeal(::Dynamic f);
		static ::Dynamic promiseIdeal_dyn();

		static ::Dynamic promiseReal(::Dynamic f);
		static ::Dynamic promiseReal_dyn();

		static ::Dynamic promise(::Dynamic f);
		static ::Dynamic promise_dyn();

		static ::Dynamic ofError( ::tink::core::TypedError e);
		static ::Dynamic ofError_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_Stream_Impl_ */ 
