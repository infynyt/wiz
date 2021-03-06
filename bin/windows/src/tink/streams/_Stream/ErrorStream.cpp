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
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Step
#include <tink/streams/Step.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_ErrorStream
#include <tink/streams/_Stream/ErrorStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0804c637d13500e1_196_new,"tink.streams._Stream.ErrorStream","new",0x3c5c2214,"tink.streams._Stream.ErrorStream.new","tink/streams/Stream.hx",196,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_0804c637d13500e1_199_next,"tink.streams._Stream.ErrorStream","next",0x9441b0bf,"tink.streams._Stream.ErrorStream.next","tink/streams/Stream.hx",199,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_0804c637d13500e1_202_forEach,"tink.streams._Stream.ErrorStream","forEach",0xbde3655e,"tink.streams._Stream.ErrorStream.forEach","tink/streams/Stream.hx",202,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void ErrorStream_obj::__construct( ::tink::core::TypedError error){
            	HX_STACKFRAME(&_hx_pos_0804c637d13500e1_196_new)
HXDLIN( 196)		super::__construct();
HXDLIN( 196)		this->error = error;
            	}

Dynamic ErrorStream_obj::__CreateEmpty() { return new ErrorStream_obj; }

void *ErrorStream_obj::_hx_vtable = 0;

Dynamic ErrorStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ErrorStream_obj > _hx_result = new ErrorStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ErrorStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1afcc8aa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1afcc8aa;
	} else {
		return inClassId==(int)0x61521c8a;
	}
}

::Dynamic ErrorStream_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_0804c637d13500e1_199_next)
HXDLIN( 199)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Step_obj::Fail(this->error)));
            	}


::Dynamic ErrorStream_obj::forEach( ::Dynamic handler){
            	HX_GC_STACKFRAME(&_hx_pos_0804c637d13500e1_202_forEach)
HXDLIN( 202)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Conclusion_obj::Failed(this->error)));
            	}



::hx::ObjectPtr< ErrorStream_obj > ErrorStream_obj::__new( ::tink::core::TypedError error) {
	::hx::ObjectPtr< ErrorStream_obj > __this = new ErrorStream_obj();
	__this->__construct(error);
	return __this;
}

::hx::ObjectPtr< ErrorStream_obj > ErrorStream_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::core::TypedError error) {
	ErrorStream_obj *__this = (ErrorStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ErrorStream_obj), true, "tink.streams._Stream.ErrorStream"));
	*(void **)__this = ErrorStream_obj::_hx_vtable;
	__this->__construct(error);
	return __this;
}

ErrorStream_obj::ErrorStream_obj()
{
}

void ErrorStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorStream);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_END_CLASS();
}

void ErrorStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
}

::hx::Val ErrorStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ErrorStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::tink::core::TypedError >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ErrorStream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::TypedError */ ,(int)offsetof(ErrorStream_obj,error),HX_("error",c8,cb,29,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ErrorStream_obj_sStaticStorageInfo = 0;
#endif

static ::String ErrorStream_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("next",f3,84,02,49),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class ErrorStream_obj::__mClass;

void ErrorStream_obj::__register()
{
	ErrorStream_obj _hx_dummy;
	ErrorStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.ErrorStream",22,c8,fc,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ErrorStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ErrorStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
