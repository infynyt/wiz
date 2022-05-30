#ifndef INCLUDED_tink_streams_SignalStream
#define INCLUDED_tink_streams_SignalStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)
HX_DECLARE_CLASS2(tink,streams,Generator)
HX_DECLARE_CLASS2(tink,streams,SignalStream)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES SignalStream_obj : public  ::tink::streams::Generator_obj
{
	public:
		typedef  ::tink::streams::Generator_obj super;
		typedef SignalStream_obj OBJ_;
		SignalStream_obj();

	public:
		enum { _hx_ClassId = 0x1fa49121 };

		void __construct(::Dynamic signal);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams.SignalStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams.SignalStream"); }
		static ::hx::ObjectPtr< SignalStream_obj > __new(::Dynamic signal);
		static ::hx::ObjectPtr< SignalStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic signal);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SignalStream_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SignalStream",28,c1,e8,aa); }

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_SignalStream */ 
