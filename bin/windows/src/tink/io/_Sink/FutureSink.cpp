#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_io__Sink_FutureSink
#include <tink/io/_Sink/FutureSink.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4927d1ddb6ca4d27_83_new,"tink.io._Sink.FutureSink","new",0x2eba5cf0,"tink.io._Sink.FutureSink.new","tink/io/Sink.hx",83,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_4927d1ddb6ca4d27_86_consume,"tink.io._Sink.FutureSink","consume",0x752a8e4c,"tink.io._Sink.FutureSink.consume","tink/io/Sink.hx",86,0x6103f4ff)
namespace tink{
namespace io{
namespace _Sink{

void FutureSink_obj::__construct(::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_4927d1ddb6ca4d27_83_new)
HXDLIN(  83)		this->f = f;
            	}

Dynamic FutureSink_obj::__CreateEmpty() { return new FutureSink_obj; }

void *FutureSink_obj::_hx_vtable = 0;

Dynamic FutureSink_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FutureSink_obj > _hx_result = new FutureSink_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FutureSink_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18ce4f88) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x18ce4f88;
	} else {
		return inClassId==(int)0x1efa06a0;
	}
}

::Dynamic FutureSink_obj::consume(::Dynamic source, ::Dynamic options){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,source, ::Dynamic,options) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic sink){
            			HX_STACKFRAME(&_hx_pos_4927d1ddb6ca4d27_86_consume)
HXDLIN(  86)			return ::tink::io::SinkObject_obj::consume(sink,source,options);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_4927d1ddb6ca4d27_86_consume)
HXDLIN(  86)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this->f, ::Dynamic(new _hx_Closure_0(source,options)),null());
            	}



::hx::ObjectPtr< FutureSink_obj > FutureSink_obj::__new(::Dynamic f) {
	::hx::ObjectPtr< FutureSink_obj > __this = new FutureSink_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< FutureSink_obj > FutureSink_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic f) {
	FutureSink_obj *__this = (FutureSink_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FutureSink_obj), true, "tink.io._Sink.FutureSink"));
	*(void **)__this = FutureSink_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FutureSink_obj::FutureSink_obj()
{
}

void FutureSink_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FutureSink);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_END_CLASS();
}

void FutureSink_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
}

::hx::Val FutureSink_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"consume") ) { return ::hx::Val( consume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FutureSink_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FutureSink_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("f",66,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FutureSink_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FutureSink_obj,f),HX_("f",66,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FutureSink_obj_sStaticStorageInfo = 0;
#endif

static ::String FutureSink_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("consume",bc,79,da,18),
	::String(null()) };

::hx::Class FutureSink_obj::__mClass;

void FutureSink_obj::__register()
{
	FutureSink_obj _hx_dummy;
	FutureSink_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io._Sink.FutureSink",fe,64,b5,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FutureSink_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FutureSink_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FutureSink_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FutureSink_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
} // end namespace _Sink
