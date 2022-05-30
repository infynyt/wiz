#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
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
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_chunk__Seekable_Seekable_Impl_
#include <tink/chunk/_Seekable/Seekable_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_http_ChunkedParser
#include <tink/http/ChunkedParser.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7019cf6b58202b19_62_new,"tink.http.ChunkedParser","new",0x080f65f3,"tink.http.ChunkedParser.new","tink/http/Chunked.hx",62,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_7019cf6b58202b19_66_reset,"tink.http.ChunkedParser","reset",0x04c2aa22,"tink.http.ChunkedParser.reset","tink/http/Chunked.hx",66,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_7019cf6b58202b19_70_progress,"tink.http.ChunkedParser","progress",0x8bc94d3a,"tink.http.ChunkedParser.progress","tink/http/Chunked.hx",70,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_7019cf6b58202b19_89_eof,"tink.http.ChunkedParser","eof",0x08089a4f,"tink.http.ChunkedParser.eof","tink/http/Chunked.hx",89,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_7019cf6b58202b19_58_boot,"tink.http.ChunkedParser","boot",0xfd82cf3f,"tink.http.ChunkedParser.boot","tink/http/Chunked.hx",58,0xaaf6125c)
namespace tink{
namespace http{

void ChunkedParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7019cf6b58202b19_62_new)
HXDLIN(  62)		this->reset();
            	}

Dynamic ChunkedParser_obj::__CreateEmpty() { return new ChunkedParser_obj; }

void *ChunkedParser_obj::_hx_vtable = 0;

Dynamic ChunkedParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkedParser_obj > _hx_result = new ChunkedParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChunkedParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b2474f1;
}

static ::tink::io::StreamParserObject_obj _hx_tink_http_ChunkedParser__hx_tink_io_StreamParserObject= {
	(  ::tink::io::ParseStep (::hx::Object::*)( ::tink::chunk::ChunkCursor))&::tink::http::ChunkedParser_obj::progress,
	(  ::tink::core::Outcome (::hx::Object::*)( ::tink::chunk::ChunkCursor))&::tink::http::ChunkedParser_obj::eof,
};

void *ChunkedParser_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x048ef116: return &_hx_tink_http_ChunkedParser__hx_tink_io_StreamParserObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ChunkedParser_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_7019cf6b58202b19_66_reset)
HXDLIN(  66)		this->chunkSize = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkedParser_obj,reset,(void))

 ::tink::io::ParseStep ChunkedParser_obj::progress( ::tink::chunk::ChunkCursor cursor){
            	HX_GC_STACKFRAME(&_hx_pos_7019cf6b58202b19_70_progress)
HXDLIN(  70)		if ((this->chunkSize < 0)) {
HXLINE(  71)			{
HXLINE(  71)				 ::haxe::ds::Option _g = cursor->seek(::tink::http::ChunkedParser_obj::LINEBREAK,null());
HXDLIN(  71)				switch((int)(_g->_hx_getIndex())){
            					case (int)0: {
HXLINE(  72)						::Dynamic v = _g->_hx_getObject(0);
HXDLIN(  72)						::String _hx_tmp;
HXDLIN(  72)						if (::hx::IsNull( v )) {
HXLINE(  72)							_hx_tmp = HX_("null",87,9e,0e,49);
            						}
            						else {
HXLINE(  72)							_hx_tmp = ::tink::chunk::ChunkObject_obj::toString(v);
            						}
HXDLIN(  72)						this->chunkSize = ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + _hx_tmp))) );
            					}
            					break;
            					case (int)1: {
            					}
            					break;
            				}
            			}
HXLINE(  75)			return ::tink::io::ParseStep_obj::Progressed_dyn();
            		}
            		else {
HXLINE(  76)			if ((this->chunkSize == 0)) {
HXLINE(  77)				return ::tink::io::ParseStep_obj::Progressed_dyn();
            			}
            			else {
HXLINE(  79)				if ((cursor->length >= (this->chunkSize + 2))) {
HXLINE(  80)					 ::haxe::ds::Option _g = cursor->seek(::tink::http::ChunkedParser_obj::LINEBREAK,null());
HXDLIN(  80)					switch((int)(_g->_hx_getIndex())){
            						case (int)0: {
HXLINE(  81)							::Dynamic v = _g->_hx_getObject(0);
HXDLIN(  81)							this->reset();
HXDLIN(  81)							return ::tink::io::ParseStep_obj::Done(v);
            						}
            						break;
            						case (int)1: {
HXLINE(  82)							return ::tink::io::ParseStep_obj::Failed( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("Invalid encoding",3c,17,47,3e),::hx::SourceInfo(HX_("tink/http/Chunked.hx",5c,12,f6,aa),82,HX_("tink.http.ChunkedParser",81,f0,6a,fa),HX_("progress",ad,f7,2a,86))));
            						}
            						break;
            					}
            				}
            				else {
HXLINE(  84)					return ::tink::io::ParseStep_obj::Progressed_dyn();
            				}
            			}
            		}
HXLINE(  70)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkedParser_obj,progress,return )

 ::tink::core::Outcome ChunkedParser_obj::eof( ::tink::chunk::ChunkCursor rest){
            	HX_GC_STACKFRAME(&_hx_pos_7019cf6b58202b19_89_eof)
HXDLIN(  89)		if ((this->chunkSize == 0)) {
HXDLIN(  89)			return ::tink::core::Outcome_obj::Success(::tink::_Chunk::Chunk_Impl__obj::EMPTY);
            		}
            		else {
HXDLIN(  89)			return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("Unexpected end of input",b5,d8,ec,1d),::hx::SourceInfo(HX_("tink/http/Chunked.hx",5c,12,f6,aa),89,HX_("tink.http.ChunkedParser",81,f0,6a,fa),HX_("eof",bc,04,4d,00))));
            		}
HXDLIN(  89)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkedParser_obj,eof,return )

::Array< int > ChunkedParser_obj::LINEBREAK;


::hx::ObjectPtr< ChunkedParser_obj > ChunkedParser_obj::__new() {
	::hx::ObjectPtr< ChunkedParser_obj > __this = new ChunkedParser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChunkedParser_obj > ChunkedParser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChunkedParser_obj *__this = (ChunkedParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkedParser_obj), false, "tink.http.ChunkedParser"));
	*(void **)__this = ChunkedParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChunkedParser_obj::ChunkedParser_obj()
{
}

::hx::Val ChunkedParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return ::hx::Val( eof_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunkSize") ) { return ::hx::Val( chunkSize ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ChunkedParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"LINEBREAK") ) { outValue = ( LINEBREAK ); return true; }
	}
	return false;
}

::hx::Val ChunkedParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"chunkSize") ) { chunkSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ChunkedParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"LINEBREAK") ) { LINEBREAK=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void ChunkedParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("chunkSize",ce,cd,77,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChunkedParser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ChunkedParser_obj,chunkSize),HX_("chunkSize",ce,cd,77,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ChunkedParser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &ChunkedParser_obj::LINEBREAK,HX_("LINEBREAK",2b,28,12,68)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ChunkedParser_obj_sMemberFields[] = {
	HX_("chunkSize",ce,cd,77,9f),
	HX_("reset",cf,49,c8,e6),
	HX_("progress",ad,f7,2a,86),
	HX_("eof",bc,04,4d,00),
	::String(null()) };

static void ChunkedParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChunkedParser_obj::LINEBREAK,"LINEBREAK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ChunkedParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChunkedParser_obj::LINEBREAK,"LINEBREAK");
};

#endif

::hx::Class ChunkedParser_obj::__mClass;

static ::String ChunkedParser_obj_sStaticFields[] = {
	HX_("LINEBREAK",2b,28,12,68),
	::String(null())
};

void ChunkedParser_obj::__register()
{
	ChunkedParser_obj _hx_dummy;
	ChunkedParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.ChunkedParser",81,f0,6a,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ChunkedParser_obj::__GetStatic;
	__mClass->mSetStaticField = &ChunkedParser_obj::__SetStatic;
	__mClass->mMarkFunc = ChunkedParser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ChunkedParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkedParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChunkedParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ChunkedParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkedParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkedParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ChunkedParser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7019cf6b58202b19_58_boot)
HXDLIN(  58)		LINEBREAK = ::tink::chunk::_Seekable::Seekable_Impl__obj::ofBytes(::haxe::io::Bytes_obj::ofString(HX_("\r\n",5d,0b,00,00),null()));
            	}
}

} // end namespace tink
} // end namespace http
