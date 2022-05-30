#ifndef INCLUDED_tink_chunk_ChunkTools
#define INCLUDED_tink_chunk_ChunkTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS2(tink,chunk,ChunkTools)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES ChunkTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChunkTools_obj OBJ_;
		ChunkTools_obj();

	public:
		enum { _hx_ClassId = 0x15a62525 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.chunk.ChunkTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.chunk.ChunkTools"); }

		inline static ::hx::ObjectPtr< ChunkTools_obj > __new() {
			::hx::ObjectPtr< ChunkTools_obj > __this = new ChunkTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ChunkTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ChunkTools_obj *__this = (ChunkTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkTools_obj), false, "tink.chunk.ChunkTools"));
			*(void **)__this = ChunkTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChunkTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChunkTools",8e,d4,62,77); }

		static int readUInt8(::Dynamic chunk,int offset);
		static ::Dynamic readUInt8_dyn();

		static int readInt8(::Dynamic chunk,int offset);
		static ::Dynamic readInt8_dyn();

		static int readUInt16LE(::Dynamic chunk,int offset);
		static ::Dynamic readUInt16LE_dyn();

		static int readInt16LE(::Dynamic chunk,int offset);
		static ::Dynamic readInt16LE_dyn();

		static int readUInt24LE(::Dynamic chunk,int offset);
		static ::Dynamic readUInt24LE_dyn();

		static int readInt24LE(::Dynamic chunk,int offset);
		static ::Dynamic readInt24LE_dyn();

		static int readInt32LE(::Dynamic chunk,int offset);
		static ::Dynamic readInt32LE_dyn();

		static Float readDoubleLE(::Dynamic chunk,int offset);
		static ::Dynamic readDoubleLE_dyn();

		static ::String readNullTerminatedString(::Dynamic chunk,int offset);
		static ::Dynamic readNullTerminatedString_dyn();

		static ::Dynamic writeUInt8(int v);
		static ::Dynamic writeUInt8_dyn();

		static ::Dynamic writeInt8(int v);
		static ::Dynamic writeInt8_dyn();

		static ::Dynamic writeUInt16LE(int v);
		static ::Dynamic writeUInt16LE_dyn();

		static ::Dynamic writeInt16LE(int v);
		static ::Dynamic writeInt16LE_dyn();

		static ::Dynamic writeUInt24LE(int v);
		static ::Dynamic writeUInt24LE_dyn();

		static ::Dynamic writeInt24LE(int v);
		static ::Dynamic writeInt24LE_dyn();

		static ::Dynamic writeInt32LE(int v);
		static ::Dynamic writeInt32LE_dyn();

		static ::Dynamic writeDoubleLE(Float v);
		static ::Dynamic writeDoubleLE_dyn();

		static ::Dynamic lpad(::Dynamic chunk,::Dynamic pad,int length);
		static ::Dynamic lpad_dyn();

		static ::Dynamic rpad(::Dynamic chunk,::Dynamic pad,int length);
		static ::Dynamic rpad_dyn();

		static void check(::Dynamic chunk,int offset,int length);
		static ::Dynamic check_dyn();

};

} // end namespace tink
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_ChunkTools */ 
