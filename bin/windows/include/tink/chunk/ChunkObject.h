#ifndef INCLUDED_tink_chunk_ChunkObject
#define INCLUDED_tink_chunk_ChunkObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(tink,chunk,ByteChunk)
HX_DECLARE_CLASS2(tink,chunk,ChunkBase)
HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,chunk,ChunkObject)

namespace tink{
namespace chunk{


class HXCPP_CLASS_ATTRIBUTES ChunkObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_getByte)(int i); 
		static inline int getByte( ::Dynamic _hx_,int i) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_getByte)(i);
		}
		 ::tink::chunk::ChunkCursor (::hx::Object :: *_hx_getCursor)(); 
		static inline  ::tink::chunk::ChunkCursor getCursor( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_getCursor)();
		}
		void (::hx::Object :: *_hx_flatten)(::Array< ::Dynamic> into); 
		static inline void flatten( ::Dynamic _hx_,::Array< ::Dynamic> into) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_flatten)(into);
		}
		int (::hx::Object :: *_hx_getLength)(); 
		static inline int getLength( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_getLength)();
		}
		::Dynamic (::hx::Object :: *_hx_slice)(int from,int to); 
		static inline ::Dynamic slice( ::Dynamic _hx_,int from,int to) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_slice)(from,to);
		}
		::String (::hx::Object :: *_hx_toString)(); 
		static inline ::String toString( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_toString)();
		}
		 ::haxe::io::Bytes (::hx::Object :: *_hx_toBytes)(); 
		static inline  ::haxe::io::Bytes toBytes( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_toBytes)();
		}
		void (::hx::Object :: *_hx_blitTo)( ::haxe::io::Bytes target,int offset); 
		static inline void blitTo( ::Dynamic _hx_, ::haxe::io::Bytes target,int offset) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::chunk::ChunkObject_obj *>(_hx_.mPtr->_hx_getInterface(0x027c3451)))->_hx_blitTo)(target,offset);
		}
};

} // end namespace tink
} // end namespace chunk

#endif /* INCLUDED_tink_chunk_ChunkObject */ 
