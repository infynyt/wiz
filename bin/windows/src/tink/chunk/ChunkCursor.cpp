#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
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
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_6_new,"tink.chunk.ChunkCursor","new",0x7b99d2f8,"tink.chunk.ChunkCursor.new","tink/chunk/ChunkCursor.hx",6,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_29_clone,"tink.chunk.ChunkCursor","clone",0xa320ebf5,"tink.chunk.ChunkCursor.clone","tink/chunk/ChunkCursor.hx",29,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_44_reset,"tink.chunk.ChunkCursor","reset",0x41862267,"tink.chunk.ChunkCursor.reset","tink/chunk/ChunkCursor.hx",44,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_64_flush,"tink.chunk.ChunkCursor","flush",0x5d593b5c,"tink.chunk.ChunkCursor.flush","tink/chunk/ChunkCursor.hx",64,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_74_prune,"tink.chunk.ChunkCursor","prune",0x23524bc2,"tink.chunk.ChunkCursor.prune","tink/chunk/ChunkCursor.hx",74,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_80_add,"tink.chunk.ChunkCursor","add",0x7b8ff4b9,"tink.chunk.ChunkCursor.add","tink/chunk/ChunkCursor.hx",80,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_90_shift,"tink.chunk.ChunkCursor","shift",0xd6e0c51a,"tink.chunk.ChunkCursor.shift","tink/chunk/ChunkCursor.hx",90,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_114_clear,"tink.chunk.ChunkCursor","clear",0xa3194a25,"tink.chunk.ChunkCursor.clear","tink/chunk/ChunkCursor.hx",114,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_122_left,"tink.chunk.ChunkCursor","left",0xa9ac4a6f,"tink.chunk.ChunkCursor.left","tink/chunk/ChunkCursor.hx",122,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_132_right,"tink.chunk.ChunkCursor","right",0x4421e474,"tink.chunk.ChunkCursor.right","tink/chunk/ChunkCursor.hx",132,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_154_seek,"tink.chunk.ChunkCursor","seek",0xae4cc7e0,"tink.chunk.ChunkCursor.seek","tink/chunk/ChunkCursor.hx",154,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_141_seek,"tink.chunk.ChunkCursor","seek",0xae4cc7e0,"tink.chunk.ChunkCursor.seek","tink/chunk/ChunkCursor.hx",141,0x8dceb9ba)
static const int _hx_array_data_ab0f3706_18[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_215_sweep,"tink.chunk.ChunkCursor","sweep",0xe0c7ee84,"tink.chunk.ChunkCursor.sweep","tink/chunk/ChunkCursor.hx",215,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_227_sweepTo,"tink.chunk.ChunkCursor","sweepTo",0x9583e11f,"tink.chunk.ChunkCursor.sweepTo","tink/chunk/ChunkCursor.hx",227,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_235_moveBy,"tink.chunk.ChunkCursor","moveBy",0xd80c6fb0,"tink.chunk.ChunkCursor.moveBy","tink/chunk/ChunkCursor.hx",235,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_244_moveTo,"tink.chunk.ChunkCursor","moveTo",0xd80c7f54,"tink.chunk.ChunkCursor.moveTo","tink/chunk/ChunkCursor.hx",244,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_273_ffwd,"tink.chunk.ChunkCursor","ffwd",0xa5b5d3b5,"tink.chunk.ChunkCursor.ffwd","tink/chunk/ChunkCursor.hx",273,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_285_next,"tink.chunk.ChunkCursor","next",0xaafec75b,"tink.chunk.ChunkCursor.next","tink/chunk/ChunkCursor.hx",285,0x8dceb9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea4ac0b6dcc0619_18_create,"tink.chunk.ChunkCursor","create",0x876f1364,"tink.chunk.ChunkCursor.create","tink/chunk/ChunkCursor.hx",18,0x8dceb9ba)
namespace tink{
namespace chunk{

void ChunkCursor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_6_new)
HXLINE(  16)		this->currentByte = -1;
HXLINE(  15)		this->currentPos = 0;
HXLINE(  14)		this->length = 0;
HXLINE(  12)		this->curLength = 0;
HXLINE(  11)		this->curOffset = 0;
HXLINE(  10)		this->curPartIndex = 0;
            	}

Dynamic ChunkCursor_obj::__CreateEmpty() { return new ChunkCursor_obj; }

void *ChunkCursor_obj::_hx_vtable = 0;

Dynamic ChunkCursor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkCursor_obj > _hx_result = new ChunkCursor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChunkCursor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b17b728;
}

 ::tink::chunk::ChunkCursor ChunkCursor_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_29_clone)
HXLINE(  30)		 ::tink::chunk::ChunkCursor ret =  ::tink::chunk::ChunkCursor_obj::__alloc( HX_CTX );
HXLINE(  31)		ret->parts = this->parts->copy();
HXLINE(  32)		ret->curPart = this->curPart;
HXLINE(  33)		ret->curPartIndex = this->curPartIndex;
HXLINE(  34)		ret->curOffset = this->curOffset;
HXLINE(  35)		ret->curLength = this->curLength;
HXLINE(  36)		ret->length = this->length;
HXLINE(  37)		ret->currentPos = this->currentPos;
HXLINE(  38)		ret->currentByte = this->currentByte;
HXLINE(  39)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,clone,return )

void ChunkCursor_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_44_reset)
HXLINE(  45)		this->length = 0;
HXLINE(  46)		this->currentPos = 0;
HXLINE(  47)		this->currentByte = -1;
HXLINE(  48)		this->curOffset = 0;
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			::Array< ::Dynamic> _g1 = this->parts;
HXDLIN(  50)			while((_g < _g1->length)){
HXLINE(  50)				 ::tink::chunk::ByteChunk p = _g1->__get(_g).StaticCast<  ::tink::chunk::ByteChunk >();
HXDLIN(  50)				_g = (_g + 1);
HXLINE(  51)				 ::tink::chunk::ChunkCursor _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  51)				_hx_tmp->length = (_hx_tmp->length + (p->to - p->from));
            			}
            		}
HXLINE(  53)		this->curPart = this->parts->__get((this->curPartIndex = 0)).StaticCast<  ::tink::chunk::ByteChunk >();
HXLINE(  54)		if (::hx::IsNotNull( this->curPart )) {
HXLINE(  55)			 ::tink::chunk::ByteChunk _this = this->curPart;
HXDLIN(  55)			this->curLength = (_this->to - _this->from);
HXLINE(  56)			 ::tink::chunk::ByteChunk _this1 = this->curPart;
HXDLIN(  56)			this->currentByte = ( (int)(_hx_array_unsafe_get(_this1->data,_this1->from)) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,reset,(void))

::Dynamic ChunkCursor_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_64_flush)
HXLINE(  65)		::Dynamic ret = this->left();
HXLINE(  66)		this->shift(null());
HXLINE(  67)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,flush,return )

void ChunkCursor_obj::prune(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_74_prune)
HXDLIN(  74)		this->shift(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,prune,(void))

void ChunkCursor_obj::add(::Dynamic chunk){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_80_add)
HXLINE(  81)		::tink::chunk::ChunkObject_obj::flatten(chunk,this->parts);
HXLINE(  82)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,add,(void))

void ChunkCursor_obj::shift(::Dynamic chunk){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_90_shift)
HXLINE(  92)		this->parts->removeRange(0,this->curPartIndex);
HXLINE(  94)		{
HXLINE(  94)			 ::tink::chunk::ByteChunk _g = this->parts->__get(0).StaticCast<  ::tink::chunk::ByteChunk >();
HXLINE(  95)			if (::hx::IsNotNull( _g )) {
HXLINE(  96)				 ::tink::chunk::ByteChunk chunk = _g;
HXLINE(  97)				{
HXLINE(  97)					 ::tink::chunk::ByteChunk _g1 = chunk->getSlice(this->curOffset,this->curLength);
HXLINE(  98)					if (::hx::IsNull( _g1 )) {
HXLINE(  99)						this->parts->shift().StaticCast<  ::tink::chunk::ByteChunk >();
            					}
            					else {
HXLINE( 100)						 ::tink::chunk::ByteChunk rest = _g1;
HXLINE( 101)						this->parts[0] = rest;
            					}
            				}
            			}
            		}
HXLINE( 105)		if (::hx::IsNotNull( chunk )) {
HXLINE( 106)			this->add(chunk);
            		}
            		else {
HXLINE( 108)			this->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,shift,(void))

void ChunkCursor_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_114_clear)
HXLINE( 115)		this->parts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 116)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,clear,(void))

::Dynamic ChunkCursor_obj::left(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_122_left)
HXLINE( 123)		if (::hx::IsNull( this->curPart )) {
HXLINE( 123)			return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            		}
HXLINE( 124)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 124)		{
HXLINE( 124)			int _g1 = 0;
HXDLIN( 124)			int _g2 = this->curPartIndex;
HXDLIN( 124)			while((_g1 < _g2)){
HXLINE( 124)				_g1 = (_g1 + 1);
HXDLIN( 124)				int i = (_g1 - 1);
HXDLIN( 124)				_g->push(this->parts->__get(i).StaticCast<  ::tink::chunk::ByteChunk >());
            			}
            		}
HXDLIN( 124)		::Array< ::Dynamic> left = _g;
HXLINE( 125)		left->push(this->curPart->slice(0,this->curOffset));
HXLINE( 126)		return ::tink::_Chunk::Chunk_Impl__obj::join(left);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,left,return )

::Dynamic ChunkCursor_obj::right(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_132_right)
HXLINE( 133)		if (::hx::IsNull( this->curPart )) {
HXLINE( 133)			return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            		}
HXLINE( 134)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 134)		{
HXLINE( 134)			int _g1 = this->curPartIndex;
HXDLIN( 134)			int _g2 = this->parts->length;
HXDLIN( 134)			while((_g1 < _g2)){
HXLINE( 134)				_g1 = (_g1 + 1);
HXDLIN( 134)				int i = (_g1 - 1);
HXDLIN( 134)				_g->push(this->parts->__get(i).StaticCast<  ::tink::chunk::ByteChunk >());
            			}
            		}
HXDLIN( 134)		::Array< ::Dynamic> right = _g;
HXLINE( 135)		if ((right->length > 0)) {
HXLINE( 136)			right[0] = this->curPart->slice(this->curOffset,this->curLength);
            		}
HXLINE( 138)		return ::tink::_Chunk::Chunk_Impl__obj::join(right);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,right,return )

 ::haxe::ds::Option ChunkCursor_obj::seek(::Array< int > seekable, ::Dynamic options){
            		HX_BEGIN_LOCAL_FUNC_S8(::hx::LocalFunc,_hx_Closure_0, ::tink::chunk::ChunkCursor,_gthis, ::Dynamic,options,int,max,::Array< int >,seekable, ::tink::chunk::ChunkCursor,copy,::Array< int >,count,::Array< int >,candidates,int,first) HXARGC(2)
            		 ::haxe::ds::Option _hx_run( ::tink::chunk::ByteChunk b,int offset){
            			HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_154_seek)
HXLINE( 155)			::Array< unsigned char > data = b->data;
HXLINE( 157)			{
HXLINE( 157)				int _g = (b->from + offset);
HXDLIN( 157)				int _g1 = b->to;
HXDLIN( 157)				while((_g < _g1)){
HXLINE( 157)					_g = (_g + 1);
HXDLIN( 157)					int i = (_g - 1);
HXLINE( 158)					int byte = ( (int)(_hx_array_unsafe_get(data,i)) );
HXLINE( 160)					if ((candidates->length > 0)) {
HXLINE( 161)						int c = 0;
HXLINE( 162)						while((c < count->__get(0))){
HXLINE( 163)							int pos = candidates->__get(c);
HXLINE( 164)							if ((seekable->__get(pos) == byte)) {
HXLINE( 165)								if ((pos == max)) {
HXLINE( 166)									copy->moveTo((copy->currentPos + (((i - (b->from + offset)) - seekable->length) + 1)));
HXLINE( 167)									::Dynamic before = copy->left();
HXLINE( 168)									{
HXLINE( 168)										int delta = ::tink::chunk::ChunkObject_obj::getLength(before);
HXDLIN( 168)										_gthis->moveTo((_gthis->currentPos + (delta + seekable->length)));
            									}
HXLINE( 169)									if (::hx::IsNull( options )) {
HXLINE( 171)										_gthis->shift(null());
            									}
            									else {
HXLINE( 169)										 ::Dynamic _g = options->__Field(HX_("withoutPruning",7f,c9,64,2d),::hx::paccDynamic);
HXDLIN( 169)										if (::hx::IsNull( _g )) {
HXLINE( 171)											_gthis->shift(null());
            										}
            										else {
HXLINE( 169)											if (::hx::IsEq( _g,false )) {
HXLINE( 171)												_gthis->shift(null());
            											}
            										}
            									}
HXLINE( 174)									return ::haxe::ds::Option_obj::Some(before);
            								}
            								else {
HXLINE( 176)									c = (c + 1);
HXDLIN( 176)									candidates[(c - 1)] = (pos + 1);
            								}
            							}
            							else {
HXLINE( 178)								count[0]--;
HXLINE( 179)								 ::Dynamic last = candidates->pop();
HXLINE( 180)								if ((count->__get(0) > c)) {
HXLINE( 181)									candidates[c] = ( (int)(last) );
            								}
            							}
            						}
            					}
HXLINE( 187)					if ((byte == first)) {
HXLINE( 188)						count[0] = candidates->push(1);
            					}
            				}
            			}
HXLINE( 191)			copy->moveTo((copy->currentPos + (b->to - (b->from + offset))));
HXLINE( 193)			return ::haxe::ds::Option_obj::None_dyn();
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_141_seek)
HXDLIN( 141)		 ::tink::chunk::ChunkCursor _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 143)		bool _hx_tmp;
HXDLIN( 143)		bool _hx_tmp1;
HXDLIN( 143)		if (::hx::IsNotNull( this->curPart )) {
HXLINE( 143)			_hx_tmp1 = ::hx::IsNull( seekable );
            		}
            		else {
HXLINE( 143)			_hx_tmp1 = true;
            		}
HXDLIN( 143)		if (!(_hx_tmp1)) {
HXLINE( 143)			_hx_tmp = (seekable->length == 0);
            		}
            		else {
HXLINE( 143)			_hx_tmp = true;
            		}
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 144)			return ::haxe::ds::Option_obj::None_dyn();
            		}
HXLINE( 146)		int max = (seekable->length - 1);
HXDLIN( 146)		int first = seekable->__get(0);
HXDLIN( 146)		::Array< int > candidates = ::Array_obj< int >::__new(0);
HXDLIN( 146)		::Array< int > count = ::Array_obj< int >::fromData( _hx_array_data_ab0f3706_18,1);
HXDLIN( 146)		 ::tink::chunk::ChunkCursor copy = this->clone();
HXLINE( 152)		copy->shift(null());
HXLINE( 154)		 ::Dynamic part =  ::Dynamic(new _hx_Closure_0(_gthis,options,max,seekable,copy,count,candidates,first));
HXLINE( 196)		 ::haxe::ds::Option _g = part(this->curPart,this->curOffset);
HXDLIN( 196)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 199)			{
HXLINE( 199)				int _g = (this->curPartIndex + 1);
HXDLIN( 199)				int _g1 = this->parts->length;
HXDLIN( 199)				while((_g < _g1)){
HXLINE( 199)					_g = (_g + 1);
HXDLIN( 199)					int i = (_g - 1);
HXLINE( 200)					{
HXLINE( 200)						 ::haxe::ds::Option _g1 = part(this->parts->__get(i).StaticCast<  ::tink::chunk::ByteChunk >(),0);
HXDLIN( 200)						switch((int)(_g1->_hx_getIndex())){
            							case (int)0: {
HXLINE( 201)								::Dynamic v = _g1->_hx_getObject(0);
HXDLIN( 201)								return ::haxe::ds::Option_obj::Some(v);
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            						}
            					}
            				}
            			}
HXLINE( 205)			return ::haxe::ds::Option_obj::None_dyn();
            		}
            		else {
HXLINE( 206)			 ::haxe::ds::Option v = _g;
HXDLIN( 206)			return v;
            		}
HXLINE( 196)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ChunkCursor_obj,seek,return )

::Dynamic ChunkCursor_obj::sweep(int len){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_215_sweep)
HXLINE( 216)		::Dynamic data = ::tink::chunk::ChunkObject_obj::slice(this->right(),0,len);
HXLINE( 217)		this->moveTo((this->currentPos + len));
HXLINE( 218)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,sweep,return )

::Dynamic ChunkCursor_obj::sweepTo(int pos){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_227_sweepTo)
HXDLIN( 227)		return this->sweep((pos - this->currentPos));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,sweepTo,return )

int ChunkCursor_obj::moveBy(int delta){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_235_moveBy)
HXDLIN( 235)		return this->moveTo((this->currentPos + delta));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,moveBy,return )

int ChunkCursor_obj::moveTo(int position){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_244_moveTo)
HXLINE( 246)		if ((this->length == 0)) {
HXLINE( 246)			return 0;
            		}
HXLINE( 248)		if ((position > this->length)) {
HXLINE( 248)			position = (this->length - 1);
            		}
HXLINE( 249)		if ((position < 0)) {
HXLINE( 249)			position = 0;
            		}
HXLINE( 251)		this->currentPos = position;
HXLINE( 253)		if ((position == this->length)) {
HXLINE( 253)			this->ffwd();
            		}
            		else {
HXLINE( 255)			int _g = 0;
HXDLIN( 255)			int _g1 = this->parts->length;
HXDLIN( 255)			while((_g < _g1)){
HXLINE( 255)				_g = (_g + 1);
HXDLIN( 255)				int i = (_g - 1);
HXLINE( 256)				 ::tink::chunk::ByteChunk c = this->parts->__get(i).StaticCast<  ::tink::chunk::ByteChunk >();
HXLINE( 257)				{
HXLINE( 257)					int _g1 = (c->to - c->from);
HXLINE( 258)					{
HXLINE( 258)						int enough = _g1;
HXDLIN( 258)						if ((enough > position)) {
HXLINE( 259)							this->curPart = c;
HXLINE( 260)							this->curPartIndex = i;
HXLINE( 261)							this->curOffset = position;
HXLINE( 262)							this->curLength = (c->to - c->from);
HXLINE( 263)							this->currentByte = ( (int)(_hx_array_unsafe_get(c->data,(c->from + position))) );
HXLINE( 264)							goto _hx_goto_22;
            						}
            						else {
HXLINE( 265)							int v = _g1;
HXLINE( 266)							position = (position - v);
            						}
            					}
            				}
            			}
            			_hx_goto_22:;
            		}
HXLINE( 270)		return this->currentPos;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,moveTo,return )

void ChunkCursor_obj::ffwd(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_273_ffwd)
HXLINE( 274)		this->currentByte = -1;
HXLINE( 275)		this->curLength = 0;
HXLINE( 276)		this->curOffset = 0;
HXLINE( 277)		this->curPart = null();
HXLINE( 278)		this->curPartIndex = this->parts->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,ffwd,(void))

bool ChunkCursor_obj::next(){
            	HX_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_285_next)
HXLINE( 286)		if ((this->currentPos == this->length)) {
HXLINE( 286)			return false;
            		}
HXLINE( 287)		this->currentPos++;
HXLINE( 288)		if ((this->currentPos == this->length)) {
HXLINE( 289)			this->ffwd();
HXLINE( 290)			return false;
            		}
HXLINE( 292)		if ((this->curOffset == (this->curLength - 1))) {
HXLINE( 293)			this->curOffset = 0;
HXLINE( 294)			this->curPart = this->parts->__get(++this->curPartIndex).StaticCast<  ::tink::chunk::ByteChunk >();
HXLINE( 295)			 ::tink::chunk::ByteChunk _this = this->curPart;
HXDLIN( 295)			this->curLength = (_this->to - _this->from);
HXLINE( 296)			 ::tink::chunk::ByteChunk _this1 = this->curPart;
HXDLIN( 296)			this->currentByte = ( (int)(_hx_array_unsafe_get(_this1->data,_this1->from)) );
            		}
            		else {
HXLINE( 299)			 ::tink::chunk::ByteChunk _this = this->curPart;
HXDLIN( 299)			this->currentByte = ( (int)(_hx_array_unsafe_get(_this->data,(_this->from + ++this->curOffset))) );
            		}
HXLINE( 301)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkCursor_obj,next,return )

 ::tink::chunk::ChunkCursor ChunkCursor_obj::create(::Array< ::Dynamic> parts){
            	HX_GC_STACKFRAME(&_hx_pos_8ea4ac0b6dcc0619_18_create)
HXLINE(  19)		 ::tink::chunk::ChunkCursor ret =  ::tink::chunk::ChunkCursor_obj::__alloc( HX_CTX );
HXLINE(  20)		ret->parts = parts;
HXLINE(  21)		ret->reset();
HXLINE(  22)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChunkCursor_obj,create,return )


::hx::ObjectPtr< ChunkCursor_obj > ChunkCursor_obj::__new() {
	::hx::ObjectPtr< ChunkCursor_obj > __this = new ChunkCursor_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChunkCursor_obj > ChunkCursor_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChunkCursor_obj *__this = (ChunkCursor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkCursor_obj), true, "tink.chunk.ChunkCursor"));
	*(void **)__this = ChunkCursor_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChunkCursor_obj::ChunkCursor_obj()
{
}

void ChunkCursor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChunkCursor);
	HX_MARK_MEMBER_NAME(parts,"parts");
	HX_MARK_MEMBER_NAME(curPart,"curPart");
	HX_MARK_MEMBER_NAME(curPartIndex,"curPartIndex");
	HX_MARK_MEMBER_NAME(curOffset,"curOffset");
	HX_MARK_MEMBER_NAME(curLength,"curLength");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(currentPos,"currentPos");
	HX_MARK_MEMBER_NAME(currentByte,"currentByte");
	HX_MARK_END_CLASS();
}

void ChunkCursor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parts,"parts");
	HX_VISIT_MEMBER_NAME(curPart,"curPart");
	HX_VISIT_MEMBER_NAME(curPartIndex,"curPartIndex");
	HX_VISIT_MEMBER_NAME(curOffset,"curOffset");
	HX_VISIT_MEMBER_NAME(curLength,"curLength");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(currentPos,"currentPos");
	HX_VISIT_MEMBER_NAME(currentByte,"currentByte");
}

::hx::Val ChunkCursor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return ::hx::Val( seek_dyn() ); }
		if (HX_FIELD_EQ(inName,"ffwd") ) { return ::hx::Val( ffwd_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { return ::hx::Val( parts ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"prune") ) { return ::hx::Val( prune_dyn() ); }
		if (HX_FIELD_EQ(inName,"shift") ) { return ::hx::Val( shift_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		if (HX_FIELD_EQ(inName,"sweep") ) { return ::hx::Val( sweep_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return ::hx::Val( moveBy_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curPart") ) { return ::hx::Val( curPart ); }
		if (HX_FIELD_EQ(inName,"sweepTo") ) { return ::hx::Val( sweepTo_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOffset") ) { return ::hx::Val( curOffset ); }
		if (HX_FIELD_EQ(inName,"curLength") ) { return ::hx::Val( curLength ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentPos") ) { return ::hx::Val( currentPos ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentByte") ) { return ::hx::Val( currentByte ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curPartIndex") ) { return ::hx::Val( curPartIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ChunkCursor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

::hx::Val ChunkCursor_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { parts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curPart") ) { curPart=inValue.Cast<  ::tink::chunk::ByteChunk >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOffset") ) { curOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLength") ) { curLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentPos") ) { currentPos=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentByte") ) { currentByte=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curPartIndex") ) { curPartIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChunkCursor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parts",20,91,55,bd));
	outFields->push(HX_("curPart",93,55,67,b5));
	outFields->push(HX_("curPartIndex",7f,a0,9c,c2));
	outFields->push(HX_("curOffset",33,b1,cc,d0));
	outFields->push(HX_("curLength",86,ae,94,0f));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("currentPos",db,22,30,c7));
	outFields->push(HX_("currentByte",e1,f7,b4,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChunkCursor_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ChunkCursor_obj,parts),HX_("parts",20,91,55,bd)},
	{::hx::fsObject /*  ::tink::chunk::ByteChunk */ ,(int)offsetof(ChunkCursor_obj,curPart),HX_("curPart",93,55,67,b5)},
	{::hx::fsInt,(int)offsetof(ChunkCursor_obj,curPartIndex),HX_("curPartIndex",7f,a0,9c,c2)},
	{::hx::fsInt,(int)offsetof(ChunkCursor_obj,curOffset),HX_("curOffset",33,b1,cc,d0)},
	{::hx::fsInt,(int)offsetof(ChunkCursor_obj,curLength),HX_("curLength",86,ae,94,0f)},
	{::hx::fsInt,(int)offsetof(ChunkCursor_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(ChunkCursor_obj,currentPos),HX_("currentPos",db,22,30,c7)},
	{::hx::fsInt,(int)offsetof(ChunkCursor_obj,currentByte),HX_("currentByte",e1,f7,b4,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChunkCursor_obj_sStaticStorageInfo = 0;
#endif

static ::String ChunkCursor_obj_sMemberFields[] = {
	HX_("parts",20,91,55,bd),
	HX_("curPart",93,55,67,b5),
	HX_("curPartIndex",7f,a0,9c,c2),
	HX_("curOffset",33,b1,cc,d0),
	HX_("curLength",86,ae,94,0f),
	HX_("length",e6,94,07,9f),
	HX_("currentPos",db,22,30,c7),
	HX_("currentByte",e1,f7,b4,79),
	HX_("clone",5d,13,63,48),
	HX_("reset",cf,49,c8,e6),
	HX_("flush",c4,62,9b,02),
	HX_("prune",2a,73,94,c8),
	HX_("add",21,f2,49,00),
	HX_("shift",82,ec,22,7c),
	HX_("clear",8d,71,5b,48),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("seek",78,85,50,4c),
	HX_("sweep",ec,15,0a,86),
	HX_("sweepTo",87,b2,2c,ad),
	HX_("moveBy",48,c3,ac,cc),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("ffwd",4d,91,b9,43),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ChunkCursor_obj::__mClass;

static ::String ChunkCursor_obj_sStaticFields[] = {
	HX_("create",fc,66,0f,7c),
	::String(null())
};

void ChunkCursor_obj::__register()
{
	ChunkCursor_obj _hx_dummy;
	ChunkCursor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.ChunkCursor",06,37,0f,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ChunkCursor_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ChunkCursor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkCursor_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChunkCursor_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkCursor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkCursor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
