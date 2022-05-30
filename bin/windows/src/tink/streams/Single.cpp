#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
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
#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#include <tink/core/_Lazy/Lazy_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Empty
#include <tink/streams/Empty.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_Single
#include <tink/streams/Single.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_30b24f71c944ef8b_467_new,"tink.streams.Single","new",0x03973e31,"tink.streams.Single.new","tink/streams/Stream.hx",467,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_30b24f71c944ef8b_470_next,"tink.streams.Single","next",0x20bf2e02,"tink.streams.Single.next","tink/streams/Stream.hx",470,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_30b24f71c944ef8b_473_forEach,"tink.streams.Single","forEach",0x297b53fb,"tink.streams.Single.forEach","tink/streams/Stream.hx",473,0x006f1625)
namespace tink{
namespace streams{

void Single_obj::__construct(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_30b24f71c944ef8b_467_new)
HXDLIN( 467)		super::__construct();
HXDLIN( 467)		this->value = value;
            	}

Dynamic Single_obj::__CreateEmpty() { return new Single_obj; }

void *Single_obj::_hx_vtable = 0;

Dynamic Single_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Single_obj > _hx_result = new Single_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Single_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2688f9e1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2688f9e1;
	} else {
		return inClassId==(int)0x61521c8a;
	}
}

::Dynamic Single_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_30b24f71c944ef8b_470_next)
HXDLIN( 470)		 ::Dynamic v = ::tink::core::_Lazy::Lazy_Impl__obj::get(this->value);
HXDLIN( 470)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Step_obj::Link(v,::tink::streams::Empty_obj::inst)));
            	}


::Dynamic Single_obj::forEach( ::Dynamic handle){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::streams::Single,_gthis) HXARGC(1)
            		 ::tink::streams::Conclusion _hx_run( ::tink::streams::Handled step){
            			HX_STACKFRAME(&_hx_pos_30b24f71c944ef8b_473_forEach)
HXDLIN( 473)			switch((int)(step->_hx_getIndex())){
            				case (int)0: {
HXLINE( 475)					return ::tink::streams::Conclusion_obj::Halted(_gthis);
            				}
            				break;
            				case (int)1: {
HXLINE( 477)					return ::tink::streams::Conclusion_obj::Halted(::tink::streams::Empty_obj::inst);
            				}
            				break;
            				case (int)2: {
HXLINE( 479)					return ::tink::streams::Conclusion_obj::Depleted_dyn();
            				}
            				break;
            				case (int)3: {
HXLINE( 480)					 ::tink::core::TypedError e = step->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 481)					return ::tink::streams::Conclusion_obj::Clogged(e,_gthis);
            				}
            				break;
            			}
HXLINE( 473)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_30b24f71c944ef8b_473_forEach)
HXDLIN( 473)		 ::tink::streams::Single _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 473)		return ::tink::core::_Future::Future_Impl__obj::map(handle(::tink::core::_Lazy::Lazy_Impl__obj::get(this->value)), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}



::hx::ObjectPtr< Single_obj > Single_obj::__new(::Dynamic value) {
	::hx::ObjectPtr< Single_obj > __this = new Single_obj();
	__this->__construct(value);
	return __this;
}

::hx::ObjectPtr< Single_obj > Single_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic value) {
	Single_obj *__this = (Single_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Single_obj), true, "tink.streams.Single"));
	*(void **)__this = Single_obj::_hx_vtable;
	__this->__construct(value);
	return __this;
}

Single_obj::Single_obj()
{
}

void Single_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Single);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void Single_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val Single_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Single_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Single_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Single_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Single_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Single_obj_sStaticStorageInfo = 0;
#endif

static ::String Single_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("next",f3,84,02,49),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class Single_obj::__mClass;

void Single_obj::__register()
{
	Single_obj _hx_dummy;
	Single_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.Single",bf,51,56,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Single_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Single_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Single_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Single_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
