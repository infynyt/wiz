#ifndef INCLUDED_tink_streams__Stream_RegroupStream
#define INCLUDED_tink_streams__Stream_RegroupStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams__Stream_CompoundStream
#include <tink/streams/_Stream/CompoundStream.h>
#endif
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,CompoundStream)
HX_DECLARE_CLASS3(tink,streams,_Stream,RegroupStream)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES RegroupStream_obj : public  ::tink::streams::_Stream::CompoundStream_obj
{
	public:
		typedef  ::tink::streams::_Stream::CompoundStream_obj super;
		typedef RegroupStream_obj OBJ_;
		RegroupStream_obj();

	public:
		enum { _hx_ClassId = 0x1850db0e };

		void __construct(::Dynamic source, ::Dynamic f,::Dynamic prev,::cpp::VirtualArray buf);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams._Stream.RegroupStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams._Stream.RegroupStream"); }
		static ::hx::ObjectPtr< RegroupStream_obj > __new(::Dynamic source, ::Dynamic f,::Dynamic prev,::cpp::VirtualArray buf);
		static ::hx::ObjectPtr< RegroupStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic source, ::Dynamic f,::Dynamic prev,::cpp::VirtualArray buf);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RegroupStream_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RegroupStream",2c,28,b5,d4); }

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_RegroupStream */ 
