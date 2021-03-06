#ifndef INCLUDED_tink_io_SinkBase
#define INCLUDED_tink_io_SinkBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkBase)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES SinkBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SinkBase_obj OBJ_;
		SinkBase_obj();

	public:
		enum { _hx_ClassId = 0x1efa06a0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io.SinkBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io.SinkBase"); }

		inline static ::hx::ObjectPtr< SinkBase_obj > __new() {
			::hx::ObjectPtr< SinkBase_obj > __this = new SinkBase_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SinkBase_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SinkBase_obj *__this = (SinkBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SinkBase_obj), false, "tink.io.SinkBase"));
			*(void **)__this = SinkBase_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SinkBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SinkBase",24,8c,b4,5c); }

		virtual bool get_sealed();
		::Dynamic get_sealed_dyn();

		virtual ::Dynamic consume(::Dynamic source, ::Dynamic options);
		::Dynamic consume_dyn();

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_SinkBase */ 
