#ifndef INCLUDED_tink_http_ClientObject
#define INCLUDED_tink_http_ClientObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,OutgoingRequest)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES ClientObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_request)( ::tink::http::OutgoingRequest req); 
		static inline ::Dynamic request( ::Dynamic _hx_, ::tink::http::OutgoingRequest req) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::http::ClientObject_obj *>(_hx_.mPtr->_hx_getInterface(0x9c46f484)))->_hx_request)(req);
		}
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ClientObject */ 
