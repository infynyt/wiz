#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_IdealStreamBase
#include <tink/streams/IdealStreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_993334aac17a7936_28_new,"tink.streams.IdealStreamBase","new",0xca5ddb01,"tink.streams.IdealStreamBase.new","tink/streams/IdealStream.hx",28,0x04ec6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_993334aac17a7936_30_idealize,"tink.streams.IdealStreamBase","idealize",0xba76d89e,"tink.streams.IdealStreamBase.idealize","tink/streams/IdealStream.hx",30,0x04ec6ea2)
namespace tink{
namespace streams{

void IdealStreamBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_993334aac17a7936_28_new)
HXDLIN(  28)		super::__construct();
            	}

Dynamic IdealStreamBase_obj::__CreateEmpty() { return new IdealStreamBase_obj; }

void *IdealStreamBase_obj::_hx_vtable = 0;

Dynamic IdealStreamBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IdealStreamBase_obj > _hx_result = new IdealStreamBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IdealStreamBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x61521c8a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x61521c8a;
	} else {
		return inClassId==(int)0x79ca79c9;
	}
}

::Dynamic IdealStreamBase_obj::idealize( ::Dynamic _tmp_rescue){
            	HX_STACKFRAME(&_hx_pos_993334aac17a7936_30_idealize)
HXDLIN(  30)		 ::Dynamic rescue = _tmp_rescue;
HXDLIN(  30)		return ::hx::ObjectPtr<OBJ_>(this);
            	}



::hx::ObjectPtr< IdealStreamBase_obj > IdealStreamBase_obj::__new() {
	::hx::ObjectPtr< IdealStreamBase_obj > __this = new IdealStreamBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< IdealStreamBase_obj > IdealStreamBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	IdealStreamBase_obj *__this = (IdealStreamBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IdealStreamBase_obj), false, "tink.streams.IdealStreamBase"));
	*(void **)__this = IdealStreamBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IdealStreamBase_obj::IdealStreamBase_obj()
{
}

::hx::Val IdealStreamBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"idealize") ) { return ::hx::Val( idealize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IdealStreamBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IdealStreamBase_obj_sStaticStorageInfo = 0;
#endif

static ::String IdealStreamBase_obj_sMemberFields[] = {
	HX_("idealize",df,0a,b0,37),
	::String(null()) };

::hx::Class IdealStreamBase_obj::__mClass;

void IdealStreamBase_obj::__register()
{
	IdealStreamBase_obj _hx_dummy;
	IdealStreamBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.IdealStreamBase",8f,46,ba,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IdealStreamBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IdealStreamBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IdealStreamBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IdealStreamBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
