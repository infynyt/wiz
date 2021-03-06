#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_tink__Chunk_EmptyChunk
#include <tink/_Chunk/EmptyChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30a5704f3df1d72a_8_new,"tink._Chunk.EmptyChunk","new",0x33553816,"tink._Chunk.EmptyChunk.new","tink/Chunk.hx",8,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_15_getByte,"tink._Chunk.EmptyChunk","getByte",0x6bd44974,"tink._Chunk.EmptyChunk.getByte","tink/Chunk.hx",15,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_18_getLength,"tink._Chunk.EmptyChunk","getLength",0xb8293252,"tink._Chunk.EmptyChunk.getLength","tink/Chunk.hx",18,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_21_slice,"tink._Chunk.EmptyChunk","slice",0x82bb0588,"tink._Chunk.EmptyChunk.slice","tink/Chunk.hx",21,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_23_blitTo,"tink._Chunk.EmptyChunk","blitTo",0x14e5871a,"tink._Chunk.EmptyChunk.blitTo","tink/Chunk.hx",23,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_26_toString,"tink._Chunk.EmptyChunk","toString",0x08ebb536,"tink._Chunk.EmptyChunk.toString","tink/Chunk.hx",26,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_29_toBytes,"tink._Chunk.EmptyChunk","toBytes",0xe24acfa6,"tink._Chunk.EmptyChunk.toBytes","tink/Chunk.hx",29,0x4d5f868e)
HX_LOCAL_STACK_FRAME(_hx_pos_30a5704f3df1d72a_31_boot,"tink._Chunk.EmptyChunk","boot",0xaf54dbbc,"tink._Chunk.EmptyChunk.boot","tink/Chunk.hx",31,0x4d5f868e)
namespace tink{
namespace _Chunk{

void EmptyChunk_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_8_new)
            	}

Dynamic EmptyChunk_obj::__CreateEmpty() { return new EmptyChunk_obj; }

void *EmptyChunk_obj::_hx_vtable = 0;

Dynamic EmptyChunk_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EmptyChunk_obj > _hx_result = new EmptyChunk_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EmptyChunk_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01566580) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01566580;
	} else {
		return inClassId==(int)0x49bef7e3;
	}
}

static ::tink::chunk::ChunkObject_obj _hx_tink__Chunk_EmptyChunk__hx_tink_chunk_ChunkObject= {
	( int (::hx::Object::*)(int))&::tink::_Chunk::EmptyChunk_obj::getByte,
	(  ::tink::chunk::ChunkCursor (::hx::Object::*)())&::tink::_Chunk::EmptyChunk_obj::getCursor,
	( void (::hx::Object::*)(::Array< ::Dynamic>))&::tink::_Chunk::EmptyChunk_obj::flatten,
	( int (::hx::Object::*)())&::tink::_Chunk::EmptyChunk_obj::getLength,
	( ::Dynamic (::hx::Object::*)(int,int))&::tink::_Chunk::EmptyChunk_obj::slice,
	( ::String (::hx::Object::*)())&::tink::_Chunk::EmptyChunk_obj::toString,
	(  ::haxe::io::Bytes (::hx::Object::*)())&::tink::_Chunk::EmptyChunk_obj::toBytes,
	( void (::hx::Object::*)( ::haxe::io::Bytes,int))&::tink::_Chunk::EmptyChunk_obj::blitTo,
};

void *EmptyChunk_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x027c3451: return &_hx_tink__Chunk_EmptyChunk__hx_tink_chunk_ChunkObject;
	}
	return super::_hx_getInterface(inHash);
}

int EmptyChunk_obj::getByte(int i){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_15_getByte)
HXDLIN(  15)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EmptyChunk_obj,getByte,return )

int EmptyChunk_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_18_getLength)
HXDLIN(  18)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EmptyChunk_obj,getLength,return )

::Dynamic EmptyChunk_obj::slice(int from,int to){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_21_slice)
HXDLIN(  21)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(EmptyChunk_obj,slice,return )

void EmptyChunk_obj::blitTo( ::haxe::io::Bytes target,int offset){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_23_blitTo)
            	}


HX_DEFINE_DYNAMIC_FUNC2(EmptyChunk_obj,blitTo,(void))

::String EmptyChunk_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_26_toString)
HXDLIN(  26)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EmptyChunk_obj,toString,return )

 ::haxe::io::Bytes EmptyChunk_obj::toBytes(){
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_29_toBytes)
HXDLIN(  29)		return ::tink::_Chunk::EmptyChunk_obj::EMPTY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EmptyChunk_obj,toBytes,return )

 ::haxe::io::Bytes EmptyChunk_obj::EMPTY;


::hx::ObjectPtr< EmptyChunk_obj > EmptyChunk_obj::__new() {
	::hx::ObjectPtr< EmptyChunk_obj > __this = new EmptyChunk_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EmptyChunk_obj > EmptyChunk_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EmptyChunk_obj *__this = (EmptyChunk_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EmptyChunk_obj), true, "tink._Chunk.EmptyChunk"));
	*(void **)__this = EmptyChunk_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EmptyChunk_obj::EmptyChunk_obj()
{
}

::hx::Val EmptyChunk_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"slice") ) { return ::hx::Val( slice_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"blitTo") ) { return ::hx::Val( blitTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { return ::hx::Val( getByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"toBytes") ) { return ::hx::Val( toBytes_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EmptyChunk_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"EMPTY") ) { outValue = ( EMPTY ); return true; }
	}
	return false;
}

bool EmptyChunk_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"EMPTY") ) { EMPTY=ioValue.Cast<  ::haxe::io::Bytes >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EmptyChunk_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo EmptyChunk_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(void *) &EmptyChunk_obj::EMPTY,HX_("EMPTY",6d,72,c8,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String EmptyChunk_obj_sMemberFields[] = {
	HX_("getByte",be,ce,a5,13),
	HX_("getLength",1c,1e,5e,1b),
	HX_("slice",52,c4,c7,7e),
	HX_("blitTo",10,b9,ff,a3),
	HX_("toString",ac,d0,6e,38),
	HX_("toBytes",f0,54,1c,8a),
	::String(null()) };

static void EmptyChunk_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EmptyChunk_obj::EMPTY,"EMPTY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EmptyChunk_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EmptyChunk_obj::EMPTY,"EMPTY");
};

#endif

::hx::Class EmptyChunk_obj::__mClass;

static ::String EmptyChunk_obj_sStaticFields[] = {
	HX_("EMPTY",6d,72,c8,ed),
	::String(null())
};

void EmptyChunk_obj::__register()
{
	EmptyChunk_obj _hx_dummy;
	EmptyChunk_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink._Chunk.EmptyChunk",24,35,6e,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EmptyChunk_obj::__GetStatic;
	__mClass->mSetStaticField = &EmptyChunk_obj::__SetStatic;
	__mClass->mMarkFunc = EmptyChunk_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EmptyChunk_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EmptyChunk_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EmptyChunk_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EmptyChunk_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EmptyChunk_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EmptyChunk_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EmptyChunk_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30a5704f3df1d72a_31_boot)
HXDLIN(  31)		EMPTY = ::haxe::io::Bytes_obj::alloc(0);
            	}
}

} // end namespace tink
} // end namespace _Chunk
