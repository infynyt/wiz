#ifndef INCLUDED_tink_http_containers_LocalContainer
#define INCLUDED_tink_http_containers_LocalContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_Container
#include <tink/http/Container.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,Container)
HX_DECLARE_CLASS2(tink,http,HandlerObject)
HX_DECLARE_CLASS2(tink,http,IncomingRequest)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS3(tink,http,containers,LocalContainer)

namespace tink{
namespace http{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES LocalContainer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocalContainer_obj OBJ_;
		LocalContainer_obj();

	public:
		enum { _hx_ClassId = 0x315b134a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.containers.LocalContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.containers.LocalContainer"); }
		static ::hx::ObjectPtr< LocalContainer_obj > __new();
		static ::hx::ObjectPtr< LocalContainer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocalContainer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LocalContainer",76,1a,ea,cb); }

		::Dynamic handler;
		bool running;
		::Dynamic run(::Dynamic handler);
		::Dynamic run_dyn();

		::Dynamic serve( ::tink::http::IncomingRequest req);
		::Dynamic serve_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace containers

#endif /* INCLUDED_tink_http_containers_LocalContainer */ 
