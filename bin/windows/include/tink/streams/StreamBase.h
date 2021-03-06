#ifndef INCLUDED_tink_streams_StreamBase
#define INCLUDED_tink_streams_StreamBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES StreamBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StreamBase_obj OBJ_;
		StreamBase_obj();

	public:
		enum { _hx_ClassId = 0x61521c8a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams.StreamBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams.StreamBase"); }
		static ::hx::ObjectPtr< StreamBase_obj > __new();
		static ::hx::ObjectPtr< StreamBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StreamBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("StreamBase",d1,6c,2c,85); }

		virtual bool get_depleted();
		::Dynamic get_depleted_dyn();

		int retainCount;
		 ::Dynamic retain();
		::Dynamic retain_dyn();

		virtual ::Dynamic next();
		::Dynamic next_dyn();

		::Dynamic regroup( ::Dynamic f);
		::Dynamic regroup_dyn();

		::Dynamic map( ::Dynamic f);
		::Dynamic map_dyn();

		::Dynamic filter( ::Dynamic f);
		::Dynamic filter_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		::Dynamic append(::Dynamic other);
		::Dynamic append_dyn();

		::Dynamic prepend(::Dynamic other);
		::Dynamic prepend_dyn();

		::Dynamic blend(::Dynamic other);
		::Dynamic blend_dyn();

		virtual void decompose(::Array< ::Dynamic> into);
		::Dynamic decompose_dyn();

		virtual ::Dynamic idealize( ::Dynamic rescue);
		::Dynamic idealize_dyn();

		::Dynamic reduce( ::Dynamic initial, ::Dynamic reducer);
		::Dynamic reduce_dyn();

		virtual ::Dynamic forEach( ::Dynamic handler);
		::Dynamic forEach_dyn();

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_StreamBase */ 
