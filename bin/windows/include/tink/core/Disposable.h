#ifndef INCLUDED_tink_core_Disposable
#define INCLUDED_tink_core_Disposable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Disposable)

namespace tink{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Disposable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_disposed)(); 
		static inline bool get_disposed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::Disposable_obj *>(_hx_.mPtr->_hx_getInterface(0x87efe891)))->_hx_get_disposed)();
		}
		void (::hx::Object :: *_hx_ondispose)( ::Dynamic d); 
		static inline void ondispose( ::Dynamic _hx_, ::Dynamic d) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::Disposable_obj *>(_hx_.mPtr->_hx_getInterface(0x87efe891)))->_hx_ondispose)(d);
		}
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_Disposable */ 
