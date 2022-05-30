#include <hxcpp.h>

#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_SimpleLink
#include <tink/core/SimpleLink.h>
#endif
#ifndef INCLUDED_tink_core__Callback_CallbackLink_Impl_
#include <tink/core/_Callback/CallbackLink_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_LinkPair
#include <tink/core/_Callback/LinkPair.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_69__new,"tink.core._Callback.CallbackLink_Impl_","_new",0xa8b36fd3,"tink.core._Callback.CallbackLink_Impl_._new","tink/core/Callback.hx",69,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_73_cancel,"tink.core._Callback.CallbackLink_Impl_","cancel",0xf369486c,"tink.core._Callback.CallbackLink_Impl_.cancel","tink/core/Callback.hx",73,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_77_dissolve,"tink.core._Callback.CallbackLink_Impl_","dissolve",0x594a02e3,"tink.core._Callback.CallbackLink_Impl_.dissolve","tink/core/Callback.hx",77,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_79_noop,"tink.core._Callback.CallbackLink_Impl_","noop",0xb29e6e14,"tink.core._Callback.CallbackLink_Impl_.noop","tink/core/Callback.hx",79,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_82_toFunction,"tink.core._Callback.CallbackLink_Impl_","toFunction",0x6751fba5,"tink.core._Callback.CallbackLink_Impl_.toFunction","tink/core/Callback.hx",82,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_85_toCallback,"tink.core._Callback.CallbackLink_Impl_","toCallback",0xd205ea52,"tink.core._Callback.CallbackLink_Impl_.toCallback","tink/core/Callback.hx",85,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_88_fromFunction,"tink.core._Callback.CallbackLink_Impl_","fromFunction",0xa068a314,"tink.core._Callback.CallbackLink_Impl_.fromFunction","tink/core/Callback.hx",88,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_91_join,"tink.core._Callback.CallbackLink_Impl_","join",0xaff98e5c,"tink.core._Callback.CallbackLink_Impl_.join","tink/core/Callback.hx",91,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_95_fromMany,"tink.core._Callback.CallbackLink_Impl_","fromMany",0x1d99869b,"tink.core._Callback.CallbackLink_Impl_.fromMany","tink/core/Callback.hx",95,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd8dd6529420454_94_fromMany,"tink.core._Callback.CallbackLink_Impl_","fromMany",0x1d99869b,"tink.core._Callback.CallbackLink_Impl_.fromMany","tink/core/Callback.hx",94,0x0104eb06)
namespace tink{
namespace core{
namespace _Callback{

void CallbackLink_Impl__obj::__construct() { }

Dynamic CallbackLink_Impl__obj::__CreateEmpty() { return new CallbackLink_Impl__obj; }

void *CallbackLink_Impl__obj::_hx_vtable = 0;

Dynamic CallbackLink_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallbackLink_Impl__obj > _hx_result = new CallbackLink_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallbackLink_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x35cb0572;
}

::Dynamic CallbackLink_Impl__obj::_new( ::Dynamic link){
            	HX_GC_STACKFRAME(&_hx_pos_8fd8dd6529420454_69__new)
HXDLIN(  69)		::Dynamic this1 =  ::tink::core::SimpleLink_obj::__alloc( HX_CTX ,link);
HXDLIN(  69)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,_new,return )

void CallbackLink_Impl__obj::cancel(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_73_cancel)
HXDLIN(  73)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  73)			::tink::core::LinkObject_obj::cancel(this1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,cancel,(void))

void CallbackLink_Impl__obj::dissolve(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_77_dissolve)
HXDLIN(  77)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  77)			::tink::core::LinkObject_obj::cancel(this1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,dissolve,(void))

void CallbackLink_Impl__obj::noop(){
            	HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_79_noop)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallbackLink_Impl__obj,noop,(void))

 ::Dynamic CallbackLink_Impl__obj::toFunction(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_82_toFunction)
HXDLIN(  82)		if (::hx::IsNull( this1 )) {
HXDLIN(  82)			return ::tink::core::_Callback::CallbackLink_Impl__obj::noop_dyn();
            		}
            		else {
HXDLIN(  82)			return this1->__Field(HX_("cancel",7a,ed,33,b8), ::hx::paccDynamic);
            		}
HXDLIN(  82)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,toFunction,return )

 ::Dynamic CallbackLink_Impl__obj::toCallback(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_85_toCallback)
HXDLIN(  85)		if (::hx::IsNull( this1 )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_85_toCallback)
HXDLIN(  85)				::tink::core::_Callback::CallbackLink_Impl__obj::noop();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXDLIN(  85)			return  ::Dynamic(new _hx_Closure_0());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_85_toCallback)
HXDLIN(  85)				f();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXDLIN(  85)			 ::Dynamic f = this1->__Field(HX_("cancel",7a,ed,33,b8), ::hx::paccDynamic);
HXDLIN(  85)			return  ::Dynamic(new _hx_Closure_1(f));
            		}
HXDLIN(  85)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,toCallback,return )

::Dynamic CallbackLink_Impl__obj::fromFunction( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_8fd8dd6529420454_88_fromFunction)
HXDLIN(  88)		::Dynamic this1 =  ::tink::core::SimpleLink_obj::__alloc( HX_CTX ,f);
HXDLIN(  88)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,fromFunction,return )

::Dynamic CallbackLink_Impl__obj::join(::Dynamic this1,::Dynamic b){
            	HX_GC_STACKFRAME(&_hx_pos_8fd8dd6529420454_91_join)
HXDLIN(  91)		return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,this1,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallbackLink_Impl__obj,join,return )

::Dynamic CallbackLink_Impl__obj::fromMany(::Array< ::Dynamic> callbacks){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,callbacks1) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8fd8dd6529420454_95_fromMany)
HXLINE(  95)			if (::hx::IsNotNull( callbacks1->__get(0).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE(  96)				int _g = 0;
HXDLIN(  96)				while((_g < callbacks1->__get(0).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE(  96)					::Dynamic cb = callbacks1->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(_g);
HXDLIN(  96)					_g = (_g + 1);
HXDLIN(  96)					if (::hx::IsNotNull( cb )) {
HXLINE(  96)						::tink::core::LinkObject_obj::cancel(cb);
            					}
            				}
            			}
            			else {
HXLINE(  98)				callbacks1[0] = null();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_8fd8dd6529420454_94_fromMany)
HXDLIN(  94)		::Array< ::Dynamic> callbacks1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,callbacks);
HXDLIN(  94)		::Dynamic this1 =  ::tink::core::SimpleLink_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(callbacks1)));
HXDLIN(  94)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallbackLink_Impl__obj,fromMany,return )


CallbackLink_Impl__obj::CallbackLink_Impl__obj()
{
}

bool CallbackLink_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"noop") ) { outValue = noop_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { outValue = cancel_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dissolve") ) { outValue = dissolve_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromMany") ) { outValue = fromMany_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFunction") ) { outValue = toFunction_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCallback") ) { outValue = toCallback_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromFunction") ) { outValue = fromFunction_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallbackLink_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallbackLink_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallbackLink_Impl__obj::__mClass;

static ::String CallbackLink_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("cancel",7a,ed,33,b8),
	HX_("dissolve",71,87,d2,e1),
	HX_("noop",a2,13,0a,49),
	HX_("toFunction",b3,3f,6f,86),
	HX_("toCallback",60,2e,23,f1),
	HX_("fromFunction",a2,86,69,b4),
	HX_("join",ea,33,65,46),
	HX_("fromMany",29,0b,22,a6),
	::String(null())
};

void CallbackLink_Impl__obj::__register()
{
	CallbackLink_Impl__obj _hx_dummy;
	CallbackLink_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Callback.CallbackLink_Impl_",3c,1b,c2,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallbackLink_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CallbackLink_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallbackLink_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackLink_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackLink_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Callback
