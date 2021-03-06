#ifndef INCLUDED_tink_streams_Empty
#define INCLUDED_tink_streams_Empty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,Empty)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES Empty_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef Empty_obj OBJ_;
		Empty_obj();

	public:
		enum { _hx_ClassId = 0x0b521554 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams.Empty")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams.Empty"); }
		static ::hx::ObjectPtr< Empty_obj > __new();
		static ::hx::ObjectPtr< Empty_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Empty_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Empty",6d,aa,07,03); }

		static void __boot();
		static  ::tink::streams::Empty inst;
		static ::Dynamic make();
		static ::Dynamic make_dyn();

		bool get_depleted();

		::Dynamic next();

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Empty */ 
