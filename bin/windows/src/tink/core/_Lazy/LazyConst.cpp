#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01e63ab033e6e3e7_52_new,"tink.core._Lazy.LazyConst","new",0xc0af85d3,"tink.core._Lazy.LazyConst.new","tink/core/Lazy.hx",52,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_01e63ab033e6e3e7_49_isComputed,"tink.core._Lazy.LazyConst","isComputed",0x2dd38204,"tink.core._Lazy.LazyConst.isComputed","tink/core/Lazy.hx",49,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_01e63ab033e6e3e7_55_get,"tink.core._Lazy.LazyConst","get",0xc0aa3609,"tink.core._Lazy.LazyConst.get","tink/core/Lazy.hx",55,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_01e63ab033e6e3e7_57_compute,"tink.core._Lazy.LazyConst","compute",0xcb67326a,"tink.core._Lazy.LazyConst.compute","tink/core/Lazy.hx",57,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_01e63ab033e6e3e7_60_underlying,"tink.core._Lazy.LazyConst","underlying",0x870f2b4a,"tink.core._Lazy.LazyConst.underlying","tink/core/Lazy.hx",60,0x92445137)
namespace tink{
namespace core{
namespace _Lazy{

void LazyConst_obj::__construct( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_01e63ab033e6e3e7_52_new)
HXDLIN(  52)		this->value = value;
            	}

Dynamic LazyConst_obj::__CreateEmpty() { return new LazyConst_obj; }

void *LazyConst_obj::_hx_vtable = 0;

Dynamic LazyConst_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LazyConst_obj > _hx_result = new LazyConst_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LazyConst_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43104c2d;
}

static ::tink::core::_Lazy::LazyObject_obj _hx_tink_core__Lazy_LazyConst__hx_tink_core__Lazy_LazyObject= {
	( bool (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::isComputed,
	( void (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::compute,
	( ::Dynamic (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::underlying,
	(  ::Dynamic (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::get,
};

static ::tink::core::_Lazy::Computable_obj _hx_tink_core__Lazy_LazyConst__hx_tink_core__Lazy_Computable= {
	( bool (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::isComputed,
	( void (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::compute,
	( ::Dynamic (::hx::Object::*)())&::tink::core::_Lazy::LazyConst_obj::underlying,
};

void *LazyConst_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe1200775: return &_hx_tink_core__Lazy_LazyConst__hx_tink_core__Lazy_LazyObject;
		case (int)0xd2b592ea: return &_hx_tink_core__Lazy_LazyConst__hx_tink_core__Lazy_Computable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool LazyConst_obj::isComputed(){
            	HX_STACKFRAME(&_hx_pos_01e63ab033e6e3e7_49_isComputed)
HXDLIN(  49)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyConst_obj,isComputed,return )

 ::Dynamic LazyConst_obj::get(){
            	HX_STACKFRAME(&_hx_pos_01e63ab033e6e3e7_55_get)
HXDLIN(  55)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyConst_obj,get,return )

void LazyConst_obj::compute(){
            	HX_STACKFRAME(&_hx_pos_01e63ab033e6e3e7_57_compute)
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyConst_obj,compute,(void))

::Dynamic LazyConst_obj::underlying(){
            	HX_STACKFRAME(&_hx_pos_01e63ab033e6e3e7_60_underlying)
HXDLIN(  60)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyConst_obj,underlying,return )


::hx::ObjectPtr< LazyConst_obj > LazyConst_obj::__new( ::Dynamic value) {
	::hx::ObjectPtr< LazyConst_obj > __this = new LazyConst_obj();
	__this->__construct(value);
	return __this;
}

::hx::ObjectPtr< LazyConst_obj > LazyConst_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value) {
	LazyConst_obj *__this = (LazyConst_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LazyConst_obj), true, "tink.core._Lazy.LazyConst"));
	*(void **)__this = LazyConst_obj::_hx_vtable;
	__this->__construct(value);
	return __this;
}

LazyConst_obj::LazyConst_obj()
{
}

void LazyConst_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LazyConst);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void LazyConst_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val LazyConst_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compute") ) { return ::hx::Val( compute_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComputed") ) { return ::hx::Val( isComputed_dyn() ); }
		if (HX_FIELD_EQ(inName,"underlying") ) { return ::hx::Val( underlying_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LazyConst_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LazyConst_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LazyConst_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LazyConst_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LazyConst_obj_sStaticStorageInfo = 0;
#endif

static ::String LazyConst_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("isComputed",17,53,75,00),
	HX_("get",96,80,4e,00),
	HX_("compute",77,47,78,83),
	HX_("underlying",5d,fc,b0,59),
	::String(null()) };

::hx::Class LazyConst_obj::__mClass;

void LazyConst_obj::__register()
{
	LazyConst_obj _hx_dummy;
	LazyConst_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Lazy.LazyConst",61,a0,c5,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LazyConst_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LazyConst_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LazyConst_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LazyConst_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Lazy
