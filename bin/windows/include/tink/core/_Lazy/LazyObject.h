#ifndef INCLUDED_tink_core__Lazy_LazyObject
#define INCLUDED_tink_core__Lazy_LazyObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{
namespace _Lazy{


class HXCPP_CLASS_ATTRIBUTES LazyObject_obj {
	public:
		typedef  ::tink::core::_Lazy::Computable_obj super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_isComputed)(); 
		static inline bool isComputed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::LazyObject_obj *>(_hx_.mPtr->_hx_getInterface(0xe1200775)))->_hx_isComputed)();
		}
		void (::hx::Object :: *_hx_compute)(); 
		static inline void compute( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::LazyObject_obj *>(_hx_.mPtr->_hx_getInterface(0xe1200775)))->_hx_compute)();
		}
		::Dynamic (::hx::Object :: *_hx_underlying)(); 
		static inline ::Dynamic underlying( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::LazyObject_obj *>(_hx_.mPtr->_hx_getInterface(0xe1200775)))->_hx_underlying)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get)(); 
		static inline  ::Dynamic get( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Lazy::LazyObject_obj *>(_hx_.mPtr->_hx_getInterface(0xe1200775)))->_hx_get)();
		}
};

} // end namespace tink
} // end namespace core
} // end namespace _Lazy

#endif /* INCLUDED_tink_core__Lazy_LazyObject */ 
