#ifndef INCLUDED_tink_streams_StreamObject
#define INCLUDED_tink_streams_StreamObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace streams{


class HXCPP_CLASS_ATTRIBUTES StreamObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_depleted)(); 
		static inline bool get_depleted( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_get_depleted)();
		}
		::Dynamic (::hx::Object :: *_hx_next)(); 
		static inline ::Dynamic next( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_next)();
		}
		::Dynamic (::hx::Object :: *_hx_regroup)( ::Dynamic f); 
		static inline ::Dynamic regroup( ::Dynamic _hx_, ::Dynamic f) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_regroup)(f);
		}
		::Dynamic (::hx::Object :: *_hx_map)( ::Dynamic f); 
		static inline ::Dynamic map( ::Dynamic _hx_, ::Dynamic f) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_map)(f);
		}
		::Dynamic (::hx::Object :: *_hx_filter)( ::Dynamic f); 
		static inline ::Dynamic filter( ::Dynamic _hx_, ::Dynamic f) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_filter)(f);
		}
		 ::Dynamic (::hx::Object :: *_hx_retain)(); 
		static inline  ::Dynamic retain( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_retain)();
		}
		::Dynamic (::hx::Object :: *_hx_idealize)( ::Dynamic rescue); 
		static inline ::Dynamic idealize( ::Dynamic _hx_, ::Dynamic rescue) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_idealize)(rescue);
		}
		::Dynamic (::hx::Object :: *_hx_append)(::Dynamic other); 
		static inline ::Dynamic append( ::Dynamic _hx_,::Dynamic other) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_append)(other);
		}
		::Dynamic (::hx::Object :: *_hx_prepend)(::Dynamic other); 
		static inline ::Dynamic prepend( ::Dynamic _hx_,::Dynamic other) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_prepend)(other);
		}
		::Dynamic (::hx::Object :: *_hx_blend)(::Dynamic other); 
		static inline ::Dynamic blend( ::Dynamic _hx_,::Dynamic other) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_blend)(other);
		}
		void (::hx::Object :: *_hx_decompose)(::Array< ::Dynamic> into); 
		static inline void decompose( ::Dynamic _hx_,::Array< ::Dynamic> into) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_decompose)(into);
		}
		::Dynamic (::hx::Object :: *_hx_forEach)( ::Dynamic handle); 
		static inline ::Dynamic forEach( ::Dynamic _hx_, ::Dynamic handle) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_forEach)(handle);
		}
		::Dynamic (::hx::Object :: *_hx_reduce)( ::Dynamic initial, ::Dynamic reducer); 
		static inline ::Dynamic reduce( ::Dynamic _hx_, ::Dynamic initial, ::Dynamic reducer) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::streams::StreamObject_obj *>(_hx_.mPtr->_hx_getInterface(0x6164ac00)))->_hx_reduce)(initial,reducer);
		}
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_StreamObject */ 
