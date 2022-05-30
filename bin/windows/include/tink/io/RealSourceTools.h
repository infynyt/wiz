#ifndef INCLUDED_tink_io_RealSourceTools
#define INCLUDED_tink_io_RealSourceTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,RealSourceTools)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES RealSourceTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RealSourceTools_obj OBJ_;
		RealSourceTools_obj();

	public:
		enum { _hx_ClassId = 0x688b0f4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io.RealSourceTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io.RealSourceTools"); }

		inline static ::hx::ObjectPtr< RealSourceTools_obj > __new() {
			::hx::ObjectPtr< RealSourceTools_obj > __this = new RealSourceTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RealSourceTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			RealSourceTools_obj *__this = (RealSourceTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RealSourceTools_obj), false, "tink.io.RealSourceTools"));
			*(void **)__this = RealSourceTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RealSourceTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RealSourceTools",62,cc,13,d9); }

		static ::Dynamic all(::Dynamic s);
		static ::Dynamic all_dyn();

		static ::Dynamic parse(::Dynamic s,::Dynamic p);
		static ::Dynamic parse_dyn();

		static  ::Dynamic split(::Dynamic src,::Dynamic delim);
		static ::Dynamic split_dyn();

		static ::Dynamic parseStream(::Dynamic s,::Dynamic p);
		static ::Dynamic parseStream_dyn();

		static ::Dynamic idealize(::Dynamic s, ::Dynamic rescue);
		static ::Dynamic idealize_dyn();

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_RealSourceTools */ 
