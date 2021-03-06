#ifndef INCLUDED_tink_streams__Stream_Regrouper_Impl_
#define INCLUDED_tink_streams__Stream_Regrouper_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,RegroupResult)
HX_DECLARE_CLASS2(tink,streams,RegroupStatus)
HX_DECLARE_CLASS3(tink,streams,_Stream,Regrouper_Impl_)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES Regrouper_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Regrouper_Impl__obj OBJ_;
		Regrouper_Impl__obj();

	public:
		enum { _hx_ClassId = 0x74da6ebb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._Stream.Regrouper_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams._Stream.Regrouper_Impl_"); }

		inline static ::hx::ObjectPtr< Regrouper_Impl__obj > __new() {
			::hx::ObjectPtr< Regrouper_Impl__obj > __this = new Regrouper_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Regrouper_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Regrouper_Impl__obj *__this = (Regrouper_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Regrouper_Impl__obj), false, "tink.streams._Stream.Regrouper_Impl_"));
			*(void **)__this = Regrouper_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Regrouper_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Regrouper_Impl_",59,bf,c2,4c); }

		static  ::Dynamic ofIgnorance( ::Dynamic f);
		static ::Dynamic ofIgnorance_dyn();

		static  ::Dynamic ofIgnoranceSync( ::Dynamic f);
		static ::Dynamic ofIgnoranceSync_dyn();

		static  ::Dynamic ofFunc( ::Dynamic f);
		static ::Dynamic ofFunc_dyn();

		static  ::Dynamic ofFuncSync( ::Dynamic f);
		static ::Dynamic ofFuncSync_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_Regrouper_Impl_ */ 
