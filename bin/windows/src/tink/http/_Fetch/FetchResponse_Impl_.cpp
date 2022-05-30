#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_SyncFuture
#include <tink/core/_Future/SyncFuture.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressObject
#include <tink/core/_Progress/ProgressObject.h>
#endif
#ifndef INCLUDED_tink_core__Progress_Progress_Impl_
#include <tink/core/_Progress/Progress_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_ResponseHeaderBase
#include <tink/http/ResponseHeaderBase.h>
#endif
#ifndef INCLUDED_tink_http__Fetch_FetchResponse_Impl_
#include <tink/http/_Fetch/FetchResponse_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_RealSourceTools
#include <tink/io/RealSourceTools.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_124_all,"tink.http._Fetch.FetchResponse_Impl_","all",0x12f1dd65,"tink.http._Fetch.FetchResponse_Impl_.all","tink/http/Fetch.hx",124,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_122_all,"tink.http._Fetch.FetchResponse_Impl_","all",0x12f1dd65,"tink.http._Fetch.FetchResponse_Impl_.all","tink/http/Fetch.hx",122,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_121_all,"tink.http._Fetch.FetchResponse_Impl_","all",0x12f1dd65,"tink.http._Fetch.FetchResponse_Impl_.all","tink/http/Fetch.hx",121,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_136_progress,"tink.http._Fetch.FetchResponse_Impl_","progress",0x04ad1ce9,"tink.http._Fetch.FetchResponse_Impl_.progress","tink/http/Fetch.hx",136,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_137_progress,"tink.http._Fetch.FetchResponse_Impl_","progress",0x04ad1ce9,"tink.http._Fetch.FetchResponse_Impl_.progress","tink/http/Fetch.hx",137,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_149_progress,"tink.http._Fetch.FetchResponse_Impl_","progress",0x04ad1ce9,"tink.http._Fetch.FetchResponse_Impl_.progress","tink/http/Fetch.hx",149,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_154_progress,"tink.http._Fetch.FetchResponse_Impl_","progress",0x04ad1ce9,"tink.http._Fetch.FetchResponse_Impl_.progress","tink/http/Fetch.hx",154,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_141_progress,"tink.http._Fetch.FetchResponse_Impl_","progress",0x04ad1ce9,"tink.http._Fetch.FetchResponse_Impl_.progress","tink/http/Fetch.hx",141,0xb84ee46e)
HX_LOCAL_STACK_FRAME(_hx_pos_1110096440d632d3_134_progress,"tink.http._Fetch.FetchResponse_Impl_","progress",0x04ad1ce9,"tink.http._Fetch.FetchResponse_Impl_.progress","tink/http/Fetch.hx",134,0xb84ee46e)
namespace tink{
namespace http{
namespace _Fetch{

void FetchResponse_Impl__obj::__construct() { }

Dynamic FetchResponse_Impl__obj::__CreateEmpty() { return new FetchResponse_Impl__obj; }

void *FetchResponse_Impl__obj::_hx_vtable = 0;

Dynamic FetchResponse_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FetchResponse_Impl__obj > _hx_result = new FetchResponse_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FetchResponse_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x706f0b26;
}

::Dynamic FetchResponse_Impl__obj::all(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		::Dynamic _hx_run( ::tink::http::IncomingResponse r){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::http::IncomingResponse,r) HXARGC(1)
            			::Dynamic _hx_run(::Dynamic chunk){
            				HX_GC_STACKFRAME(&_hx_pos_1110096440d632d3_124_all)
HXLINE( 124)				if ((( ( ::tink::http::ResponseHeaderBase)(r->header) )->statusCode >= 400)) {
HXLINE( 125)					 ::Dynamic r1 = ( ( ::tink::http::ResponseHeaderBase)(r->header) )->statusCode;
HXDLIN( 125)					::String r2 = ( ( ::tink::http::ResponseHeaderBase)(r->header) )->reason;
HXDLIN( 125)					::String e = ::tink::chunk::ChunkObject_obj::toString(chunk);
HXDLIN( 125)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(r1,r2,e,::hx::SourceInfo(HX_("tink/http/Fetch.hx",6e,e4,4e,b8),125,HX_("tink.http._Fetch.FetchResponse_Impl_",b2,d2,9b,e7),HX_("all",21,f9,49,00))))));
            				}
            				else {
HXLINE( 127)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success( ::tink::http::Message_obj::__alloc( HX_CTX ,r->header,chunk))));
            				}
HXLINE( 124)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_1110096440d632d3_122_all)
HXLINE( 122)			return ::tink::core::_Promise::Promise_Impl__obj::next(::tink::io::RealSourceTools_obj::all(r->body), ::Dynamic(new _hx_Closure_0(r)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_1110096440d632d3_121_all)
HXDLIN( 121)		return ::tink::core::_Promise::Promise_Impl__obj::next(this1, ::Dynamic(new _hx_Closure_1()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FetchResponse_Impl__obj,all,return )

::Dynamic FetchResponse_Impl__obj::progress(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            		::Dynamic _hx_run( ::tink::http::IncomingResponse r){
            			HX_GC_STACKFRAME(&_hx_pos_1110096440d632d3_136_progress)
HXLINE( 136)			if ((( ( ::tink::http::ResponseHeaderBase)(r->header) )->statusCode >= 400)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::http::IncomingResponse,r) HXARGC(1)
            				::Dynamic _hx_run(::Dynamic chunk){
            					HX_GC_STACKFRAME(&_hx_pos_1110096440d632d3_137_progress)
HXLINE( 137)					 ::Dynamic r1 = ( ( ::tink::http::ResponseHeaderBase)(r->header) )->statusCode;
HXDLIN( 137)					::String r2 = ( ( ::tink::http::ResponseHeaderBase)(r->header) )->reason;
HXDLIN( 137)					::String e = ::tink::chunk::ChunkObject_obj::toString(chunk);
HXDLIN( 137)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(::tink::core::TypedError_obj::withData(r1,r2,e,::hx::SourceInfo(HX_("tink/http/Fetch.hx",6e,e4,4e,b8),137,HX_("tink.http._Fetch.FetchResponse_Impl_",b2,d2,9b,e7),HX_("progress",ad,f7,2a,86))))));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 137)				return ::tink::core::_Promise::Promise_Impl__obj::next(::tink::io::RealSourceTools_obj::all(r->body), ::Dynamic(new _hx_Closure_0(r)),null());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::tink::http::IncomingResponse,r) HXARGC(2)
            				::Dynamic _hx_run( ::Dynamic progress, ::Dynamic finish){
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,chunk, ::haxe::ds::Option,total, ::Dynamic,progress) HXARGC(1)
            					::Dynamic _hx_run(::Dynamic part){
            						HX_GC_STACKFRAME(&_hx_pos_1110096440d632d3_149_progress)
HXLINE( 150)						chunk[0] = ::tink::_Chunk::Chunk_Impl__obj::concat(chunk->__get(0),part);
HXLINE( 151)						 ::Dynamic progress1 = progress;
HXDLIN( 151)						int this1 = ::tink::chunk::ChunkObject_obj::getLength(chunk->__get(0));
HXDLIN( 151)						progress1(this1,total);
HXLINE( 152)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Handled_obj::Resume_dyn()));
            					}
            					HX_END_LOCAL_FUNC1(return)

            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,chunk, ::Dynamic,finish) HXARGC(1)
            					void _hx_run( ::tink::streams::Conclusion o){
            						HX_GC_STACKFRAME(&_hx_pos_1110096440d632d3_154_progress)
HXLINE( 154)						switch((int)(o->_hx_getIndex())){
            							case (int)0: {
HXLINE( 157)								::Dynamic _g = o->_hx_getObject(0);
HXDLIN( 157)								 ::Dynamic finish1 = finish;
HXDLIN( 157)								finish1(::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("unreachable",14,c9,19,7f),::hx::SourceInfo(HX_("tink/http/Fetch.hx",6e,e4,4e,b8),157,HX_("tink.http._Fetch.FetchResponse_Impl_",b2,d2,9b,e7),HX_("progress",ad,f7,2a,86)))));
            							}
            							break;
            							case (int)2: {
HXLINE( 156)								 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 156)								finish(::tink::core::Outcome_obj::Failure(e));
            							}
            							break;
            							case (int)3: {
HXLINE( 155)								finish(::tink::core::Outcome_obj::Success(chunk->__get(0)));
            							}
            							break;
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_STACKFRAME(&_hx_pos_1110096440d632d3_141_progress)
HXLINE( 142)					 ::haxe::ds::Option total;
HXDLIN( 142)					 ::tink::core::Outcome _g = ( ( ::tink::http::Header)(r->header) )->getContentLength();
HXDLIN( 142)					switch((int)(_g->_hx_getIndex())){
            						case (int)0: {
HXLINE( 143)							 ::Dynamic len = _g->_hx_getObject(0);
HXLINE( 142)							total = ::haxe::ds::Option_obj::Some(( (Float)(len) ));
            						}
            						break;
            						case (int)1: {
HXLINE( 144)							 ::tink::core::TypedError _g1 = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE( 142)							total = ::haxe::ds::Option_obj::None_dyn();
            						}
            						break;
            					}
HXLINE( 146)					::Array< ::Dynamic> chunk = ::Array_obj< ::Dynamic>::__new(1)->init(0,::tink::_Chunk::Chunk_Impl__obj::EMPTY);
HXLINE( 147)					 ::Dynamic progress1 = progress;
HXDLIN( 147)					int d = ::tink::chunk::ChunkObject_obj::getLength(chunk->__get(0));
HXDLIN( 147)					progress1(d,total);
HXLINE( 148)					::Dynamic this1 = ::tink::io::_Source::Source_Impl__obj::chunked(r->body);
HXDLIN( 148)					return ::tink::core::_Future::FutureObject_obj::handle(::tink::streams::StreamObject_obj::forEach(this1,::tink::streams::_Stream::Handler_Impl__obj::ofSafe( ::Dynamic(new _hx_Closure_1(chunk,total,progress)))), ::Dynamic(new _hx_Closure_2(chunk,finish)));
            				}
            				HX_END_LOCAL_FUNC2(return)

HXLINE( 140)				 ::tink::http::ResponseHeaderBase r1 = ( ( ::tink::http::ResponseHeaderBase)(r->header) );
HXLINE( 139)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success( ::tink::http::Message_obj::__alloc( HX_CTX ,r1,::tink::core::_Progress::Progress_Impl__obj::make( ::Dynamic(new _hx_Closure_3(r)))))));
            			}
HXLINE( 136)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_1110096440d632d3_134_progress)
HXDLIN( 134)		return ::tink::core::_Promise::Promise_Impl__obj::next(this1, ::Dynamic(new _hx_Closure_4()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FetchResponse_Impl__obj,progress,return )


FetchResponse_Impl__obj::FetchResponse_Impl__obj()
{
}

bool FetchResponse_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { outValue = progress_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FetchResponse_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FetchResponse_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FetchResponse_Impl__obj::__mClass;

static ::String FetchResponse_Impl__obj_sStaticFields[] = {
	HX_("all",21,f9,49,00),
	HX_("progress",ad,f7,2a,86),
	::String(null())
};

void FetchResponse_Impl__obj::__register()
{
	FetchResponse_Impl__obj _hx_dummy;
	FetchResponse_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Fetch.FetchResponse_Impl_",b2,d2,9b,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FetchResponse_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FetchResponse_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FetchResponse_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FetchResponse_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FetchResponse_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Fetch
