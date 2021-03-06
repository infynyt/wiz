#ifndef INCLUDED_tink_io_std_OutputSink
#define INCLUDED_tink_io_std_OutputSink

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkBase)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS2(tink,io,WorkerObject)
HX_DECLARE_CLASS3(tink,io,std,OutputSink)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace std{


class HXCPP_CLASS_ATTRIBUTES OutputSink_obj : public  ::tink::io::SinkBase_obj
{
	public:
		typedef  ::tink::io::SinkBase_obj super;
		typedef OutputSink_obj OBJ_;
		OutputSink_obj();

	public:
		enum { _hx_ClassId = 0x1eacaafb };

		void __construct(::String name, ::haxe::io::Output target,::Dynamic worker);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.io.std.OutputSink")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.io.std.OutputSink"); }
		static ::hx::ObjectPtr< OutputSink_obj > __new(::String name, ::haxe::io::Output target,::Dynamic worker);
		static ::hx::ObjectPtr< OutputSink_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::haxe::io::Output target,::Dynamic worker);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutputSink_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutputSink",14,ea,f8,a4); }

		::String name;
		 ::haxe::io::Output target;
		::Dynamic worker;
		::Dynamic consume(::Dynamic source, ::Dynamic options);

};

} // end namespace tink
} // end namespace io
} // end namespace std

#endif /* INCLUDED_tink_io_std_OutputSink */ 
