#ifndef INCLUDED_tink_streams_IdealizeStream
#define INCLUDED_tink_streams_IdealizeStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_IdealStreamBase
#include <tink/streams/IdealStreamBase.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,IdealStreamBase)
HX_DECLARE_CLASS2(tink,streams,IdealizeStream)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES IdealizeStream_obj : public  ::tink::streams::IdealStreamBase_obj
{
	public:
		typedef  ::tink::streams::IdealStreamBase_obj super;
		typedef IdealizeStream_obj OBJ_;
		IdealizeStream_obj();

	public:
		enum { _hx_ClassId = 0x15b188e0 };

		void __construct(::Dynamic target, ::Dynamic rescue);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams.IdealizeStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams.IdealizeStream"); }
		static ::hx::ObjectPtr< IdealizeStream_obj > __new(::Dynamic target, ::Dynamic rescue);
		static ::hx::ObjectPtr< IdealizeStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic target, ::Dynamic rescue);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IdealizeStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IdealizeStream",df,18,9d,1b); }

		::Dynamic target;
		 ::Dynamic rescue;
		Dynamic rescue_dyn() { return rescue;}
		bool get_depleted();

		::Dynamic next();

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_IdealizeStream */ 
