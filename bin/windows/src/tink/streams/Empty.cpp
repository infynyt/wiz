#include <hxcpp.h>

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
#ifndef INCLUDED_tink_streams_Empty
#include <tink/streams/Empty.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d578f2d085f879b3_262_new,"tink.streams.Empty","new",0x68855728,"tink.streams.Empty.new","tink/streams/Stream.hx",262,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_d578f2d085f879b3_265_get_depleted,"tink.streams.Empty","get_depleted",0x6dbb7d0c,"tink.streams.Empty.get_depleted","tink/streams/Stream.hx",265,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_d578f2d085f879b3_268_next,"tink.streams.Empty","next",0x0c26ed2b,"tink.streams.Empty.next","tink/streams/Stream.hx",268,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_d578f2d085f879b3_271_forEach,"tink.streams.Empty","forEach",0x734eb472,"tink.streams.Empty.forEach","tink/streams/Stream.hx",271,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_d578f2d085f879b3_276_make,"tink.streams.Empty","make",0x0b7aa226,"tink.streams.Empty.make","tink/streams/Stream.hx",276,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_d578f2d085f879b3_273_boot,"tink.streams.Empty","boot",0x043fec6a,"tink.streams.Empty.boot","tink/streams/Stream.hx",273,0x006f1625)
namespace tink{
namespace streams{

void Empty_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d578f2d085f879b3_262_new)
HXDLIN( 262)		super::__construct();
            	}

Dynamic Empty_obj::__CreateEmpty() { return new Empty_obj; }

void *Empty_obj::_hx_vtable = 0;

Dynamic Empty_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Empty_obj > _hx_result = new Empty_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Empty_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b521554) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b521554;
	} else {
		return inClassId==(int)0x61521c8a;
	}
}

bool Empty_obj::get_depleted(){
            	HX_STACKFRAME(&_hx_pos_d578f2d085f879b3_265_get_depleted)
HXDLIN( 265)		return true;
            	}


::Dynamic Empty_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_d578f2d085f879b3_268_next)
HXDLIN( 268)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Step_obj::End_dyn()));
            	}


::Dynamic Empty_obj::forEach( ::Dynamic handler){
            	HX_GC_STACKFRAME(&_hx_pos_d578f2d085f879b3_271_forEach)
HXDLIN( 271)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Conclusion_obj::Depleted_dyn()));
            	}


 ::tink::streams::Empty Empty_obj::inst;

::Dynamic Empty_obj::make(){
            	HX_STACKFRAME(&_hx_pos_d578f2d085f879b3_276_make)
HXDLIN( 276)		return ::tink::streams::Empty_obj::inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Empty_obj,make,return )


::hx::ObjectPtr< Empty_obj > Empty_obj::__new() {
	::hx::ObjectPtr< Empty_obj > __this = new Empty_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Empty_obj > Empty_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Empty_obj *__this = (Empty_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Empty_obj), false, "tink.streams.Empty"));
	*(void **)__this = Empty_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Empty_obj::Empty_obj()
{
}

::hx::Val Empty_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_depleted") ) { return ::hx::Val( get_depleted_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Empty_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
	}
	return false;
}

bool Empty_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::tink::streams::Empty >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Empty_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Empty_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::tink::streams::Empty */ ,(void *) &Empty_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Empty_obj_sMemberFields[] = {
	HX_("get_depleted",d4,1c,20,af),
	HX_("next",f3,84,02,49),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

static void Empty_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Empty_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Empty_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Empty_obj::inst,"inst");
};

#endif

::hx::Class Empty_obj::__mClass;

static ::String Empty_obj_sStaticFields[] = {
	HX_("inst",c6,43,bb,45),
	HX_("make",ee,39,56,48),
	::String(null())
};

void Empty_obj::__register()
{
	Empty_obj _hx_dummy;
	Empty_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.Empty",36,e3,78,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Empty_obj::__GetStatic;
	__mClass->mSetStaticField = &Empty_obj::__SetStatic;
	__mClass->mMarkFunc = Empty_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Empty_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Empty_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Empty_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Empty_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Empty_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Empty_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Empty_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d578f2d085f879b3_273_boot)
HXDLIN( 273)		inst =  ::tink::streams::Empty_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace streams
