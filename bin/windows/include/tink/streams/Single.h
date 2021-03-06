#ifndef INCLUDED_tink_streams_Single
#define INCLUDED_tink_streams_Single

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
HX_DECLARE_CLASS2(tink,streams,Single)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES Single_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef Single_obj OBJ_;
		Single_obj();

	public:
		enum { _hx_ClassId = 0x2688f9e1 };

		void __construct(::Dynamic value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams.Single")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams.Single"); }
		static ::hx::ObjectPtr< Single_obj > __new(::Dynamic value);
		static ::hx::ObjectPtr< Single_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Single_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Single",a8,da,b5,ed); }

		::Dynamic value;
		::Dynamic next();

		::Dynamic forEach( ::Dynamic handle);

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Single */ 
