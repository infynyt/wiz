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
#ifndef INCLUDED_tink_core__Signal_Signal_Impl_
#include <tink/core/_Signal/Signal_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Signal_Suspendable
#include <tink/core/_Signal/Suspendable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60e4b242b94eba99_184_new,"tink.core._Signal.Suspendable","new",0x21a3bd8e,"tink.core._Signal.Suspendable.new","tink/core/Signal.hx",184,0x5ae99903)
HX_DEFINE_STACK_FRAME(_hx_pos_60e4b242b94eba99_185_new,"tink.core._Signal.Suspendable","new",0x21a3bd8e,"tink.core._Signal.Suspendable.new","tink/core/Signal.hx",185,0x5ae99903)
HX_DEFINE_STACK_FRAME(_hx_pos_60e4b242b94eba99_163_new,"tink.core._Signal.Suspendable","new",0x21a3bd8e,"tink.core._Signal.Suspendable.new","tink/core/Signal.hx",163,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_60e4b242b94eba99_172_get_disposed,"tink.core._Signal.Suspendable","get_disposed",0x17e9bc00,"tink.core._Signal.Suspendable.get_disposed","tink/core/Signal.hx",172,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_60e4b242b94eba99_175_dispose,"tink.core._Signal.Suspendable","dispose",0xa4059ccd,"tink.core._Signal.Suspendable.dispose","tink/core/Signal.hx",175,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_60e4b242b94eba99_178_ondispose,"tink.core._Signal.Suspendable","ondispose",0x2401150e,"tink.core._Signal.Suspendable.ondispose","tink/core/Signal.hx",178,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_60e4b242b94eba99_197_listen,"tink.core._Signal.Suspendable","listen",0x1003cbd9,"tink.core._Signal.Suspendable.listen","tink/core/Signal.hx",197,0x5ae99903)
HX_LOCAL_STACK_FRAME(_hx_pos_60e4b242b94eba99_201_over,"tink.core._Signal.Suspendable","over",0x4e582c66,"tink.core._Signal.Suspendable.over","tink/core/Signal.hx",201,0x5ae99903)
namespace tink{
namespace core{
namespace _Signal{

void Suspendable_obj::__construct( ::Dynamic activate, ::Dynamic init){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::core::_Signal::Suspendable,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_60e4b242b94eba99_184_new)
HXLINE( 184)			::Dynamic this1 = _gthis->subscription;
HXDLIN( 184)			if (::hx::IsNotNull( this1 )) {
HXLINE( 184)				::tink::core::LinkObject_obj::cancel(this1);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::tink::core::_Signal::Suspendable,_gthis, ::Dynamic,activate,::Array< ::Dynamic>,init1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_60e4b242b94eba99_185_new)
HXLINE( 186)			if (::hx::IsNotNull( init1->__get(0) )) {
HXLINE( 188)				 ::Dynamic f = init1->__get(0);
HXDLIN( 188)				{
HXLINE( 189)					init1[0] = null();
HXLINE( 190)					f(_gthis);
            				}
            			}
HXLINE( 192)			_gthis->subscription = activate(_gthis->handlers->invoke_dyn());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_60e4b242b94eba99_163_new)
HXLINE( 165)		this->handlers =  ::tink::core::CallbackList_obj::__alloc( HX_CTX ,null());
HXLINE( 180)		::Array< ::Dynamic> init1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,init);
HXDLIN( 180)		 ::tink::core::_Signal::Suspendable _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 181)		this->activate = activate;
HXLINE( 182)		this->init = init1->__get(0);
HXLINE( 184)		this->handlers->ondrain =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 185)		this->handlers->onfill =  ::Dynamic(new _hx_Closure_1(_gthis,activate,init1));
            	}

Dynamic Suspendable_obj::__CreateEmpty() { return new Suspendable_obj; }

void *Suspendable_obj::_hx_vtable = 0;

Dynamic Suspendable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Suspendable_obj > _hx_result = new Suspendable_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Suspendable_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b5b4080;
}

static ::tink::core::Disposable_obj _hx_tink_core__Signal_Suspendable__hx_tink_core_Disposable= {
	( bool (::hx::Object::*)())&::tink::core::_Signal::Suspendable_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Suspendable_obj::ondispose,
};

static ::tink::core::_Signal::SignalObject_obj _hx_tink_core__Signal_Suspendable__hx_tink_core__Signal_SignalObject= {
	( bool (::hx::Object::*)())&::tink::core::_Signal::Suspendable_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Suspendable_obj::ondispose,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Suspendable_obj::listen,
};

static ::tink::core::OwnedDisposable_obj _hx_tink_core__Signal_Suspendable__hx_tink_core_OwnedDisposable= {
	( bool (::hx::Object::*)())&::tink::core::_Signal::Suspendable_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::_Signal::Suspendable_obj::ondispose,
	( void (::hx::Object::*)())&::tink::core::_Signal::Suspendable_obj::dispose,
};

void *Suspendable_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87efe891: return &_hx_tink_core__Signal_Suspendable__hx_tink_core_Disposable;
		case (int)0x17de315d: return &_hx_tink_core__Signal_Suspendable__hx_tink_core__Signal_SignalObject;
		case (int)0xa1838594: return &_hx_tink_core__Signal_Suspendable__hx_tink_core_OwnedDisposable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool Suspendable_obj::get_disposed(){
            	HX_STACKFRAME(&_hx_pos_60e4b242b94eba99_172_get_disposed)
HXDLIN( 172)		return ::hx::IsNull( this->handlers->disposeHandlers );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Suspendable_obj,get_disposed,return )

void Suspendable_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_60e4b242b94eba99_175_dispose)
HXDLIN( 175)		this->handlers->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Suspendable_obj,dispose,(void))

void Suspendable_obj::ondispose( ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_60e4b242b94eba99_178_ondispose)
HXDLIN( 178)		this->handlers->ondispose(handler);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Suspendable_obj,ondispose,(void))

::Dynamic Suspendable_obj::listen( ::Dynamic cb){
            	HX_GC_STACKFRAME(&_hx_pos_60e4b242b94eba99_197_listen)
HXDLIN( 197)		 ::tink::core::CallbackList _this = this->handlers;
HXDLIN( 197)		if (::hx::IsNull( _this->disposeHandlers )) {
HXDLIN( 197)			return null();
            		}
            		else {
HXDLIN( 197)			 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,cb,_this);
HXDLIN( 197)			_this->cells->push(node);
HXDLIN( 197)			if ((_this->used++ == 0)) {
HXDLIN( 197)				 ::Dynamic fn = _this->onfill;
HXDLIN( 197)				if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN( 197)					::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 197)					fn();
HXDLIN( 197)					::tink::core::_Callback::Callback_Impl__obj::depth--;
            				}
            				else {
HXDLIN( 197)					::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            				}
            			}
HXDLIN( 197)			return node;
            		}
HXDLIN( 197)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Suspendable_obj,listen,return )

::Dynamic Suspendable_obj::over(::Dynamic s, ::Dynamic activate){
            	HX_GC_STACKFRAME(&_hx_pos_60e4b242b94eba99_201_over)
HXDLIN( 201)		if (::tink::core::Disposable_obj::get_disposed(s)) {
HXDLIN( 201)			return ::tink::core::_Signal::Signal_Impl__obj::dead();
            		}
            		else {
HXLINE( 203)			 ::tink::core::_Signal::Suspendable ret =  ::tink::core::_Signal::Suspendable_obj::__alloc( HX_CTX ,activate,null());
HXLINE( 204)			::tink::core::Disposable_obj::ondispose(s,ret->dispose_dyn());
HXLINE( 205)			return ret;
            		}
HXLINE( 201)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Suspendable_obj,over,return )


::hx::ObjectPtr< Suspendable_obj > Suspendable_obj::__new( ::Dynamic activate, ::Dynamic init) {
	::hx::ObjectPtr< Suspendable_obj > __this = new Suspendable_obj();
	__this->__construct(activate,init);
	return __this;
}

::hx::ObjectPtr< Suspendable_obj > Suspendable_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic activate, ::Dynamic init) {
	Suspendable_obj *__this = (Suspendable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Suspendable_obj), true, "tink.core._Signal.Suspendable"));
	*(void **)__this = Suspendable_obj::_hx_vtable;
	__this->__construct(activate,init);
	return __this;
}

Suspendable_obj::Suspendable_obj()
{
}

void Suspendable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Suspendable);
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_MEMBER_NAME(activate,"activate");
	HX_MARK_MEMBER_NAME(init,"init");
	HX_MARK_MEMBER_NAME(subscription,"subscription");
	HX_MARK_END_CLASS();
}

void Suspendable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
	HX_VISIT_MEMBER_NAME(activate,"activate");
	HX_VISIT_MEMBER_NAME(init,"init");
	HX_VISIT_MEMBER_NAME(subscription,"subscription");
}

::hx::Val Suspendable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { return ::hx::Val( handlers ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate ); }
		if (HX_FIELD_EQ(inName,"disposed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disposed() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondispose") ) { return ::hx::Val( ondispose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subscription") ) { return ::hx::Val( subscription ); }
		if (HX_FIELD_EQ(inName,"get_disposed") ) { return ::hx::Val( get_disposed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Suspendable_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"over") ) { outValue = over_dyn(); return true; }
	}
	return false;
}

::hx::Val Suspendable_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { init=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast<  ::tink::core::CallbackList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activate") ) { activate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subscription") ) { subscription=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Suspendable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handlers",69,21,24,d5));
	outFields->push(HX_("subscription",1d,ff,00,36));
	outFields->push(HX_("disposed",e5,0a,a4,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Suspendable_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::CallbackList */ ,(int)offsetof(Suspendable_obj,handlers),HX_("handlers",69,21,24,d5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Suspendable_obj,activate),HX_("activate",b3,1b,ac,e5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Suspendable_obj,init),HX_("init",10,3b,bb,45)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Suspendable_obj,subscription),HX_("subscription",1d,ff,00,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Suspendable_obj_sStaticStorageInfo = 0;
#endif

static ::String Suspendable_obj_sMemberFields[] = {
	HX_("handlers",69,21,24,d5),
	HX_("activate",b3,1b,ac,e5),
	HX_("init",10,3b,bb,45),
	HX_("subscription",1d,ff,00,36),
	HX_("get_disposed",ee,be,bd,dc),
	HX_("dispose",9f,80,4c,bb),
	HX_("ondispose",60,11,a6,c5),
	HX_("listen",47,c8,f9,ef),
	::String(null()) };

::hx::Class Suspendable_obj::__mClass;

static ::String Suspendable_obj_sStaticFields[] = {
	HX_("over",54,91,b8,49),
	::String(null())
};

void Suspendable_obj::__register()
{
	Suspendable_obj _hx_dummy;
	Suspendable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Signal.Suspendable",9c,9e,be,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Suspendable_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Suspendable_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Suspendable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Suspendable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Suspendable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Suspendable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Signal
