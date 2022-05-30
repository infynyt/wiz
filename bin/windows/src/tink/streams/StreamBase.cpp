#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
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
#ifndef INCLUDED_tink_streams_Conclusion
#include <tink/streams/Conclusion.h>
#endif
#ifndef INCLUDED_tink_streams_Empty
#include <tink/streams/Empty.h>
#endif
#ifndef INCLUDED_tink_streams_Generator
#include <tink/streams/Generator.h>
#endif
#ifndef INCLUDED_tink_streams_Handled
#include <tink/streams/Handled.h>
#endif
#ifndef INCLUDED_tink_streams_IdealStreamBase
#include <tink/streams/IdealStreamBase.h>
#endif
#ifndef INCLUDED_tink_streams_IdealizeStream
#include <tink/streams/IdealizeStream.h>
#endif
#ifndef INCLUDED_tink_streams_Reduction
#include <tink/streams/Reduction.h>
#endif
#ifndef INCLUDED_tink_streams_ReductionStep
#include <tink/streams/ReductionStep.h>
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
#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#include <tink/streams/_Stream/Handler_Impl_.h>
#endif
#ifndef INCLUDED_tink_streams__Stream_RegroupStream
#include <tink/streams/_Stream/RegroupStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8f94e574d4603fbe_345_new,"tink.streams.StreamBase","new",0x386d305a,"tink.streams.StreamBase.new","tink/streams/Stream.hx",345,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_343_get_depleted,"tink.streams.StreamBase","get_depleted",0x971bed9a,"tink.streams.StreamBase.get_depleted","tink/streams/Stream.hx",343,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_351_retain,"tink.streams.StreamBase","retain",0x9729c80b,"tink.streams.StreamBase.retain","tink/streams/Stream.hx",351,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_347_retain,"tink.streams.StreamBase","retain",0x9729c80b,"tink.streams.StreamBase.retain","tink/streams/Stream.hx",347,0x006f1625)
static const bool _hx_array_data_e80bbb68_4[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_360_next,"tink.streams.StreamBase","next",0x271d1fb9,"tink.streams.StreamBase.next","tink/streams/Stream.hx",360,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_373_regroup,"tink.streams.StreamBase","regroup",0x3c70eba6,"tink.streams.StreamBase.regroup","tink/streams/Stream.hx",373,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_376_map,"tink.streams.StreamBase","map",0x386c6a96,"tink.streams.StreamBase.map","tink/streams/Stream.hx",376,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_379_filter,"tink.streams.StreamBase","filter",0x134077fe,"tink.streams.StreamBase.filter","tink/streams/Stream.hx",379,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_381_destroy,"tink.streams.StreamBase","destroy",0xe06811f4,"tink.streams.StreamBase.destroy","tink/streams/Stream.hx",381,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_385_append,"tink.streams.StreamBase","append",0x1ddf3a20,"tink.streams.StreamBase.append","tink/streams/Stream.hx",385,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_390_prepend,"tink.streams.StreamBase","prepend",0xf3c27c08,"tink.streams.StreamBase.prepend","tink/streams/Stream.hx",390,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_395_blend,"tink.streams.StreamBase","blend",0x2e21bacb,"tink.streams.StreamBase.blend","tink/streams/Stream.hx",395,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_399_decompose,"tink.streams.StreamBase","decompose",0x5e885b2b,"tink.streams.StreamBase.decompose","tink/streams/Stream.hx",399,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_404_idealize,"tink.streams.StreamBase","idealize",0xe17680a5,"tink.streams.StreamBase.idealize","tink/streams/Stream.hx",404,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_411_reduce,"tink.streams.StreamBase","reduce",0x8ca585ec,"tink.streams.StreamBase.reduce","tink/streams/Stream.hx",411,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_410_reduce,"tink.streams.StreamBase","reduce",0x8ca585ec,"tink.streams.StreamBase.reduce","tink/streams/Stream.hx",410,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_415_reduce,"tink.streams.StreamBase","reduce",0x8ca585ec,"tink.streams.StreamBase.reduce","tink/streams/Stream.hx",415,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_409_reduce,"tink.streams.StreamBase","reduce",0x8ca585ec,"tink.streams.StreamBase.reduce","tink/streams/Stream.hx",409,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_408_reduce,"tink.streams.StreamBase","reduce",0x8ca585ec,"tink.streams.StreamBase.reduce","tink/streams/Stream.hx",408,0x006f1625)
HX_LOCAL_STACK_FRAME(_hx_pos_8f94e574d4603fbe_424_forEach,"tink.streams.StreamBase","forEach",0x80a00ea4,"tink.streams.StreamBase.forEach","tink/streams/Stream.hx",424,0x006f1625)
namespace tink{
namespace streams{

void StreamBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_345_new)
HXDLIN( 345)		this->retainCount = 0;
            	}

Dynamic StreamBase_obj::__CreateEmpty() { return new StreamBase_obj; }

void *StreamBase_obj::_hx_vtable = 0;

Dynamic StreamBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StreamBase_obj > _hx_result = new StreamBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StreamBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61521c8a;
}

static ::tink::streams::StreamObject_obj _hx_tink_streams_StreamBase__hx_tink_streams_StreamObject= {
	( bool (::hx::Object::*)())&::tink::streams::StreamBase_obj::get_depleted,
	( ::Dynamic (::hx::Object::*)())&::tink::streams::StreamBase_obj::next,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::streams::StreamBase_obj::regroup,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::streams::StreamBase_obj::map,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::streams::StreamBase_obj::filter,
	(  ::Dynamic (::hx::Object::*)())&::tink::streams::StreamBase_obj::retain,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::streams::StreamBase_obj::idealize,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::streams::StreamBase_obj::append,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::streams::StreamBase_obj::prepend,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::tink::streams::StreamBase_obj::blend,
	( void (::hx::Object::*)(::Array< ::Dynamic>))&::tink::streams::StreamBase_obj::decompose,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::streams::StreamBase_obj::forEach,
	( ::Dynamic (::hx::Object::*)( ::Dynamic, ::Dynamic))&::tink::streams::StreamBase_obj::reduce,
};

void *StreamBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x6164ac00: return &_hx_tink_streams_StreamBase__hx_tink_streams_StreamObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool StreamBase_obj::get_depleted(){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_343_get_depleted)
HXDLIN( 343)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,get_depleted,return )

 ::Dynamic StreamBase_obj::retain(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::tink::streams::StreamBase,_gthis,::Array< bool >,retained) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_351_retain)
HXLINE( 351)			if (retained->__get(0)) {
HXLINE( 352)				retained[0] = false;
HXLINE( 353)				if ((--_gthis->retainCount == 0)) {
HXLINE( 354)					_gthis->destroy();
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_347_retain)
HXDLIN( 347)		 ::tink::streams::StreamBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 348)		this->retainCount++;
HXLINE( 349)		::Array< bool > retained = ::Array_obj< bool >::fromData( _hx_array_data_e80bbb68_4,1);
HXLINE( 350)		return  ::Dynamic(new _hx_Closure_0(_gthis,retained));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,retain,return )

::Dynamic StreamBase_obj::next(){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_360_next)
HXDLIN( 360)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("not implemented",35,16,a6,d3)));
HXDLIN( 360)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,next,return )

::Dynamic StreamBase_obj::regroup( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_8f94e574d4603fbe_373_regroup)
HXDLIN( 373)		return  ::tink::streams::_Stream::RegroupStream_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),f,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,regroup,return )

::Dynamic StreamBase_obj::map( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_376_map)
HXDLIN( 376)		return this->regroup(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,map,return )

::Dynamic StreamBase_obj::filter( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_379_filter)
HXDLIN( 379)		return this->regroup(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,filter,return )

void StreamBase_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_381_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(StreamBase_obj,destroy,(void))

::Dynamic StreamBase_obj::append(::Dynamic other){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_385_append)
HXDLIN( 385)		if (this->get_depleted()) {
HXDLIN( 385)			return other;
            		}
            		else {
HXLINE( 386)			return ::tink::streams::_Stream::CompoundStream_obj::of(::Array_obj< ::Dynamic>::__new(2)->init(0,::hx::ObjectPtr<OBJ_>(this))->init(1,other));
            		}
HXLINE( 385)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,append,return )

::Dynamic StreamBase_obj::prepend(::Dynamic other){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_390_prepend)
HXDLIN( 390)		if (this->get_depleted()) {
HXDLIN( 390)			return other;
            		}
            		else {
HXLINE( 391)			return ::tink::streams::_Stream::CompoundStream_obj::of(::Array_obj< ::Dynamic>::__new(2)->init(0,other)->init(1,::hx::ObjectPtr<OBJ_>(this)));
            		}
HXLINE( 390)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,prepend,return )

::Dynamic StreamBase_obj::blend(::Dynamic other){
            	HX_GC_STACKFRAME(&_hx_pos_8f94e574d4603fbe_395_blend)
HXDLIN( 395)		if (this->get_depleted()) {
HXDLIN( 395)			return other;
            		}
            		else {
HXLINE( 396)			return  ::tink::streams::BlendStream_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),other);
            		}
HXLINE( 395)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,blend,return )

void StreamBase_obj::decompose(::Array< ::Dynamic> into){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_399_decompose)
HXDLIN( 399)		if (!(this->get_depleted())) {
HXLINE( 400)			into->push(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,decompose,(void))

::Dynamic StreamBase_obj::idealize( ::Dynamic rescue){
            	HX_GC_STACKFRAME(&_hx_pos_8f94e574d4603fbe_404_idealize)
HXDLIN( 404)		if (this->get_depleted()) {
HXDLIN( 404)			return ::tink::streams::Empty_obj::inst;
            		}
            		else {
HXLINE( 405)			return  ::tink::streams::IdealizeStream_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),rescue);
            		}
HXLINE( 404)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,idealize,return )

::Dynamic StreamBase_obj::reduce( ::Dynamic initial, ::Dynamic reducer){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::tink::streams::StreamBase,_gthis,::cpp::VirtualArray,initial1, ::Dynamic,reducer) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::cpp::VirtualArray,initial1, ::Dynamic,reducer) HXARGC(1)
            			::Dynamic _hx_run( ::Dynamic item){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::cpp::VirtualArray,initial1) HXARGC(1)
            				 ::tink::streams::Handled _hx_run( ::tink::streams::ReductionStep o){
            					HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_411_reduce)
HXLINE( 411)					switch((int)(o->_hx_getIndex())){
            						case (int)0: {
HXLINE( 412)							 ::Dynamic v = o->_hx_getObject(0);
HXDLIN( 412)							initial1->set(0,v);
HXDLIN( 412)							return ::tink::streams::Handled_obj::Resume_dyn();
            						}
            						break;
            						case (int)1: {
HXLINE( 413)							 ::tink::core::TypedError e = o->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 413)							return ::tink::streams::Handled_obj::Clog(e);
            						}
            						break;
            					}
HXLINE( 411)					return null();
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_410_reduce)
HXLINE( 410)				return ::tink::core::_Future::Future_Impl__obj::map(reducer(initial1->__get(0),item), ::Dynamic(new _hx_Closure_0(initial1)),null());
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::cpp::VirtualArray,initial1, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::tink::streams::Conclusion c){
            				HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_415_reduce)
HXLINE( 415)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE( 418)						::Dynamic _g = c->_hx_getObject(0);
HXDLIN( 418)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            					break;
            					case (int)1: {
HXLINE( 419)						 ::tink::core::TypedError e = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 419)						::Dynamic rest = c->_hx_getObject(1);
HXDLIN( 419)						cb(::tink::streams::Reduction_obj::Crashed(e,rest));
            					}
            					break;
            					case (int)2: {
HXLINE( 416)						 ::tink::core::TypedError e = c->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 416)						cb(::tink::streams::Reduction_obj::Failed(e));
            					}
            					break;
            					case (int)3: {
HXLINE( 417)						cb(::tink::streams::Reduction_obj::Reduced(initial1->__get(0)));
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_409_reduce)
HXLINE( 409)			 ::tink::streams::StreamBase _gthis1 = _gthis;
HXDLIN( 409)			::tink::core::_Future::FutureObject_obj::handle(_gthis1->forEach(::tink::streams::_Stream::Handler_Impl__obj::ofUnknown( ::Dynamic(new _hx_Closure_1(initial1,reducer)))), ::Dynamic(new _hx_Closure_2(initial1,cb)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_408_reduce)
HXDLIN( 408)		::cpp::VirtualArray initial1 = ::cpp::VirtualArray_obj::__new(1)->init(0,initial);
HXDLIN( 408)		 ::tink::streams::StreamBase _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 408)		return ::tink::core::_Future::Future_Impl__obj::async( ::Dynamic(new _hx_Closure_3(_gthis,initial1,reducer)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(StreamBase_obj,reduce,return )

::Dynamic StreamBase_obj::forEach( ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_8f94e574d4603fbe_424_forEach)
HXDLIN( 424)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("not implemented",35,16,a6,d3)));
HXDLIN( 424)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StreamBase_obj,forEach,return )


::hx::ObjectPtr< StreamBase_obj > StreamBase_obj::__new() {
	::hx::ObjectPtr< StreamBase_obj > __this = new StreamBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StreamBase_obj > StreamBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StreamBase_obj *__this = (StreamBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StreamBase_obj), false, "tink.streams.StreamBase"));
	*(void **)__this = StreamBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StreamBase_obj::StreamBase_obj()
{
}

::hx::Val StreamBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"retain") ) { return ::hx::Val( retain_dyn() ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"reduce") ) { return ::hx::Val( reduce_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regroup") ) { return ::hx::Val( regroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return ::hx::Val( prepend_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"depleted") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depleted() ); }
		if (HX_FIELD_EQ(inName,"idealize") ) { return ::hx::Val( idealize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return ::hx::Val( decompose_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"retainCount") ) { return ::hx::Val( retainCount ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_depleted") ) { return ::hx::Val( get_depleted_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StreamBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"retainCount") ) { retainCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StreamBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("depleted",cb,68,06,fa));
	outFields->push(HX_("retainCount",ca,fa,0d,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StreamBase_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(StreamBase_obj,retainCount),HX_("retainCount",ca,fa,0d,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StreamBase_obj_sStaticStorageInfo = 0;
#endif

static ::String StreamBase_obj_sMemberFields[] = {
	HX_("get_depleted",d4,1c,20,af),
	HX_("retainCount",ca,fa,0d,69),
	HX_("retain",c5,6f,1e,09),
	HX_("next",f3,84,02,49),
	HX_("regroup",ac,06,8f,80),
	HX_("map",9c,0a,53,00),
	HX_("filter",b8,1f,35,85),
	HX_("destroy",fa,2c,86,24),
	HX_("append",da,e1,d3,8f),
	HX_("prepend",0e,97,e0,37),
	HX_("blend",51,e8,f4,b4),
	HX_("decompose",b1,c3,a7,7a),
	HX_("idealize",df,0a,b0,37),
	HX_("reduce",a6,2d,9a,fe),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class StreamBase_obj::__mClass;

void StreamBase_obj::__register()
{
	StreamBase_obj _hx_dummy;
	StreamBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.streams.StreamBase",68,bb,0b,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StreamBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StreamBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StreamBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StreamBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace streams
