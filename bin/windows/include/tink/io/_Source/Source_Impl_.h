#ifndef INCLUDED_tink_io__Source_Source_Impl_
#define INCLUDED_tink_io__Source_Source_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS2(tink,io,Transformer)
HX_DECLARE_CLASS3(tink,io,_Source,Source_Impl_)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace _Source{


class HXCPP_CLASS_ATTRIBUTES Source_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Source_Impl__obj OBJ_;
		Source_Impl__obj();

	public:
		enum { _hx_ClassId = 0x52c5539d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._Source.Source_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._Source.Source_Impl_"); }

		inline static ::hx::ObjectPtr< Source_Impl__obj > __new() {
			::hx::ObjectPtr< Source_Impl__obj > __this = new Source_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Source_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Source_Impl__obj *__this = (Source_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Source_Impl__obj), false, "tink.io._Source.Source_Impl_"));
			*(void **)__this = Source_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Source_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Source_Impl_",db,cf,0d,d6); }

		static void __boot();
		static ::Dynamic EMPTY;
		static ::Dynamic dirty(::Dynamic this1);
		static ::Dynamic dirty_dyn();

		static bool get_depleted(::Dynamic this1);
		static ::Dynamic get_depleted_dyn();

		static ::Dynamic ofInput(::String name, ::haxe::io::Input input, ::Dynamic options);
		static ::Dynamic ofInput_dyn();

		static ::Dynamic chunked(::Dynamic this1);
		static ::Dynamic chunked_dyn();

		static ::Dynamic concatAll(::Dynamic s);
		static ::Dynamic concatAll_dyn();

		static ::Dynamic pipeTo(::Dynamic this1,::Dynamic target, ::Dynamic options);
		static ::Dynamic pipeTo_dyn();

		static ::Dynamic append(::Dynamic this1,::Dynamic that);
		static ::Dynamic append_dyn();

		static ::Dynamic prepend(::Dynamic this1,::Dynamic that);
		static ::Dynamic prepend_dyn();

		static ::Dynamic transform(::Dynamic this1,::Dynamic transformer);
		static ::Dynamic transform_dyn();

		static ::Dynamic skip(::Dynamic this1,int len);
		static ::Dynamic skip_dyn();

		static ::Dynamic limit(::Dynamic this1,int len);
		static ::Dynamic limit_dyn();

		static ::Dynamic ofError( ::tink::core::TypedError e);
		static ::Dynamic ofError_dyn();

		static ::Dynamic ofFuture(::Dynamic f);
		static ::Dynamic ofFuture_dyn();

		static ::Dynamic ofPromised(::Dynamic p);
		static ::Dynamic ofPromised_dyn();

		static ::Dynamic ofChunk(::Dynamic chunk);
		static ::Dynamic ofChunk_dyn();

		static ::Dynamic ofString(::String s);
		static ::Dynamic ofString_dyn();

		static ::Dynamic ofBytes( ::haxe::io::Bytes b);
		static ::Dynamic ofBytes_dyn();

		static ::Dynamic ofFutureChunk(::Dynamic chunk);
		static ::Dynamic ofFutureChunk_dyn();

		static ::Dynamic ofFutureString(::Dynamic s);
		static ::Dynamic ofFutureString_dyn();

		static ::Dynamic ofFutureBytes(::Dynamic b);
		static ::Dynamic ofFutureBytes_dyn();

		static ::Dynamic ofPromiseChunk(::Dynamic chunk);
		static ::Dynamic ofPromiseChunk_dyn();

		static ::Dynamic ofPromiseString(::Dynamic s);
		static ::Dynamic ofPromiseString_dyn();

		static ::Dynamic ofPromiseBytes(::Dynamic b);
		static ::Dynamic ofPromiseBytes_dyn();

};

} // end namespace tink
} // end namespace io
} // end namespace _Source

#endif /* INCLUDED_tink_io__Source_Source_Impl_ */ 
