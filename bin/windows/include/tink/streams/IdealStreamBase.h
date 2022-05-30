#ifndef INCLUDED_tink_streams_IdealStreamBase
#define INCLUDED_tink_streams_IdealStreamBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,IdealStreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES IdealStreamBase_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef IdealStreamBase_obj OBJ_;
		IdealStreamBase_obj();

	public:
		enum { _hx_ClassId = 0x79ca79c9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams.IdealStreamBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams.IdealStreamBase"); }
		static ::hx::ObjectPtr< IdealStreamBase_obj > __new();
		static ::hx::ObjectPtr< IdealStreamBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IdealStreamBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IdealStreamBase",86,d8,f0,d8); }

		::Dynamic idealize( ::Dynamic _tmp_rescue);

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_IdealStreamBase */ 
