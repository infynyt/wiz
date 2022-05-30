#ifndef INCLUDED_tink_chunk_CompoundChunk
#define INCLUDED_tink_chunk_CompoundChunk

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
HX_DECLARE_CLASS2(tink,chunk,CompoundChunk)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES CompoundChunk_obj : public  ::tink::chunk::ChunkBase_obj
{
	public:
		typedef  ::tink::chunk::ChunkBase_obj super;
		typedef CompoundChunk_obj OBJ_;
		CompoundChunk_obj();

	public:
		enum { _hx_ClassId = 0x73605847 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.chunk.CompoundChunk")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.chunk.CompoundChunk"); }
		static ::hx::ObjectPtr< CompoundChunk_obj > __new();
		static ::hx::ObjectPtr< CompoundChunk_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompoundChunk_obj();

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
		::String __ToString() const { return HX_("CompoundChunk",e2,7e,3d,10); }

		static  ::tink::chunk::CompoundChunk asCompound(::Dynamic c);
		static ::Dynamic asCompound_dyn();

		static ::Dynamic cons(::Dynamic a,::Dynamic b);
		static ::Dynamic cons_dyn();

		static  ::tink::chunk::CompoundChunk create(::Array< ::Dynamic> chunks,int depth);
		static ::Dynamic create_dyn();

		::Array< ::Dynamic> chunks;
		::Array< int > offsets;
		int length;
		int depth;
		int getByte(int i);
		::Dynamic getByte_dyn();

		int getLength();
		::Dynamic getLength_dyn();

		int findChunk(int target);
		::Dynamic findChunk_dyn();

		void flatten(::Array< ::Dynamic> into);

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
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_CompoundChunk */ 
