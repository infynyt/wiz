#ifndef INCLUDED_tink_io_WorkerObject
#define INCLUDED_tink_io_WorkerObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
HX_DECLARE_CLASS2(tink,io,WorkerObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES WorkerObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_work)(::Dynamic task); 
		static inline ::Dynamic work( ::Dynamic _hx_,::Dynamic task) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::io::WorkerObject_obj *>(_hx_.mPtr->_hx_getInterface(0xdcf3fb55)))->_hx_work)(task);
		}
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_WorkerObject */ 
