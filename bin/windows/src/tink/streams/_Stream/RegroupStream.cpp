#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
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
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
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
#ifndef INCLUDED_tink_streams_RegroupResult
#include <tink/streams/RegroupResult.h>
#endif
#ifndef INCLUDED_tink_streams_RegroupStatus
#include <tink/streams/RegroupStatus.h>
#endif
#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_CompoundStream
#include <tink/streams/_Stream/CompoundStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_ErrorStream
#include <tink/streams/_Stream/ErrorStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_RegroupStream
#include <tink/streams/_Stream/RegroupStream.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_Stream_Impl_
#include <tink/streams/_Stream/Stream_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_466eda33af4d343c_114_new,"tink.streams._Stream.RegroupStream","new",0xb54b0478,"tink.streams._Stream.RegroupStream.new","tink/streams/Stream.hx",114,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_466eda33af4d343c_112_new,"tink.streams._Stream.RegroupStream","new",0xb54b0478,"tink.streams._Stream.RegroupStream.new","tink/streams/Stream.hx",112,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_466eda33af4d343c_128_new,"tink.streams._Stream.RegroupStream","new",0xb54b0478,"tink.streams._Stream.RegroupStream.new","tink/streams/Stream.hx",128,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_466eda33af4d343c_132_new,"tink.streams._Stream.RegroupStream","new",0xb54b0478,"tink.streams._Stream.RegroupStream.new","tink/streams/Stream.hx",132,0x006f1625)
HX_DEFINE_STACK_FRAME(_hx_pos_466eda33af4d343c_106_new,"tink.streams._Stream.RegroupStream","new",0xb54b0478,"tink.streams._Stream.RegroupStream.new","tink/streams/Stream.hx",106,0x006f1625)
static const bool _hx_array_data_f4e9a886_5[] = {
	0,
};
namespace tink{
namespace streams{
namespace _Stream{

void RegroupStream_obj::__construct(::Dynamic source, ::Dynamic f,::Dynamic prev,::cpp::VirtualArray buf){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f,::Array< ::Dynamic>,ret,::Array< bool >,terminated,::Array< ::Dynamic>,buf1) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic item){
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,terminated,::Array< ::Dynamic>,ret,::Array< ::Dynamic>,buf1) HXARGC(1)
            			 ::tink::streams::Handled _hx_run( ::tink::streams::RegroupResult o){
            				HX_GC_STACKFRAME(&_hx_pos_466eda33af4d343c_114_new)
HXLINE( 114)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 115)						::Dynamic v = o->_hx_getObject(0);
HXDLIN( 115)						::cpp::VirtualArray untouched = o->_hx_getObject(1).StaticCast< ::cpp::VirtualArray >();
HXLINE( 116)						ret[0] = v;
HXLINE( 117)						buf1[0] = untouched;
HXLINE( 118)						return ::tink::streams::Handled_obj::Finish_dyn();
            					}
            					break;
            					case (int)1: {
HXLINE( 119)						 ::haxe::ds::Option v = o->_hx_getObject(0).StaticCast<  ::haxe::ds::Option >();
HXLINE( 120)						::Array< ::Dynamic> ret1 = ret;
HXDLIN( 120)						::Dynamic l =  ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX ,::tink::streams::Empty_obj::make_dyn(),null());
HXDLIN( 120)						::Dynamic next;
HXDLIN( 120)						if ((v->_hx_getIndex() == 0)) {
HXLINE( 120)							::Dynamic v1 = v->_hx_getObject(0);
HXDLIN( 120)							next = v1;
            						}
            						else {
HXLINE( 120)							next = ::tink::core::_Lazy::Lazy_Impl__obj::get(l);
            						}
HXDLIN( 120)						ret1[0] = next;
HXLINE( 121)						terminated[0] = true;
HXLINE( 122)						return ::tink::streams::Handled_obj::Finish_dyn();
            					}
            					break;
            					case (int)2: {
HXLINE( 124)						return ::tink::streams::Handled_obj::Resume_dyn();
            					}
            					break;
            					case (int)3: {
HXLINE( 125)						 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 126)						return ::tink::streams::Handled_obj::Clog(e);
            					}
            					break;
            				}
HXLINE( 114)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_466eda33af4d343c_112_new)
HXLINE( 113)			::cpp::VirtualArray( buf1->__get(0))->push(item);
HXLINE( 114)			return ::tink::core::_Future::Future_Impl__obj::map(f->__Field(HX_("apply",6e,85,3b,24),::hx::paccDynamic)(::cpp::VirtualArray( buf1->__get(0)),::tink::streams::RegroupStatus_obj::Flowing_dyn()), ::Dynamic(new _hx_Closure_0(terminated,ret,buf1)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,f,::Array< ::Dynamic>,ret,::Array< bool >,terminated,::Array< ::Dynamic>,buf1) HXARGC(1)
            		::Dynamic _hx_run( ::tink::streams::Conclusion o){
            			HX_GC_STACKFRAME(&_hx_pos_466eda33af4d343c_128_new)
HXLINE( 128)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 138)					if (terminated->__get(0)) {
HXLINE( 138)						return ret->__get(0);
            					}
            					else {
HXLINE( 139)						::Dynamic rest = o->_hx_getObject(0);
HXDLIN( 139)						return  ::tink::streams::_Stream::RegroupStream_obj::__alloc( HX_CTX ,rest,f,ret->__get(0),::cpp::VirtualArray( buf1->__get(0)));
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 140)					::Dynamic _g = o->_hx_getObject(1);
HXDLIN( 140)					 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 140)					return  ::tink::streams::_Stream::ErrorStream_obj::__alloc( HX_CTX ,e);
            				}
            				break;
            				case (int)2: {
HXLINE( 129)					 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 129)					return ::tink::streams::_Stream::Stream_Impl__obj::ofError(e);
            				}
            				break;
            				case (int)3: {
HXLINE( 130)					if ((::cpp::VirtualArray( buf1->__get(0))->get_length() == 0)) {
HXLINE( 130)						return ::tink::streams::Empty_obj::inst;
            					}
            					else {
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            						::Dynamic _hx_run( ::tink::streams::RegroupResult o){
            							HX_GC_STACKFRAME(&_hx_pos_466eda33af4d343c_132_new)
HXLINE( 132)							switch((int)(o->_hx_getIndex())){
            								case (int)0: {
HXLINE( 133)									::cpp::VirtualArray _g = o->_hx_getObject(1).StaticCast< ::cpp::VirtualArray >();
HXDLIN( 133)									::Dynamic v = o->_hx_getObject(0);
HXDLIN( 133)									return v;
            								}
            								break;
            								case (int)1: {
HXLINE( 134)									 ::haxe::ds::Option v = o->_hx_getObject(0).StaticCast<  ::haxe::ds::Option >();
HXDLIN( 134)									::Dynamic l =  ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX ,::tink::streams::Empty_obj::make_dyn(),null());
HXDLIN( 134)									if ((v->_hx_getIndex() == 0)) {
HXLINE( 134)										::Dynamic v1 = v->_hx_getObject(0);
HXDLIN( 134)										return v1;
            									}
            									else {
HXLINE( 134)										return ::tink::core::_Lazy::Lazy_Impl__obj::get(l);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 135)									return ::tink::streams::Empty_obj::inst;
            								}
            								break;
            								case (int)3: {
HXLINE( 136)									 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 136)									return ::tink::streams::_Stream::Stream_Impl__obj::ofError(e);
            								}
            								break;
            							}
HXLINE( 132)							return null();
            						}
            						HX_END_LOCAL_FUNC1(return)

HXLINE( 132)						return ::tink::streams::_Stream::Stream_Impl__obj::future(::tink::core::_Future::Future_Impl__obj::map(f->__Field(HX_("apply",6e,85,3b,24),::hx::paccDynamic)(::cpp::VirtualArray( buf1->__get(0)),::tink::streams::RegroupStatus_obj::Ended_dyn()), ::Dynamic(new _hx_Closure_2()),null()));
            					}
            				}
            				break;
            			}
HXLINE( 128)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_466eda33af4d343c_106_new)
HXDLIN( 106)		::Array< ::Dynamic> buf1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,buf);
HXLINE( 107)		if (::hx::IsNull( prev )) {
HXLINE( 107)			prev = ::tink::streams::Empty_obj::inst;
            		}
HXLINE( 108)		if (::hx::IsNull( ::cpp::VirtualArray( buf1->__get(0)) )) {
HXLINE( 108)			buf1[0] = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 110)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 111)		::Array< bool > terminated = ::Array_obj< bool >::fromData( _hx_array_data_f4e9a886_5,1);
HXLINE( 112)		::Dynamic next = ::tink::streams::_Stream::Stream_Impl__obj::future(::tink::core::_Future::Future_Impl__obj::map(::tink::streams::StreamObject_obj::forEach(source,::tink::streams::_Stream::Handler_Impl__obj::ofUnknown( ::Dynamic(new _hx_Closure_1(f,ret,terminated,buf1)))), ::Dynamic(new _hx_Closure_3(f,ret,terminated,buf1)),null()));
HXLINE( 144)		super::__construct(::Array_obj< ::Dynamic>::__new(2)->init(0,prev)->init(1,next));
            	}

Dynamic RegroupStream_obj::__CreateEmpty() { return new RegroupStream_obj; }

void *RegroupStream_obj::_hx_vtable = 0;

Dynamic RegroupStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RegroupStream_obj > _hx_result = new RegroupStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RegroupStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x56b49549) {
		if (inClassId<=(int)0x1850db0e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1850db0e;
		} else {
			return inClassId==(int)0x56b49549;
		}
	} else {
		return inClassId==(int)0x61521c8a;
	}
}


::hx::ObjectPtr< RegroupStream_obj > RegroupStream_obj::__new(::Dynamic source, ::Dynamic f,::Dynamic prev,::cpp::VirtualArray buf) {
	::hx::ObjectPtr< RegroupStream_obj > __this = new RegroupStream_obj();
	__this->__construct(source,f,prev,buf);
	return __this;
}

::hx::ObjectPtr< RegroupStream_obj > RegroupStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic source, ::Dynamic f,::Dynamic prev,::cpp::VirtualArray buf) {
	RegroupStream_obj *__this = (RegroupStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RegroupStream_obj), true, "tink.streams._Stream.RegroupStream"));
	*(void **)__this = RegroupStream_obj::_hx_vtable;
	__this->__construct(source,f,prev,buf);
	return __this;
}

RegroupStream_obj::RegroupStream_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RegroupStream_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RegroupStream_obj_sStaticStorageInfo = 0;
#endif

::hx::Class RegroupStream_obj::__mClass;

void RegroupStream_obj::__register()
{
	RegroupStream_obj _hx_dummy;
	RegroupStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.RegroupStream",86,a8,e9,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RegroupStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegroupStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegroupStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
