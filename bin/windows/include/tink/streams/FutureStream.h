#ifndef INCLUDED_tink_streams_FutureStream
#define INCLUDED_tink_streams_FutureStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,FutureStream)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES FutureStream_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef FutureStream_obj OBJ_;
		FutureStream_obj();

	public:
		enum { _hx_ClassId = 0x04fe513c };

		void __construct(::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams.FutureStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams.FutureStream"); }
		static ::hx::ObjectPtr< FutureStream_obj > __new(::Dynamic f);
		static ::hx::ObjectPtr< FutureStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FutureStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FutureStream",43,81,42,90); }

		::Dynamic f;
		::Dynamic next();

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_FutureStream */ 