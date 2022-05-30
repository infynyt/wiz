#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_tink_chunk_CompoundChunk
#include <tink/chunk/CompoundChunk.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29de091dcfc129e0_61_new,"tink.chunk.CompoundChunk","new",0x3f58e317,"tink.chunk.CompoundChunk.new","tink/chunk/CompoundChunk.hx",61,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_11_getByte,"tink.chunk.CompoundChunk","getByte",0x4df008f5,"tink.chunk.CompoundChunk.getByte","tink/chunk/CompoundChunk.hx",11,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_17_getLength,"tink.chunk.CompoundChunk","getLength",0x28549413,"tink.chunk.CompoundChunk.getLength","tink/chunk/CompoundChunk.hx",17,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_67_findChunk,"tink.chunk.CompoundChunk","findChunk",0x41b06d6b,"tink.chunk.CompoundChunk.findChunk","tink/chunk/CompoundChunk.hx",67,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_83_flatten,"tink.chunk.CompoundChunk","flatten",0x2145e5fb,"tink.chunk.CompoundChunk.flatten","tink/chunk/CompoundChunk.hx",83,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_85_slice,"tink.chunk.CompoundChunk","slice",0x574032c9,"tink.chunk.CompoundChunk.slice","tink/chunk/CompoundChunk.hx",85,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_108_blitTo,"tink.chunk.CompoundChunk","blitTo",0x34e7f2b9,"tink.chunk.CompoundChunk.blitTo","tink/chunk/CompoundChunk.hx",108,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_112_toString,"tink.chunk.CompoundChunk","toString",0xff178695,"tink.chunk.CompoundChunk.toString","tink/chunk/CompoundChunk.hx",112,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_114_toBytes,"tink.chunk.CompoundChunk","toBytes",0xc4668f27,"tink.chunk.CompoundChunk.toBytes","tink/chunk/CompoundChunk.hx",114,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_20_asCompound,"tink.chunk.CompoundChunk","asCompound",0x44dbd8a6,"tink.chunk.CompoundChunk.asCompound","tink/chunk/CompoundChunk.hx",20,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_23_cons,"tink.chunk.CompoundChunk","cons",0x2730075a,"tink.chunk.CompoundChunk.cons","tink/chunk/CompoundChunk.hx",23,0xcc54e6fb)
HX_LOCAL_STACK_FRAME(_hx_pos_29de091dcfc129e0_45_create,"tink.chunk.CompoundChunk","create",0x0cf7a0a5,"tink.chunk.CompoundChunk.create","tink/chunk/CompoundChunk.hx",45,0xcc54e6fb)
static const int _hx_array_data_501e0ba5_16[] = {
	(int)0,
};
namespace tink{
namespace chunk{

void CompoundChunk_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_61_new)
            	}

Dynamic CompoundChunk_obj::__CreateEmpty() { return new CompoundChunk_obj; }

void *CompoundChunk_obj::_hx_vtable = 0;

Dynamic CompoundChunk_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompoundChunk_obj > _hx_result = new CompoundChunk_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompoundChunk_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49bef7e3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x49bef7e3;
	} else {
		return inClassId==(int)0x73605847;
	}
}

static ::tink::chunk::ChunkObject_obj _hx_tink_chunk_CompoundChunk__hx_tink_chunk_ChunkObject= {
	( int (::hx::Object::*)(int))&::tink::chunk::CompoundChunk_obj::getByte,
	(  ::tink::chunk::ChunkCursor (::hx::Object::*)())&::tink::chunk::CompoundChunk_obj::getCursor,
	( void (::hx::Object::*)(::Array< ::Dynamic>))&::tink::chunk::CompoundChunk_obj::flatten,
	( int (::hx::Object::*)())&::tink::chunk::CompoundChunk_obj::getLength,
	( ::Dynamic (::hx::Object::*)(int,int))&::tink::chunk::CompoundChunk_obj::slice,
	( ::String (::hx::Object::*)())&::tink::chunk::CompoundChunk_obj::toString,
	(  ::haxe::io::Bytes (::hx::Object::*)())&::tink::chunk::CompoundChunk_obj::toBytes,
	( void (::hx::Object::*)( ::haxe::io::Bytes,int))&::tink::chunk::CompoundChunk_obj::blitTo,
};

void *CompoundChunk_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x027c3451: return &_hx_tink_chunk_CompoundChunk__hx_tink_chunk_ChunkObject;
	}
	return super::_hx_getInterface(inHash);
}

int CompoundChunk_obj::getByte(int i){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_11_getByte)
HXLINE(  12)		int index = this->findChunk(i);
HXLINE(  13)		return ::tink::chunk::ChunkObject_obj::getByte(this->chunks->__get(index),(i - this->offsets->__get(index)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompoundChunk_obj,getByte,return )

int CompoundChunk_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_17_getLength)
HXDLIN(  17)		return this->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompoundChunk_obj,getLength,return )

int CompoundChunk_obj::findChunk(int target){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_67_findChunk)
HXLINE(  68)		int min = 0;
HXDLIN(  68)		int max = (this->offsets->length - 1);
HXLINE(  71)		while(((min + 1) < max)){
HXLINE(  72)			int guess = ((min + max) >> 1);
HXLINE(  73)			if ((this->offsets->__get(guess) > target)) {
HXLINE(  74)				max = guess;
            			}
            			else {
HXLINE(  76)				min = guess;
            			}
            		}
HXLINE(  79)		return min;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompoundChunk_obj,findChunk,return )

void CompoundChunk_obj::flatten(::Array< ::Dynamic> into){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_83_flatten)
HXDLIN(  83)		int _g = 0;
HXDLIN(  83)		::Array< ::Dynamic> _g1 = this->chunks;
HXDLIN(  83)		while((_g < _g1->length)){
HXDLIN(  83)			::Dynamic c = _g1->__get(_g);
HXDLIN(  83)			_g = (_g + 1);
HXDLIN(  83)			::tink::chunk::ChunkObject_obj::flatten(c,into);
            		}
            	}


::Dynamic CompoundChunk_obj::slice(int from,int to){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_85_slice)
HXLINE(  86)		int idxFrom = this->findChunk(from);
HXDLIN(  86)		int idxTo = this->findChunk(to);
HXLINE(  89)		if ((idxFrom == idxTo)) {
HXLINE(  90)			int offset = this->offsets->__get(idxFrom);
HXLINE(  91)			return ::tink::chunk::ChunkObject_obj::slice(this->chunks->__get(idxFrom),(from - offset),(to - offset));
            		}
HXLINE(  94)		::Array< ::Dynamic> ret = this->chunks->slice(idxFrom,(idxTo + 1));
HXLINE(  95)		{
HXLINE(  96)			::Dynamic c = ret->__get(0);
HXLINE(  97)			ret[0] = ::tink::chunk::ChunkObject_obj::slice(c,(from - this->offsets->__get(idxFrom)),this->offsets->__get((idxFrom + 1)));
            		}
HXLINE(  99)		{
HXLINE( 100)			::Dynamic c1 = ret->__get((ret->length - 1));
HXLINE( 101)			ret[(ret->length - 1)] = ::tink::chunk::ChunkObject_obj::slice(c1,0,(to - this->offsets->__get(idxTo)));
            		}
HXLINE( 104)		return ::tink::chunk::CompoundChunk_obj::create(ret,this->depth);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompoundChunk_obj,slice,return )

void CompoundChunk_obj::blitTo( ::haxe::io::Bytes target,int offset){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_108_blitTo)
HXDLIN( 108)		int _g = 0;
HXDLIN( 108)		int _g1 = this->chunks->length;
HXDLIN( 108)		while((_g < _g1)){
HXDLIN( 108)			_g = (_g + 1);
HXDLIN( 108)			int i = (_g - 1);
HXLINE( 109)			::tink::chunk::ChunkObject_obj::blitTo(this->chunks->__get(i),target,(offset + this->offsets->__get(i)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompoundChunk_obj,blitTo,(void))

::String CompoundChunk_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_112_toString)
HXDLIN( 112)		return this->toBytes()->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompoundChunk_obj,toString,return )

 ::haxe::io::Bytes CompoundChunk_obj::toBytes(){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_114_toBytes)
HXLINE( 115)		 ::haxe::io::Bytes ret = ::haxe::io::Bytes_obj::alloc(this->length);
HXLINE( 116)		this->blitTo(ret,0);
HXLINE( 117)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompoundChunk_obj,toBytes,return )

 ::tink::chunk::CompoundChunk CompoundChunk_obj::asCompound(::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_20_asCompound)
HXDLIN(  20)		return ( ( ::tink::chunk::CompoundChunk)(::Std_obj::downcast(c,::hx::ClassOf< ::tink::chunk::CompoundChunk >())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompoundChunk_obj,asCompound,return )

::Dynamic CompoundChunk_obj::cons(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_29de091dcfc129e0_23_cons)
HXDLIN(  23)		int _g = ::tink::chunk::ChunkObject_obj::getLength(a);
HXDLIN(  23)		int _g1 = ::tink::chunk::ChunkObject_obj::getLength(b);
HXDLIN(  23)		if ((_g == 0)) {
HXDLIN(  23)			if ((_g1 == 0)) {
HXLINE(  24)				return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            			}
            			else {
HXLINE(  25)				return b;
            			}
            		}
            		else {
HXDLIN(  23)			if ((_g1 == 0)) {
HXLINE(  26)				return a;
            			}
            			else {
HXLINE(  27)				int la = _g;
HXDLIN(  27)				int lb = _g1;
HXLINE(  28)				 ::tink::chunk::CompoundChunk _g2 = ::tink::chunk::CompoundChunk_obj::asCompound(a);
HXDLIN(  28)				 ::tink::chunk::CompoundChunk _g3 = ::tink::chunk::CompoundChunk_obj::asCompound(b);
HXLINE(  29)				if (::hx::IsNull( _g2 )) {
HXLINE(  29)					if (::hx::IsNull( _g3 )) {
HXLINE(  29)						return ::tink::chunk::CompoundChunk_obj::create(::Array_obj< ::Dynamic>::__new(2)->init(0,a)->init(1,b),2);
            					}
            					else {
HXLINE(  30)						 ::tink::chunk::CompoundChunk v = _g3;
HXLINE(  31)						if ((v->depth < 100)) {
HXLINE(  32)							return ::tink::chunk::CompoundChunk_obj::create(::Array_obj< ::Dynamic>::__new(2)->init(0,a)->init(1,b),(v->depth + 1));
            						}
            						else {
HXLINE(  34)							::Array< ::Dynamic> flat = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  35)							v->flatten(flat);
HXLINE(  36)							::tink::chunk::ChunkObject_obj::flatten(b,flat);
HXLINE(  37)							return ::tink::chunk::CompoundChunk_obj::create(flat,2);
            						}
            					}
            				}
            				else {
HXLINE(  30)					if (::hx::IsNull( _g3 )) {
HXLINE(  30)						 ::tink::chunk::CompoundChunk v = _g2;
HXLINE(  31)						if ((v->depth < 100)) {
HXLINE(  32)							return ::tink::chunk::CompoundChunk_obj::create(::Array_obj< ::Dynamic>::__new(2)->init(0,a)->init(1,b),(v->depth + 1));
            						}
            						else {
HXLINE(  34)							::Array< ::Dynamic> flat = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  35)							v->flatten(flat);
HXLINE(  36)							::tink::chunk::ChunkObject_obj::flatten(b,flat);
HXLINE(  37)							return ::tink::chunk::CompoundChunk_obj::create(flat,2);
            						}
            					}
            					else {
HXLINE(  39)						 ::tink::chunk::CompoundChunk a = _g2;
HXDLIN(  39)						 ::tink::chunk::CompoundChunk b = _g3;
HXLINE(  40)						int depth;
HXDLIN(  40)						if ((a->depth > b->depth)) {
HXLINE(  40)							depth = a->depth;
            						}
            						else {
HXLINE(  40)							depth = b->depth;
            						}
HXLINE(  41)						return ::tink::chunk::CompoundChunk_obj::create(a->chunks->concat(b->chunks),depth);
            					}
            				}
            			}
            		}
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CompoundChunk_obj,cons,return )

 ::tink::chunk::CompoundChunk CompoundChunk_obj::create(::Array< ::Dynamic> chunks,int depth){
            	HX_GC_STACKFRAME(&_hx_pos_29de091dcfc129e0_45_create)
HXLINE(  46)		 ::tink::chunk::CompoundChunk ret =  ::tink::chunk::CompoundChunk_obj::__alloc( HX_CTX );
HXLINE(  47)		::Array< int > offsets = ::Array_obj< int >::fromData( _hx_array_data_501e0ba5_16,1);
HXDLIN(  47)		int length = 0;
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			while((_g < chunks->length)){
HXLINE(  50)				::Dynamic c = chunks->__get(_g);
HXDLIN(  50)				_g = (_g + 1);
HXLINE(  51)				length = (length + ::tink::chunk::ChunkObject_obj::getLength(c));
HXDLIN(  51)				offsets->push(length);
            			}
            		}
HXLINE(  53)		ret->chunks = chunks;
HXLINE(  54)		ret->offsets = offsets;
HXLINE(  55)		ret->length = length;
HXLINE(  56)		ret->depth = depth;
HXLINE(  58)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CompoundChunk_obj,create,return )


::hx::ObjectPtr< CompoundChunk_obj > CompoundChunk_obj::__new() {
	::hx::ObjectPtr< CompoundChunk_obj > __this = new CompoundChunk_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CompoundChunk_obj > CompoundChunk_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CompoundChunk_obj *__this = (CompoundChunk_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompoundChunk_obj), true, "tink.chunk.CompoundChunk"));
	*(void **)__this = CompoundChunk_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CompoundChunk_obj::CompoundChunk_obj()
{
}

void CompoundChunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompoundChunk);
	HX_MARK_MEMBER_NAME(chunks,"chunks");
	HX_MARK_MEMBER_NAME(offsets,"offsets");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(depth,"depth");
	 ::tink::chunk::ChunkBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompoundChunk_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chunks,"chunks");
	HX_VISIT_MEMBER_NAME(offsets,"offsets");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	 ::tink::chunk::ChunkBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CompoundChunk_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"slice") ) { return ::hx::Val( slice_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"chunks") ) { return ::hx::Val( chunks ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"blitTo") ) { return ::hx::Val( blitTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { return ::hx::Val( offsets ); }
		if (HX_FIELD_EQ(inName,"getByte") ) { return ::hx::Val( getByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"flatten") ) { return ::hx::Val( flatten_dyn() ); }
		if (HX_FIELD_EQ(inName,"toBytes") ) { return ::hx::Val( toBytes_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"findChunk") ) { return ::hx::Val( findChunk_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CompoundChunk_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cons") ) { outValue = cons_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asCompound") ) { outValue = asCompound_dyn(); return true; }
	}
	return false;
}

::hx::Val CompoundChunk_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"chunks") ) { chunks=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { offsets=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompoundChunk_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("chunks",66,d9,aa,c4));
	outFields->push(HX_("offsets",80,09,65,d7));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("depth",03,f1,29,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompoundChunk_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CompoundChunk_obj,chunks),HX_("chunks",66,d9,aa,c4)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(CompoundChunk_obj,offsets),HX_("offsets",80,09,65,d7)},
	{::hx::fsInt,(int)offsetof(CompoundChunk_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(CompoundChunk_obj,depth),HX_("depth",03,f1,29,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompoundChunk_obj_sStaticStorageInfo = 0;
#endif

static ::String CompoundChunk_obj_sMemberFields[] = {
	HX_("chunks",66,d9,aa,c4),
	HX_("offsets",80,09,65,d7),
	HX_("length",e6,94,07,9f),
	HX_("depth",03,f1,29,d7),
	HX_("getByte",be,ce,a5,13),
	HX_("getLength",1c,1e,5e,1b),
	HX_("findChunk",74,f7,b9,34),
	HX_("flatten",c4,ab,fb,e6),
	HX_("slice",52,c4,c7,7e),
	HX_("blitTo",10,b9,ff,a3),
	HX_("toString",ac,d0,6e,38),
	HX_("toBytes",f0,54,1c,8a),
	::String(null()) };

::hx::Class CompoundChunk_obj::__mClass;

static ::String CompoundChunk_obj_sStaticFields[] = {
	HX_("asCompound",7d,16,2b,fa),
	HX_("cons",f1,b9,c4,41),
	HX_("create",fc,66,0f,7c),
	::String(null())
};

void CompoundChunk_obj::__register()
{
	CompoundChunk_obj _hx_dummy;
	CompoundChunk_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.CompoundChunk",a5,0b,1e,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompoundChunk_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CompoundChunk_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompoundChunk_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompoundChunk_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompoundChunk_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompoundChunk_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
