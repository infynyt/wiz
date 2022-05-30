#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_10_get_computed,"tink.core._Lazy.Lazy_Impl_","get_computed",0x5eb51142,"tink.core._Lazy.Lazy_Impl_.get_computed","tink/core/Lazy.hx",10,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_12_get,"tink.core._Lazy.Lazy_Impl_","get",0xb4bd99ea,"tink.core._Lazy.Lazy_Impl_.get","tink/core/Lazy.hx",12,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_18_fromNoise,"tink.core._Lazy.Lazy_Impl_","fromNoise",0xc39e4a24,"tink.core._Lazy.Lazy_Impl_.fromNoise","tink/core/Lazy.hx",18,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_21_ofFunc,"tink.core._Lazy.Lazy_Impl_","ofFunc",0x83e6c327,"tink.core._Lazy.Lazy_Impl_.ofFunc","tink/core/Lazy.hx",21,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_24_map,"tink.core._Lazy.Lazy_Impl_","map",0xb4c223f0,"tink.core._Lazy.Lazy_Impl_.map","tink/core/Lazy.hx",24,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_27_flatMap,"tink.core._Lazy.Lazy_Impl_","flatMap",0x60f663b7,"tink.core._Lazy.Lazy_Impl_.flatMap","tink/core/Lazy.hx",27,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_31_ofConst,"tink.core._Lazy.Lazy_Impl_","ofConst",0x27d90820,"tink.core._Lazy.Lazy_Impl_.ofConst","tink/core/Lazy.hx",31,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_5_boot,"tink.core._Lazy.Lazy_Impl_","boot",0x6de2945e,"tink.core._Lazy.Lazy_Impl_.boot","tink/core/Lazy.hx",5,0x92445137)
HX_LOCAL_STACK_FRAME(_hx_pos_e2afa5eb0f0aa4f6_6_boot,"tink.core._Lazy.Lazy_Impl_","boot",0x6de2945e,"tink.core._Lazy.Lazy_Impl_.boot","tink/core/Lazy.hx",6,0x92445137)
namespace tink{
namespace core{
namespace _Lazy{

void Lazy_Impl__obj::__construct() { }

Dynamic Lazy_Impl__obj::__CreateEmpty() { return new Lazy_Impl__obj; }

void *Lazy_Impl__obj::_hx_vtable = 0;

Dynamic Lazy_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lazy_Impl__obj > _hx_result = new Lazy_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lazy_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f55432a;
}

::Dynamic Lazy_Impl__obj::NOISE;

::Dynamic Lazy_Impl__obj::_hx_NULL;

bool Lazy_Impl__obj::get_computed(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_10_get_computed)
HXDLIN(  10)		return ::tink::core::_Lazy::Computable_obj::isComputed(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lazy_Impl__obj,get_computed,return )

 ::Dynamic Lazy_Impl__obj::get(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_12_get)
HXLINE(  13)		::tink::core::_Lazy::Computable_obj::compute(this1);
HXLINE(  14)		return ::tink::core::_Lazy::LazyObject_obj::get(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lazy_Impl__obj,get,return )

::Dynamic Lazy_Impl__obj::fromNoise(::Dynamic l){
            	HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_18_fromNoise)
HXDLIN(  18)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lazy_Impl__obj,fromNoise,return )

::Dynamic Lazy_Impl__obj::ofFunc( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_21_ofFunc)
HXDLIN(  21)		return  ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX ,f,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lazy_Impl__obj,ofFunc,return )

::Dynamic Lazy_Impl__obj::map(::Dynamic this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,this1, ::Dynamic,f) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_24_map)
HXDLIN(  24)			 ::Dynamic f1 = f;
HXDLIN(  24)			return f1(::tink::core::_Lazy::LazyObject_obj::get(this1));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_24_map)
HXDLIN(  24)		return  ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(this1,f)),this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lazy_Impl__obj,map,return )

::Dynamic Lazy_Impl__obj::flatMap(::Dynamic this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,this1, ::Dynamic,f) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_27_flatMap)
HXDLIN(  27)			 ::Dynamic f1 = f;
HXDLIN(  27)			return ::tink::core::_Lazy::Lazy_Impl__obj::get(f1(::tink::core::_Lazy::LazyObject_obj::get(this1)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_27_flatMap)
HXDLIN(  27)		return  ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(this1,f)),this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lazy_Impl__obj,flatMap,return )

::Dynamic Lazy_Impl__obj::ofConst( ::Dynamic c){
            	HX_GC_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_31_ofConst)
HXDLIN(  31)		return  ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lazy_Impl__obj,ofConst,return )


Lazy_Impl__obj::Lazy_Impl__obj()
{
}

bool Lazy_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofFunc") ) { outValue = ofFunc_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { outValue = flatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofConst") ) { outValue = ofConst_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromNoise") ) { outValue = fromNoise_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_computed") ) { outValue = get_computed_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lazy_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Lazy_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Lazy_Impl__obj::NOISE,HX_("NOISE",7a,c7,b0,1d)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Lazy_Impl__obj::_hx_NULL,HX_("NULL",87,66,cf,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Lazy_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lazy_Impl__obj::NOISE,"NOISE");
	HX_MARK_MEMBER_NAME(Lazy_Impl__obj::_hx_NULL,"NULL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lazy_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lazy_Impl__obj::NOISE,"NOISE");
	HX_VISIT_MEMBER_NAME(Lazy_Impl__obj::_hx_NULL,"NULL");
};

#endif

::hx::Class Lazy_Impl__obj::__mClass;

static ::String Lazy_Impl__obj_sStaticFields[] = {
	HX_("NOISE",7a,c7,b0,1d),
	HX_("NULL",87,66,cf,33),
	HX_("get_computed",16,f5,df,3a),
	HX_("get",96,80,4e,00),
	HX_("fromNoise",d0,79,4b,54),
	HX_("ofFunc",fb,4f,1a,4b),
	HX_("map",9c,0a,53,00),
	HX_("flatMap",63,10,de,e6),
	HX_("ofConst",cc,b4,c0,ad),
	::String(null())
};

void Lazy_Impl__obj::__register()
{
	Lazy_Impl__obj _hx_dummy;
	Lazy_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Lazy.Lazy_Impl_",c2,3f,3f,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lazy_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Lazy_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lazy_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lazy_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lazy_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lazy_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lazy_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lazy_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_5_boot)
HXDLIN(   5)			 ::Dynamic c = null();
HXDLIN(   5)			return  ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,c);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_5_boot)
HXDLIN(   5)		NOISE =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            	HX_STACKFRAME(&_hx_pos_e2afa5eb0f0aa4f6_6_boot)
HXDLIN(   6)		_hx_NULL = ::tink::core::_Lazy::Lazy_Impl__obj::NOISE;
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Lazy
