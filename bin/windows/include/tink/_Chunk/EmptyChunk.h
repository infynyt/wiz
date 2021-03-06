#ifndef INCLUDED_tink__Chunk_EmptyChunk
#define INCLUDED_tink__Chunk_EmptyChunk

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
HX_DECLARE_CLASS2(tink,_Chunk,EmptyChunk)
HX_DECLARE_CLASS2(tink,chunk,ChunkBase)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace _Chunk{


class HXCPP_CLASS_ATTRIBUTES EmptyChunk_obj : public  ::tink::chunk::ChunkBase_obj
{
	public:
		typedef  ::tink::chunk::ChunkBase_obj super;
		typedef EmptyChunk_obj OBJ_;
		EmptyChunk_obj();

	public:
		enum { _hx_ClassId = 0x01566580 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink._Chunk.EmptyChunk")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink._Chunk.EmptyChunk"); }
		static ::hx::ObjectPtr< EmptyChunk_obj > __new();
		static ::hx::ObjectPtr< EmptyChunk_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EmptyChunk_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("EmptyChunk",c0,a0,c6,bc); }

		static void __boot();
		static  ::haxe::io::Bytes EMPTY;
		int getByte(int i);
		::Dynamic getByte_dyn();

		int getLength();
		::Dynamic getLength_dyn();

		::Dynamic slice(int from,int to);
		::Dynamic slice_dyn();

		void blitTo( ::haxe::io::Bytes target,int offset);
		::Dynamic blitTo_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::haxe::io::Bytes toBytes();
		::Dynamic toBytes_dyn();

};

} // end namespace tink
} // end namespace _Chunk

#endif /* INCLUDED_tink__Chunk_EmptyChunk */ 
