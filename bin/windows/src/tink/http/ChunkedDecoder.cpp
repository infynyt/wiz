#include <hxcpp.h>

#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_http_ChunkedDecoder
#include <tink/http/ChunkedDecoder.h>
#endif
#ifndef INCLUDED_tink_http_ChunkedParser
#include <tink/http/ChunkedParser.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif
#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Mapping_Impl_
#include <tink/streams/_Stream/Mapping_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5459bbb0ed5cf58b_45_new,"tink.http.ChunkedDecoder","new",0x5bf71f94,"tink.http.ChunkedDecoder.new","tink/http/Chunked.hx",45,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_5459bbb0ed5cf58b_50_transform,"tink.http.ChunkedDecoder","transform",0x0f77dba0,"tink.http.ChunkedDecoder.transform","tink/http/Chunked.hx",50,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_5459bbb0ed5cf58b_48_transform,"tink.http.ChunkedDecoder","transform",0x0f77dba0,"tink.http.ChunkedDecoder.transform","tink/http/Chunked.hx",48,0xaaf6125c)
namespace tink{
namespace http{

void ChunkedDecoder_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5459bbb0ed5cf58b_45_new)
            	}

Dynamic ChunkedDecoder_obj::__CreateEmpty() { return new ChunkedDecoder_obj; }

void *ChunkedDecoder_obj::_hx_vtable = 0;

Dynamic ChunkedDecoder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkedDecoder_obj > _hx_result = new ChunkedDecoder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChunkedDecoder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04e07196;
}

static ::tink::io::Transformer_obj _hx_tink_http_ChunkedDecoder__hx_tink_io_Transformer= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::http::ChunkedDecoder_obj::transform,
};

void *ChunkedDecoder_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x76d0aa61: return &_hx_tink_http_ChunkedDecoder__hx_tink_io_Transformer;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic ChunkedDecoder_obj::transform(::Dynamic source){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic v){
            			HX_GC_STACKFRAME(&_hx_pos_5459bbb0ed5cf58b_50_transform)
HXLINE(  50)			if (::hx::IsNull( v )) {
HXLINE(  50)				return ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
            			}
            			else {
HXLINE(  50)				return v;
            			}
HXDLIN(  50)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_5459bbb0ed5cf58b_48_transform)
HXLINE(  49)		::Dynamic _hx_tmp = ::tink::io::RealSourceTools_obj::parseStream(source, ::tink::http::ChunkedParser_obj::__alloc( HX_CTX ));
HXLINE(  48)		return ::tink::streams::StreamObject_obj::map(_hx_tmp,::tink::streams::_Stream::Mapping_Impl__obj::ofPlain( ::Dynamic(new _hx_Closure_0())));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkedDecoder_obj,transform,return )


::hx::ObjectPtr< ChunkedDecoder_obj > ChunkedDecoder_obj::__new() {
	::hx::ObjectPtr< ChunkedDecoder_obj > __this = new ChunkedDecoder_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChunkedDecoder_obj > ChunkedDecoder_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChunkedDecoder_obj *__this = (ChunkedDecoder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkedDecoder_obj), false, "tink.http.ChunkedDecoder"));
	*(void **)__this = ChunkedDecoder_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChunkedDecoder_obj::ChunkedDecoder_obj()
{
}

::hx::Val ChunkedDecoder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChunkedDecoder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChunkedDecoder_obj_sStaticStorageInfo = 0;
#endif

static ::String ChunkedDecoder_obj_sMemberFields[] = {
	HX_("transform",6c,2d,93,45),
	::String(null()) };

::hx::Class ChunkedDecoder_obj::__mClass;

void ChunkedDecoder_obj::__register()
{
	ChunkedDecoder_obj _hx_dummy;
	ChunkedDecoder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.ChunkedDecoder",a2,05,eb,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkedDecoder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChunkedDecoder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkedDecoder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkedDecoder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
