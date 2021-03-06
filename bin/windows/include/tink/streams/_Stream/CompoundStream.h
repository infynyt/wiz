#ifndef INCLUDED_tink_streams__Stream_CompoundStream
#define INCLUDED_tink_streams__Stream_CompoundStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,Conclusion)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,CompoundStream)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES CompoundStream_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef CompoundStream_obj OBJ_;
		CompoundStream_obj();

	public:
		enum { _hx_ClassId = 0x56b49549 };

		void __construct(::Array< ::Dynamic> parts);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams._Stream.CompoundStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams._Stream.CompoundStream"); }
		static ::hx::ObjectPtr< CompoundStream_obj > __new(::Array< ::Dynamic> parts);
		static ::hx::ObjectPtr< CompoundStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> parts);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompoundStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompoundStream",6b,c2,13,72); }

		static void consumeParts(::Array< ::Dynamic> parts, ::Dynamic handler, ::Dynamic cb);
		static ::Dynamic consumeParts_dyn();

		static ::Dynamic of(::Array< ::Dynamic> streams);
		static ::Dynamic of_dyn();

		::Array< ::Dynamic> parts;
		bool get_depleted();

		::Dynamic next();

		void decompose(::Array< ::Dynamic> into);

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_CompoundStream */ 
