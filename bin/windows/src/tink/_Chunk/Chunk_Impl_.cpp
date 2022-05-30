#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink__Chunk_EmptyChunk
#include <tink/_Chunk/EmptyChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkIterator
#include <tink/chunk/ChunkIterator.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_chunk_CompoundChunk
#include <tink/chunk/CompoundChunk.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_47_get_length,"tink._Chunk.Chunk_Impl_","get_length",0xb85b8f34,"tink._Chunk.Chunk_Impl_.get_length","tink/Chunk.hx",47,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_51_getByte,"tink._Chunk.Chunk_Impl_","getByte",0x6febaf19,"tink._Chunk.Chunk_Impl_.getByte","tink/Chunk.hx",51,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_54_concat,"tink._Chunk.Chunk_Impl_","concat",0x8ff9ad19,"tink._Chunk.Chunk_Impl_.concat","tink/Chunk.hx",54,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_57_cursor,"tink._Chunk.Chunk_Impl_","cursor",0x071232db,"tink._Chunk.Chunk_Impl_.cursor","tink/Chunk.hx",57,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_60_iterator,"tink._Chunk.Chunk_Impl_","iterator",0xf478b933,"tink._Chunk.Chunk_Impl_.iterator","tink/Chunk.hx",60,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_63_sub,"tink._Chunk.Chunk_Impl_","sub",0xff39805b,"tink._Chunk.Chunk_Impl_.sub","tink/Chunk.hx",63,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_66_slice,"tink._Chunk.Chunk_Impl_","slice",0x5af147ed,"tink._Chunk.Chunk_Impl_.slice","tink/Chunk.hx",66,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_69_blitTo,"tink._Chunk.Chunk_Impl_","blitTo",0x6c295d15,"tink._Chunk.Chunk_Impl_.blitTo","tink/Chunk.hx",69,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_72_toHex,"tink._Chunk.Chunk_Impl_","toHex",0xf03a77bb,"tink._Chunk.Chunk_Impl_.toHex","tink/Chunk.hx",72,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_75_toString,"tink._Chunk.Chunk_Impl_","toString",0x994d3ff1,"tink._Chunk.Chunk_Impl_.toString","tink/Chunk.hx",75,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_78_toBytes,"tink._Chunk.Chunk_Impl_","toBytes",0xe662354b,"tink._Chunk.Chunk_Impl_.toBytes","tink/Chunk.hx",78,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_94_join,"tink._Chunk.Chunk_Impl_","join",0x4d1f5caf,"tink._Chunk.Chunk_Impl_.join","tink/Chunk.hx",94,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_105_ofBytes,"tink._Chunk.Chunk_Impl_","ofBytes",0x7d40a42f,"tink._Chunk.Chunk_Impl_.ofBytes","tink/Chunk.hx",105,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_108_ofString,"tink._Chunk.Chunk_Impl_","ofString",0x050fd88d,"tink._Chunk.Chunk_Impl_.ofString","tink/Chunk.hx",108,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_121_ofByte,"tink._Chunk.Chunk_Impl_","ofByte",0x10a227c4,"tink._Chunk.Chunk_Impl_.ofByte","tink/Chunk.hx",121,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_127_ofHex,"tink._Chunk.Chunk_Impl_","ofHex",0x0946a59f,"tink._Chunk.Chunk_Impl_.ofHex","tink/Chunk.hx",127,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_140_parseHex,"tink._Chunk.Chunk_Impl_","parseHex",0x374fbbad,"tink._Chunk.Chunk_Impl_.parseHex","tink/Chunk.hx",140,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_145_catChunk,"tink._Chunk.Chunk_Impl_","catChunk",0x7b58a1bc,"tink._Chunk.Chunk_Impl_.catChunk","tink/Chunk.hx",145,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_148_rcatString,"tink._Chunk.Chunk_Impl_","rcatString",0x26ed315a,"tink._Chunk.Chunk_Impl_.rcatString","tink/Chunk.hx",148,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_151_lcatString,"tink._Chunk.Chunk_Impl_","lcatString",0xa52e6220,"tink._Chunk.Chunk_Impl_.lcatString","tink/Chunk.hx",151,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_154_lcatBytes,"tink._Chunk.Chunk_Impl_","lcatBytes",0xf1eaadfc,"tink._Chunk.Chunk_Impl_.lcatBytes","tink/Chunk.hx",154,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_157_rcatBytes,"tink._Chunk.Chunk_Impl_","rcatBytes",0xe3932402,"tink._Chunk.Chunk_Impl_.rcatBytes","tink/Chunk.hx",157,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_160_eqChunk,"tink._Chunk.Chunk_Impl_","eqChunk",0xcb81b6bc,"tink._Chunk.Chunk_Impl_.eqChunk","tink/Chunk.hx",160,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_163_reqString,"tink._Chunk.Chunk_Impl_","reqString",0x82e8bdea,"tink._Chunk.Chunk_Impl_.reqString","tink/Chunk.hx",163,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_166_leqString,"tink._Chunk.Chunk_Impl_","leqString",0x914047e4,"tink._Chunk.Chunk_Impl_.leqString","tink/Chunk.hx",166,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_169_leqBytes,"tink._Chunk.Chunk_Impl_","leqBytes",0x6937acb8,"tink._Chunk.Chunk_Impl_.leqBytes","tink/Chunk.hx",169,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_172_reqBytes,"tink._Chunk.Chunk_Impl_","reqBytes",0xc0665972,"tink._Chunk.Chunk_Impl_.reqBytes","tink/Chunk.hx",172,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_b22acae31597a4db_174_boot,"tink._Chunk.Chunk_Impl_","boot",0x47d5acf7,"tink._Chunk.Chunk_Impl_.boot","tink/Chunk.hx",174,0x4d5f868e)
namespace tink{
namespace _Chunk{

void Chunk_Impl__obj::__construct() { }

Dynamic Chunk_Impl__obj::__CreateEmpty() { return new Chunk_Impl__obj; }

void *Chunk_Impl__obj::_hx_vtable = 0;

Dynamic Chunk_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Chunk_Impl__obj > _hx_result = new Chunk_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Chunk_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3bb70ded;
}

int Chunk_Impl__obj::get_length(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_47_get_length)
HXDLIN(  47)		return ::tink::chunk::ChunkObject_obj::getLength(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,get_length,return )

int Chunk_Impl__obj::getByte(::Dynamic this1,int i){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_51_getByte)
HXDLIN(  51)		return ::tink::chunk::ChunkObject_obj::getByte(this1,i);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,getByte,return )

::Dynamic Chunk_Impl__obj::concat(::Dynamic this1,::Dynamic that){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_54_concat)
HXDLIN(  54)		return ::tink::chunk::CompoundChunk_obj::cons(this1,that);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,concat,return )

 ::tink::chunk::ChunkCursor Chunk_Impl__obj::cursor(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_57_cursor)
HXDLIN(  57)		return ::tink::chunk::ChunkObject_obj::getCursor(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,cursor,return )

 ::tink::chunk::ChunkIterator Chunk_Impl__obj::iterator(::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_b22acae31597a4db_60_iterator)
HXDLIN(  60)		return  ::tink::chunk::ChunkIterator_obj::__alloc( HX_CTX ,::tink::chunk::ChunkObject_obj::getCursor(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,iterator,return )

::Dynamic Chunk_Impl__obj::sub(::Dynamic this1,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_63_sub)
HXDLIN(  63)		return ::tink::chunk::ChunkObject_obj::slice(this1,pos,(pos + len));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Chunk_Impl__obj,sub,return )

::Dynamic Chunk_Impl__obj::slice(::Dynamic this1,int from,int to){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_66_slice)
HXDLIN(  66)		return ::tink::chunk::ChunkObject_obj::slice(this1,from,to);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Chunk_Impl__obj,slice,return )

void Chunk_Impl__obj::blitTo(::Dynamic this1, ::haxe::io::Bytes target,int offset){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_69_blitTo)
HXDLIN(  69)		::tink::chunk::ChunkObject_obj::blitTo(this1,target,offset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Chunk_Impl__obj,blitTo,(void))

::String Chunk_Impl__obj::toHex(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_72_toHex)
HXDLIN(  72)		return ::tink::chunk::ChunkObject_obj::toBytes(this1)->toHex();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,toHex,return )

::String Chunk_Impl__obj::toString(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_75_toString)
HXDLIN(  75)		return ::tink::chunk::ChunkObject_obj::toString(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,toString,return )

 ::haxe::io::Bytes Chunk_Impl__obj::toBytes(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_78_toBytes)
HXDLIN(  78)		return ::tink::chunk::ChunkObject_obj::toBytes(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,toBytes,return )

::Dynamic Chunk_Impl__obj::join(::Array< ::Dynamic> chunks){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_94_join)
HXDLIN(  94)		if (::hx::IsNull( chunks )) {
HXLINE(  95)			return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            		}
            		else {
HXDLIN(  94)			switch((int)(chunks->length)){
            				case (int)0: {
HXLINE(  95)					return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            				}
            				break;
            				case (int)1: {
HXLINE(  96)					::Dynamic v = chunks->__get(0);
HXDLIN(  96)					return v;
            				}
            				break;
            				default:{
HXLINE(  97)					::Array< ::Dynamic> v = chunks;
HXLINE(  98)					::Dynamic ret = ::tink::_Chunk::Chunk_Impl__obj::concat(v->__get(0),v->__get(1));
HXLINE(  99)					{
HXLINE(  99)						int _g = 2;
HXDLIN(  99)						int _g1 = v->length;
HXDLIN(  99)						while((_g < _g1)){
HXLINE(  99)							_g = (_g + 1);
HXDLIN(  99)							int i = (_g - 1);
HXLINE( 100)							ret = ::tink::_Chunk::Chunk_Impl__obj::concat(ret,v->__get(i));
            						}
            					}
HXLINE( 101)					return ret;
            				}
            			}
            		}
HXLINE(  94)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,join,return )

::Dynamic Chunk_Impl__obj::ofBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_105_ofBytes)
HXDLIN( 105)		return ::tink::chunk::ByteChunk_obj::of(b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,ofBytes,return )

::Dynamic Chunk_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_108_ofString)
HXDLIN( 108)		return ::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(s,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,ofString,return )

::Dynamic Chunk_Impl__obj::ofByte(int byte){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_121_ofByte)
HXLINE( 122)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(1);
HXLINE( 123)		bytes->b[0] = ( (unsigned char)(byte) );
HXLINE( 124)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,ofByte,return )

::Dynamic Chunk_Impl__obj::ofHex(::String s){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_127_ofHex)
HXLINE( 128)		int length = (s.length >> 1);
HXLINE( 129)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(length);
HXLINE( 130)		{
HXLINE( 130)			int _g = 0;
HXDLIN( 130)			int _g1 = length;
HXDLIN( 130)			while((_g < _g1)){
HXLINE( 130)				_g = (_g + 1);
HXDLIN( 130)				int i = (_g - 1);
HXDLIN( 130)				{
HXLINE( 130)					int v = ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s.substr((i * 2),2)))) );
HXDLIN( 130)					bytes->b[i] = ( (unsigned char)(v) );
            				}
            			}
            		}
HXLINE( 131)		return ::tink::chunk::ByteChunk_obj::of(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,ofHex,return )

 ::Dynamic Chunk_Impl__obj::parseHex(::String v){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_140_parseHex)
HXDLIN( 140)		return ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + v));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_Impl__obj,parseHex,return )

::Dynamic Chunk_Impl__obj::catChunk(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_145_catChunk)
HXDLIN( 145)		return ::tink::_Chunk::Chunk_Impl__obj::concat(a,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,catChunk,return )

::Dynamic Chunk_Impl__obj::rcatString(::Dynamic a,::String b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_148_rcatString)
HXDLIN( 148)		return ::tink::_Chunk::Chunk_Impl__obj::concat(a,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(b,null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,rcatString,return )

::Dynamic Chunk_Impl__obj::lcatString(::String a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_151_lcatString)
HXDLIN( 151)		return ::tink::_Chunk::Chunk_Impl__obj::concat(::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(a,null())),b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,lcatString,return )

::Dynamic Chunk_Impl__obj::lcatBytes( ::haxe::io::Bytes a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_154_lcatBytes)
HXDLIN( 154)		return ::tink::_Chunk::Chunk_Impl__obj::concat(::tink::chunk::ByteChunk_obj::of(a),b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,lcatBytes,return )

::Dynamic Chunk_Impl__obj::rcatBytes(::Dynamic a, ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_157_rcatBytes)
HXDLIN( 157)		return ::tink::_Chunk::Chunk_Impl__obj::concat(a,::tink::chunk::ByteChunk_obj::of(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,rcatBytes,return )

bool Chunk_Impl__obj::eqChunk(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_160_eqChunk)
HXDLIN( 160)		::String _hx_tmp = ::tink::chunk::ChunkObject_obj::toString(a);
HXDLIN( 160)		return (_hx_tmp == ::tink::chunk::ChunkObject_obj::toString(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,eqChunk,return )

bool Chunk_Impl__obj::reqString(::Dynamic a,::String b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_163_reqString)
HXDLIN( 163)		::String _hx_tmp = ::tink::chunk::ChunkObject_obj::toString(a);
HXDLIN( 163)		return (_hx_tmp == b.toString());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,reqString,return )

bool Chunk_Impl__obj::leqString(::String a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_166_leqString)
HXDLIN( 166)		::String _hx_tmp = a.toString();
HXDLIN( 166)		return (_hx_tmp == ::tink::chunk::ChunkObject_obj::toString(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,leqString,return )

bool Chunk_Impl__obj::leqBytes( ::haxe::io::Bytes a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_169_leqBytes)
HXDLIN( 169)		::String _hx_tmp = a->toString();
HXDLIN( 169)		return (_hx_tmp == ::tink::chunk::ChunkObject_obj::toString(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,leqBytes,return )

bool Chunk_Impl__obj::reqBytes(::Dynamic a, ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_b22acae31597a4db_172_reqBytes)
HXDLIN( 172)		::String _hx_tmp = ::tink::chunk::ChunkObject_obj::toString(a);
HXDLIN( 172)		return (_hx_tmp == b->toString());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_Impl__obj,reqBytes,return )

::Dynamic Chunk_Impl__obj::EMPTY;


Chunk_Impl__obj::Chunk_Impl__obj()
{
}

bool Chunk_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slice") ) { outValue = slice_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHex") ) { outValue = toHex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofHex") ) { outValue = ofHex_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cursor") ) { outValue = cursor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"blitTo") ) { outValue = blitTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofByte") ) { outValue = ofByte_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { outValue = getByte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofBytes") ) { outValue = ofBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"eqChunk") ) { outValue = eqChunk_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseHex") ) { outValue = parseHex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"catChunk") ) { outValue = catChunk_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"leqBytes") ) { outValue = leqBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reqBytes") ) { outValue = reqBytes_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lcatBytes") ) { outValue = lcatBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rcatBytes") ) { outValue = rcatBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reqString") ) { outValue = reqString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"leqString") ) { outValue = leqString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rcatString") ) { outValue = rcatString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lcatString") ) { outValue = lcatString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Chunk_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Chunk_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Chunk_Impl__obj::EMPTY,HX_("EMPTY",6d,72,c8,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Chunk_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Chunk_Impl__obj::EMPTY,"EMPTY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Chunk_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Chunk_Impl__obj::EMPTY,"EMPTY");
};

#endif

::hx::Class Chunk_Impl__obj::__mClass;

static ::String Chunk_Impl__obj_sStaticFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("getByte",be,ce,a5,13),
	HX_("concat",14,09,d0,c7),
	HX_("cursor",d6,8e,e8,3e),
	HX_("iterator",ee,49,9a,93),
	HX_("sub",80,a9,57,00),
	HX_("slice",52,c4,c7,7e),
	HX_("blitTo",10,b9,ff,a3),
	HX_("toHex",20,f4,10,14),
	HX_("toString",ac,d0,6e,38),
	HX_("toBytes",f0,54,1c,8a),
	HX_("join",ea,33,65,46),
	HX_("ofBytes",d4,c3,fa,20),
	HX_("ofString",48,69,31,a4),
	HX_("ofByte",bf,83,78,48),
	HX_("ofHex",04,22,1d,2d),
	HX_("parseHex",68,4c,71,d6),
	HX_("catChunk",77,32,7a,1a),
	HX_("rcatString",d5,a6,20,fe),
	HX_("lcatString",9b,d7,61,7c),
	HX_("lcatBytes",e1,c0,27,90),
	HX_("rcatBytes",e7,36,d0,81),
	HX_("eqChunk",61,d6,3b,6f),
	HX_("reqString",cf,d0,25,21),
	HX_("leqString",c9,5a,7d,2f),
	HX_("leqBytes",73,3d,59,08),
	HX_("reqBytes",2d,ea,87,5f),
	HX_("EMPTY",6d,72,c8,ed),
	::String(null())
};

void Chunk_Impl__obj::__register()
{
	Chunk_Impl__obj _hx_dummy;
	Chunk_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink._Chunk.Chunk_Impl_",c9,ed,74,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Chunk_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Chunk_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Chunk_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Chunk_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Chunk_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Chunk_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Chunk_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Chunk_Impl__obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b22acae31597a4db_174_boot)
HXDLIN( 174)		EMPTY =  ::tink::_Chunk::EmptyChunk_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace _Chunk
