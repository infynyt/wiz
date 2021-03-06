#ifndef INCLUDED_tink_core__Error_Stack_Impl_
#define INCLUDED_tink_core__Error_Stack_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS3(tink,core,_Error,Stack_Impl_)

namespace tink{
namespace core{
namespace _Error{


class HXCPP_CLASS_ATTRIBUTES Stack_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stack_Impl__obj OBJ_;
		Stack_Impl__obj();

	public:
		enum { _hx_ClassId = 0x766e32ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Error.Stack_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Error.Stack_Impl_"); }

		inline static ::hx::ObjectPtr< Stack_Impl__obj > __new() {
			::hx::ObjectPtr< Stack_Impl__obj > __this = new Stack_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Stack_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Stack_Impl__obj *__this = (Stack_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stack_Impl__obj), false, "tink.core._Error.Stack_Impl_"));
			*(void **)__this = Stack_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stack_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stack_Impl_",c8,e1,d7,a3); }

		static ::String toString(::Array< ::Dynamic> this1);
		static ::Dynamic toString_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Error

#endif /* INCLUDED_tink_core__Error_Stack_Impl_ */ 
