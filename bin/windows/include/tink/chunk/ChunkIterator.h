#ifndef INCLUDED_tink_chunk_ChunkIterator
#define INCLUDED_tink_chunk_ChunkIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,chunk,ChunkIterator)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES ChunkIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChunkIterator_obj OBJ_;
		ChunkIterator_obj();

	public:
		enum { _hx_ClassId = 0x7821aac0 };

		void __construct( ::tink::chunk::ChunkCursor target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.chunk.ChunkIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.chunk.ChunkIterator"); }
		static ::hx::ObjectPtr< ChunkIterator_obj > __new( ::tink::chunk::ChunkCursor target);
		static ::hx::ObjectPtr< ChunkIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::tink::chunk::ChunkCursor target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChunkIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChunkIterator",5b,d1,fe,14); }

		 ::tink::chunk::ChunkCursor target;
		bool _hasNext;
		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

};

} // end namespace tink
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_ChunkIterator */ 
