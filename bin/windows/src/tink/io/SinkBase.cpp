#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
#ifndef INCLUDED_tink_io_SinkObject
#include <tink/io/SinkObject.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7050553a60453b04_113_get_sealed,"tink.io.SinkBase","get_sealed",0xc56852e3,"tink.io.SinkBase.get_sealed","tink/io/Sink.hx",113,0x6103f4ff)
HX_LOCAL_STACK_FRAME(_hx_pos_7050553a60453b04_116_consume,"tink.io.SinkBase","consume",0xf6472f7e,"tink.io.SinkBase.consume","tink/io/Sink.hx",116,0x6103f4ff)
namespace tink{
namespace io{

void SinkBase_obj::__construct() { }

Dynamic SinkBase_obj::__CreateEmpty() { return new SinkBase_obj; }

void *SinkBase_obj::_hx_vtable = 0;

Dynamic SinkBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SinkBase_obj > _hx_result = new SinkBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SinkBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1efa06a0;
}

static ::tink::io::SinkObject_obj _hx_tink_io_SinkBase__hx_tink_io_SinkObject= {
	( bool (::hx::Object::*)())&::tink::io::SinkBase_obj::get_sealed,
	( ::Dynamic (::hx::Object::*)(::Dynamic, ::Dynamic))&::tink::io::SinkBase_obj::consume,
};

void *SinkBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x483020ea: return &_hx_tink_io_SinkBase__hx_tink_io_SinkObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SinkBase_obj::get_sealed(){
            	HX_STACKFRAME(&_hx_pos_7050553a60453b04_113_get_sealed)
HXDLIN( 113)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinkBase_obj,get_sealed,return )

::Dynamic SinkBase_obj::consume(::Dynamic source, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_7050553a60453b04_116_consume)
HXDLIN( 116)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("not implemented",35,16,a6,d3)));
HXDLIN( 116)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(SinkBase_obj,consume,return )


SinkBase_obj::SinkBase_obj()
{
}

::hx::Val SinkBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sealed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sealed() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"consume") ) { return ::hx::Val( consume_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_sealed") ) { return ::hx::Val( get_sealed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void SinkBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sealed",9c,13,f3,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SinkBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SinkBase_obj_sStaticStorageInfo = 0;
#endif

static ::String SinkBase_obj_sMemberFields[] = {
	HX_("get_sealed",65,83,7a,53),
	HX_("consume",bc,79,da,18),
	::String(null()) };

::hx::Class SinkBase_obj::__mClass;

void SinkBase_obj::__register()
{
	SinkBase_obj _hx_dummy;
	SinkBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.SinkBase",30,84,f4,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SinkBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SinkBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SinkBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SinkBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
