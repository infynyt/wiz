#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_tink_http__Header_ReadonlyMap_Impl_
#include <tink/http/_Header/ReadonlyMap_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6ee4756fb6ba4c50_14_get,"tink.http._Header.ReadonlyMap_Impl_","get",0x63b55a16,"tink.http._Header.ReadonlyMap_Impl_.get","tink/http/Header.hx",14,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_6ee4756fb6ba4c50_17_exists,"tink.http._Header.ReadonlyMap_Impl_","exists",0xc422345c,"tink.http._Header.ReadonlyMap_Impl_.exists","tink/http/Header.hx",17,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_6ee4756fb6ba4c50_20_iterator,"tink.http._Header.ReadonlyMap_Impl_","iterator",0xbd6f006e,"tink.http._Header.ReadonlyMap_Impl_.iterator","tink/http/Header.hx",20,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_6ee4756fb6ba4c50_23_keys,"tink.http._Header.ReadonlyMap_Impl_","keys",0xdd9e5874,"tink.http._Header.ReadonlyMap_Impl_.keys","tink/http/Header.hx",23,0xf5720e67)
namespace tink{
namespace http{
namespace _Header{

void ReadonlyMap_Impl__obj::__construct() { }

Dynamic ReadonlyMap_Impl__obj::__CreateEmpty() { return new ReadonlyMap_Impl__obj; }

void *ReadonlyMap_Impl__obj::_hx_vtable = 0;

Dynamic ReadonlyMap_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ReadonlyMap_Impl__obj > _hx_result = new ReadonlyMap_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ReadonlyMap_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0944d2a8;
}

 ::Dynamic ReadonlyMap_Impl__obj::get(::Dynamic this1, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_6ee4756fb6ba4c50_14_get)
HXDLIN(  14)		return ::haxe::IMap_obj::get(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ReadonlyMap_Impl__obj,get,return )

bool ReadonlyMap_Impl__obj::exists(::Dynamic this1, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_6ee4756fb6ba4c50_17_exists)
HXDLIN(  17)		return ::haxe::IMap_obj::exists(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ReadonlyMap_Impl__obj,exists,return )

 ::Dynamic ReadonlyMap_Impl__obj::iterator(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_6ee4756fb6ba4c50_20_iterator)
HXDLIN(  20)		return ::haxe::IMap_obj::iterator(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReadonlyMap_Impl__obj,iterator,return )

 ::Dynamic ReadonlyMap_Impl__obj::keys(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_6ee4756fb6ba4c50_23_keys)
HXDLIN(  23)		return ::haxe::IMap_obj::keys(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReadonlyMap_Impl__obj,keys,return )


ReadonlyMap_Impl__obj::ReadonlyMap_Impl__obj()
{
}

bool ReadonlyMap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = keys_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ReadonlyMap_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ReadonlyMap_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ReadonlyMap_Impl__obj::__mClass;

static ::String ReadonlyMap_Impl__obj_sStaticFields[] = {
	HX_("get",96,80,4e,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("iterator",ee,49,9a,93),
	HX_("keys",f4,e1,06,47),
	::String(null())
};

void ReadonlyMap_Impl__obj::__register()
{
	ReadonlyMap_Impl__obj _hx_dummy;
	ReadonlyMap_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Header.ReadonlyMap_Impl_",ee,79,70,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ReadonlyMap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ReadonlyMap_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ReadonlyMap_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReadonlyMap_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReadonlyMap_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Header
