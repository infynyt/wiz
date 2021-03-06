#ifndef INCLUDED_tink_chunk_ByteChunk
#define INCLUDED_tink_chunk_ByteChunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(tink,chunk,ByteChunk)
HX_DECLARE_CLASS2(tink,chunk,ChunkBase)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES ByteChunk_obj : public  ::tink::chunk::ChunkBase_obj
{
	public:
		typedef  ::tink::chunk::ChunkBase_obj super;
		typedef ByteChunk_obj OBJ_;
		ByteChunk_obj();

	public:
		enum { _hx_ClassId = 0x1854896e };

		void __construct(::Array< unsigned char > data,int from,int to);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.chunk.ByteChunk")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.chunk.ByteChunk"); }
		static ::hx::ObjectPtr< ByteChunk_obj > __new(::Array< unsigned char > data,int from,int to);
		static ::hx::ObjectPtr< ByteChunk_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< unsigned char > data,int from,int to);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ByteChunk_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ByteChunk",25,7a,ca,7d); }

		static ::Dynamic of( ::haxe::io::Bytes b);
		static ::Dynamic of_dyn();

		::Array< unsigned char > data;
		int from;
		int to;
		 ::haxe::io::Bytes wrapped;
		 ::haxe::io::Bytes get_wrapped();
		::Dynamic get_wrapped_dyn();

		int getByte(int index);
		::Dynamic getByte_dyn();

		void flatten(::Array< ::Dynamic> into);

		int getLength();
		::Dynamic getLength_dyn();

		 ::tink::chunk::ByteChunk getSlice(int from,int to);
		::Dynamic getSlice_dyn();

		::Dynamic slice(int from,int to);
		::Dynamic slice_dyn();

		void blitTo( ::haxe::io::Bytes target,int offset);
		::Dynamic blitTo_dyn();

		 ::haxe::io::Bytes toBytes();
		::Dynamic toBytes_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace tink
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_ByteChunk */ 
