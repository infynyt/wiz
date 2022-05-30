#ifndef INCLUDED_tink_io__Sink_ErrorSink
#define INCLUDED_tink_io__Sink_ErrorSink

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkBase)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS3(tink,io,_Sink,ErrorSink)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace _Sink{


class HXCPP_CLASS_ATTRIBUTES ErrorSink_obj : public  ::tink::io::SinkBase_obj
{
	public:
		typedef  ::tink::io::SinkBase_obj super;
		typedef ErrorSink_obj OBJ_;
		ErrorSink_obj();

	public:
		enum { _hx_ClassId = 0x55f9ae61 };

		void __construct( ::tink::core::TypedError error);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.io._Sink.ErrorSink")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.io._Sink.ErrorSink"); }
		static ::hx::ObjectPtr< ErrorSink_obj > __new( ::tink::core::TypedError error);
		static ::hx::ObjectPtr< ErrorSink_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::core::TypedError error);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ErrorSink_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ErrorSink",1b,f2,8e,14); }

		 ::tink::core::TypedError error;
		bool get_sealed();

		::Dynamic consume(::Dynamic source, ::Dynamic options);

};

} // end namespace tink
} // end namespace io
} // end namespace _Sink

#endif /* INCLUDED_tink_io__Sink_ErrorSink */ 
