#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_7__new,"tink.core._Callback.Callback_Impl_","_new",0xdf4adaad,"tink.core._Callback.Callback_Impl_._new","tink/core/Callback.hx",7,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_11_toFunction,"tink.core._Callback.Callback_Impl_","toFunction",0x759c05ff,"tink.core._Callback.Callback_Impl_.toFunction","tink/core/Callback.hx",11,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_25_invoke,"tink.core._Callback.Callback_Impl_","invoke",0x768127c4,"tink.core._Callback.Callback_Impl_.invoke","tink/core/Callback.hx",25,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_28_fromNiladic,"tink.core._Callback.Callback_Impl_","fromNiladic",0x39a39fb8,"tink.core._Callback.Callback_Impl_.fromNiladic","tink/core/Callback.hx",28,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_33_fromMany,"tink.core._Callback.Callback_Impl_","fromMany",0xea886675,"tink.core._Callback.Callback_Impl_.fromMany","tink/core/Callback.hx",33,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_31_fromMany,"tink.core._Callback.Callback_Impl_","fromMany",0xea886675,"tink.core._Callback.Callback_Impl_.fromMany","tink/core/Callback.hx",31,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_50_defer,"tink.core._Callback.Callback_Impl_","defer",0x5d432aa6,"tink.core._Callback.Callback_Impl_.defer","tink/core/Callback.hx",50,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_13_boot,"tink.core._Callback.Callback_Impl_","boot",0xe147497e,"tink.core._Callback.Callback_Impl_.boot","tink/core/Callback.hx",13,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_e7c444ec0c00c82e_14_boot,"tink.core._Callback.Callback_Impl_","boot",0xe147497e,"tink.core._Callback.Callback_Impl_.boot","tink/core/Callback.hx",14,0x0104eb06)
namespace tink{
namespace core{
namespace _Callback{

void Callback_Impl__obj::__construct() { }

Dynamic Callback_Impl__obj::__CreateEmpty() { return new Callback_Impl__obj; }

void *Callback_Impl__obj::_hx_vtable = 0;

Dynamic Callback_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Callback_Impl__obj > _hx_result = new Callback_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Callback_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10af39f4;
}

 ::Dynamic Callback_Impl__obj::_new( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_7__new)
HXDLIN(   7)		 ::Dynamic this1 = f;
HXDLIN(   7)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Callback_Impl__obj,_new,return )

 ::Dynamic Callback_Impl__obj::toFunction( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_11_toFunction)
HXDLIN(  11)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Callback_Impl__obj,toFunction,return )

int Callback_Impl__obj::depth;

int Callback_Impl__obj::MAX_DEPTH;

void Callback_Impl__obj::invoke( ::Dynamic this1, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_25_invoke)
HXDLIN(  25)		if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN(  25)			::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN(  25)			this1(data);
HXDLIN(  25)			::tink::core::_Callback::Callback_Impl__obj::depth--;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,this1, ::Dynamic,data) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_25_invoke)
HXDLIN(  25)				this1(data);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN(  25)			::tink::core::_Callback::Callback_Impl__obj::defer( ::Dynamic(new _hx_Closure_0(this1,data)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Callback_Impl__obj,invoke,(void))

 ::Dynamic Callback_Impl__obj::fromNiladic( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_28_fromNiladic)
HXDLIN(  28)			f();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_28_fromNiladic)
HXDLIN(  28)		return  ::Dynamic(new _hx_Closure_0(f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Callback_Impl__obj,fromNiladic,return )

 ::Dynamic Callback_Impl__obj::fromMany(::Array< ::Dynamic> callbacks){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,callbacks) HXARGC(1)
            		void _hx_run( ::Dynamic v){
            			HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_33_fromMany)
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			while((_g < callbacks->length)){
HXLINE(  33)				 ::Dynamic callback = callbacks->__get(_g);
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  34)				::tink::core::_Callback::Callback_Impl__obj::invoke(callback,v);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_31_fromMany)
HXDLIN(  31)		return  ::Dynamic(new _hx_Closure_0(callbacks));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Callback_Impl__obj,fromMany,return )

void Callback_Impl__obj::defer( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_50_defer)
HXDLIN(  50)		::haxe::Timer_obj::delay(f,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Callback_Impl__obj,defer,(void))


Callback_Impl__obj::Callback_Impl__obj()
{
}

bool Callback_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"defer") ) { outValue = defer_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { outValue = invoke_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromMany") ) { outValue = fromMany_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFunction") ) { outValue = toFunction_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromNiladic") ) { outValue = fromNiladic_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Callback_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Callback_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Callback_Impl__obj::depth,HX_("depth",03,f1,29,d7)},
	{::hx::fsInt,(void *) &Callback_Impl__obj::MAX_DEPTH,HX_("MAX_DEPTH",a8,d1,cb,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Callback_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Callback_Impl__obj::depth,"depth");
	HX_MARK_MEMBER_NAME(Callback_Impl__obj::MAX_DEPTH,"MAX_DEPTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Callback_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Callback_Impl__obj::depth,"depth");
	HX_VISIT_MEMBER_NAME(Callback_Impl__obj::MAX_DEPTH,"MAX_DEPTH");
};

#endif

::hx::Class Callback_Impl__obj::__mClass;

static ::String Callback_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("toFunction",b3,3f,6f,86),
	HX_("depth",03,f1,29,d7),
	HX_("MAX_DEPTH",a8,d1,cb,94),
	HX_("invoke",78,77,e0,9f),
	HX_("fromNiladic",84,e3,a2,e1),
	HX_("fromMany",29,0b,22,a6),
	HX_("defer",72,4d,22,d7),
	::String(null())
};

void Callback_Impl__obj::__register()
{
	Callback_Impl__obj _hx_dummy;
	Callback_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Callback.Callback_Impl_",a2,9e,56,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Callback_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Callback_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Callback_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Callback_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Callback_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Callback_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Callback_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Callback_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_13_boot)
HXDLIN(  13)		depth = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e7c444ec0c00c82e_14_boot)
HXDLIN(  14)		MAX_DEPTH = 500;
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Callback
