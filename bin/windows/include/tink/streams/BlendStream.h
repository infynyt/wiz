#ifndef INCLUDED_tink_streams_BlendStream
#define INCLUDED_tink_streams_BlendStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
HX_DECLARE_CLASS2(tink,streams,BlendStream)
HX_DECLARE_CLASS2(tink,streams,Generator)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES BlendStream_obj : public  ::tink::streams::Generator_obj
{
	public:
		typedef  ::tink::streams::Generator_obj super;
		typedef BlendStream_obj OBJ_;
		BlendStream_obj();

	public:
		enum { _hx_ClassId = 0x1f4a9f54 };

		void __construct(::Dynamic a,::Dynamic b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams.BlendStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams.BlendStream"); }
		static ::hx::ObjectPtr< BlendStream_obj > __new(::Dynamic a,::Dynamic b);
		static ::hx::ObjectPtr< BlendStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic a,::Dynamic b);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlendStream_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlendStream",91,9b,d1,a9); }

};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_BlendStream */ 
