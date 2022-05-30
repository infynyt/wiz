#ifndef INCLUDED_tink_url__Query_Query_Impl_
#define INCLUDED_tink_url__Query_Query_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(tink,url,_Query,QueryStringParser)
HX_DECLARE_CLASS3(tink,url,_Query,Query_Impl_)

namespace tink{
namespace url{
namespace _Query{


class HXCPP_CLASS_ATTRIBUTES Query_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Query_Impl__obj OBJ_;
		Query_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7f91762a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._Query.Query_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._Query.Query_Impl_"); }

		inline static ::hx::ObjectPtr< Query_Impl__obj > __new() {
			::hx::ObjectPtr< Query_Impl__obj > __this = new Query_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Query_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Query_Impl__obj *__this = (Query_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Query_Impl__obj), false, "tink.url._Query.Query_Impl_"));
			*(void **)__this = Query_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Query_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Query_Impl_",88,55,4c,4e); }

		static  ::tink::url::_Query::QueryStringParser parse(::String this1);
		static ::Dynamic parse_dyn();

		static ::String with(::String this1, ::haxe::ds::StringMap values);
		static ::Dynamic with_dyn();

		static  ::tink::url::_Query::QueryStringParser iterator(::String this1);
		static ::Dynamic iterator_dyn();

		static  ::haxe::ds::StringMap toMap(::String this1);
		static ::Dynamic toMap_dyn();

		static ::String ofObj( ::Dynamic v);
		static ::Dynamic ofObj_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

		static ::Array< ::String > build();
		static ::Dynamic build_dyn();

		static  ::tink::url::_Query::QueryStringParser parseString(::String s,::String sep,::String set,::hx::Null< int >  pos);
		static ::Dynamic parseString_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _Query

#endif /* INCLUDED_tink_url__Query_Query_Impl_ */ 
