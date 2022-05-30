#ifndef INCLUDED_tink_chunk_ChunkCursor
#define INCLUDED_tink_chunk_ChunkCursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS2(tink,chunk,ByteChunk)
HX_DECLARE_CLASS2(tink,chunk,ChunkBase)
HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES ChunkCursor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChunkCursor_obj OBJ_;
		ChunkCursor_obj();

	public:
		enum { _hx_ClassId = 0x5b17b728 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.chunk.ChunkCursor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.chunk.ChunkCursor"); }
		static ::hx::ObjectPtr< ChunkCursor_obj > __new();
		static ::hx::ObjectPtr< ChunkCursor_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChunkCursor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChunkCursor",03,71,6e,a9); }

		static  ::tink::chunk::ChunkCursor create(::Array< ::Dynamic> parts);
		static ::Dynamic create_dyn();

		::Array< ::Dynamic> parts;
		 ::tink::chunk::ByteChunk curPart;
		int curPartIndex;
		int curOffset;
		int curLength;
		int length;
		int currentPos;
		int currentByte;
		 ::tink::chunk::ChunkCursor clone();
		::Dynamic clone_dyn();

		void reset();
		::Dynamic reset_dyn();

		::Dynamic flush();
		::Dynamic flush_dyn();

		void prune();
		::Dynamic prune_dyn();

		void add(::Dynamic chunk);
		::Dynamic add_dyn();

		void shift(::Dynamic chunk);
		::Dynamic shift_dyn();

		void clear();
		::Dynamic clear_dyn();

		::Dynamic left();
		::Dynamic left_dyn();

		::Dynamic right();
		::Dynamic right_dyn();

		 ::haxe::ds::Option seek(::Array< int > seekable, ::Dynamic options);
		::Dynamic seek_dyn();

		::Dynamic sweep(int len);
		::Dynamic sweep_dyn();

		::Dynamic sweepTo(int pos);
		::Dynamic sweepTo_dyn();

		int moveBy(int delta);
		::Dynamic moveBy_dyn();

		int moveTo(int position);
		::Dynamic moveTo_dyn();

		void ffwd();
		::Dynamic ffwd_dyn();

		bool next();
		::Dynamic next_dyn();

};

} // end namespace tink
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_ChunkCursor */ 
