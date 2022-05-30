#ifndef INCLUDED_tink_core__Lazy_Computable
#define INCLUDED_tink_core__Lazy_Computable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)

namespace tink{
namespace core{
namespace _Lazy{


class HXCPP_CLASS_ATTRIBUTES Computable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_isComputed)(); 
		static inline bool isComputed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::Computable_obj *>(_hx_.mPtr->_hx_getInterface(0xd2b592ea)))->_hx_isComputed)();
		}
		void (::hx::Object :: *_hx_compute)(); 
		static inline void compute( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::Computable_obj *>(_hx_.mPtr->_hx_getInterface(0xd2b592ea)))->_hx_compute)();
		}
		::Dynamic (::hx::Object :: *_hx_underlying)(); 
		static inline ::Dynamic underlying( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::Computable_obj *>(_hx_.mPtr->_hx_getInterface(0xd2b592ea)))->_hx_underlying)();
		}
};

} // end namespace tink
} // end namespace core
} // end namespace _Lazy

#endif /* INCLUDED_tink_core__Lazy_Computable */ 
