#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abecf4c8a88f2d81_70_new,"tink.core._Lazy.LazyFunc","new",0x6759c9f8,"tink.core._Lazy.LazyFunc.new","tink/core/Lazy.hx",70,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_abecf4c8a88f2d81_76_underlying,"tink.core._Lazy.LazyFunc","underlying",0x143fe5c5,"tink.core._Lazy.LazyFunc.underlying","tink/core/Lazy.hx",76,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_abecf4c8a88f2d81_79_isComputed,"tink.core._Lazy.LazyFunc","isComputed",0xbb043c7f,"tink.core._Lazy.LazyFunc.isComputed","tink/core/Lazy.hx",79,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_abecf4c8a88f2d81_82_get,"tink.core._Lazy.LazyFunc","get",0x67547a2e,"tink.core._Lazy.LazyFunc.get","tink/core/Lazy.hx",82,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_abecf4c8a88f2d81_86_compute,"tink.core._Lazy.LazyFunc","compute",0x9c56ed0f,"tink.core._Lazy.LazyFunc.compute","tink/core/Lazy.hx",86,0x92445137)
namespace tink{
namespace core{
namespace _Lazy{

void LazyFunc_obj::__construct( ::Dynamic f,::Dynamic from){
            	HX_STACKFRAME(&_hx_pos_abecf4c8a88f2d81_70_new)
HXLINE(  71)		this->f = f;
HXLINE(  72)		this->from = from;
            	}

Dynamic LazyFunc_obj::__CreateEmpty() { return new LazyFunc_obj; }

void *LazyFunc_obj::_hx_vtable = 0;

Dynamic LazyFunc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LazyFunc_obj > _hx_result = new LazyFunc_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LazyFunc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cb47fba;
}

static ::tink::core::_Lazy::LazyObject_obj _hx_tink_core__Lazy_LazyFunc__hx_tink_core__Lazy_LazyObject= {
	( bool (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::isComputed,
	( void (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::compute,
	( ::Dynamic (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::underlying,
	(  ::Dynamic (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::get,
};

static ::tink::core::_Lazy::Computable_obj _hx_tink_core__Lazy_LazyFunc__hx_tink_core__Lazy_Computable= {
	( bool (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::isComputed,
	( void (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::compute,
	( ::Dynamic (::hx::Object::*)())&::tink::core::_Lazy::LazyFunc_obj::underlying,
};

void *LazyFunc_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe1200775: return &_hx_tink_core__Lazy_LazyFunc__hx_tink_core__Lazy_LazyObject;
		case (int)0xd2b592ea: return &_hx_tink_core__Lazy_LazyFunc__hx_tink_core__Lazy_Computable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic LazyFunc_obj::underlying(){
            	HX_STACKFRAME(&_hx_pos_abecf4c8a88f2d81_76_underlying)
HXDLIN(  76)		return this->from;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyFunc_obj,underlying,return )

bool LazyFunc_obj::isComputed(){
            	HX_STACKFRAME(&_hx_pos_abecf4c8a88f2d81_79_isComputed)
HXDLIN(  79)		return ::hx::IsNull( this->f );
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyFunc_obj,isComputed,return )

 ::Dynamic LazyFunc_obj::get(){
            	HX_STACKFRAME(&_hx_pos_abecf4c8a88f2d81_82_get)
HXDLIN(  82)		return this->result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyFunc_obj,get,return )

void LazyFunc_obj::compute(){
            	HX_STACKFRAME(&_hx_pos_abecf4c8a88f2d81_86_compute)
HXDLIN(  86)		 ::Dynamic _g = this->f;
HXLINE(  87)		if (::hx::IsNotNull( _g )) {
HXLINE(  88)			 ::Dynamic v = _g;
HXDLIN(  88)			{
HXLINE(  90)				this->f = null();
HXLINE(  91)				{
HXLINE(  91)					::Dynamic _g1 = this->from;
HXLINE(  92)					if (::hx::IsNotNull( _g1 )) {
HXLINE(  93)						::Dynamic cur = _g1;
HXDLIN(  93)						{
HXLINE(  94)							this->from = null();
HXLINE(  95)							::Array< ::Dynamic> stack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  96)							while(true){
HXLINE(  96)								bool _hx_tmp;
HXDLIN(  96)								if (::hx::IsNotNull( cur )) {
HXLINE(  96)									_hx_tmp = !(::tink::core::_Lazy::Computable_obj::isComputed(cur));
            								}
            								else {
HXLINE(  96)									_hx_tmp = false;
            								}
HXDLIN(  96)								if (!(_hx_tmp)) {
HXLINE(  96)									goto _hx_goto_4;
            								}
HXLINE(  97)								stack->push(cur);
HXLINE(  98)								cur = ::tink::core::_Lazy::Computable_obj::underlying(cur);
            							}
            							_hx_goto_4:;
HXLINE( 100)							stack->reverse();
HXLINE( 101)							{
HXLINE( 101)								int _g = 0;
HXDLIN( 101)								while((_g < stack->length)){
HXLINE( 101)									::Dynamic c = stack->__get(_g);
HXDLIN( 101)									_g = (_g + 1);
HXLINE( 102)									::tink::core::_Lazy::Computable_obj::compute(c);
            								}
            							}
            						}
            					}
            				}
HXLINE( 106)				this->result = v();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LazyFunc_obj,compute,(void))


::hx::ObjectPtr< LazyFunc_obj > LazyFunc_obj::__new( ::Dynamic f,::Dynamic from) {
	::hx::ObjectPtr< LazyFunc_obj > __this = new LazyFunc_obj();
	__this->__construct(f,from);
	return __this;
}

::hx::ObjectPtr< LazyFunc_obj > LazyFunc_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f,::Dynamic from) {
	LazyFunc_obj *__this = (LazyFunc_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LazyFunc_obj), true, "tink.core._Lazy.LazyFunc"));
	*(void **)__this = LazyFunc_obj::_hx_vtable;
	__this->__construct(f,from);
	return __this;
}

LazyFunc_obj::LazyFunc_obj()
{
}

void LazyFunc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LazyFunc);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(from,"from");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

void LazyFunc_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(from,"from");
	HX_VISIT_MEMBER_NAME(result,"result");
}

::hx::Val LazyFunc_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { return ::hx::Val( from ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compute") ) { return ::hx::Val( compute_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlying") ) { return ::hx::Val( underlying_dyn() ); }
		if (HX_FIELD_EQ(inName,"isComputed") ) { return ::hx::Val( isComputed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LazyFunc_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { from=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LazyFunc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("from",6a,a5,c2,43));
	outFields->push(HX_("result",dd,68,84,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LazyFunc_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LazyFunc_obj,f),HX_("f",66,00,00,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LazyFunc_obj,from),HX_("from",6a,a5,c2,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LazyFunc_obj,result),HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LazyFunc_obj_sStaticStorageInfo = 0;
#endif

static ::String LazyFunc_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("from",6a,a5,c2,43),
	HX_("result",dd,68,84,08),
	HX_("underlying",5d,fc,b0,59),
	HX_("isComputed",17,53,75,00),
	HX_("get",96,80,4e,00),
	HX_("compute",77,47,78,83),
	::String(null()) };

::hx::Class LazyFunc_obj::__mClass;

void LazyFunc_obj::__register()
{
	LazyFunc_obj _hx_dummy;
	LazyFunc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Lazy.LazyFunc",06,ae,c7,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LazyFunc_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LazyFunc_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LazyFunc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LazyFunc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Lazy
