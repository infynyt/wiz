#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_tink_Anon
#include <tink/Anon.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ca8ae2a7e6493290_15_getExistentFields,"tink.Anon","getExistentFields",0x088bb8dd,"tink.Anon.getExistentFields","tink/Anon.hx",15,0xada8f975)
namespace tink{

void Anon_obj::__construct() { }

Dynamic Anon_obj::__CreateEmpty() { return new Anon_obj; }

void *Anon_obj::_hx_vtable = 0;

Dynamic Anon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Anon_obj > _hx_result = new Anon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Anon_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74e67b5e;
}

 ::Dynamic Anon_obj::getExistentFields( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_ca8ae2a7e6493290_15_getExistentFields)
HXLINE(  16)		 ::Dynamic ret =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  17)		{
HXLINE(  17)			int _g = 0;
HXDLIN(  17)			::Array< ::String > _g1 = ::Reflect_obj::fields(o);
HXDLIN(  17)			while((_g < _g1->length)){
HXLINE(  17)				::String f = _g1->__get(_g);
HXDLIN(  17)				_g = (_g + 1);
HXDLIN(  17)				::Reflect_obj::setField(ret,f,true);
            			}
            		}
HXLINE(  18)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Anon_obj,getExistentFields,return )


Anon_obj::Anon_obj()
{
}

bool Anon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"getExistentFields") ) { outValue = getExistentFields_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Anon_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Anon_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Anon_obj::__mClass;

static ::String Anon_obj_sStaticFields[] = {
	HX_("getExistentFields",63,26,05,4a),
	::String(null())
};

void Anon_obj::__register()
{
	Anon_obj _hx_dummy;
	Anon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.Anon",68,6c,36,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Anon_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Anon_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Anon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Anon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Anon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
