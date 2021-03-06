#ifndef INCLUDED_tink_chunk_ChunkBase
#define INCLUDED_tink_chunk_ChunkBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ByteChunk)
HX_DECLARE_CLASS2(tink,chunk,ChunkBase)
HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES ChunkBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChunkBase_obj OBJ_;
		ChunkBase_obj();

	public:
		enum { _hx_ClassId = 0x49bef7e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.chunk.ChunkBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.chunk.ChunkBase"); }

		inline static ::hx::ObjectPtr< ChunkBase_obj > __new() {
			::hx::ObjectPtr< ChunkBase_obj > __this = new ChunkBase_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ChunkBase_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ChunkBase_obj *__this = (ChunkBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkBase_obj), true, "tink.chunk.ChunkBase"));
			*(void **)__this = ChunkBase_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChunkBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChunkBase",fe,f4,07,36); }

		::Array< ::Dynamic> flattened;
		 ::tink::chunk::ChunkCursor getCursor();
		::Dynamic getCursor_dyn();

		virtual void flatten(::Array< ::Dynamic> into);
		::Dynamic flatten_dyn();

};

} // end namespace tink
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_ChunkBase */ 
