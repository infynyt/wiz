#ifndef INCLUDED_tink_url__Query_QueryStringBuilder_Impl_
#define INCLUDED_tink_url__Query_QueryStringBuilder_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,url,_Query,QueryStringBuilder_Impl_)

namespace tink{
namespace url{
namespace _Query{


class HXCPP_CLASS_ATTRIBUTES QueryStringBuilder_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QueryStringBuilder_Impl__obj OBJ_;
		QueryStringBuilder_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6efda448 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._Query.QueryStringBuilder_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._Query.QueryStringBuilder_Impl_"); }

		inline static ::hx::ObjectPtr< QueryStringBuilder_Impl__obj > __new() {
			::hx::ObjectPtr< QueryStringBuilder_Impl__obj > __this = new QueryStringBuilder_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QueryStringBuilder_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			QueryStringBuilder_Impl__obj *__this = (QueryStringBuilder_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QueryStringBuilder_Impl__obj), false, "tink.url._Query.QueryStringBuilder_Impl_"));
			*(void **)__this = QueryStringBuilder_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QueryStringBuilder_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QueryStringBuilder_Impl_",62,04,05,ac); }

		static ::Array< ::String > _new();
		static ::Dynamic _new_dyn();

		static ::Array< ::String > add(::Array< ::String > this1,::String name,::String value);
		static ::Dynamic add_dyn();

		static ::String toString(::Array< ::String > this1,::String sep);
		static ::Dynamic toString_dyn();

		static ::Array< ::String > copy(::Array< ::String > this1);
		static ::Dynamic copy_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _Query

#endif /* INCLUDED_tink_url__Query_QueryStringBuilder_Impl_ */ 
