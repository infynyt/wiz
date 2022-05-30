#ifndef INCLUDED_tink_io__Sink_Blackhole
#define INCLUDED_tink_io__Sink_Blackhole

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkBase)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS3(tink,io,_Sink,Blackhole)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace _Sink{


class HXCPP_CLASS_ATTRIBUTES Blackhole_obj : public  ::tink::io::SinkBase_obj
{
	public:
		typedef  ::tink::io::SinkBase_obj super;
		typedef Blackhole_obj OBJ_;
		Blackhole_obj();

	public:
		enum { _hx_ClassId = 0x4c349509 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._Sink.Blackhole")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._Sink.Blackhole"); }
		static ::hx::ObjectPtr< Blackhole_obj > __new();
		static ::hx::ObjectPtr< Blackhole_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Blackhole_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Blackhole",5f,ca,6e,bb); }

		static void __boot();
		static  ::tink::io::_Sink::Blackhole inst;
		::Dynamic consume(::Dynamic source, ::Dynamic options);

};

} // end namespace tink
} // end namespace io
} // end namespace _Sink

#endif /* INCLUDED_tink_io__Sink_Blackhole */ 
