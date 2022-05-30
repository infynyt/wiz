#ifndef INCLUDED_tink_chunk__Seekable_Seekable_Impl_
#define INCLUDED_tink_chunk__Seekable_Seekable_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS3(tink,chunk,_Seekable,Seekable_Impl_)

namespace tink{
namespace chunk{
namespace _Seekable{


class HXCPP_CLASS_ATTRIBUTES Seekable_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Seekable_Impl__obj OBJ_;
		Seekable_Impl__obj();

	public:
		enum { _hx_ClassId = 0x08b9b650 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.chunk._Seekable.Seekable_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.chunk._Seekable.Seekable_Impl_"); }

		inline static ::hx::ObjectPtr< Seekable_Impl__obj > __new() {
			::hx::ObjectPtr< Seekable_Impl__obj > __this = new Seekable_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Seekable_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Seekable_Impl__obj *__this = (Seekable_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Seekable_Impl__obj), false, "tink.chunk._Seekable.Seekable_Impl_"));
			*(void **)__this = Seekable_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Seekable_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Seekable_Impl_",52,79,0b,e3); }

		static ::Array< int > _new(::Array< int > a);
		static ::Dynamic _new_dyn();

		static int get_length(::Array< int > this1);
		static ::Dynamic get_length_dyn();

		static int get(::Array< int > this1,int index);
		static ::Dynamic get_dyn();

		static ::Array< int > ofChunk(::Dynamic c);
		static ::Dynamic ofChunk_dyn();

		static ::Array< int > ofBytes( ::haxe::io::Bytes b);
		static ::Dynamic ofBytes_dyn();

		static ::Array< int > ofString(::String s);
		static ::Dynamic ofString_dyn();

};

} // end namespace tink
} // end namespace chunk
} // end namespace _Seekable

#endif /* INCLUDED_tink_chunk__Seekable_Seekable_Impl_ */ 
