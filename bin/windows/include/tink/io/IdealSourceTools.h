#ifndef INCLUDED_tink_io_IdealSourceTools
#define INCLUDED_tink_io_IdealSourceTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,IdealSourceTools)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES IdealSourceTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IdealSourceTools_obj OBJ_;
		IdealSourceTools_obj();

	public:
		enum { _hx_ClassId = 0x186409e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io.IdealSourceTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io.IdealSourceTools"); }

		inline static ::hx::ObjectPtr< IdealSourceTools_obj > __new() {
			::hx::ObjectPtr< IdealSourceTools_obj > __this = new IdealSourceTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IdealSourceTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			IdealSourceTools_obj *__this = (IdealSourceTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IdealSourceTools_obj), false, "tink.io.IdealSourceTools"));
			*(void **)__this = IdealSourceTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IdealSourceTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IdealSourceTools",cb,c1,80,1f); }

		static ::Dynamic all(::Dynamic s);
		static ::Dynamic all_dyn();

		static ::Dynamic parse(::Dynamic s,::Dynamic p);
		static ::Dynamic parse_dyn();

		static ::Dynamic parseStream(::Dynamic s,::Dynamic p);
		static ::Dynamic parseStream_dyn();

		static  ::Dynamic split(::Dynamic s,::Dynamic delim);
		static ::Dynamic split_dyn();

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_IdealSourceTools */ 
