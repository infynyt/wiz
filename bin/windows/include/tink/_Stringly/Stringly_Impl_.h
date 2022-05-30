#ifndef INCLUDED_tink__Stringly_Stringly_Impl_
#define INCLUDED_tink__Stringly_Stringly_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(tink,_Stringly,Stringly_Impl_)
HX_DECLARE_CLASS2(tink,core,Outcome)

namespace tink{
namespace _Stringly{


class HXCPP_CLASS_ATTRIBUTES Stringly_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stringly_Impl__obj OBJ_;
		Stringly_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6715c189 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink._Stringly.Stringly_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink._Stringly.Stringly_Impl_"); }

		inline static ::hx::ObjectPtr< Stringly_Impl__obj > __new() {
			::hx::ObjectPtr< Stringly_Impl__obj > __this = new Stringly_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Stringly_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Stringly_Impl__obj *__this = (Stringly_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stringly_Impl__obj), false, "tink._Stringly.Stringly_Impl_"));
			*(void **)__this = Stringly_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stringly_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stringly_Impl_",de,f8,7a,70); }

		static void __boot();
		static bool isNumber(::String s,bool allowFloat);
		static ::Dynamic isNumber_dyn();

		static bool toBool(::String this1);
		static ::Dynamic toBool_dyn();

		static bool isFloat(::String this1);
		static ::Dynamic isFloat_dyn();

		static  ::tink::core::Outcome parseFloat(::String this1);
		static ::Dynamic parseFloat_dyn();

		static Float toFloat(::String this1);
		static ::Dynamic toFloat_dyn();

		static bool isInt(::String this1);
		static ::Dynamic isInt_dyn();

		static  ::tink::core::Outcome parseInt(::String this1);
		static ::Dynamic parseInt_dyn();

		static int toInt(::String this1);
		static ::Dynamic toInt_dyn();

		static  ::EReg SUPPORTED_DATE_REGEX;
		static  ::tink::core::Outcome parseDate(::String this1);
		static ::Dynamic parseDate_dyn();

		static  ::Date toDate(::String this1);
		static ::Dynamic toDate_dyn();

		static  ::tink::core::Outcome parse(::String this1, ::Dynamic f);
		static ::Dynamic parse_dyn();

		static ::String ofBool(bool b);
		static ::Dynamic ofBool_dyn();

		static ::String ofInt(int i);
		static ::Dynamic ofInt_dyn();

		static ::String ofFloat(Float f);
		static ::Dynamic ofFloat_dyn();

		static ::String ofDate( ::Date d);
		static ::Dynamic ofDate_dyn();

};

} // end namespace tink
} // end namespace _Stringly

#endif /* INCLUDED_tink__Stringly_Stringly_Impl_ */ 
