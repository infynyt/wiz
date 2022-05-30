#ifndef INCLUDED_tink_streams__Stream_Mapping_Impl_
#define INCLUDED_tink_streams__Stream_Mapping_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,Mapping_Impl_)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES Mapping_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mapping_Impl__obj OBJ_;
		Mapping_Impl__obj();

	public:
		enum { _hx_ClassId = 0x28df8128 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._Stream.Mapping_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams._Stream.Mapping_Impl_"); }

		inline static ::hx::ObjectPtr< Mapping_Impl__obj > __new() {
			::hx::ObjectPtr< Mapping_Impl__obj > __this = new Mapping_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Mapping_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Mapping_Impl__obj *__this = (Mapping_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mapping_Impl__obj), false, "tink.streams._Stream.Mapping_Impl_"));
			*(void **)__this = Mapping_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mapping_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mapping_Impl_",0e,c6,ae,86); }

		static  ::Dynamic _new( ::Dynamic o);
		static ::Dynamic _new_dyn();

		static  ::Dynamic ofNext( ::Dynamic n);
		static ::Dynamic ofNext_dyn();

		static  ::Dynamic ofAsync( ::Dynamic f);
		static ::Dynamic ofAsync_dyn();

		static  ::Dynamic ofSync( ::Dynamic f);
		static ::Dynamic ofSync_dyn();

		static  ::Dynamic ofPlain( ::Dynamic f);
		static ::Dynamic ofPlain_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_Mapping_Impl_ */ 
