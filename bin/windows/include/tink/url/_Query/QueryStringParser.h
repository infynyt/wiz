#ifndef INCLUDED_tink_url__Query_QueryStringParser
#define INCLUDED_tink_url__Query_QueryStringParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS3(tink,url,_Query,QueryStringParser)

namespace tink{
namespace url{
namespace _Query{


class HXCPP_CLASS_ATTRIBUTES QueryStringParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QueryStringParser_obj OBJ_;
		QueryStringParser_obj();

	public:
		enum { _hx_ClassId = 0x78240256 };

		void __construct(::String s,::String sep,::String set,int pos);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.url._Query.QueryStringParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.url._Query.QueryStringParser"); }
		static ::hx::ObjectPtr< QueryStringParser_obj > __new(::String s,::String sep,::String set,int pos);
		static ::hx::ObjectPtr< QueryStringParser_obj > __alloc(::hx::Ctx *_hx_ctx,::String s,::String sep,::String set,int pos);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QueryStringParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QueryStringParser",98,2f,8c,35); }

		static ::String trimmedSub(::String s,int start,int end);
		static ::Dynamic trimmedSub_dyn();

		::String s;
		::String sep;
		::String set;
		int pos;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::tink::core::NamedWith next();
		::Dynamic next_dyn();

};

} // end namespace tink
} // end namespace url
} // end namespace _Query

#endif /* INCLUDED_tink_url__Query_QueryStringParser */ 
