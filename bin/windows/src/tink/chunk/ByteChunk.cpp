#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_44ac895bc406b5e4_20_new,"tink.chunk.ByteChunk","new",0xb9ff1e5a,"tink.chunk.ByteChunk.new","tink/chunk/ByteChunk.hx",20,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_14_get_wrapped,"tink.chunk.ByteChunk","get_wrapped",0x0c600d56,"tink.chunk.ByteChunk.get_wrapped","tink/chunk/ByteChunk.hx",14,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_30_getByte,"tink.chunk.ByteChunk","getByte",0x4ba8a1b8,"tink.chunk.ByteChunk.getByte","tink/chunk/ByteChunk.hx",30,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_33_flatten,"tink.chunk.ByteChunk","flatten",0x1efe7ebe,"tink.chunk.ByteChunk.flatten","tink/chunk/ByteChunk.hx",33,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_36_getLength,"tink.chunk.ByteChunk","getLength",0x77f72396,"tink.chunk.ByteChunk.getLength","tink/chunk/ByteChunk.hx",36,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_38_getSlice,"tink.chunk.ByteChunk","getSlice",0xa9149ba2,"tink.chunk.ByteChunk.getSlice","tink/chunk/ByteChunk.hx",38,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_52_slice,"tink.chunk.ByteChunk","slice",0x745e04cc,"tink.chunk.ByteChunk.slice","tink/chunk/ByteChunk.hx",52,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_59_blitTo,"tink.chunk.ByteChunk","blitTo",0x91e1e356,"tink.chunk.ByteChunk.blitTo","tink/chunk/ByteChunk.hx",59,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_62_toBytes,"tink.chunk.ByteChunk","toBytes",0xc21f27ea,"tink.chunk.ByteChunk.toBytes","tink/chunk/ByteChunk.hx",62,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_65_toString,"tink.chunk.ByteChunk","toString",0x02e49872,"tink.chunk.ByteChunk.toString","tink/chunk/ByteChunk.hx",65,0x2eeffc18)
HX_LOCAL_STACK_FRAME(_hx_pos_44ac895bc406b5e4_67_of,"tink.chunk.ByteChunk","of",0xe422705d,"tink.chunk.ByteChunk.of","tink/chunk/ByteChunk.hx",67,0x2eeffc18)
namespace tink{
namespace chunk{

void ByteChunk_obj::__construct(::Array< unsigned char > data,int from,int to){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_20_new)
HXLINE(  24)		this->data = data;
HXLINE(  25)		this->from = from;
HXLINE(  26)		this->to = to;
            	}

Dynamic ByteChunk_obj::__CreateEmpty() { return new ByteChunk_obj; }

void *ByteChunk_obj::_hx_vtable = 0;

Dynamic ByteChunk_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ByteChunk_obj > _hx_result = new ByteChunk_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ByteChunk_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1854896e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1854896e;
	} else {
		return inClassId==(int)0x49bef7e3;
	}
}

static ::tink::chunk::ChunkObject_obj _hx_tink_chunk_ByteChunk__hx_tink_chunk_ChunkObject= {
	( int (::hx::Object::*)(int))&::tink::chunk::ByteChunk_obj::getByte,
	(  ::tink::chunk::ChunkCursor (::hx::Object::*)())&::tink::chunk::ByteChunk_obj::getCursor,
	( void (::hx::Object::*)(::Array< ::Dynamic>))&::tink::chunk::ByteChunk_obj::flatten,
	( int (::hx::Object::*)())&::tink::chunk::ByteChunk_obj::getLength,
	( ::Dynamic (::hx::Object::*)(int,int))&::tink::chunk::ByteChunk_obj::slice,
	( ::String (::hx::Object::*)())&::tink::chunk::ByteChunk_obj::toString,
	(  ::haxe::io::Bytes (::hx::Object::*)())&::tink::chunk::ByteChunk_obj::toBytes,
	( void (::hx::Object::*)( ::haxe::io::Bytes,int))&::tink::chunk::ByteChunk_obj::blitTo,
};

void *ByteChunk_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x027c3451: return &_hx_tink_chunk_ByteChunk__hx_tink_chunk_ChunkObject;
	}
	return super::_hx_getInterface(inHash);
}

 ::haxe::io::Bytes ByteChunk_obj::get_wrapped(){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_14_get_wrapped)
HXLINE(  15)		if (::hx::IsNull( this->wrapped )) {
HXLINE(  16)			this->wrapped = ::haxe::io::Bytes_obj::ofData(this->data);
            		}
HXLINE(  17)		return this->wrapped;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteChunk_obj,get_wrapped,return )

int ByteChunk_obj::getByte(int index){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_30_getByte)
HXDLIN(  30)		return ( (int)(_hx_array_unsafe_get(this->data,(this->from + index))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteChunk_obj,getByte,return )

void ByteChunk_obj::flatten(::Array< ::Dynamic> into){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_33_flatten)
HXDLIN(  33)		into->push(::hx::ObjectPtr<OBJ_>(this));
            	}


int ByteChunk_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_36_getLength)
HXDLIN(  36)		return (this->to - this->from);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteChunk_obj,getLength,return )

 ::tink::chunk::ByteChunk ByteChunk_obj::getSlice(int from,int to){
            	HX_GC_STACKFRAME(&_hx_pos_44ac895bc406b5e4_38_getSlice)
HXLINE(  39)		if ((to > (this->to - this->from))) {
HXLINE(  40)			to = (this->to - this->from);
            		}
HXLINE(  42)		if ((from < 0)) {
HXLINE(  43)			from = 0;
            		}
HXLINE(  46)		if ((to <= from)) {
HXLINE(  46)			return null();
            		}
            		else {
HXLINE(  47)			bool _hx_tmp;
HXDLIN(  47)			if ((to == (this->to - this->from))) {
HXLINE(  47)				_hx_tmp = (from == 0);
            			}
            			else {
HXLINE(  47)				_hx_tmp = false;
            			}
HXDLIN(  47)			if (_hx_tmp) {
HXLINE(  47)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
            			else {
HXLINE(  48)				return  ::tink::chunk::ByteChunk_obj::__alloc( HX_CTX ,this->data,(this->from + from),(to + this->from));
            			}
            		}
HXLINE(  46)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteChunk_obj,getSlice,return )

::Dynamic ByteChunk_obj::slice(int from,int to){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_52_slice)
HXLINE(  53)		 ::tink::chunk::ByteChunk _g = this->getSlice(from,to);
HXLINE(  54)		if (::hx::IsNull( _g )) {
HXLINE(  54)			return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            		}
            		else {
HXLINE(  55)			 ::tink::chunk::ByteChunk v = _g;
HXDLIN(  55)			return v;
            		}
HXLINE(  54)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteChunk_obj,slice,return )

void ByteChunk_obj::blitTo( ::haxe::io::Bytes target,int offset){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_59_blitTo)
HXDLIN(  59)		if (::hx::IsNull( this->wrapped )) {
HXDLIN(  59)			this->wrapped = ::haxe::io::Bytes_obj::ofData(this->data);
            		}
HXDLIN(  59)		target->blit(offset,this->wrapped,this->from,(this->to - this->from));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteChunk_obj,blitTo,(void))

 ::haxe::io::Bytes ByteChunk_obj::toBytes(){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_62_toBytes)
HXDLIN(  62)		if (::hx::IsNull( this->wrapped )) {
HXDLIN(  62)			this->wrapped = ::haxe::io::Bytes_obj::ofData(this->data);
            		}
HXDLIN(  62)		return this->wrapped->sub(this->from,(this->to - this->from));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteChunk_obj,toBytes,return )

::String ByteChunk_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_44ac895bc406b5e4_65_toString)
HXDLIN(  65)		if (::hx::IsNull( this->wrapped )) {
HXDLIN(  65)			this->wrapped = ::haxe::io::Bytes_obj::ofData(this->data);
            		}
HXDLIN(  65)		return this->wrapped->getString(this->from,(this->to - this->from),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteChunk_obj,toString,return )

::Dynamic ByteChunk_obj::of( ::haxe::io::Bytes b){
            	HX_GC_STACKFRAME(&_hx_pos_44ac895bc406b5e4_67_of)
HXLINE(  68)		if ((b->length == 0)) {
HXLINE(  69)			return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            		}
HXLINE(  70)		 ::tink::chunk::ByteChunk ret =  ::tink::chunk::ByteChunk_obj::__alloc( HX_CTX ,b->b,0,b->length);
HXLINE(  71)		ret->wrapped = b;
HXLINE(  72)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteChunk_obj,of,return )


::hx::ObjectPtr< ByteChunk_obj > ByteChunk_obj::__new(::Array< unsigned char > data,int from,int to) {
	::hx::ObjectPtr< ByteChunk_obj > __this = new ByteChunk_obj();
	__this->__construct(data,from,to);
	return __this;
}

::hx::ObjectPtr< ByteChunk_obj > ByteChunk_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< unsigned char > data,int from,int to) {
	ByteChunk_obj *__this = (ByteChunk_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteChunk_obj), true, "tink.chunk.ByteChunk"));
	*(void **)__this = ByteChunk_obj::_hx_vtable;
	__this->__construct(data,from,to);
	return __this;
}

ByteChunk_obj::ByteChunk_obj()
{
}

void ByteChunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteChunk);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(from,"from");
	HX_MARK_MEMBER_NAME(to,"to");
	HX_MARK_MEMBER_NAME(wrapped,"wrapped");
	 ::tink::chunk::ChunkBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteChunk_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(from,"from");
	HX_VISIT_MEMBER_NAME(to,"to");
	HX_VISIT_MEMBER_NAME(wrapped,"wrapped");
	 ::tink::chunk::ChunkBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ByteChunk_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return ::hx::Val( to ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"from") ) { return ::hx::Val( from ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slice") ) { return ::hx::Val( slice_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"blitTo") ) { return ::hx::Val( blitTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapped") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_wrapped() : wrapped ); }
		if (HX_FIELD_EQ(inName,"getByte") ) { return ::hx::Val( getByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"flatten") ) { return ::hx::Val( flatten_dyn() ); }
		if (HX_FIELD_EQ(inName,"toBytes") ) { return ::hx::Val( toBytes_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSlice") ) { return ::hx::Val( getSlice_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_wrapped") ) { return ::hx::Val( get_wrapped_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteChunk_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
	}
	return false;
}

::hx::Val ByteChunk_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { to=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"from") ) { from=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapped") ) { wrapped=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteChunk_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("from",6a,a5,c2,43));
	outFields->push(HX_("to",7b,65,00,00));
	outFields->push(HX_("wrapped",45,d5,64,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ByteChunk_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(ByteChunk_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(ByteChunk_obj,from),HX_("from",6a,a5,c2,43)},
	{::hx::fsInt,(int)offsetof(ByteChunk_obj,to),HX_("to",7b,65,00,00)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(ByteChunk_obj,wrapped),HX_("wrapped",45,d5,64,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ByteChunk_obj_sStaticStorageInfo = 0;
#endif

static ::String ByteChunk_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("from",6a,a5,c2,43),
	HX_("to",7b,65,00,00),
	HX_("wrapped",45,d5,64,0d),
	HX_("get_wrapped",5c,35,5f,93),
	HX_("getByte",be,ce,a5,13),
	HX_("flatten",c4,ab,fb,e6),
	HX_("getLength",1c,1e,5e,1b),
	HX_("getSlice",dc,d3,9e,de),
	HX_("slice",52,c4,c7,7e),
	HX_("blitTo",10,b9,ff,a3),
	HX_("toBytes",f0,54,1c,8a),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class ByteChunk_obj::__mClass;

static ::String ByteChunk_obj_sStaticFields[] = {
	HX_("of",17,61,00,00),
	::String(null())
};

void ByteChunk_obj::__register()
{
	ByteChunk_obj _hx_dummy;
	ByteChunk_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.ByteChunk",68,a9,8e,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteChunk_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ByteChunk_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ByteChunk_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ByteChunk_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ByteChunk_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ByteChunk_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
