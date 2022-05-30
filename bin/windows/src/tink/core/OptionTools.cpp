#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_OptionIter
#include <tink/core/OptionIter.h>
#endif
#ifndef INCLUDED_tink_core_OptionTools
#include <tink/core/OptionTools.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#include <tink/core/_Lazy/Lazy_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_9_force,"tink.core.OptionTools","force",0xc8d072f0,"tink.core.OptionTools.force","tink/core/Option.hx",9,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_15_sure,"tink.core.OptionTools","sure",0x80e6bb70,"tink.core.OptionTools.sure","tink/core/Option.hx",15,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_27_toOutcome,"tink.core.OptionTools","toOutcome",0x401517dc,"tink.core.OptionTools.toOutcome","tink/core/Option.hx",27,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_39_or,"tink.core.OptionTools","or",0xa70bfafe,"tink.core.OptionTools.or","tink/core/Option.hx",39,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_48_orTry,"tink.core.OptionTools","orTry",0xf95098dd,"tink.core.OptionTools.orTry","tink/core/Option.hx",48,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_57_orNull,"tink.core.OptionTools","orNull",0x29401ca5,"tink.core.OptionTools.orNull","tink/core/Option.hx",57,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_66_filter,"tink.core.OptionTools","filter",0x75424313,"tink.core.OptionTools.filter","tink/core/Option.hx",66,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_75_satisfies,"tink.core.OptionTools","satisfies",0xf143c186,"tink.core.OptionTools.satisfies","tink/core/Option.hx",75,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_84_equals,"tink.core.OptionTools","equals",0xb000119a,"tink.core.OptionTools.equals","tink/core/Option.hx",84,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_91_map,"tink.core.OptionTools","map",0x836e1061,"tink.core.OptionTools.map","tink/core/Option.hx",91,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_101_flatMap,"tink.core.OptionTools","flatMap",0x024fdca8,"tink.core.OptionTools.flatMap","tink/core/Option.hx",101,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_111_iterator,"tink.core.OptionTools","iterator",0x7bbb3a09,"tink.core.OptionTools.iterator","tink/core/Option.hx",111,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_a36a8944ac1e52bc_118_toArray,"tink.core.OptionTools","toArray",0x0d858663,"tink.core.OptionTools.toArray","tink/core/Option.hx",118,0xcd41da16)
namespace tink{
namespace core{

void OptionTools_obj::__construct() { }

Dynamic OptionTools_obj::__CreateEmpty() { return new OptionTools_obj; }

void *OptionTools_obj::_hx_vtable = 0;

Dynamic OptionTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionTools_obj > _hx_result = new OptionTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x162da395;
}

 ::Dynamic OptionTools_obj::force( ::haxe::ds::Option o, ::Dynamic pos){
            	HX_GC_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_9_force)
HXDLIN(   9)		 ::Dynamic _hx_tmp;
HXDLIN(   9)		if ((o->_hx_getIndex() == 0)) {
HXDLIN(   9)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN(   9)			_hx_tmp = v;
            		}
            		else {
HXDLIN(   9)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::tink::core::TypedError_obj::__alloc( HX_CTX ,404,HX_("Some value expected but none found",46,d2,25,09),pos)));
            		}
HXDLIN(   9)		return _hx_tmp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,force,return )

 ::Dynamic OptionTools_obj::sure( ::haxe::ds::Option o, ::Dynamic pos){
            	HX_GC_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_15_sure)
HXDLIN(  15)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  16)			 ::Dynamic v = o->_hx_getObject(0);
HXLINE(  17)			return v;
            		}
            		else {
HXLINE(  19)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::tink::core::TypedError_obj::__alloc( HX_CTX ,404,HX_("Some value expected but none found",46,d2,25,09),pos)));
            		}
HXLINE(  15)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,sure,return )

 ::tink::core::Outcome OptionTools_obj::toOutcome( ::haxe::ds::Option o, ::Dynamic pos){
            	HX_GC_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_27_toOutcome)
HXDLIN(  27)		switch((int)(o->_hx_getIndex())){
            			case (int)0: {
HXLINE(  28)				 ::Dynamic value = o->_hx_getObject(0);
HXLINE(  29)				return ::tink::core::Outcome_obj::Success(value);
            			}
            			break;
            			case (int)1: {
HXLINE(  31)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,404,( (::String)((((HX_("Some value expected but none found in ",c1,4d,fa,88) + pos->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)) + HX_("@line ",6c,f5,d8,0b)) + pos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic))) ),::hx::SourceInfo(HX_("tink/core/Option.hx",16,da,41,cd),31,HX_("tink.core.OptionTools",b3,df,1d,26),HX_("toOutcome",57,f0,63,0b))));
            			}
            			break;
            		}
HXLINE(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,toOutcome,return )

 ::Dynamic OptionTools_obj::_hx_or( ::haxe::ds::Option o,::Dynamic l){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_39_or)
HXDLIN(  39)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  40)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN(  40)			return v;
            		}
            		else {
HXLINE(  41)			return ::tink::core::_Lazy::Lazy_Impl__obj::get(l);
            		}
HXLINE(  39)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,_hx_or,return )

 ::haxe::ds::Option OptionTools_obj::orTry( ::haxe::ds::Option o,::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_48_orTry)
HXDLIN(  48)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  49)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN(  49)			return o;
            		}
            		else {
HXLINE(  50)			return ::tink::core::_Lazy::Lazy_Impl__obj::get(fallback);
            		}
HXLINE(  48)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,orTry,return )

 ::Dynamic OptionTools_obj::orNull( ::haxe::ds::Option o){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_57_orNull)
HXDLIN(  57)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  58)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN(  58)			return v;
            		}
            		else {
HXLINE(  59)			return null();
            		}
HXLINE(  57)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionTools_obj,orNull,return )

 ::haxe::ds::Option OptionTools_obj::filter( ::haxe::ds::Option o, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_66_filter)
HXDLIN(  66)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  67)			if (::hx::IsEq( f(o->_hx_getObject(0)),false )) {
HXLINE(  67)				return ::haxe::ds::Option_obj::None_dyn();
            			}
            			else {
HXLINE(  68)				return o;
            			}
            		}
            		else {
HXLINE(  68)			return o;
            		}
HXLINE(  66)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,filter,return )

bool OptionTools_obj::satisfies( ::haxe::ds::Option o, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_75_satisfies)
HXDLIN(  75)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  76)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN(  76)			return ( (bool)(f(v)) );
            		}
            		else {
HXLINE(  77)			return false;
            		}
HXLINE(  75)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,satisfies,return )

bool OptionTools_obj::equals( ::haxe::ds::Option o, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_84_equals)
HXDLIN(  84)		if ((o->_hx_getIndex() == 0)) {
HXDLIN(  84)			 ::Dynamic v1 = o->_hx_getObject(0);
HXDLIN(  84)			return ::hx::IsEq( v1,v );
            		}
            		else {
HXDLIN(  84)			return false;
            		}
HXDLIN(  84)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,equals,return )

 ::haxe::ds::Option OptionTools_obj::map( ::haxe::ds::Option o, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_91_map)
HXDLIN(  91)		if ((o->_hx_getIndex() == 0)) {
HXLINE(  92)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN(  92)			return ::haxe::ds::Option_obj::Some(f(v));
            		}
            		else {
HXLINE(  93)			return ::haxe::ds::Option_obj::None_dyn();
            		}
HXLINE(  91)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,map,return )

 ::haxe::ds::Option OptionTools_obj::flatMap( ::haxe::ds::Option o, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_101_flatMap)
HXDLIN( 101)		if ((o->_hx_getIndex() == 0)) {
HXLINE( 102)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN( 102)			return f(v);
            		}
            		else {
HXLINE( 103)			return ::haxe::ds::Option_obj::None_dyn();
            		}
HXLINE( 101)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionTools_obj,flatMap,return )

 ::tink::core::OptionIter OptionTools_obj::iterator( ::haxe::ds::Option o){
            	HX_GC_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_111_iterator)
HXDLIN( 111)		return  ::tink::core::OptionIter_obj::__alloc( HX_CTX ,o);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionTools_obj,iterator,return )

::cpp::VirtualArray OptionTools_obj::toArray( ::haxe::ds::Option o){
            	HX_STACKFRAME(&_hx_pos_a36a8944ac1e52bc_118_toArray)
HXDLIN( 118)		if ((o->_hx_getIndex() == 0)) {
HXLINE( 119)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN( 119)			return ::cpp::VirtualArray_obj::__new(1)->init(0,v);
            		}
            		else {
HXLINE( 120)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 118)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionTools_obj,toArray,return )


OptionTools_obj::OptionTools_obj()
{
}

bool OptionTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _hx_or_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sure") ) { outValue = sure_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"force") ) { outValue = force_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"orTry") ) { outValue = orTry_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"orNull") ) { outValue = orNull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { outValue = flatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toArray") ) { outValue = toArray_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toOutcome") ) { outValue = toOutcome_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"satisfies") ) { outValue = satisfies_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OptionTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OptionTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OptionTools_obj::__mClass;

static ::String OptionTools_obj_sStaticFields[] = {
	HX_("force",eb,b1,94,04),
	HX_("sure",d5,b4,5c,4c),
	HX_("toOutcome",57,f0,63,0b),
	HX_("or",23,61,00,00),
	HX_("orTry",d8,d7,14,35),
	HX_("orNull",4a,f9,32,39),
	HX_("filter",b8,1f,35,85),
	HX_("satisfies",01,9a,92,bc),
	HX_("equals",3f,ee,f2,bf),
	HX_("map",9c,0a,53,00),
	HX_("flatMap",63,10,de,e6),
	HX_("iterator",ee,49,9a,93),
	HX_("toArray",1e,ba,13,f2),
	::String(null())
};

void OptionTools_obj::__register()
{
	OptionTools_obj _hx_dummy;
	OptionTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.OptionTools",b3,df,1d,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OptionTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
