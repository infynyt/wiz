#ifndef INCLUDED_tink_io_std_InputSource
#define INCLUDED_tink_io_std_InputSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(tink,io,WorkerObject)
HX_DECLARE_CLASS3(tink,io,std,InputSource)
HX_DECLARE_CLASS2(tink,streams,Generator)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace std{


class HXCPP_CLASS_ATTRIBUTES InputSource_obj : public  ::tink::streams::Generator_obj
{
	public:
		typedef  ::tink::streams::Generator_obj super;
		typedef InputSource_obj OBJ_;
		InputSource_obj();

	public:
		enum { _hx_ClassId = 0x0f2d2d9e };

		void __construct(::String name, ::haxe::io::Input target,::Dynamic worker, ::haxe::io::Bytes buf,int offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.io.std.InputSource")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.io.std.InputSource"); }
		static ::hx::ObjectPtr< InputSource_obj > __new(::String name, ::haxe::io::Input target,::Dynamic worker, ::haxe::io::Bytes buf,int offset);
		static ::hx::ObjectPtr< InputSource_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::haxe::io::Input target,::Dynamic worker, ::haxe::io::Bytes buf,int offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InputSource_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InputSource",65,24,98,0b); }

};

} // end namespace tink
} // end namespace io
} // end namespace std

#endif /* INCLUDED_tink_io_std_InputSource */ 
