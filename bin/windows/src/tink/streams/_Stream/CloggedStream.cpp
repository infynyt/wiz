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
#ifndef INCLUDED_tink_streams__Stream_CloggedStream
#include <tink/streams/_Stream/CloggedStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d4f3aed4a66aa58_178_new,"tink.streams._Stream.CloggedStream","new",0x71557231,"tink.streams._Stream.CloggedStream.new","tink/streams/Stream.hx",178,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_9d4f3aed4a66aa58_184_next,"tink.streams._Stream.CloggedStream","next",0xb96e7a02,"tink.streams._Stream.CloggedStream.next","tink/streams/Stream.hx",184,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_9d4f3aed4a66aa58_187_forEach,"tink.streams._Stream.CloggedStream","forEach",0x246387fb,"tink.streams._Stream.CloggedStream.forEach","tink/streams/Stream.hx",187,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void CloggedStream_obj::__construct(::Dynamic rest, ::tink::core::TypedError error){
            	HX_STACKFRAME(&_hx_pos_9d4f3aed4a66aa58_178_new)
HXDLIN( 178)		super::__construct();
HXLINE( 179)		this->rest = rest;
HXLINE( 180)		this->error = error;
            	}

Dynamic CloggedStream_obj::__CreateEmpty() { return new CloggedStream_obj; }

void *CloggedStream_obj::_hx_vtable = 0;

Dynamic CloggedStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CloggedStream_obj > _hx_result = new CloggedStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CloggedStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x61521c8a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x61521c8a;
	} else {
		return inClassId==(int)0x7451b847;
	}
}

::Dynamic CloggedStream_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_9d4f3aed4a66aa58_184_next)
HXDLIN( 184)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Step_obj::Fail(this->error)));
            	}


::Dynamic CloggedStream_obj::forEach( ::Dynamic handler){
            	HX_GC_STACKFRAME(&_hx_pos_9d4f3aed4a66aa58_187_forEach)
HXDLIN( 187)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Conclusion_obj::Clogged(this->error,this->rest)));
            	}



::hx::ObjectPtr< CloggedStream_obj > CloggedStream_obj::__new(::Dynamic rest, ::tink::core::TypedError error) {
	::hx::ObjectPtr< CloggedStream_obj > __this = new CloggedStream_obj();
	__this->__construct(rest,error);
	return __this;
}

::hx::ObjectPtr< CloggedStream_obj > CloggedStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic rest, ::tink::core::TypedError error) {
	CloggedStream_obj *__this = (CloggedStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CloggedStream_obj), true, "tink.streams._Stream.CloggedStream"));
	*(void **)__this = CloggedStream_obj::_hx_vtable;
	__this->__construct(rest,error);
	return __this;
}

CloggedStream_obj::CloggedStream_obj()
{
}

void CloggedStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CloggedStream);
	HX_MARK_MEMBER_NAME(rest,"rest");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_END_CLASS();
}

void CloggedStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rest,"rest");
	HX_VISIT_MEMBER_NAME(error,"error");
}

::hx::Val CloggedStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rest") ) { return ::hx::Val( rest ); }
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

::hx::Val CloggedStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rest") ) { rest=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::tink::core::TypedError >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CloggedStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rest",14,5b,a7,4b));
	outFields->push(HX_("error",c8,cb,29,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CloggedStream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(CloggedStream_obj,rest),HX_("rest",14,5b,a7,4b)},
	{::hx::fsObject /*  ::tink::core::TypedError */ ,(int)offsetof(CloggedStream_obj,error),HX_("error",c8,cb,29,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CloggedStream_obj_sStaticStorageInfo = 0;
#endif

static ::String CloggedStream_obj_sMemberFields[] = {
	HX_("rest",14,5b,a7,4b),
	HX_("error",c8,cb,29,73),
	HX_("next",f3,84,02,49),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class CloggedStream_obj::__mClass;

void CloggedStream_obj::__register()
{
	CloggedStream_obj _hx_dummy;
	CloggedStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.CloggedStream",bf,85,ea,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CloggedStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CloggedStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CloggedStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CloggedStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
