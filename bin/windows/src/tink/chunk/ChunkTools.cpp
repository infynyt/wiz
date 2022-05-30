#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkTools
#include <tink/chunk/ChunkTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_11_readUInt8,"tink.chunk.ChunkTools","readUInt8",0x82c85a05,"tink.chunk.ChunkTools.readUInt8","tink/chunk/ChunkTools.hx",11,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_17_readInt8,"tink.chunk.ChunkTools","readInt8",0x07b027c2,"tink.chunk.ChunkTools.readInt8","tink/chunk/ChunkTools.hx",17,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_22_readUInt16LE,"tink.chunk.ChunkTools","readUInt16LE",0xe642b4f1,"tink.chunk.ChunkTools.readUInt16LE","tink/chunk/ChunkTools.hx",22,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_29_readInt16LE,"tink.chunk.ChunkTools","readInt16LE",0x29665b54,"tink.chunk.ChunkTools.readInt16LE","tink/chunk/ChunkTools.hx",29,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_34_readUInt24LE,"tink.chunk.ChunkTools","readUInt24LE",0xe6ea670e,"tink.chunk.ChunkTools.readUInt24LE","tink/chunk/ChunkTools.hx",34,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_42_readInt24LE,"tink.chunk.ChunkTools","readInt24LE",0x2a0e0d71,"tink.chunk.ChunkTools.readInt24LE","tink/chunk/ChunkTools.hx",42,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_47_readInt32LE,"tink.chunk.ChunkTools","readInt32LE",0x2ab5bf8e,"tink.chunk.ChunkTools.readInt32LE","tink/chunk/ChunkTools.hx",47,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_65_readDoubleLE,"tink.chunk.ChunkTools","readDoubleLE",0xdc8517a3,"tink.chunk.ChunkTools.readDoubleLE","tink/chunk/ChunkTools.hx",65,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_72_readNullTerminatedString,"tink.chunk.ChunkTools","readNullTerminatedString",0x58246a14,"tink.chunk.ChunkTools.readNullTerminatedString","tink/chunk/ChunkTools.hx",72,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_75_writeUInt8,"tink.chunk.ChunkTools","writeUInt8",0xfd3391c2,"tink.chunk.ChunkTools.writeUInt8","tink/chunk/ChunkTools.hx",75,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_85_writeInt8,"tink.chunk.ChunkTools","writeInt8",0x71d9f6a5,"tink.chunk.ChunkTools.writeInt8","tink/chunk/ChunkTools.hx",85,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_97_writeUInt16LE,"tink.chunk.ChunkTools","writeUInt16LE",0x58613154,"tink.chunk.ChunkTools.writeUInt16LE","tink/chunk/ChunkTools.hx",97,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_112_writeInt16LE,"tink.chunk.ChunkTools","writeInt16LE",0x7edcbc51,"tink.chunk.ChunkTools.writeInt16LE","tink/chunk/ChunkTools.hx",112,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_116_writeUInt24LE,"tink.chunk.ChunkTools","writeUInt24LE",0x5908e371,"tink.chunk.ChunkTools.writeUInt24LE","tink/chunk/ChunkTools.hx",116,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_125_writeInt24LE,"tink.chunk.ChunkTools","writeInt24LE",0x7f846e6e,"tink.chunk.ChunkTools.writeInt24LE","tink/chunk/ChunkTools.hx",125,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_128_writeInt32LE,"tink.chunk.ChunkTools","writeInt32LE",0x802c208b,"tink.chunk.ChunkTools.writeInt32LE","tink/chunk/ChunkTools.hx",128,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_141_writeDoubleLE,"tink.chunk.ChunkTools","writeDoubleLE",0x4ea39406,"tink.chunk.ChunkTools.writeDoubleLE","tink/chunk/ChunkTools.hx",141,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_167_lpad,"tink.chunk.ChunkTools","lpad",0x1b6077ca,"tink.chunk.ChunkTools.lpad","tink/chunk/ChunkTools.hx",167,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_173_rpad,"tink.chunk.ChunkTools","rpad",0x1f57bf84,"tink.chunk.ChunkTools.rpad","tink/chunk/ChunkTools.hx",173,0xba0bbfb1)
HX_LOCAL_STACK_FRAME(_hx_pos_c726fbf87149b431_179_check,"tink.chunk.ChunkTools","check",0xa5267405,"tink.chunk.ChunkTools.check","tink/chunk/ChunkTools.hx",179,0xba0bbfb1)
namespace tink{
namespace chunk{

void ChunkTools_obj::__construct() { }

Dynamic ChunkTools_obj::__CreateEmpty() { return new ChunkTools_obj; }

void *ChunkTools_obj::_hx_vtable = 0;

Dynamic ChunkTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkTools_obj > _hx_result = new ChunkTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChunkTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15a62525;
}

int ChunkTools_obj::readUInt8(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_11_readUInt8)
HXLINE(  12)		if ((::tink::chunk::ChunkObject_obj::getLength(chunk) < (offset + 1))) {
HXLINE(  12)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("Out of range (chunk length = ",1c,8b,11,43) + ::tink::chunk::ChunkObject_obj::getLength(chunk)) + HX_(", read offset = ",da,bb,30,9d)) + offset) + HX_(", read length = ",67,94,a1,06)) + 1) + HX_(")",29,00,00,00))));
            		}
HXLINE(  13)		int val = ::tink::chunk::ChunkObject_obj::getByte(chunk,offset);
HXLINE(  14)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readUInt8,return )

int ChunkTools_obj::readInt8(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_17_readInt8)
HXLINE(  18)		int val = ::tink::chunk::ChunkTools_obj::readUInt8(chunk,offset);
HXLINE(  19)		if ((val > 127)) {
HXLINE(  19)			return (val - 256);
            		}
            		else {
HXLINE(  19)			return val;
            		}
HXDLIN(  19)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readInt8,return )

int ChunkTools_obj::readUInt16LE(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_22_readUInt16LE)
HXLINE(  23)		if ((::tink::chunk::ChunkObject_obj::getLength(chunk) < (offset + 2))) {
HXLINE(  23)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("Out of range (chunk length = ",1c,8b,11,43) + ::tink::chunk::ChunkObject_obj::getLength(chunk)) + HX_(", read offset = ",da,bb,30,9d)) + offset) + HX_(", read length = ",67,94,a1,06)) + 2) + HX_(")",29,00,00,00))));
            		}
HXLINE(  24)		int first = ::tink::chunk::ChunkObject_obj::getByte(chunk,offset);
HXLINE(  25)		int last = ::tink::chunk::ChunkObject_obj::getByte(chunk,(offset + 1));
HXLINE(  26)		return (first + (last << 8));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readUInt16LE,return )

int ChunkTools_obj::readInt16LE(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_29_readInt16LE)
HXLINE(  30)		int val = ::tink::chunk::ChunkTools_obj::readUInt16LE(chunk,offset);
HXLINE(  31)		if ((val > 32767)) {
HXLINE(  31)			return (val - 65536);
            		}
            		else {
HXLINE(  31)			return val;
            		}
HXDLIN(  31)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readInt16LE,return )

int ChunkTools_obj::readUInt24LE(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_34_readUInt24LE)
HXLINE(  35)		if ((::tink::chunk::ChunkObject_obj::getLength(chunk) < (offset + 3))) {
HXLINE(  35)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("Out of range (chunk length = ",1c,8b,11,43) + ::tink::chunk::ChunkObject_obj::getLength(chunk)) + HX_(", read offset = ",da,bb,30,9d)) + offset) + HX_(", read length = ",67,94,a1,06)) + 3) + HX_(")",29,00,00,00))));
            		}
HXLINE(  36)		int first = ::tink::chunk::ChunkObject_obj::getByte(chunk,offset);
HXLINE(  37)		int mid = ::tink::chunk::ChunkObject_obj::getByte(chunk,(offset + 1));
HXLINE(  38)		int last = ::tink::chunk::ChunkObject_obj::getByte(chunk,(offset + 2));
HXLINE(  39)		return ((first + (mid << 8)) + (last << 16));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readUInt24LE,return )

int ChunkTools_obj::readInt24LE(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_42_readInt24LE)
HXLINE(  43)		int val = ::tink::chunk::ChunkTools_obj::readUInt24LE(chunk,offset);
HXLINE(  44)		if ((val > 8388607)) {
HXLINE(  44)			return (val - 16777216);
            		}
            		else {
HXLINE(  44)			return val;
            		}
HXDLIN(  44)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readInt24LE,return )

int ChunkTools_obj::readInt32LE(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_47_readInt32LE)
HXLINE(  48)		if ((::tink::chunk::ChunkObject_obj::getLength(chunk) < (offset + 4))) {
HXLINE(  48)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("Out of range (chunk length = ",1c,8b,11,43) + ::tink::chunk::ChunkObject_obj::getLength(chunk)) + HX_(", read offset = ",da,bb,30,9d)) + offset) + HX_(", read length = ",67,94,a1,06)) + 4) + HX_(")",29,00,00,00))));
            		}
HXLINE(  50)		int val = ::tink::chunk::ChunkObject_obj::getByte(chunk,offset);
HXDLIN(  50)		int val1 = (val + (::tink::chunk::ChunkObject_obj::getByte(chunk,(offset + 1)) << 8));
HXDLIN(  50)		int val2 = (val1 + (::tink::chunk::ChunkObject_obj::getByte(chunk,(offset + 2)) << 16));
HXDLIN(  50)		int val3 = (val2 + (::tink::chunk::ChunkObject_obj::getByte(chunk,(offset + 3)) << 24));
HXLINE(  55)		return val3;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readInt32LE,return )

Float ChunkTools_obj::readDoubleLE(::Dynamic chunk,int offset){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_65_readDoubleLE)
HXLINE(  66)		int l = ::tink::chunk::ChunkTools_obj::readInt32LE(chunk,0);
HXLINE(  67)		int h = ::tink::chunk::ChunkTools_obj::readInt32LE(chunk,4);
HXLINE(  68)		return ::haxe::io::FPHelper_obj::i64ToDouble(l,h);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readDoubleLE,return )

::String ChunkTools_obj::readNullTerminatedString(::Dynamic chunk,int offset){
            	HX_GC_STACKFRAME(&_hx_pos_c726fbf87149b431_72_readNullTerminatedString)
HXDLIN(  72)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXDLIN(  72)			return  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,::tink::chunk::ChunkObject_obj::toBytes(chunk),offset,null())->readUntil(0);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXDLIN(  72)				{
HXDLIN(  72)					null();
            				}
HXDLIN(  72)				return ::tink::chunk::ChunkObject_obj::toString(chunk);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  72)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ChunkTools_obj,readNullTerminatedString,return )

::Dynamic ChunkTools_obj::writeUInt8(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_75_writeUInt8)
HXLINE(  79)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(1);
HXLINE(  80)		bytes->b[0] = ( (unsigned char)((v & 255)) );
HXLINE(  81)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeUInt8,return )

::Dynamic ChunkTools_obj::writeInt8(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_85_writeInt8)
HXLINE(  89)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(1);
HXLINE(  90)		v = (v & 255);
HXLINE(  91)		if ((v < 0)) {
HXLINE(  91)			v = (v + 256);
            		}
HXLINE(  92)		bytes->b[0] = ( (unsigned char)(v) );
HXLINE(  93)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeInt8,return )

::Dynamic ChunkTools_obj::writeUInt16LE(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_97_writeUInt16LE)
HXLINE( 101)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(2);
HXLINE( 102)		bytes->b[0] = ( (unsigned char)((v & 255)) );
HXLINE( 103)		bytes->b[1] = ( (unsigned char)((::hx::UShr(v,8) & 255)) );
HXLINE( 104)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeUInt16LE,return )

::Dynamic ChunkTools_obj::writeInt16LE(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_112_writeInt16LE)
HXDLIN( 112)		return ::tink::chunk::ChunkTools_obj::writeUInt16LE(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeInt16LE,return )

::Dynamic ChunkTools_obj::writeUInt24LE(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_116_writeUInt24LE)
HXLINE( 117)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(3);
HXLINE( 118)		bytes->b[0] = ( (unsigned char)((v & 255)) );
HXLINE( 119)		bytes->b[1] = ( (unsigned char)((::hx::UShr(v,8) & 255)) );
HXLINE( 120)		bytes->b[2] = ( (unsigned char)((::hx::UShr(v,16) & 255)) );
HXLINE( 121)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeUInt24LE,return )

::Dynamic ChunkTools_obj::writeInt24LE(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_125_writeInt24LE)
HXDLIN( 125)		return ::tink::chunk::ChunkTools_obj::writeUInt24LE(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeInt24LE,return )

::Dynamic ChunkTools_obj::writeInt32LE(int v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_128_writeInt32LE)
HXLINE( 132)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(4);
HXLINE( 133)		bytes->b[0] = ( (unsigned char)((v & 255)) );
HXLINE( 134)		bytes->b[1] = ( (unsigned char)((::hx::UShr(v,8) & 255)) );
HXLINE( 135)		bytes->b[2] = ( (unsigned char)((::hx::UShr(v,16) & 255)) );
HXLINE( 136)		bytes->b[3] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
HXLINE( 137)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeInt32LE,return )

::Dynamic ChunkTools_obj::writeDoubleLE(Float v){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_141_writeDoubleLE)
HXLINE( 150)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(8);
HXLINE( 151)		 cpp::Int64Struct i64 = ::haxe::io::FPHelper_obj::doubleToI64(v);
HXLINE( 152)		int l = _hx_int64_low(i64);
HXLINE( 153)		int h = _hx_int64_high(i64);
HXLINE( 154)		bytes->b[0] = ( (unsigned char)((l & 255)) );
HXLINE( 155)		bytes->b[1] = ( (unsigned char)((::hx::UShr(l,8) & 255)) );
HXLINE( 156)		bytes->b[2] = ( (unsigned char)((::hx::UShr(l,16) & 255)) );
HXLINE( 157)		bytes->b[3] = ( (unsigned char)((::hx::UShr(l,24) & 255)) );
HXLINE( 158)		bytes->b[4] = ( (unsigned char)((h & 255)) );
HXLINE( 159)		bytes->b[5] = ( (unsigned char)((::hx::UShr(h,8) & 255)) );
HXLINE( 160)		bytes->b[6] = ( (unsigned char)((::hx::UShr(h,16) & 255)) );
HXLINE( 161)		bytes->b[7] = ( (unsigned char)((::hx::UShr(h,24) & 255)) );
HXLINE( 162)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkTools_obj,writeDoubleLE,return )

::Dynamic ChunkTools_obj::lpad(::Dynamic chunk,::Dynamic pad,int length){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_167_lpad)
HXLINE( 168)		if ((::tink::chunk::ChunkObject_obj::getLength(pad) != 0)) {
HXLINE( 168)			while((::tink::chunk::ChunkObject_obj::getLength(chunk) < length)){
HXLINE( 168)				chunk = ::tink::_Chunk::Chunk_Impl__obj::concat(pad,chunk);
            			}
            		}
HXLINE( 169)		return chunk;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ChunkTools_obj,lpad,return )

::Dynamic ChunkTools_obj::rpad(::Dynamic chunk,::Dynamic pad,int length){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_173_rpad)
HXLINE( 174)		if ((::tink::chunk::ChunkObject_obj::getLength(pad) != 0)) {
HXLINE( 174)			while((::tink::chunk::ChunkObject_obj::getLength(chunk) < length)){
HXLINE( 174)				chunk = ::tink::_Chunk::Chunk_Impl__obj::concat(chunk,pad);
            			}
            		}
HXLINE( 175)		return chunk;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ChunkTools_obj,rpad,return )

void ChunkTools_obj::check(::Dynamic chunk,int offset,int length){
            	HX_STACKFRAME(&_hx_pos_c726fbf87149b431_179_check)
HXDLIN( 179)		if ((::tink::chunk::ChunkObject_obj::getLength(chunk) < (offset + length))) {
HXDLIN( 179)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("Out of range (chunk length = ",1c,8b,11,43) + ::tink::chunk::ChunkObject_obj::getLength(chunk)) + HX_(", read offset = ",da,bb,30,9d)) + offset) + HX_(", read length = ",67,94,a1,06)) + length) + HX_(")",29,00,00,00))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ChunkTools_obj,check,(void))


ChunkTools_obj::ChunkTools_obj()
{
}

bool ChunkTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rpad") ) { outValue = rpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { outValue = check_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readInt8") ) { outValue = readInt8_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeInt8") ) { outValue = writeInt8_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readInt16LE") ) { outValue = readInt16LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readInt24LE") ) { outValue = readInt24LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readInt32LE") ) { outValue = readInt32LE_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUInt16LE") ) { outValue = readUInt16LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readUInt24LE") ) { outValue = readUInt24LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readDoubleLE") ) { outValue = readDoubleLE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeInt16LE") ) { outValue = writeInt16LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeInt24LE") ) { outValue = writeInt24LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeInt32LE") ) { outValue = writeInt32LE_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeUInt16LE") ) { outValue = writeUInt16LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeUInt24LE") ) { outValue = writeUInt24LE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeDoubleLE") ) { outValue = writeDoubleLE_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"readNullTerminatedString") ) { outValue = readNullTerminatedString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChunkTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChunkTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ChunkTools_obj::__mClass;

static ::String ChunkTools_obj_sStaticFields[] = {
	HX_("readUInt8",48,9c,5d,5f),
	HX_("readInt8",df,1e,b3,6d),
	HX_("readUInt16LE",8e,fe,2b,21),
	HX_("readInt16LE",57,f4,82,47),
	HX_("readUInt24LE",ab,b0,d3,21),
	HX_("readInt24LE",74,a6,2a,48),
	HX_("readInt32LE",91,58,d2,48),
	HX_("readDoubleLE",40,61,6e,17),
	HX_("readNullTerminatedString",31,2b,64,77),
	HX_("writeUInt8",1f,4a,38,23),
	HX_("writeInt8",e8,38,6f,4e),
	HX_("writeUInt16LE",17,51,98,a9),
	HX_("writeInt16LE",ee,05,c6,b9),
	HX_("writeUInt24LE",34,03,40,aa),
	HX_("writeInt24LE",0b,b8,6d,ba),
	HX_("writeInt32LE",28,6a,15,bb),
	HX_("writeDoubleLE",c9,b3,da,9f),
	HX_("lpad",67,5c,b8,47),
	HX_("rpad",21,a4,af,4b),
	HX_("check",c8,98,b6,45),
	::String(null())
};

void ChunkTools_obj::__register()
{
	ChunkTools_obj _hx_dummy;
	ChunkTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.ChunkTools",eb,ff,47,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ChunkTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ChunkTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ChunkTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
