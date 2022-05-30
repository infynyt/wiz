#include <hxcpp.h>

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
#ifndef INCLUDED_tink_io_PipeResult
#include <tink/io/PipeResult.h>
#endif
#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io__Sink_ErrorSink
#include <tink/io/_Sink/ErrorSink.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2621d9728a362d78_94_new,"tink.io._Sink.ErrorSink","new",0x9d0dece5,"tink.io._Sink.ErrorSink.new","tink/io/Sink.hx",94,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2621d9728a362d78_97_get_sealed,"tink.io._Sink.ErrorSink","get_sealed",0x5db13180,"tink.io._Sink.ErrorSink.get_sealed","tink/io/Sink.hx",97,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2621d9728a362d78_100_consume,"tink.io._Sink.ErrorSink","consume",0x671dbcc1,"tink.io._Sink.ErrorSink.consume","tink/io/Sink.hx",100,0x6103f4ff)
namespace tink{
namespace io{
namespace _Sink{

void ErrorSink_obj::__construct( ::tink::core::TypedError error){
            	HX_STACKFRAME(&_hx_pos_2621d9728a362d78_94_new)
HXDLIN(  94)		this->error = error;
            	}

Dynamic ErrorSink_obj::__CreateEmpty() { return new ErrorSink_obj; }

void *ErrorSink_obj::_hx_vtable = 0;

Dynamic ErrorSink_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ErrorSink_obj > _hx_result = new ErrorSink_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ErrorSink_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efa06a0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1efa06a0;
	} else {
		return inClassId==(int)0x55f9ae61;
	}
}

bool ErrorSink_obj::get_sealed(){
            	HX_STACKFRAME(&_hx_pos_2621d9728a362d78_97_get_sealed)
HXDLIN(  97)		return false;
            	}


::Dynamic ErrorSink_obj::consume(::Dynamic source, ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_2621d9728a362d78_100_consume)
HXDLIN( 100)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::io::PipeResult_obj::SinkFailed(this->error,source)));
            	}



::hx::ObjectPtr< ErrorSink_obj > ErrorSink_obj::__new( ::tink::core::TypedError error) {
	::hx::ObjectPtr< ErrorSink_obj > __this = new ErrorSink_obj();
	__this->__construct(error);
	return __this;
}

::hx::ObjectPtr< ErrorSink_obj > ErrorSink_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::core::TypedError error) {
	ErrorSink_obj *__this = (ErrorSink_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ErrorSink_obj), true, "tink.io._Sink.ErrorSink"));
	*(void **)__this = ErrorSink_obj::_hx_vtable;
	__this->__construct(error);
	return __this;
}

ErrorSink_obj::ErrorSink_obj()
{
}

void ErrorSink_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorSink);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_END_CLASS();
}

void ErrorSink_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
}

::hx::Val ErrorSink_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"consume") ) { return ::hx::Val( consume_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_sealed") ) { return ::hx::Val( get_sealed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ErrorSink_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::tink::core::TypedError >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorSink_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ErrorSink_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::TypedError */ ,(int)offsetof(ErrorSink_obj,error),HX_("error",c8,cb,29,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ErrorSink_obj_sStaticStorageInfo = 0;
#endif

static ::String ErrorSink_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("get_sealed",65,83,7a,53),
	HX_("consume",bc,79,da,18),
	::String(null()) };

::hx::Class ErrorSink_obj::__mClass;

void ErrorSink_obj::__register()
{
	ErrorSink_obj _hx_dummy;
	ErrorSink_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Sink.ErrorSink",73,96,3a,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ErrorSink_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ErrorSink_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorSink_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorSink_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace _Sink
