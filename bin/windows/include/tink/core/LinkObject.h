#ifndef INCLUDED_tink_core_LinkObject
#define INCLUDED_tink_core_LinkObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,LinkObject)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES LinkObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_cancel)(); 
		static inline void cancel( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::LinkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x0d15dd4a)))->_hx_cancel)();
		}
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_LinkObject */ 
