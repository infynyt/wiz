#ifndef INCLUDED_tink_http_SimpleHandler
#define INCLUDED_tink_http_SimpleHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_HandlerObject
#include <tink/http/HandlerObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,HandlerObject)
HX_DECLARE_CLASS2(tink,http,IncomingRequest)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,SimpleHandler)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES SimpleHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SimpleHandler_obj OBJ_;
		SimpleHandler_obj();

	public:
		enum { _hx_ClassId = 0x17dbe6ba };

		void __construct( ::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.SimpleHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.SimpleHandler"); }
		static ::hx::ObjectPtr< SimpleHandler_obj > __new( ::Dynamic f);
		static ::hx::ObjectPtr< SimpleHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SimpleHandler",98,ed,1a,36); }

		 ::Dynamic f;
		Dynamic f_dyn() { return f;}
		::Dynamic process( ::tink::http::IncomingRequest req);
		::Dynamic process_dyn();

};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_SimpleHandler */ 
