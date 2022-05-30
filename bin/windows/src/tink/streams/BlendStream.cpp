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
#ifndef INCLUDED_tink_streams_BlendStream
#include <tink/streams/BlendStream.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_db3611f78f4ab82e_662_new,"tink.streams.BlendStream","new",0x28da470c,"tink.streams.BlendStream.new","tink/streams/Stream.hx",662,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_db3611f78f4ab82e_672_new,"tink.streams.BlendStream","new",0x28da470c,"tink.streams.BlendStream.new","tink/streams/Stream.hx",672,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_db3611f78f4ab82e_658_new,"tink.streams.BlendStream","new",0x28da470c,"tink.streams.BlendStream.new","tink/streams/Stream.hx",658,0x006f1625)
namespace tink{
namespace streams{

void BlendStream_obj::__construct(::Dynamic a,::Dynamic b){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,first) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic s){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,s,::Array< ::Dynamic>,first) HXARGC(1)
            			 ::tink::streams::Step _hx_run( ::tink::streams::Step o){
            				HX_STACKFRAME(&_hx_pos_db3611f78f4ab82e_662_new)
HXLINE( 663)				if (::hx::IsNull( first->__get(0) )) {
HXLINE( 663)					first[0] = s;
            				}
HXLINE( 664)				return o;
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_db3611f78f4ab82e_662_new)
HXLINE( 662)			return ::tink::core::_Future::Future_Impl__obj::map(::tink::streams::StreamObject_obj::next(s), ::Dynamic(new _hx_Closure_0(s,first)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_3,::Dynamic,n2,::Dynamic,a,::Dynamic,n1,::Dynamic,b,::Array< ::Dynamic>,first) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_2,::Dynamic,n2,::Dynamic,a,::Dynamic,n1,::Dynamic,b, ::Dynamic,cb,::Array< ::Dynamic>,first) HXARGC(1)
            			void _hx_run( ::tink::streams::Step o){
            				HX_GC_STACKFRAME(&_hx_pos_db3611f78f4ab82e_672_new)
HXLINE( 672)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 673)						 ::Dynamic item = o->_hx_getObject(0);
HXDLIN( 673)						::Dynamic rest = o->_hx_getObject(1);
HXLINE( 674)						 ::Dynamic cb1 = cb;
HXDLIN( 674)						::Dynamic _hx_tmp;
HXDLIN( 674)						if (::hx::IsInstanceEq( first->__get(0),a )) {
HXLINE( 674)							_hx_tmp = b;
            						}
            						else {
HXLINE( 674)							_hx_tmp = a;
            						}
HXDLIN( 674)						cb1(::tink::streams::Step_obj::Link(item, ::tink::streams::BlendStream_obj::__alloc( HX_CTX ,rest,_hx_tmp)));
            					}
            					break;
            					case (int)1: {
HXLINE( 677)						 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 678)						cb(::tink::streams::Step_obj::Fail(e));
            					}
            					break;
            					case (int)2: {
HXLINE( 676)						::Dynamic _hx_tmp;
HXDLIN( 676)						if (::hx::IsInstanceEq( first->__get(0),a )) {
HXLINE( 676)							_hx_tmp = n2;
            						}
            						else {
HXLINE( 676)							_hx_tmp = n1;
            						}
HXDLIN( 676)						::tink::core::_Future::FutureObject_obj::handle(_hx_tmp,cb);
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_db3611f78f4ab82e_672_new)
HXLINE( 672)			::tink::core::_Future::FutureObject_obj::handle(::tink::core::_Future::Future_Impl__obj::first(n1,n2), ::Dynamic(new _hx_Closure_2(n2,a,n1,b,cb,first)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_db3611f78f4ab82e_658_new)
HXLINE( 659)		::Array< ::Dynamic> first = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 661)		 ::Dynamic wait =  ::Dynamic(new _hx_Closure_1(first));
HXLINE( 668)		::Dynamic n1 = wait(a);
HXLINE( 669)		::Dynamic n2 = wait(b);
HXLINE( 671)		super::__construct(::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_3(n2,a,n1,b,first)),null()));
            	}

Dynamic BlendStream_obj::__CreateEmpty() { return new BlendStream_obj; }

void *BlendStream_obj::_hx_vtable = 0;

Dynamic BlendStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlendStream_obj > _hx_result = new BlendStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BlendStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x50a767d2) {
		if (inClassId<=(int)0x1f4a9f54) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1f4a9f54;
		} else {
			return inClassId==(int)0x50a767d2;
		}
	} else {
		return inClassId==(int)0x61521c8a;
	}
}


::hx::ObjectPtr< BlendStream_obj > BlendStream_obj::__new(::Dynamic a,::Dynamic b) {
	::hx::ObjectPtr< BlendStream_obj > __this = new BlendStream_obj();
	__this->__construct(a,b);
	return __this;
}

::hx::ObjectPtr< BlendStream_obj > BlendStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic a,::Dynamic b) {
	BlendStream_obj *__this = (BlendStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlendStream_obj), true, "tink.streams.BlendStream"));
	*(void **)__this = BlendStream_obj::_hx_vtable;
	__this->__construct(a,b);
	return __this;
}

BlendStream_obj::BlendStream_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BlendStream_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BlendStream_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BlendStream_obj::__mClass;

void BlendStream_obj::__register()
{
	BlendStream_obj _hx_dummy;
	BlendStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.BlendStream",1a,11,57,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BlendStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlendStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlendStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
