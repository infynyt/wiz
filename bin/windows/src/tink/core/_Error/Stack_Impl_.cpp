#include <hxcpp.h>

#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_tink_core__Error_Stack_Impl_
#include <tink/core/_Error/Stack_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d4641c6e4f5154ac_189_toString,"tink.core._Error.Stack_Impl_","toString",0x09fdd924,"tink.core._Error.Stack_Impl_.toString","tink/core/Error.hx",189,0xd3f844e9)
namespace tink{
namespace core{
namespace _Error{

void Stack_Impl__obj::__construct() { }

Dynamic Stack_Impl__obj::__CreateEmpty() { return new Stack_Impl__obj; }

void *Stack_Impl__obj::_hx_vtable = 0;

Dynamic Stack_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stack_Impl__obj > _hx_result = new Stack_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stack_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x766e32ce;
}

::String Stack_Impl__obj::toString(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_d4641c6e4f5154ac_189_toString)
HXDLIN( 189)		return HX_("Error stack not available. Compile with -D error_stack.",37,ac,bf,c0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stack_Impl__obj,toString,return )


Stack_Impl__obj::Stack_Impl__obj()
{
}

bool Stack_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Stack_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Stack_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Stack_Impl__obj::__mClass;

static ::String Stack_Impl__obj_sStaticFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Stack_Impl__obj::__register()
{
	Stack_Impl__obj _hx_dummy;
	Stack_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Error.Stack_Impl_",f6,46,28,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stack_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stack_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Stack_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stack_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stack_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Error
