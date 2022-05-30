#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#define INCLUDED_tink__Chunk_Chunk_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(tink,_Chunk,Chunk_Impl_)
HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,chunk,ChunkIterator)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace _Chunk{


class HXCPP_CLASS_ATTRIBUTES Chunk_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Chunk_Impl__obj OBJ_;
		Chunk_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3bb70ded };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink._Chunk.Chunk_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink._Chunk.Chunk_Impl_"); }

		inline static ::hx::ObjectPtr< Chunk_Impl__obj > __new() {
			::hx::ObjectPtr< Chunk_Impl__obj > __this = new Chunk_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Chunk_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Chunk_Impl__obj *__this = (Chunk_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Chunk_Impl__obj), false, "tink._Chunk.Chunk_Impl_"));
			*(void **)__this = Chunk_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Chunk_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Chunk_Impl_",ad,aa,7a,82); }

		static void __boot();
		static int get_length(::Dynamic this1);
		static ::Dynamic get_length_dyn();

		static int getByte(::Dynamic this1,int i);
		static ::Dynamic getByte_dyn();

		static ::Dynamic concat(::Dynamic this1,::Dynamic that);
		static ::Dynamic concat_dyn();

		static  ::tink::chunk::ChunkCursor cursor(::Dynamic this1);
		static ::Dynamic cursor_dyn();

		static  ::tink::chunk::ChunkIterator iterator(::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static ::Dynamic sub(::Dynamic this1,int pos,int len);
		static ::Dynamic sub_dyn();

		static ::Dynamic slice(::Dynamic this1,int from,int to);
		static ::Dynamic slice_dyn();

		static void blitTo(::Dynamic this1, ::haxe::io::Bytes target,int offset);
		static ::Dynamic blitTo_dyn();

		static ::String toHex(::Dynamic this1);
		static ::Dynamic toHex_dyn();

		static ::String toString(::Dynamic this1);
		static ::Dynamic toString_dyn();

		static  ::haxe::io::Bytes toBytes(::Dynamic this1);
		static ::Dynamic toBytes_dyn();

		static ::Dynamic join(::Array< ::Dynamic> chunks);
		static ::Dynamic join_dyn();

		static ::Dynamic ofBytes( ::haxe::io::Bytes b);
		static ::Dynamic ofBytes_dyn();

		static ::Dynamic ofString(::String s);
		static ::Dynamic ofString_dyn();

		static ::Dynamic ofByte(int byte);
		static ::Dynamic ofByte_dyn();

		static ::Dynamic ofHex(::String s);
		static ::Dynamic ofHex_dyn();

		static  ::Dynamic parseHex(::String v);
		static ::Dynamic parseHex_dyn();

		static ::Dynamic catChunk(::Dynamic a,::Dynamic b);
		static ::Dynamic catChunk_dyn();

		static ::Dynamic rcatString(::Dynamic a,::String b);
		static ::Dynamic rcatString_dyn();

		static ::Dynamic lcatString(::String a,::Dynamic b);
		static ::Dynamic lcatString_dyn();

		static ::Dynamic lcatBytes( ::haxe::io::Bytes a,::Dynamic b);
		static ::Dynamic lcatBytes_dyn();

		static ::Dynamic rcatBytes(::Dynamic a, ::haxe::io::Bytes b);
		static ::Dynamic rcatBytes_dyn();

		static bool eqChunk(::Dynamic a,::Dynamic b);
		static ::Dynamic eqChunk_dyn();

		static bool reqString(::Dynamic a,::String b);
		static ::Dynamic reqString_dyn();

		static bool leqString(::String a,::Dynamic b);
		static ::Dynamic leqString_dyn();

		static bool leqBytes( ::haxe::io::Bytes a,::Dynamic b);
		static ::Dynamic leqBytes_dyn();

		static bool reqBytes(::Dynamic a, ::haxe::io::Bytes b);
		static ::Dynamic reqBytes_dyn();

		static ::Dynamic EMPTY;
};

} // end namespace tink
} // end namespace _Chunk

#endif /* INCLUDED_tink__Chunk_Chunk_Impl_ */ 
