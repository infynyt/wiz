#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_FutureStream
#include <tink/streams/FutureStream.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01e79ebbff090713_644_new,"tink.streams.FutureStream","new",0xa222598c,"tink.streams.FutureStream.new","tink/streams/Stream.hx",644,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_01e79ebbff090713_647_next,"tink.streams.FutureStream","next",0x3bec0247,"tink.streams.FutureStream.next","tink/streams/Stream.hx",647,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_01e79ebbff090713_651_forEach,"tink.streams.FutureStream","forEach",0xa0a6b8d6,"tink.streams.FutureStream.forEach","tink/streams/Stream.hx",651,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_01e79ebbff090713_649_forEach,"tink.streams.FutureStream","forEach",0xa0a6b8d6,"tink.streams.FutureStream.forEach","tink/streams/Stream.hx",649,0x006f1625)
namespace tink{
namespace streams{

void FutureStream_obj::__construct(::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_01e79ebbff090713_644_new)
HXDLIN( 644)		super::__construct();
HXDLIN( 644)		this->f = f;
            	}

Dynamic FutureStream_obj::__CreateEmpty() { return new FutureStream_obj; }

void *FutureStream_obj::_hx_vtable = 0;

Dynamic FutureStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FutureStream_obj > _hx_result = new FutureStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FutureStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04fe513c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x04fe513c;
	} else {
		return inClassId==(int)0x61521c8a;
	}
}

::Dynamic FutureStream_obj::next(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic s){
            			HX_STACKFRAME(&_hx_pos_01e79ebbff090713_647_next)
HXDLIN( 647)			return ::tink::streams::StreamObject_obj::next(s);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_01e79ebbff090713_647_next)
HXDLIN( 647)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this->f, ::Dynamic(new _hx_Closure_0()),null());
            	}


::Dynamic FutureStream_obj::forEach( ::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::tink::streams::FutureStream,_gthis, ::Dynamic,handler) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler, ::Dynamic,cb) HXARGC(1)
            			void _hx_run(::Dynamic s){
            				HX_STACKFRAME(&_hx_pos_01e79ebbff090713_651_forEach)
HXLINE( 651)				::Dynamic this1 = ::tink::streams::StreamObject_obj::forEach(s,handler);
HXDLIN( 651)				::tink::core::_Future::FutureObject_obj::handle(this1,cb);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_01e79ebbff090713_651_forEach)
HXLINE( 651)			::tink::core::_Future::FutureObject_obj::handle(_gthis->f, ::Dynamic(new _hx_Closure_0(handler,cb)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_01e79ebbff090713_649_forEach)
HXDLIN( 649)		 ::tink::streams::FutureStream _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 650)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_1(_gthis,handler)),null());
            	}



::hx::ObjectPtr< FutureStream_obj > FutureStream_obj::__new(::Dynamic f) {
	::hx::ObjectPtr< FutureStream_obj > __this = new FutureStream_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< FutureStream_obj > FutureStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic f) {
	FutureStream_obj *__this = (FutureStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FutureStream_obj), true, "tink.streams.FutureStream"));
	*(void **)__this = FutureStream_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FutureStream_obj::FutureStream_obj()
{
}

void FutureStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FutureStream);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_END_CLASS();
}

void FutureStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
}

::hx::Val FutureStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FutureStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FutureStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("f",66,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FutureStream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FutureStream_obj,f),HX_("f",66,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FutureStream_obj_sStaticStorageInfo = 0;
#endif

static ::String FutureStream_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("next",f3,84,02,49),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class FutureStream_obj::__mClass;

void FutureStream_obj::__register()
{
	FutureStream_obj _hx_dummy;
	FutureStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.FutureStream",9a,e3,83,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FutureStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FutureStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FutureStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FutureStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
