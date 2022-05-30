#include <hxcpp.h>

#ifndef INCLUDED_tink_http_Chunked
#include <tink/http/Chunked.h>
#endif
#ifndef INCLUDED_tink_http_ChunkedDecoder
#include <tink/http/ChunkedDecoder.h>
#endif
#ifndef INCLUDED_tink_http_ChunkedEncoder
#include <tink/http/ChunkedEncoder.h>
#endif
#ifndef INCLUDED_tink_io_Transformer
#include <tink/io/Transformer.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_437eb8184efa8aa5_17_encoder,"tink.http.Chunked","encoder",0xe3c6a730,"tink.http.Chunked.encoder","tink/http/Chunked.hx",17,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_437eb8184efa8aa5_22_decoder,"tink.http.Chunked","decoder",0x20faf118,"tink.http.Chunked.decoder","tink/http/Chunked.hx",22,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_437eb8184efa8aa5_28_encode,"tink.http.Chunked","encode",0xde94fb02,"tink.http.Chunked.encode","tink/http/Chunked.hx",28,0xaaf6125c)
HX_LOCAL_STACK_FRAME(_hx_pos_437eb8184efa8aa5_31_decode,"tink.http.Chunked","decode",0x499e661a,"tink.http.Chunked.decode","tink/http/Chunked.hx",31,0xaaf6125c)
namespace tink{
namespace http{

void Chunked_obj::__construct() { }

Dynamic Chunked_obj::__CreateEmpty() { return new Chunked_obj; }

void *Chunked_obj::_hx_vtable = 0;

Dynamic Chunked_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Chunked_obj > _hx_result = new Chunked_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Chunked_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f4b0272;
}

 ::tink::http::ChunkedEncoder Chunked_obj::_encoder;

 ::tink::http::ChunkedDecoder Chunked_obj::_decoder;

 ::tink::http::ChunkedEncoder Chunked_obj::encoder(){
            	HX_GC_STACKFRAME(&_hx_pos_437eb8184efa8aa5_17_encoder)
HXLINE(  18)		if (::hx::IsNull( ::tink::http::Chunked_obj::_encoder )) {
HXLINE(  18)			::tink::http::Chunked_obj::_encoder =  ::tink::http::ChunkedEncoder_obj::__alloc( HX_CTX );
            		}
HXLINE(  19)		return ::tink::http::Chunked_obj::_encoder;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Chunked_obj,encoder,return )

 ::tink::http::ChunkedDecoder Chunked_obj::decoder(){
            	HX_GC_STACKFRAME(&_hx_pos_437eb8184efa8aa5_22_decoder)
HXLINE(  23)		if (::hx::IsNull( ::tink::http::Chunked_obj::_decoder )) {
HXLINE(  23)			::tink::http::Chunked_obj::_decoder =  ::tink::http::ChunkedDecoder_obj::__alloc( HX_CTX );
            		}
HXLINE(  24)		return ::tink::http::Chunked_obj::_decoder;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Chunked_obj,decoder,return )

::Dynamic Chunked_obj::encode(::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_437eb8184efa8aa5_28_encode)
HXDLIN(  28)		return ::tink::http::Chunked_obj::encoder()->transform(source);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunked_obj,encode,return )

::Dynamic Chunked_obj::decode(::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_437eb8184efa8aa5_31_decode)
HXDLIN(  31)		return ::tink::http::Chunked_obj::decoder()->transform(source);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunked_obj,decode,return )


Chunked_obj::Chunked_obj()
{
}

bool Chunked_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"encoder") ) { outValue = encoder_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decoder") ) { outValue = decoder_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_encoder") ) { outValue = ( _encoder ); return true; }
		if (HX_FIELD_EQ(inName,"_decoder") ) { outValue = ( _decoder ); return true; }
	}
	return false;
}

bool Chunked_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_encoder") ) { _encoder=ioValue.Cast<  ::tink::http::ChunkedEncoder >(); return true; }
		if (HX_FIELD_EQ(inName,"_decoder") ) { _decoder=ioValue.Cast<  ::tink::http::ChunkedDecoder >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Chunked_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Chunked_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::tink::http::ChunkedEncoder */ ,(void *) &Chunked_obj::_encoder,HX_("_encoder",1d,3b,48,e7)},
	{::hx::fsObject /*  ::tink::http::ChunkedDecoder */ ,(void *) &Chunked_obj::_decoder,HX_("_decoder",05,85,7c,24)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Chunked_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Chunked_obj::_encoder,"_encoder");
	HX_MARK_MEMBER_NAME(Chunked_obj::_decoder,"_decoder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Chunked_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Chunked_obj::_encoder,"_encoder");
	HX_VISIT_MEMBER_NAME(Chunked_obj::_decoder,"_decoder");
};

#endif

::hx::Class Chunked_obj::__mClass;

static ::String Chunked_obj_sStaticFields[] = {
	HX_("_encoder",1d,3b,48,e7),
	HX_("_decoder",05,85,7c,24),
	HX_("encoder",9c,e1,8f,ad),
	HX_("decoder",84,2b,c4,ea),
	HX_("encode",16,f2,e3,f9),
	HX_("decode",2e,5d,ed,64),
	::String(null())
};

void Chunked_obj::__register()
{
	Chunked_obj _hx_dummy;
	Chunked_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.Chunked",02,72,81,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Chunked_obj::__GetStatic;
	__mClass->mSetStaticField = &Chunked_obj::__SetStatic;
	__mClass->mMarkFunc = Chunked_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Chunked_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Chunked_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Chunked_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Chunked_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Chunked_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
