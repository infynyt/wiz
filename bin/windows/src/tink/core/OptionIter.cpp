#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_OptionIter
#include <tink/core/OptionIter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01c8234f2863edf8_125_new,"tink.core.OptionIter","new",0x49371372,"tink.core.OptionIter.new","tink/core/Option.hx",125,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8234f2863edf8_136_hasNext,"tink.core.OptionIter","hasNext",0x44bdd97f,"tink.core.OptionIter.hasNext","tink/core/Option.hx",136,0xcd41da16)
HX_LOCAL_STACK_FRAME(_hx_pos_01c8234f2863edf8_138_next,"tink.core.OptionIter","next",0xc6f9f1a1,"tink.core.OptionIter.next","tink/core/Option.hx",138,0xcd41da16)
namespace tink{
namespace core{

void OptionIter_obj::__construct( ::haxe::ds::Option o){
            	HX_STACKFRAME(&_hx_pos_01c8234f2863edf8_125_new)
HXLINE( 127)		this->alive = true;
HXLINE( 130)		if ((o->_hx_getIndex() == 0)) {
HXLINE( 131)			 ::Dynamic v = o->_hx_getObject(0);
HXDLIN( 131)			this->value = v;
            		}
            		else {
HXLINE( 132)			this->alive = false;
            		}
            	}

Dynamic OptionIter_obj::__CreateEmpty() { return new OptionIter_obj; }

void *OptionIter_obj::_hx_vtable = 0;

Dynamic OptionIter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionIter_obj > _hx_result = new OptionIter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionIter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d280d42;
}

bool OptionIter_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_01c8234f2863edf8_136_hasNext)
HXDLIN( 136)		return this->alive;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionIter_obj,hasNext,return )

 ::Dynamic OptionIter_obj::next(){
            	HX_STACKFRAME(&_hx_pos_01c8234f2863edf8_138_next)
HXLINE( 139)		this->alive = false;
HXLINE( 141)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionIter_obj,next,return )


::hx::ObjectPtr< OptionIter_obj > OptionIter_obj::__new( ::haxe::ds::Option o) {
	::hx::ObjectPtr< OptionIter_obj > __this = new OptionIter_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< OptionIter_obj > OptionIter_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::Option o) {
	OptionIter_obj *__this = (OptionIter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionIter_obj), true, "tink.core.OptionIter"));
	*(void **)__this = OptionIter_obj::_hx_vtable;
	__this->__construct(o);
	return __this;
}

OptionIter_obj::OptionIter_obj()
{
}

void OptionIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionIter);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_END_CLASS();
}

void OptionIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(alive,"alive");
}

::hx::Val OptionIter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"alive") ) { return ::hx::Val( alive ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionIter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alive") ) { alive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("alive",cd,63,91,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionIter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(OptionIter_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsBool,(int)offsetof(OptionIter_obj,alive),HX_("alive",cd,63,91,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionIter_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionIter_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("alive",cd,63,91,21),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class OptionIter_obj::__mClass;

void OptionIter_obj::__register()
{
	OptionIter_obj _hx_dummy;
	OptionIter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.OptionIter",80,32,30,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionIter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionIter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionIter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionIter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
