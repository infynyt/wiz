#ifndef INCLUDED_tink_io__StreamParser_StreamParser_Impl_
#define INCLUDED_tink_io__StreamParser_StreamParser_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)
HX_DECLARE_CLASS3(tink,io,_StreamParser,StreamParser_Impl_)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace _StreamParser{


class HXCPP_CLASS_ATTRIBUTES StreamParser_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StreamParser_Impl__obj OBJ_;
		StreamParser_Impl__obj();

	public:
		enum { _hx_ClassId = 0x18cfe7c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._StreamParser.StreamParser_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._StreamParser.StreamParser_Impl_"); }

		inline static ::hx::ObjectPtr< StreamParser_Impl__obj > __new() {
			::hx::ObjectPtr< StreamParser_Impl__obj > __this = new StreamParser_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StreamParser_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			StreamParser_Impl__obj *__this = (StreamParser_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StreamParser_Impl__obj), false, "tink.io._StreamParser.StreamParser_Impl_"));
			*(void **)__this = StreamParser_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StreamParser_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StreamParser_Impl_",7f,8f,ef,63); }

		static ::Dynamic doParse(::Dynamic source,::Dynamic p, ::Dynamic consume, ::Dynamic finish);
		static ::Dynamic doParse_dyn();

		static ::Dynamic parse(::Dynamic s,::Dynamic p);
		static ::Dynamic parse_dyn();

		static ::Dynamic parseStream(::Dynamic s,::Dynamic p);
		static ::Dynamic parseStream_dyn();

};

} // end namespace tink
} // end namespace io
} // end namespace _StreamParser

#endif /* INCLUDED_tink_io__StreamParser_StreamParser_Impl_ */ 
