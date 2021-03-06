#ifndef INCLUDED_tink_http_clients_SocketClient
#define INCLUDED_tink_http_clients_SocketClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,OutgoingRequest)
HX_DECLARE_CLASS3(tink,http,clients,SocketClient)
HX_DECLARE_CLASS2(tink,io,WorkerObject)

namespace tink{
namespace http{
namespace clients{


class HXCPP_CLASS_ATTRIBUTES SocketClient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SocketClient_obj OBJ_;
		SocketClient_obj();

	public:
		enum { _hx_ClassId = 0x29ac2844 };

		void __construct(::Dynamic worker);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.clients.SocketClient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.clients.SocketClient"); }
		static ::hx::ObjectPtr< SocketClient_obj > __new(::Dynamic worker);
		static ::hx::ObjectPtr< SocketClient_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic worker);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SocketClient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SocketClient",7e,5e,b9,60); }

		::Dynamic worker;
		::Dynamic request( ::tink::http::OutgoingRequest req);
		::Dynamic request_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace clients

#endif /* INCLUDED_tink_http_clients_SocketClient */ 
