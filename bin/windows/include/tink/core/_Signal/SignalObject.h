#ifndef INCLUDED_tink_core__Signal_SignalObject
#define INCLUDED_tink_core__Signal_SignalObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
HX_DECLARE_CLASS2(tink,core,Disposable)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Signal,SignalObject)

namespace tink{
namespace core{
namespace _Signal{


class HXCPP_CLASS_ATTRIBUTES SignalObject_obj {
	public:
		typedef  ::tink::core::Disposable_obj super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_disposed)(); 
		static inline bool get_disposed( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Signal::SignalObject_obj *>(_hx_.mPtr->_hx_getInterface(0x17de315d)))->_hx_get_disposed)();
		}
		void (::hx::Object :: *_hx_ondispose)( ::Dynamic d); 
		static inline void ondispose( ::Dynamic _hx_, ::Dynamic d) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Signal::SignalObject_obj *>(_hx_.mPtr->_hx_getInterface(0x17de315d)))->_hx_ondispose)(d);
		}
		::Dynamic (::hx::Object :: *_hx_listen)( ::Dynamic handler); 
		static inline ::Dynamic listen( ::Dynamic _hx_, ::Dynamic handler) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Signal::SignalObject_obj *>(_hx_.mPtr->_hx_getInterface(0x17de315d)))->_hx_listen)(handler);
		}
};

} // end namespace tink
} // end namespace core
} // end namespace _Signal

#endif /* INCLUDED_tink_core__Signal_SignalObject */ 
