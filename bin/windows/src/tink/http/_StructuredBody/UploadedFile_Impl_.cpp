#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
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
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
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
#ifndef INCLUDED_tink_http__StructuredBody_UploadedFile_Impl_
#include <tink/http/_StructuredBody/UploadedFile_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io__Sink_SinkYielding_Impl_
#include <tink/io/_Sink/SinkYielding_Impl_.h>
#endif
#ifndef INCLUDED_tink_io__Source_Source_Impl_
#include <tink/io/_Source/Source_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a063ae3850fcb7c7_23_ofBlob,"tink.http._StructuredBody.UploadedFile_Impl_","ofBlob",0x4e1a1040,"tink.http._StructuredBody.UploadedFile_Impl_.ofBlob","tink/http/StructuredBody.hx",23,0xcf8bb9a1)
HX_LOCAL_STACK_FRAME(_hx_pos_a063ae3850fcb7c7_35_ofBlob,"tink.http._StructuredBody.UploadedFile_Impl_","ofBlob",0x4e1a1040,"tink.http._StructuredBody.UploadedFile_Impl_.ofBlob","tink/http/StructuredBody.hx",35,0xcf8bb9a1)
HX_LOCAL_STACK_FRAME(_hx_pos_a063ae3850fcb7c7_24_ofBlob,"tink.http._StructuredBody.UploadedFile_Impl_","ofBlob",0x4e1a1040,"tink.http._StructuredBody.UploadedFile_Impl_.ofBlob","tink/http/StructuredBody.hx",24,0xcf8bb9a1)
HX_LOCAL_STACK_FRAME(_hx_pos_a063ae3850fcb7c7_19_ofBlob,"tink.http._StructuredBody.UploadedFile_Impl_","ofBlob",0x4e1a1040,"tink.http._StructuredBody.UploadedFile_Impl_.ofBlob","tink/http/StructuredBody.hx",19,0xcf8bb9a1)
namespace tink{
namespace http{
namespace _StructuredBody{

void UploadedFile_Impl__obj::__construct() { }

Dynamic UploadedFile_Impl__obj::__CreateEmpty() { return new UploadedFile_Impl__obj; }

void *UploadedFile_Impl__obj::_hx_vtable = 0;

Dynamic UploadedFile_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UploadedFile_Impl__obj > _hx_result = new UploadedFile_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UploadedFile_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x526d574c;
}

 ::Dynamic UploadedFile_Impl__obj::ofBlob(::String name,::String type, ::haxe::io::Bytes data){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::io::Bytes,data) HXARGC(0)
            		::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_a063ae3850fcb7c7_23_ofBlob)
HXLINE(  23)			return  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(data)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::haxe::io::Bytes,data) HXARGC(1)
            		::Dynamic _hx_run(::String path){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			 ::tink::core::Outcome _hx_run( ::tink::io::PipeResult r){
            				HX_GC_STACKFRAME(&_hx_pos_a063ae3850fcb7c7_35_ofBlob)
HXLINE(  35)				switch((int)(r->_hx_getIndex())){
            					case (int)0: {
HXLINE(  36)						return ::tink::core::Outcome_obj::Success(null());
            					}
            					break;
            					case (int)1: {
HXLINE(  37)						 ::Dynamic _g = r->_hx_getObject(0);
HXDLIN(  37)						::Dynamic _g1 = r->_hx_getObject(1);
HXDLIN(  37)						return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,null(),HX_("File $path closed unexpectedly",37,95,68,73),::hx::SourceInfo(HX_("tink/http/StructuredBody.hx",a1,b9,8b,cf),37,HX_("tink.http._StructuredBody.UploadedFile_Impl_",c2,e4,ce,4e),HX_("ofBlob",14,a2,6e,48))));
            					}
            					break;
            					case (int)2: {
HXLINE(  38)						::Dynamic _g = r->_hx_getObject(1);
HXDLIN(  38)						 ::tink::core::TypedError e = r->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN(  38)						return ::tink::core::Outcome_obj::Failure(e);
            					}
            					break;
            				}
HXLINE(  35)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_GC_STACKFRAME(&_hx_pos_a063ae3850fcb7c7_24_ofBlob)
HXLINE(  25)			::String name = (HX_("File sink ",e9,55,dc,ea) + path);
HXLINE(  26)			::Dynamic dest = ::tink::io::_Sink::SinkYielding_Impl__obj::ofOutput(name,::sys::io::File_obj::write(path,null()),null());
HXLINE(  35)			::Dynamic _hx_tmp =  ::tink::streams::Single_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::chunk::ByteChunk_obj::of(data)));
HXDLIN(  35)			return ::tink::core::_Future::Future_Impl__obj::map(::tink::io::_Source::Source_Impl__obj::pipeTo(_hx_tmp,dest, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("end",db,03,4d,00),true))), ::Dynamic(new _hx_Closure_1()),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_a063ae3850fcb7c7_19_ofBlob)
HXDLIN(  19)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("saveTo",18,de,34,23), ::Dynamic(new _hx_Closure_2(data)))
            			->setFixed(1,HX_("read",56,4b,a7,4b), ::Dynamic(new _hx_Closure_0(data)))
            			->setFixed(2,HX_("size",c1,a0,53,4c),data->length)
            			->setFixed(3,HX_("mimeType",8e,56,09,5d),type)
            			->setFixed(4,HX_("fileName",e7,5a,43,62),name));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UploadedFile_Impl__obj,ofBlob,return )


UploadedFile_Impl__obj::UploadedFile_Impl__obj()
{
}

bool UploadedFile_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ofBlob") ) { outValue = ofBlob_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UploadedFile_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UploadedFile_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class UploadedFile_Impl__obj::__mClass;

static ::String UploadedFile_Impl__obj_sStaticFields[] = {
	HX_("ofBlob",14,a2,6e,48),
	::String(null())
};

void UploadedFile_Impl__obj::__register()
{
	UploadedFile_Impl__obj _hx_dummy;
	UploadedFile_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._StructuredBody.UploadedFile_Impl_",c2,e4,ce,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UploadedFile_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UploadedFile_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UploadedFile_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UploadedFile_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UploadedFile_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _StructuredBody
