#ifndef INCLUDED_tink_io_SinkObject
#define INCLUDED_tink_io_SinkObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES SinkObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_sealed)(); 
		static inline bool get_sealed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::io::SinkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x483020ea)))->_hx_get_sealed)();
		}
		::Dynamic (::hx::Object :: *_hx_consume)(::Dynamic source, ::Dynamic options); 
		static inline ::Dynamic consume( ::Dynamic _hx_,::Dynamic source, ::Dynamic options) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::io::SinkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x483020ea)))->_hx_consume)(source,options);
		}
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_SinkObject */ 
