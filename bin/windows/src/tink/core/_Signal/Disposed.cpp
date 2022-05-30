#include <hxcpp.h>

#ifndef INCLUDED_tink_core_AlreadyDisposed
#include <tink/core/AlreadyDisposed.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Disposed
#include <tink/core/_Signal/Disposed.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_df327242988708d1_155_new,"tink.core._Signal.Disposed","new",0x827d0411,"tink.core._Signal.Disposed.new","tink/core/Signal.hx",155,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_df327242988708d1_160_listen,"tink.core._Signal.Disposed","listen",0x98513936,"tink.core._Signal.Disposed.listen","tink/core/Signal.hx",160,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_df327242988708d1_157_boot,"tink.core._Signal.Disposed","boot",0xa2ff8b61,"tink.core._Signal.Disposed.boot","tink/core/Signal.hx",157,0x5ae99903)
namespace tink{
namespace core{
namespace _Signal{

void Disposed_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_df327242988708d1_155_new)
HXDLIN( 155)		super::__construct();
            	}

Dynamic Disposed_obj::__CreateEmpty() { return new Disposed_obj; }

void *Disposed_obj::_hx_vtable = 0;

Dynamic Disposed_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Disposed_obj > _hx_result = new Disposed_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Disposed_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3dd2974c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3dd2974c;
	} else {
		return inClassId==(int)0x7fa8eb7f;
	}
}

static ::tink::core::Disposable_obj _hx_tink_core__Signal_Disposed__hx_tink_core_Disposable= {
	( bool (::hx::Object::*)())&::tink::core::_Signal::Disposed_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Disposed_obj::ondispose,
};

static ::tink::core::_Signal::SignalObject_obj _hx_tink_core__Signal_Disposed__hx_tink_core__Signal_SignalObject= {
	( bool (::hx::Object::*)())&::tink::core::_Signal::Disposed_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Disposed_obj::ondispose,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Disposed_obj::listen,
};

void *Disposed_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87efe891: return &_hx_tink_core__Signal_Disposed__hx_tink_core_Disposable;
		case (int)0x17de315d: return &_hx_tink_core__Signal_Disposed__hx_tink_core__Signal_SignalObject;
	}
	return super::_hx_getInterface(inHash);
}

::Dynamic Disposed_obj::listen( ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_df327242988708d1_160_listen)
HXDLIN( 160)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Disposed_obj,listen,return )

::Dynamic Disposed_obj::INST;


::hx::ObjectPtr< Disposed_obj > Disposed_obj::__new() {
	::hx::ObjectPtr< Disposed_obj > __this = new Disposed_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Disposed_obj > Disposed_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Disposed_obj *__this = (Disposed_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Disposed_obj), false, "tink.core._Signal.Disposed"));
	*(void **)__this = Disposed_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Disposed_obj::Disposed_obj()
{
}

::hx::Val Disposed_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Disposed_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INST") ) { outValue = ( INST ); return true; }
	}
	return false;
}

bool Disposed_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INST") ) { INST=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Disposed_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Disposed_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Disposed_obj::INST,HX_("INST",c6,0b,7c,30)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Disposed_obj_sMemberFields[] = {
	HX_("listen",47,c8,f9,ef),
	::String(null()) };

static void Disposed_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Disposed_obj::INST,"INST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Disposed_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Disposed_obj::INST,"INST");
};

#endif

::hx::Class Disposed_obj::__mClass;

static ::String Disposed_obj_sStaticFields[] = {
	HX_("INST",c6,0b,7c,30),
	::String(null())
};

void Disposed_obj::__register()
{
	Disposed_obj _hx_dummy;
	Disposed_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Signal.Disposed",9f,a7,ab,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Disposed_obj::__GetStatic;
	__mClass->mSetStaticField = &Disposed_obj::__SetStatic;
	__mClass->mMarkFunc = Disposed_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Disposed_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Disposed_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Disposed_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Disposed_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Disposed_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Disposed_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Disposed_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_df327242988708d1_157_boot)
HXDLIN( 157)		INST =  ::tink::core::_Signal::Disposed_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Signal
