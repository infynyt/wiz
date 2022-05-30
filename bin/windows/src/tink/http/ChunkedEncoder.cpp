#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
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
#ifndef INCLUDED_tink_http_ChunkedEncoder
#include <tink/http/ChunkedEncoder.h>
#endif
#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Mapping_Impl_
#include <tink/streams/_Stream/Mapping_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36f4d60da75a567e_35_new,"tink.http.ChunkedEncoder","new",0x9f73c1ac,"tink.http.ChunkedEncoder.new","tink/http/Chunked.hx",35,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_36f4d60da75a567e_39_transform,"tink.http.ChunkedEncoder","transform",0x931d1fb8,"tink.http.ChunkedEncoder.transform","tink/http/Chunked.hx",39,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_36f4d60da75a567e_38_transform,"tink.http.ChunkedEncoder","transform",0x931d1fb8,"tink.http.ChunkedEncoder.transform","tink/http/Chunked.hx",38,0xaaf6125c)
namespace tink{
namespace http{

void ChunkedEncoder_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36f4d60da75a567e_35_new)
            	}

Dynamic ChunkedEncoder_obj::__CreateEmpty() { return new ChunkedEncoder_obj; }

void *ChunkedEncoder_obj::_hx_vtable = 0;

Dynamic ChunkedEncoder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkedEncoder_obj > _hx_result = new ChunkedEncoder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChunkedEncoder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7851194a;
}

static ::tink::io::Transformer_obj _hx_tink_http_ChunkedEncoder__hx_tink_io_Transformer= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::http::ChunkedEncoder_obj::transform,
};

void *ChunkedEncoder_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x76d0aa61: return &_hx_tink_http_ChunkedEncoder__hx_tink_io_Transformer;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic ChunkedEncoder_obj::transform(::Dynamic source){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic chunk){
            			HX_STACKFRAME(&_hx_pos_36f4d60da75a567e_39_transform)
HXLINE(  39)			::Dynamic a = ::tink::_Chunk::Chunk_Impl__obj::concat(::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(((HX_("",00,00,00,00) + ::StringTools_obj::hex(::tink::chunk::ChunkObject_obj::getLength(chunk),null())) + HX_("\r\n",5d,0b,00,00)),null())),chunk);
HXDLIN(  39)			return ::tink::_Chunk::Chunk_Impl__obj::concat(a,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(HX_("\r\n",5d,0b,00,00),null())));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_36f4d60da75a567e_38_transform)
HXDLIN(  38)		::Dynamic _hx_tmp = ::tink::io::_Source::Source_Impl__obj::chunked(source);
HXDLIN(  38)		::Dynamic _hx_tmp1 = ::tink::streams::StreamObject_obj::map(_hx_tmp,::tink::streams::_Stream::Mapping_Impl__obj::ofPlain( ::Dynamic(new _hx_Closure_0())));
HXDLIN(  38)		return ::tink::streams::StreamObject_obj::append(_hx_tmp1,::tink::streams::_Stream::Stream_Impl__obj::ofIterator( ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,::Array_obj< ::Dynamic>::__new(1)->init(0,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(HX_("0\r\n",8d,77,24,00),null()))))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkedEncoder_obj,transform,return )


::hx::ObjectPtr< ChunkedEncoder_obj > ChunkedEncoder_obj::__new() {
	::hx::ObjectPtr< ChunkedEncoder_obj > __this = new ChunkedEncoder_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChunkedEncoder_obj > ChunkedEncoder_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChunkedEncoder_obj *__this = (ChunkedEncoder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkedEncoder_obj), false, "tink.http.ChunkedEncoder"));
	*(void **)__this = ChunkedEncoder_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChunkedEncoder_obj::ChunkedEncoder_obj()
{
}

::hx::Val ChunkedEncoder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChunkedEncoder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChunkedEncoder_obj_sStaticStorageInfo = 0;
#endif

static ::String ChunkedEncoder_obj_sMemberFields[] = {
	HX_("transform",6c,2d,93,45),
	::String(null()) };

::hx::Class ChunkedEncoder_obj::__mClass;

void ChunkedEncoder_obj::__register()
{
	ChunkedEncoder_obj _hx_dummy;
	ChunkedEncoder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.ChunkedEncoder",ba,bb,b6,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkedEncoder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChunkedEncoder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkedEncoder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkedEncoder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
