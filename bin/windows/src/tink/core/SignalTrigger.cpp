#include <hxcpp.h>

#ifndef INCLUDED_tink_core_CallbackList
#include <tink/core/CallbackList.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SignalTrigger
#include <tink/core/SignalTrigger.h>
#endif
#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif
#ifndef INCLUDED_tink_core__Signal_SignalObject
#include <tink/core/_Signal/SignalObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f72036d15d783c7_214_new,"tink.core.SignalTrigger","new",0x449375af,"tink.core.SignalTrigger.new","tink/core/Signal.hx",214,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_212_get_disposed,"tink.core.SignalTrigger","get_disposed",0xeedc77bf,"tink.core.SignalTrigger.get_disposed","tink/core/Signal.hx",212,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_219_dispose,"tink.core.SignalTrigger","dispose",0x256a796e,"tink.core.SignalTrigger.dispose","tink/core/Signal.hx",219,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_222_ondispose,"tink.core.SignalTrigger","ondispose",0x6dcf1bef,"tink.core.SignalTrigger.ondispose","tink/core/Signal.hx",222,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_228_trigger,"tink.core.SignalTrigger","trigger",0x8ffd4e07,"tink.core.SignalTrigger.trigger","tink/core/Signal.hx",228,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_234_getLength,"tink.core.SignalTrigger","getLength",0xc38728ab,"tink.core.SignalTrigger.getLength","tink/core/Signal.hx",234,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_237_listen,"tink.core.SignalTrigger","listen",0xe1871e58,"tink.core.SignalTrigger.listen","tink/core/Signal.hx",237,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_243_clear,"tink.core.SignalTrigger","clear",0xd7ca489c,"tink.core.SignalTrigger.clear","tink/core/Signal.hx",243,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_9f72036d15d783c7_246_asSignal,"tink.core.SignalTrigger","asSignal",0xb377f54b,"tink.core.SignalTrigger.asSignal","tink/core/Signal.hx",246,0x5ae99903)
namespace tink{
namespace core{

void SignalTrigger_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9f72036d15d783c7_214_new)
HXDLIN( 214)		this->handlers =  ::tink::core::CallbackList_obj::__alloc( HX_CTX ,null());
            	}

Dynamic SignalTrigger_obj::__CreateEmpty() { return new SignalTrigger_obj; }

void *SignalTrigger_obj::_hx_vtable = 0;

Dynamic SignalTrigger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SignalTrigger_obj > _hx_result = new SignalTrigger_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SignalTrigger_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7837729f;
}

static ::tink::core::Disposable_obj _hx_tink_core_SignalTrigger__hx_tink_core_Disposable= {
	( bool (::hx::Object::*)())&::tink::core::SignalTrigger_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::SignalTrigger_obj::ondispose,
};

static ::tink::core::_Signal::SignalObject_obj _hx_tink_core_SignalTrigger__hx_tink_core__Signal_SignalObject= {
	( bool (::hx::Object::*)())&::tink::core::SignalTrigger_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::SignalTrigger_obj::ondispose,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::SignalTrigger_obj::listen,
};

static ::tink::core::OwnedDisposable_obj _hx_tink_core_SignalTrigger__hx_tink_core_OwnedDisposable= {
	( bool (::hx::Object::*)())&::tink::core::SignalTrigger_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::SignalTrigger_obj::ondispose,
	( void (::hx::Object::*)())&::tink::core::SignalTrigger_obj::dispose,
};

void *SignalTrigger_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87efe891: return &_hx_tink_core_SignalTrigger__hx_tink_core_Disposable;
		case (int)0x17de315d: return &_hx_tink_core_SignalTrigger__hx_tink_core__Signal_SignalObject;
		case (int)0xa1838594: return &_hx_tink_core_SignalTrigger__hx_tink_core_OwnedDisposable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SignalTrigger_obj::get_disposed(){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_212_get_disposed)
HXDLIN( 212)		return ::hx::IsNull( this->handlers->disposeHandlers );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalTrigger_obj,get_disposed,return )

void SignalTrigger_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_219_dispose)
HXDLIN( 219)		this->handlers->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalTrigger_obj,dispose,(void))

void SignalTrigger_obj::ondispose( ::Dynamic d){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_222_ondispose)
HXDLIN( 222)		this->handlers->ondispose(d);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SignalTrigger_obj,ondispose,(void))

void SignalTrigger_obj::trigger( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_228_trigger)
HXDLIN( 228)		this->handlers->invoke(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SignalTrigger_obj,trigger,(void))

int SignalTrigger_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_234_getLength)
HXDLIN( 234)		return this->handlers->used;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalTrigger_obj,getLength,return )

::Dynamic SignalTrigger_obj::listen( ::Dynamic cb){
            	HX_GC_STACKFRAME(&_hx_pos_9f72036d15d783c7_237_listen)
HXDLIN( 237)		 ::tink::core::CallbackList _this = this->handlers;
HXDLIN( 237)		if (::hx::IsNull( _this->disposeHandlers )) {
HXDLIN( 237)			return null();
            		}
            		else {
HXDLIN( 237)			 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,cb,_this);
HXDLIN( 237)			_this->cells->push(node);
HXDLIN( 237)			if ((_this->used++ == 0)) {
HXDLIN( 237)				 ::Dynamic fn = _this->onfill;
HXDLIN( 237)				if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN( 237)					::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 237)					fn();
HXDLIN( 237)					::tink::core::_Callback::Callback_Impl__obj::depth--;
            				}
            				else {
HXDLIN( 237)					::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            				}
            			}
HXDLIN( 237)			return node;
            		}
HXDLIN( 237)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SignalTrigger_obj,listen,return )

void SignalTrigger_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_243_clear)
HXDLIN( 243)		this->handlers->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalTrigger_obj,clear,(void))

::Dynamic SignalTrigger_obj::asSignal(){
            	HX_STACKFRAME(&_hx_pos_9f72036d15d783c7_246_asSignal)
HXDLIN( 246)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignalTrigger_obj,asSignal,return )


::hx::ObjectPtr< SignalTrigger_obj > SignalTrigger_obj::__new() {
	::hx::ObjectPtr< SignalTrigger_obj > __this = new SignalTrigger_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SignalTrigger_obj > SignalTrigger_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SignalTrigger_obj *__this = (SignalTrigger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SignalTrigger_obj), true, "tink.core.SignalTrigger"));
	*(void **)__this = SignalTrigger_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SignalTrigger_obj::SignalTrigger_obj()
{
}

void SignalTrigger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SignalTrigger);
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_END_CLASS();
}

void SignalTrigger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
}

::hx::Val SignalTrigger_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disposed() ); }
		if (HX_FIELD_EQ(inName,"handlers") ) { return ::hx::Val( handlers ); }
		if (HX_FIELD_EQ(inName,"asSignal") ) { return ::hx::Val( asSignal_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondispose") ) { return ::hx::Val( ondispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_disposed") ) { return ::hx::Val( get_disposed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SignalTrigger_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast<  ::tink::core::CallbackList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SignalTrigger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("disposed",e5,0a,a4,27));
	outFields->push(HX_("handlers",69,21,24,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SignalTrigger_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::CallbackList */ ,(int)offsetof(SignalTrigger_obj,handlers),HX_("handlers",69,21,24,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SignalTrigger_obj_sStaticStorageInfo = 0;
#endif

static ::String SignalTrigger_obj_sMemberFields[] = {
	HX_("get_disposed",ee,be,bd,dc),
	HX_("handlers",69,21,24,d5),
	HX_("dispose",9f,80,4c,bb),
	HX_("ondispose",60,11,a6,c5),
	HX_("trigger",38,55,df,25),
	HX_("getLength",1c,1e,5e,1b),
	HX_("listen",47,c8,f9,ef),
	HX_("clear",8d,71,5b,48),
	HX_("asSignal",fa,38,5c,43),
	::String(null()) };

::hx::Class SignalTrigger_obj::__mClass;

void SignalTrigger_obj::__register()
{
	SignalTrigger_obj _hx_dummy;
	SignalTrigger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.SignalTrigger",3d,72,c5,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SignalTrigger_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SignalTrigger_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SignalTrigger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SignalTrigger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
