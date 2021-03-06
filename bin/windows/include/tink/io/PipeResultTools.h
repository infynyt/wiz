#ifndef INCLUDED_tink_io_PipeResultTools
#define INCLUDED_tink_io_PipeResultTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkObject)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,io,PipeResult)
HX_DECLARE_CLASS2(tink,io,PipeResultTools)
HX_DECLARE_CLASS2(tink,streams,Conclusion)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES PipeResultTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PipeResultTools_obj OBJ_;
		PipeResultTools_obj();

	public:
		enum { _hx_ClassId = 0x0add7938 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io.PipeResultTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io.PipeResultTools"); }

		inline static ::hx::ObjectPtr< PipeResultTools_obj > __new() {
			::hx::ObjectPtr< PipeResultTools_obj > __this = new PipeResultTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PipeResultTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PipeResultTools_obj *__this = (PipeResultTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PipeResultTools_obj), false, "tink.io.PipeResultTools"));
			*(void **)__this = PipeResultTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PipeResultTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PipeResultTools",50,36,66,7b); }

		static  ::tink::core::Outcome toOutcome( ::tink::io::PipeResult result);
		static ::Dynamic toOutcome_dyn();

		static  ::tink::io::PipeResult toResult( ::tink::streams::Conclusion c, ::Dynamic result,::Dynamic buffered);
		static ::Dynamic toResult_dyn();

};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_PipeResultTools */ 
