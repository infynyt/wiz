#ifndef INCLUDED_tink_http_Container
#define INCLUDED_tink_http_Container

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,Container)
HX_DECLARE_CLASS2(tink,http,HandlerObject)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES Container_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_run)(::Dynamic handler); 
		static inline ::Dynamic run( ::Dynamic _hx_,::Dynamic handler) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::http::Container_obj *>(_hx_.mPtr->_hx_getInterface(0x68c1b3e7)))->_hx_run)(handler);
		}
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_Container */ 
