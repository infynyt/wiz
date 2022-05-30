#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core__Progress_ProgressValue_Impl_
#include <tink/core/_Progress/ProgressValue_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_42e9e61ed68eb3a5_154__new,"tink.core._Progress.ProgressValue_Impl_","_new",0x45209fc0,"tink.core._Progress.ProgressValue_Impl_._new","tink/core/Progress.hx",154,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_42e9e61ed68eb3a5_161_normalize,"tink.core._Progress.ProgressValue_Impl_","normalize",0x7db2b4ce,"tink.core._Progress.ProgressValue_Impl_.normalize","tink/core/Progress.hx",161,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_42e9e61ed68eb3a5_164_get_value,"tink.core._Progress.ProgressValue_Impl_","get_value",0x47735909,"tink.core._Progress.ProgressValue_Impl_.get_value","tink/core/Progress.hx",164,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_42e9e61ed68eb3a5_167_get_total,"tink.core._Progress.ProgressValue_Impl_","get_total",0x29ed2d5c,"tink.core._Progress.ProgressValue_Impl_.get_total","tink/core/Progress.hx",167,0x1a922e1e)
HX_LOCAL_STACK_FRAME(_hx_pos_42e9e61ed68eb3a5_149_boot,"tink.core._Progress.ProgressValue_Impl_","boot",0x471d0e91,"tink.core._Progress.ProgressValue_Impl_.boot","tink/core/Progress.hx",149,0x1a922e1e)
namespace tink{
namespace core{
namespace _Progress{

void ProgressValue_Impl__obj::__construct() { }

Dynamic ProgressValue_Impl__obj::__CreateEmpty() { return new ProgressValue_Impl__obj; }

void *ProgressValue_Impl__obj::_hx_vtable = 0;

Dynamic ProgressValue_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgressValue_Impl__obj > _hx_result = new ProgressValue_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProgressValue_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d54350d;
}

 ::tink::core::MPair ProgressValue_Impl__obj::ZERO;

 ::tink::core::MPair ProgressValue_Impl__obj::_new(Float value, ::haxe::ds::Option total){
            	HX_GC_STACKFRAME(&_hx_pos_42e9e61ed68eb3a5_154__new)
HXLINE( 155)		 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,value,total);
HXLINE( 154)		 ::tink::core::MPair this2 = this1;
HXDLIN( 154)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ProgressValue_Impl__obj,_new,return )

 ::haxe::ds::Option ProgressValue_Impl__obj::normalize( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_42e9e61ed68eb3a5_161_normalize)
HXDLIN( 161)		 ::haxe::ds::Option o = this1->b;
HXDLIN( 161)		if ((o->_hx_getIndex() == 0)) {
HXDLIN( 161)			Float v = ( (Float)(o->_hx_getObject(0)) );
HXDLIN( 161)			return ::haxe::ds::Option_obj::Some((( (Float)(this1->a) ) / v));
            		}
            		else {
HXDLIN( 161)			return ::haxe::ds::Option_obj::None_dyn();
            		}
HXDLIN( 161)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProgressValue_Impl__obj,normalize,return )

Float ProgressValue_Impl__obj::get_value( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_42e9e61ed68eb3a5_164_get_value)
HXDLIN( 164)		return ( (Float)(this1->a) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProgressValue_Impl__obj,get_value,return )

 ::haxe::ds::Option ProgressValue_Impl__obj::get_total( ::tink::core::MPair this1){
            	HX_STACKFRAME(&_hx_pos_42e9e61ed68eb3a5_167_get_total)
HXDLIN( 167)		return this1->b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProgressValue_Impl__obj,get_total,return )


ProgressValue_Impl__obj::ProgressValue_Impl__obj()
{
}

bool ProgressValue_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_total") ) { outValue = get_total_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ProgressValue_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ProgressValue_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::MPair */ ,(void *) &ProgressValue_Impl__obj::ZERO,HX_("ZERO",28,d7,b1,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ProgressValue_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressValue_Impl__obj::ZERO,"ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressValue_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressValue_Impl__obj::ZERO,"ZERO");
};

#endif

::hx::Class ProgressValue_Impl__obj::__mClass;

static ::String ProgressValue_Impl__obj_sStaticFields[] = {
	HX_("ZERO",28,d7,b1,3b),
	HX_("_new",61,15,1f,3f),
	HX_("normalize",8d,37,a1,ab),
	HX_("get_value",c8,db,61,75),
	HX_("get_total",1b,b0,db,57),
	::String(null())
};

void ProgressValue_Impl__obj::__register()
{
	ProgressValue_Impl__obj _hx_dummy;
	ProgressValue_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Progress.ProgressValue_Impl_",6f,f2,dc,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProgressValue_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressValue_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ProgressValue_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ProgressValue_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressValue_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressValue_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressValue_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ProgressValue_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::tink::core::MPair _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_42e9e61ed68eb3a5_149_boot)
HXDLIN( 149)			 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,0,::haxe::ds::Option_obj::None_dyn());
HXDLIN( 149)			 ::tink::core::MPair this2 = this1;
HXDLIN( 149)			return this2;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_42e9e61ed68eb3a5_149_boot)
HXDLIN( 149)		ZERO = ( ( ::tink::core::MPair)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Progress
