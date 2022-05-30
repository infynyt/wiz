#include <hxcpp.h>

#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80b59e63b7a8554e_45_new,"tink.core.SimpleDisposable","new",0x02f89f77,"tink.core.SimpleDisposable.new","tink/core/Disposable.hx",45,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_80b59e63b7a8554e_51_get_disposed,"tink.core.SimpleDisposable","get_disposed",0xe337d4f7,"tink.core.SimpleDisposable.get_disposed","tink/core/Disposable.hx",51,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_80b59e63b7a8554e_54_ondispose,"tink.core.SimpleDisposable","ondispose",0xf2bdcbb7,"tink.core.SimpleDisposable.ondispose","tink/core/Disposable.hx",54,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_80b59e63b7a8554e_63_dispose,"tink.core.SimpleDisposable","dispose",0x103c2736,"tink.core.SimpleDisposable.dispose","tink/core/Disposable.hx",63,0x5766a74b)
HX_LOCAL_STACK_FRAME(_hx_pos_80b59e63b7a8554e_74_noop,"tink.core.SimpleDisposable","noop",0x969a78ab,"tink.core.SimpleDisposable.noop","tink/core/Disposable.hx",74,0x5766a74b)
namespace tink{
namespace core{

void SimpleDisposable_obj::__construct( ::Dynamic dispose){
            	HX_STACKFRAME(&_hx_pos_80b59e63b7a8554e_45_new)
HXLINE(  47)		this->disposeHandlers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		this->f = dispose;
            	}

Dynamic SimpleDisposable_obj::__CreateEmpty() { return new SimpleDisposable_obj; }

void *SimpleDisposable_obj::_hx_vtable = 0;

Dynamic SimpleDisposable_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleDisposable_obj > _hx_result = new SimpleDisposable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SimpleDisposable_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11eb7047;
}

static ::tink::core::Disposable_obj _hx_tink_core_SimpleDisposable__hx_tink_core_Disposable= {
	( bool (::hx::Object::*)())&::tink::core::SimpleDisposable_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::SimpleDisposable_obj::ondispose,
};

static ::tink::core::OwnedDisposable_obj _hx_tink_core_SimpleDisposable__hx_tink_core_OwnedDisposable= {
	( bool (::hx::Object::*)())&::tink::core::SimpleDisposable_obj::get_disposed,
	( void (::hx::Object::*)( ::Dynamic))&::tink::core::SimpleDisposable_obj::ondispose,
	( void (::hx::Object::*)())&::tink::core::SimpleDisposable_obj::dispose,
};

void *SimpleDisposable_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87efe891: return &_hx_tink_core_SimpleDisposable__hx_tink_core_Disposable;
		case (int)0xa1838594: return &_hx_tink_core_SimpleDisposable__hx_tink_core_OwnedDisposable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SimpleDisposable_obj::get_disposed(){
            	HX_STACKFRAME(&_hx_pos_80b59e63b7a8554e_51_get_disposed)
HXDLIN(  51)		return ::hx::IsNull( this->disposeHandlers );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleDisposable_obj,get_disposed,return )

void SimpleDisposable_obj::ondispose( ::Dynamic d){
            	HX_STACKFRAME(&_hx_pos_80b59e63b7a8554e_54_ondispose)
HXDLIN(  54)		::Array< ::Dynamic> _g = this->disposeHandlers;
HXLINE(  55)		if (::hx::IsNull( _g )) {
HXLINE(  55)			d();
            		}
            		else {
HXLINE(  56)			::Array< ::Dynamic> v = _g;
HXDLIN(  56)			v->push(d);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleDisposable_obj,ondispose,(void))

void SimpleDisposable_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_80b59e63b7a8554e_63_dispose)
HXDLIN(  63)		::Array< ::Dynamic> _g = this->disposeHandlers;
HXLINE(  64)		if (::hx::IsNotNull( _g )) {
HXLINE(  65)			::Array< ::Dynamic> v = _g;
HXDLIN(  65)			{
HXLINE(  66)				this->disposeHandlers = null();
HXLINE(  67)				 ::Dynamic f = this->f;
HXLINE(  68)				this->f = ::tink::core::SimpleDisposable_obj::noop_dyn();
HXLINE(  69)				f();
HXLINE(  70)				{
HXLINE(  70)					int _g1 = 0;
HXDLIN(  70)					while((_g1 < v->length)){
HXLINE(  70)						 ::Dynamic h = v->__get(_g1);
HXDLIN(  70)						_g1 = (_g1 + 1);
HXLINE(  71)						h();
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleDisposable_obj,dispose,(void))

void SimpleDisposable_obj::noop(){
            	HX_STACKFRAME(&_hx_pos_80b59e63b7a8554e_74_noop)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SimpleDisposable_obj,noop,(void))


::hx::ObjectPtr< SimpleDisposable_obj > SimpleDisposable_obj::__new( ::Dynamic dispose) {
	::hx::ObjectPtr< SimpleDisposable_obj > __this = new SimpleDisposable_obj();
	__this->__construct(dispose);
	return __this;
}

::hx::ObjectPtr< SimpleDisposable_obj > SimpleDisposable_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic dispose) {
	SimpleDisposable_obj *__this = (SimpleDisposable_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleDisposable_obj), true, "tink.core.SimpleDisposable"));
	*(void **)__this = SimpleDisposable_obj::_hx_vtable;
	__this->__construct(dispose);
	return __this;
}

SimpleDisposable_obj::SimpleDisposable_obj()
{
}

void SimpleDisposable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleDisposable);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(disposeHandlers,"disposeHandlers");
	HX_MARK_END_CLASS();
}

void SimpleDisposable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(disposeHandlers,"disposeHandlers");
}

::hx::Val SimpleDisposable_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disposed() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondispose") ) { return ::hx::Val( ondispose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_disposed") ) { return ::hx::Val( get_disposed_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disposeHandlers") ) { return ::hx::Val( disposeHandlers ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleDisposable_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"noop") ) { outValue = noop_dyn(); return true; }
	}
	return false;
}

::hx::Val SimpleDisposable_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disposeHandlers") ) { disposeHandlers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleDisposable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("disposeHandlers",28,95,92,4e));
	outFields->push(HX_("disposed",e5,0a,a4,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleDisposable_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SimpleDisposable_obj,f),HX_("f",66,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SimpleDisposable_obj,disposeHandlers),HX_("disposeHandlers",28,95,92,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SimpleDisposable_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleDisposable_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("disposeHandlers",28,95,92,4e),
	HX_("get_disposed",ee,be,bd,dc),
	HX_("ondispose",60,11,a6,c5),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class SimpleDisposable_obj::__mClass;

static ::String SimpleDisposable_obj_sStaticFields[] = {
	HX_("noop",a2,13,0a,49),
	::String(null())
};

void SimpleDisposable_obj::__register()
{
	SimpleDisposable_obj _hx_dummy;
	SimpleDisposable_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.SimpleDisposable",05,18,50,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleDisposable_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SimpleDisposable_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleDisposable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleDisposable_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleDisposable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleDisposable_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
