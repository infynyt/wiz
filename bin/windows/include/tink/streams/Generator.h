#ifndef INCLUDED_tink_streams_Generator
#define INCLUDED_tink_streams_Generator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,Generator)
HX_DECLARE_CLASS2(tink,streams,Step)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES Generator_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef Generator_obj OBJ_;
		Generator_obj();

	public:
		enum { _hx_ClassId = 0x50a767d2 };

		void __construct(::Dynamic upcoming);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams.Generator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams.Generator"); }
		static ::hx::ObjectPtr< Generator_obj > __new(::Dynamic upcoming);
		static ::hx::ObjectPtr< Generator_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic upcoming);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Generator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Generator",33,d8,43,36); }

		static  ::tink::streams::Generator stream( ::Dynamic step);
		static ::Dynamic stream_dyn();

		::Dynamic upcoming;
		::Dynamic next();

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Generator */ 
