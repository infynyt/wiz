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
#ifndef INCLUDED_tink_streams__Stream_CompoundStream
#include <tink/streams/_Stream/CompoundStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_354245b0a59af6d5_567_new,"tink.streams._Stream.CompoundStream","new",0x3c526e43,"tink.streams._Stream.CompoundStream.new","tink/streams/Stream.hx",567,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_570_get_depleted,"tink.streams._Stream.CompoundStream","get_depleted",0x30ee2a91,"tink.streams._Stream.CompoundStream.get_depleted","tink/streams/Stream.hx",570,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_576_next,"tink.streams._Stream.CompoundStream","next",0x8bce0db0,"tink.streams._Stream.CompoundStream.next","tink/streams/Stream.hx",576,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_578_next,"tink.streams._Stream.CompoundStream","next",0x8bce0db0,"tink.streams._Stream.CompoundStream.next","tink/streams/Stream.hx",578,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_589_decompose,"tink.streams._Stream.CompoundStream","decompose",0x52826dd4,"tink.streams._Stream.CompoundStream.decompose","tink/streams/Stream.hx",589,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_593_forEach,"tink.streams._Stream.CompoundStream","forEach",0x74c4f50d,"tink.streams._Stream.CompoundStream.forEach","tink/streams/Stream.hx",593,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_596_consumeParts,"tink.streams._Stream.CompoundStream","consumeParts",0xbcf7cb81,"tink.streams._Stream.CompoundStream.consumeParts","tink/streams/Stream.hx",596,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_599_consumeParts,"tink.streams._Stream.CompoundStream","consumeParts",0xbcf7cb81,"tink.streams._Stream.CompoundStream.consumeParts","tink/streams/Stream.hx",599,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_354245b0a59af6d5_627_of,"tink.streams._Stream.CompoundStream","of",0xc4935094,"tink.streams._Stream.CompoundStream.of","tink/streams/Stream.hx",627,0x006f1625)
namespace tink{
namespace streams{
namespace _Stream{

void CompoundStream_obj::__construct(::Array< ::Dynamic> parts){
            	HX_STACKFRAME(&_hx_pos_354245b0a59af6d5_567_new)
HXDLIN( 567)		super::__construct();
HXDLIN( 567)		this->parts = parts;
            	}

Dynamic CompoundStream_obj::__CreateEmpty() { return new CompoundStream_obj; }

void *CompoundStream_obj::_hx_vtable = 0;

Dynamic CompoundStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompoundStream_obj > _hx_result = new CompoundStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CompoundStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x56b49549) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x56b49549;
	} else {
		return inClassId==(int)0x61521c8a;
	}
}

bool CompoundStream_obj::get_depleted(){
            	HX_STACKFRAME(&_hx_pos_354245b0a59af6d5_570_get_depleted)
HXDLIN( 570)		switch((int)(this->parts->length)){
            			case (int)0: {
HXLINE( 571)				return true;
            			}
            			break;
            			case (int)1: {
HXLINE( 572)				return ::tink::streams::StreamObject_obj::get_depleted(this->parts->__get(0));
            			}
            			break;
            			default:{
HXLINE( 573)				return false;
            			}
            		}
HXLINE( 570)		return false;
            	}


::Dynamic CompoundStream_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_354245b0a59af6d5_576_next)
HXDLIN( 576)		 ::tink::streams::_Stream::CompoundStream _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 577)		if ((this->parts->length == 0)) {
HXLINE( 577)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Step_obj::End_dyn()));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::streams::_Stream::CompoundStream,_gthis) HXARGC(1)
            			::Dynamic _hx_run( ::tink::streams::Step v){
            				HX_GC_STACKFRAME(&_hx_pos_354245b0a59af6d5_578_next)
HXLINE( 578)				switch((int)(v->_hx_getIndex())){
            					case (int)0: {
HXLINE( 580)						 ::Dynamic v1 = v->_hx_getObject(0);
HXDLIN( 580)						::Dynamic rest = v->_hx_getObject(1);
HXLINE( 581)						::Array< ::Dynamic> copy = _gthis->parts->copy();
HXLINE( 582)						copy[0] = rest;
HXLINE( 583)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::streams::Step_obj::Link(v1, ::tink::streams::_Stream::CompoundStream_obj::__alloc( HX_CTX ,copy))));
            					}
            					break;
            					case (int)2: {
HXLINE( 579)						if ((_gthis->parts->length > 1)) {
HXLINE( 579)							return ::tink::streams::StreamObject_obj::next(_gthis->parts->__get(1));
            						}
            						else {
HXLINE( 584)							return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            						}
            					}
            					break;
            					default:{
HXLINE( 584)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            					}
            				}
HXLINE( 578)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 578)			return ::tink::core::_Future::Future_Impl__obj::flatMap(::tink::streams::StreamObject_obj::next(this->parts->__get(0)), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
HXLINE( 577)		return null();
            	}


void CompoundStream_obj::decompose(::Array< ::Dynamic> into){
            	HX_STACKFRAME(&_hx_pos_354245b0a59af6d5_589_decompose)
HXDLIN( 589)		int _g = 0;
HXDLIN( 589)		::Array< ::Dynamic> _g1 = this->parts;
HXDLIN( 589)		while((_g < _g1->length)){
HXDLIN( 589)			::Dynamic p = _g1->__get(_g);
HXDLIN( 589)			_g = (_g + 1);
HXLINE( 590)			::tink::streams::StreamObject_obj::decompose(p,into);
            		}
            	}


::Dynamic CompoundStream_obj::forEach( ::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,parts, ::Dynamic,handler1) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_STACKFRAME(&_hx_pos_354245b0a59af6d5_593_forEach)
HXDLIN( 593)			::tink::streams::_Stream::CompoundStream_obj::consumeParts(parts,handler1,cb);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_354245b0a59af6d5_593_forEach)
HXDLIN( 593)		::Array< ::Dynamic> parts = this->parts;
HXDLIN( 593)		 ::Dynamic handler1 = handler;
HXDLIN( 593)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_0(parts,handler1)),null());
            	}


void CompoundStream_obj::consumeParts(::Array< ::Dynamic> parts, ::Dynamic handler, ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_354245b0a59af6d5_596_consumeParts)
HXDLIN( 596)		::Array< ::Dynamic> parts1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,parts);
HXDLIN( 596)		if ((parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()->length == 0)) {
HXLINE( 597)			cb(::tink::streams::Conclusion_obj::Depleted_dyn());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,parts1, ::Dynamic,handler, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::tink::streams::Conclusion o){
            				HX_GC_STACKFRAME(&_hx_pos_354245b0a59af6d5_599_consumeParts)
HXLINE( 599)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 604)						::Dynamic rest = o->_hx_getObject(0);
HXDLIN( 604)						{
HXLINE( 606)							parts1[0] = parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()->copy();
HXLINE( 607)							parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()[0] = rest;
HXLINE( 608)							 ::Dynamic cb1 = cb;
HXDLIN( 608)							cb1(::tink::streams::Conclusion_obj::Halted( ::tink::streams::_Stream::CompoundStream_obj::__alloc( HX_CTX ,parts1->__get(0).StaticCast< ::Array< ::Dynamic> >())));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 610)						 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 610)						::Dynamic at = o->_hx_getObject(1);
HXDLIN( 610)						{
HXLINE( 612)							if (::tink::streams::StreamObject_obj::get_depleted(at)) {
HXLINE( 613)								parts1[0] = parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()->slice(1,null());
            							}
            							else {
HXLINE( 615)								parts1[0] = parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()->copy();
HXLINE( 616)								parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()[0] = at;
            							}
HXLINE( 619)							 ::Dynamic cb1 = cb;
HXDLIN( 619)							cb1(::tink::streams::Conclusion_obj::Clogged(e, ::tink::streams::_Stream::CompoundStream_obj::__alloc( HX_CTX ,parts1->__get(0).StaticCast< ::Array< ::Dynamic> >())));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 621)						 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 623)						cb(::tink::streams::Conclusion_obj::Failed(e));
            					}
            					break;
            					case (int)3: {
HXLINE( 602)						::Array< ::Dynamic> _hx_tmp = parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()->slice(1,null());
HXDLIN( 602)						::tink::streams::_Stream::CompoundStream_obj::consumeParts(_hx_tmp,handler,cb);
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 599)			::tink::core::_Future::FutureObject_obj::handle(::tink::streams::StreamObject_obj::forEach(parts1->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(0),handler), ::Dynamic(new _hx_Closure_0(parts1,handler,cb)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CompoundStream_obj,consumeParts,(void))

::Dynamic CompoundStream_obj::of(::Array< ::Dynamic> streams){
            	HX_GC_STACKFRAME(&_hx_pos_354245b0a59af6d5_627_of)
HXLINE( 629)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 631)		{
HXLINE( 631)			int _g = 0;
HXDLIN( 631)			while((_g < streams->length)){
HXLINE( 631)				::Dynamic s = streams->__get(_g);
HXDLIN( 631)				_g = (_g + 1);
HXLINE( 632)				::tink::streams::StreamObject_obj::decompose(s,ret);
            			}
            		}
HXLINE( 635)		if ((ret->length == 0)) {
HXLINE( 635)			return ::tink::streams::Empty_obj::inst;
            		}
            		else {
HXLINE( 636)			return  ::tink::streams::_Stream::CompoundStream_obj::__alloc( HX_CTX ,ret);
            		}
HXLINE( 635)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompoundStream_obj,of,return )


::hx::ObjectPtr< CompoundStream_obj > CompoundStream_obj::__new(::Array< ::Dynamic> parts) {
	::hx::ObjectPtr< CompoundStream_obj > __this = new CompoundStream_obj();
	__this->__construct(parts);
	return __this;
}

::hx::ObjectPtr< CompoundStream_obj > CompoundStream_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> parts) {
	CompoundStream_obj *__this = (CompoundStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompoundStream_obj), true, "tink.streams._Stream.CompoundStream"));
	*(void **)__this = CompoundStream_obj::_hx_vtable;
	__this->__construct(parts);
	return __this;
}

CompoundStream_obj::CompoundStream_obj()
{
}

void CompoundStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompoundStream);
	HX_MARK_MEMBER_NAME(parts,"parts");
	HX_MARK_END_CLASS();
}

void CompoundStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parts,"parts");
}

::hx::Val CompoundStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { return ::hx::Val( parts ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return ::hx::Val( decompose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_depleted") ) { return ::hx::Val( get_depleted_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CompoundStream_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"consumeParts") ) { outValue = consumeParts_dyn(); return true; }
	}
	return false;
}

::hx::Val CompoundStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { parts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompoundStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parts",20,91,55,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompoundStream_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CompoundStream_obj,parts),HX_("parts",20,91,55,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompoundStream_obj_sStaticStorageInfo = 0;
#endif

static ::String CompoundStream_obj_sMemberFields[] = {
	HX_("parts",20,91,55,bd),
	HX_("get_depleted",d4,1c,20,af),
	HX_("next",f3,84,02,49),
	HX_("decompose",b1,c3,a7,7a),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class CompoundStream_obj::__mClass;

static ::String CompoundStream_obj_sStaticFields[] = {
	HX_("consumeParts",c4,bd,29,3b),
	HX_("of",17,61,00,00),
	::String(null())
};

void CompoundStream_obj::__register()
{
	CompoundStream_obj _hx_dummy;
	CompoundStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams._Stream.CompoundStream",d1,90,cf,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompoundStream_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CompoundStream_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompoundStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompoundStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompoundStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompoundStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
} // end namespace _Stream
