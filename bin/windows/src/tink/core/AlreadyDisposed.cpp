#include <hxcpp.h>

#ifndef INCLUDED_tink_core_AlreadyDisposed
#include <tink/core/AlreadyDisposed.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7209c61c567e5dec_85_new,"tink.core.AlreadyDisposed","new",0xbe70585c,"tink.core.AlreadyDisposed.new","tink/core/Disposable.hx",85,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_7209c61c567e5dec_80_get_disposed,"tink.core.AlreadyDisposed","get_disposed",0x09a65772,"tink.core.AlreadyDisposed.get_disposed","tink/core/Disposable.hx",80,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_7209c61c567e5dec_82_ondispose,"tink.core.AlreadyDisposed","ondispose",0xc182be5c,"tink.core.AlreadyDisposed.ondispose","tink/core/Disposable.hx",82,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_7209c61c567e5dec_83_dispose,"tink.core.AlreadyDisposed","dispose",0xe8b2b69b,"tink.core.AlreadyDisposed.dispose","tink/core/Disposable.hx",83,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_7209c61c567e5dec_87_boot,"tink.core.AlreadyDisposed","boot",0xdbf5f8b6,"tink.core.AlreadyDisposed.boot","tink/core/Disposable.hx",87,0x5766a74b)
namespace tink{
namespace core{

void AlreadyDisposed_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7209c61c567e5dec_85_new)
            	}

Dynamic AlreadyDisposed_obj::__CreateEmpty() { return new AlreadyDisposed_obj; }

void *AlreadyDisposed_obj::_hx_vtable = 0;

Dynamic AlreadyDisposed_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AlreadyDisposed_obj > _hx_result = new AlreadyDisposed_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AlreadyDisposed_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3dd2974c;
}

static ::tink::core::Disposable_obj _hx_tink_core_AlreadyDisposed__hx_tink_core_Disposable= {
	( bool (::hx::Object::*)())&::tink::core::AlreadyDisposed_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::AlreadyDisposed_obj::ondispose,
};

static ::tink::core::OwnedDisposable_obj _hx_tink_core_AlreadyDisposed__hx_tink_core_OwnedDisposable= {
	( bool (::hx::Object::*)())&::tink::core::AlreadyDisposed_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::AlreadyDisposed_obj::ondispose,
	( void (::hx::Object::*)())&::tink::core::AlreadyDisposed_obj::dispose,
};

void *AlreadyDisposed_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87efe891: return &_hx_tink_core_AlreadyDisposed__hx_tink_core_Disposable;
		case (int)0xa1838594: return &_hx_tink_core_AlreadyDisposed__hx_tink_core_OwnedDisposable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool AlreadyDisposed_obj::get_disposed(){
            	HX_STACKFRAME(&_hx_pos_7209c61c567e5dec_80_get_disposed)
HXDLIN(  80)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AlreadyDisposed_obj,get_disposed,return )

void AlreadyDisposed_obj::ondispose( ::Dynamic d){
            	HX_STACKFRAME(&_hx_pos_7209c61c567e5dec_82_ondispose)
HXDLIN(  82)		d();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlreadyDisposed_obj,ondispose,(void))

void AlreadyDisposed_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_7209c61c567e5dec_83_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AlreadyDisposed_obj,dispose,(void))

::Dynamic AlreadyDisposed_obj::INST;


::hx::ObjectPtr< AlreadyDisposed_obj > AlreadyDisposed_obj::__new() {
	::hx::ObjectPtr< AlreadyDisposed_obj > __this = new AlreadyDisposed_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AlreadyDisposed_obj > AlreadyDisposed_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AlreadyDisposed_obj *__this = (AlreadyDisposed_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AlreadyDisposed_obj), false, "tink.core.AlreadyDisposed"));
	*(void **)__this = AlreadyDisposed_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AlreadyDisposed_obj::AlreadyDisposed_obj()
{
}

::hx::Val AlreadyDisposed_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disposed() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondispose") ) { return ::hx::Val( ondispose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_disposed") ) { return ::hx::Val( get_disposed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AlreadyDisposed_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INST") ) { outValue = ( INST ); return true; }
	}
	return false;
}

bool AlreadyDisposed_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INST") ) { INST=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

void AlreadyDisposed_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("disposed",e5,0a,a4,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AlreadyDisposed_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AlreadyDisposed_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &AlreadyDisposed_obj::INST,HX_("INST",c6,0b,7c,30)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AlreadyDisposed_obj_sMemberFields[] = {
	HX_("get_disposed",ee,be,bd,dc),
	HX_("ondispose",60,11,a6,c5),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void AlreadyDisposed_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AlreadyDisposed_obj::INST,"INST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AlreadyDisposed_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AlreadyDisposed_obj::INST,"INST");
};

#endif

::hx::Class AlreadyDisposed_obj::__mClass;

static ::String AlreadyDisposed_obj_sStaticFields[] = {
	HX_("INST",c6,0b,7c,30),
	::String(null())
};

void AlreadyDisposed_obj::__register()
{
	AlreadyDisposed_obj _hx_dummy;
	AlreadyDisposed_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.AlreadyDisposed",6a,3a,96,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AlreadyDisposed_obj::__GetStatic;
	__mClass->mSetStaticField = &AlreadyDisposed_obj::__SetStatic;
	__mClass->mMarkFunc = AlreadyDisposed_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AlreadyDisposed_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AlreadyDisposed_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AlreadyDisposed_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AlreadyDisposed_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AlreadyDisposed_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AlreadyDisposed_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AlreadyDisposed_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7209c61c567e5dec_87_boot)
HXDLIN(  87)		INST =  ::tink::core::AlreadyDisposed_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace core
