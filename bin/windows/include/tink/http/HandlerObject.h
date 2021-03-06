#ifndef INCLUDED_tink_http_HandlerObject
#define INCLUDED_tink_http_HandlerObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,HandlerObject)
HX_DECLARE_CLASS2(tink,http,IncomingRequest)
HX_DECLARE_CLASS2(tink,http,Message)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES HandlerObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_process)( ::tink::http::IncomingRequest req); 
		static inline ::Dynamic process( ::Dynamic _hx_, ::tink::http::IncomingRequest req) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::http::HandlerObject_obj *>(_hx_.mPtr->_hx_getInterface(0xee501fcf)))->_hx_process)(req);
		}
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_HandlerObject */ 
