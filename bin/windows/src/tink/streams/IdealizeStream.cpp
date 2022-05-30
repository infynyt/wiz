#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
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
#ifndef INCLUDED_tink_streams_IdealStreamBase
#include <tink/streams/IdealStreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_IdealizeStream
#include <tink/streams/IdealizeStream.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a4300c9cb57232d7_432_new,"tink.streams.IdealizeStream","new",0xa56252e8,"tink.streams.IdealizeStream.new","tink/streams/Stream.hx",432,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_a4300c9cb57232d7_438_get_depleted,"tink.streams.IdealizeStream","get_depleted",0xf0c1094c,"tink.streams.IdealizeStream.get_depleted","tink/streams/Stream.hx",438,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_a4300c9cb57232d7_441_next,"tink.streams.IdealizeStream","next",0x10a6396b,"tink.streams.IdealizeStream.next","tink/streams/Stream.hx",441,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_a4300c9cb57232d7_449_forEach,"tink.streams.IdealizeStream","forEach",0x6eb49032,"tink.streams.IdealizeStream.forEach","tink/streams/Stream.hx",449,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_a4300c9cb57232d7_447_forEach,"tink.streams.IdealizeStream","forEach",0x6eb49032,"tink.streams.IdealizeStream.forEach","tink/streams/Stream.hx",447,0x006f1625)
namespace tink{
namespace streams{

void IdealizeStream_obj::__construct(::Dynamic target, ::Dynamic rescue){
            	HX_STACKFRAME(&_hx_pos_a4300c9cb57232d7_432_new)
HXDLIN( 432)		super::__construct();
HXLINE( 433)		this->target = target;
HXLINE( 434)		this->rescue = rescue;
            	}

Dynamic IdealizeStream_obj::__CreateEmpty() { return new IdealizeStream_obj; }

void *IdealizeStream_obj::_hx_vtable = 0;

Dynamic IdealizeStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IdealizeStream_obj > _hx_result = new IdealizeStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IdealizeStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x61521c8a) {
		if (inClassId<=(int)0x15b188e0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15b188e0;
		} else {
			return inClassId==(int)0x61521c8a;
		}
	} else {
		return inClassId==(int)0x79ca79c9;
	}
}

bool IdealizeStream_obj::get_depleted(){
            	HX_STACKFRAME(&_hx_pos_a4300c9cb57232d7_438_get_depleted)
HXDLIN( 438)		return ::tink::streams::StreamObject_obj::get_depleted(this->target);
            	}


::Dynamic IdealizeStream_obj::next(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::streams::IdealizeStream,_gthis) HXARGC(1)
            		::Dynamic _hx_run( ::tink::streams::Step v){
            			HX_GC_STACKFRAME(&_hx_pos_a4300c9cb57232d7_441_next)
HXDLIN( 441)			if ((v->_hx_getIndex() == 1)) {
HXLINE( 442)				 ::tink::core::TypedError e = v->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 442)				return ::tink::streams::StreamObject_obj::next(::tink::streams::StreamObject_obj::idealize(_gthis->rescue(e),_gthis->rescue));
            			}
            			else {
HXLINE( 443)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            			}
HXLINE( 441)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_a4300c9cb57232d7_441_next)
HXDLIN( 441)		 ::tink::streams::IdealizeStream _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 441)		return ::tink::core::_Future::Future_Impl__obj::flatMap(::tink::streams::StreamObject_obj::next(this->target), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


::Dynamic IdealizeStream_obj::forEach( ::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::tink::streams::IdealizeStream,_gthis, ::Dynamic,handler) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::tink::streams::IdealizeStream,_gthis, ::Dynamic,handler, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::tink::streams::Conclusion end){
            				HX_STACKFRAME(&_hx_pos_a4300c9cb57232d7_449_forEach)
HXLINE( 449)				switch((int)(end->_hx_getIndex())){
            					case (int)0: {
HXLINE( 452)						::Dynamic rest = end->_hx_getObject(0);
HXLINE( 453)						 ::Dynamic cb1 = cb;
HXDLIN( 453)						cb1(::tink::streams::Conclusion_obj::Halted(::tink::streams::StreamObject_obj::idealize(rest,_gthis->rescue)));
            					}
            					break;
            					case (int)1: {
HXLINE( 454)						 ::tink::core::TypedError e = end->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 454)						::Dynamic at = end->_hx_getObject(1);
HXLINE( 455)						 ::Dynamic cb1 = cb;
HXDLIN( 455)						cb1(::tink::streams::Conclusion_obj::Clogged(e,::tink::streams::StreamObject_obj::idealize(at,_gthis->rescue)));
            					}
            					break;
            					case (int)2: {
HXLINE( 456)						 ::tink::core::TypedError e = end->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 457)						{
HXLINE( 457)							::Dynamic this1 = ::tink::streams::StreamObject_obj::forEach(::tink::streams::StreamObject_obj::idealize(_gthis->rescue(e),_gthis->rescue),handler);
HXDLIN( 457)							::tink::core::_Future::FutureObject_obj::handle(this1,cb);
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 451)						cb(::tink::streams::Conclusion_obj::Depleted_dyn());
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_a4300c9cb57232d7_449_forEach)
HXLINE( 449)			::tink::core::_Future::FutureObject_obj::handle(::tink::streams::StreamObject_obj::forEach(_gthis->target,handler), ::Dynamic(new _hx_Closure_0(_gthis,handler,cb)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_a4300c9cb57232d7_447_forEach)
HXDLIN( 447)		 ::tink::streams::IdealizeStream _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 447)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_1(_gthis,handler)),null());
            	}



::hx::ObjectPtr< IdealizeStream_obj > IdealizeStream_obj::__new(::Dynamic target, ::Dynamic rescue) {
	::hx::ObjectPtr< IdealizeStream_obj > __this = new IdealizeStream_obj();
	__this->__construct(target,rescue);
	return __this;
}

::hx::ObjectPtr< IdealizeStream_obj > IdealizeStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic target, ::Dynamic rescue) {
	IdealizeStream_obj *__this = (IdealizeStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IdealizeStream_obj), true, "tink.streams.IdealizeStream"));
	*(void **)__this = IdealizeStream_obj::_hx_vtable;
	__this->__construct(target,rescue);
	return __this;
}

IdealizeStream_obj::IdealizeStream_obj()
{
}

void IdealizeStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IdealizeStream);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(rescue,"rescue");
	HX_MARK_END_CLASS();
}

void IdealizeStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(rescue,"rescue");
}

::hx::Val IdealizeStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"rescue") ) { return ::hx::Val( rescue ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_depleted") ) { return ::hx::Val( get_depleted_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IdealizeStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rescue") ) { rescue=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IdealizeStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IdealizeStream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(IdealizeStream_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(IdealizeStream_obj,rescue),HX_("rescue",13,c8,76,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IdealizeStream_obj_sStaticStorageInfo = 0;
#endif

static ::String IdealizeStream_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("rescue",13,c8,76,08),
	HX_("get_depleted",d4,1c,20,af),
	HX_("next",f3,84,02,49),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class IdealizeStream_obj::__mClass;

void IdealizeStream_obj::__register()
{
	IdealizeStream_obj _hx_dummy;
	IdealizeStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.IdealizeStream",f6,fe,bc,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IdealizeStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IdealizeStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IdealizeStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IdealizeStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
