#ifndef INCLUDED_tink_io_StreamParserObject
#define INCLUDED_tink_io_StreamParserObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,chunk,ChunkCursor)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS2(tink,io,ParseStep)
HX_DECLARE_CLASS2(tink,io,StreamParserObject)

namespace tink{
namespace io{


class HXCPP_CLASS_ATTRIBUTES StreamParserObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::tink::io::ParseStep (::hx::Object :: *_hx_progress)( ::tink::chunk::ChunkCursor cursor); 
		static inline  ::tink::io::ParseStep progress( ::Dynamic _hx_, ::tink::chunk::ChunkCursor cursor) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::io::StreamParserObject_obj *>(_hx_.mPtr->_hx_getInterface(0x048ef116)))->_hx_progress)(cursor);
		}
		 ::tink::core::Outcome (::hx::Object :: *_hx_eof)( ::tink::chunk::ChunkCursor rest); 
		static inline  ::tink::core::Outcome eof( ::Dynamic _hx_, ::tink::chunk::ChunkCursor rest) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::io::StreamParserObject_obj *>(_hx_.mPtr->_hx_getInterface(0x048ef116)))->_hx_eof)(rest);
		}
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_StreamParserObject */ 
