#ifndef INCLUDED_tink_streams__Stream_ErrorStream
#define INCLUDED_tink_streams__Stream_ErrorStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,ErrorStream)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES ErrorStream_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef ErrorStream_obj OBJ_;
		ErrorStream_obj();

	public:
		enum { _hx_ClassId = 0x1afcc8aa };

		void __construct( ::tink::core::TypedError error);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams._Stream.ErrorStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams._Stream.ErrorStream"); }
		static ::hx::ObjectPtr< ErrorStream_obj > __new( ::tink::core::TypedError error);
		static ::hx::ObjectPtr< ErrorStream_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::core::TypedError error);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ErrorStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ErrorStream",48,f2,cc,e3); }

		 ::tink::core::TypedError error;
		::Dynamic next();

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_ErrorStream */ 
