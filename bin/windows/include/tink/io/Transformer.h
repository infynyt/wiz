#ifndef INCLUDED_tink_io_Transformer
#define INCLUDED_tink_io_Transformer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,io,Transformer)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Transformer_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_transform)(::Dynamic source); 
		static inline ::Dynamic transform( ::Dynamic _hx_,::Dynamic source) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::io::Transformer_obj *>(_hx_.mPtr->_hx_getInterface(0x76d0aa61)))->_hx_transform)(source);
		}
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_Transformer */ 
