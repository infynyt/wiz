#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
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
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b8a55a11cc272be0_139_new,"tink.core._Callback.ListCell","new",0x4026bf4f,"tink.core._Callback.ListCell.new","tink/core/Callback.hx",139,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_b8a55a11cc272be0_146_invoke,"tink.core._Callback.ListCell","invoke",0x7e1047e9,"tink.core._Callback.ListCell.invoke","tink/core/Callback.hx",146,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_b8a55a11cc272be0_149_clear,"tink.core._Callback.ListCell","clear",0x55fb3a3c,"tink.core._Callback.ListCell.clear","tink/core/Callback.hx",149,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_b8a55a11cc272be0_155_cancel,"tink.core._Callback.ListCell","cancel",0x9663bdeb,"tink.core._Callback.ListCell.cancel","tink/core/Callback.hx",155,0x0104eb06)
namespace tink{
namespace core{
namespace _Callback{

void ListCell_obj::__construct( ::Dynamic cb, ::tink::core::CallbackList list){
            	HX_STACKFRAME(&_hx_pos_b8a55a11cc272be0_139_new)
HXLINE( 140)		if (::hx::IsNull( cb )) {
HXLINE( 140)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("callback expected but null received",8e,f5,4c,88)));
            		}
HXLINE( 141)		this->cb = cb;
HXLINE( 142)		this->list = list;
            	}

Dynamic ListCell_obj::__CreateEmpty() { return new ListCell_obj; }

void *ListCell_obj::_hx_vtable = 0;

Dynamic ListCell_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListCell_obj > _hx_result = new ListCell_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ListCell_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05a024cb;
}

static ::tink::core::LinkObject_obj _hx_tink_core__Callback_ListCell__hx_tink_core_LinkObject= {
	( void (::hx::Object::*)())&::tink::core::_Callback::ListCell_obj::cancel,
};

void *ListCell_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0d15dd4a: return &_hx_tink_core__Callback_ListCell__hx_tink_core_LinkObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ListCell_obj::invoke( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_b8a55a11cc272be0_146_invoke)
HXDLIN( 146)		if (::hx::IsNotNull( this->list )) {
HXLINE( 147)			this->cb(data);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCell_obj,invoke,(void))

void ListCell_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_b8a55a11cc272be0_149_clear)
HXLINE( 150)		this->cb = null();
HXLINE( 151)		this->list = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCell_obj,clear,(void))

void ListCell_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_b8a55a11cc272be0_155_cancel)
HXDLIN( 155)		if (::hx::IsNotNull( this->list )) {
HXLINE( 156)			 ::tink::core::CallbackList list = this->list;
HXLINE( 157)			{
HXLINE( 157)				this->cb = null();
HXDLIN( 157)				this->list = null();
            			}
HXLINE( 158)			if ((--list->used <= (list->cells->length >> 1))) {
HXLINE( 158)				list->compact();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCell_obj,cancel,(void))


::hx::ObjectPtr< ListCell_obj > ListCell_obj::__new( ::Dynamic cb, ::tink::core::CallbackList list) {
	::hx::ObjectPtr< ListCell_obj > __this = new ListCell_obj();
	__this->__construct(cb,list);
	return __this;
}

::hx::ObjectPtr< ListCell_obj > ListCell_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic cb, ::tink::core::CallbackList list) {
	ListCell_obj *__this = (ListCell_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListCell_obj), true, "tink.core._Callback.ListCell"));
	*(void **)__this = ListCell_obj::_hx_vtable;
	__this->__construct(cb,list);
	return __this;
}

ListCell_obj::ListCell_obj()
{
}

void ListCell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListCell);
	HX_MARK_MEMBER_NAME(cb,"cb");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void ListCell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cb,"cb");
	HX_VISIT_MEMBER_NAME(list,"list");
}

::hx::Val ListCell_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cb") ) { return ::hx::Val( cb ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { return ::hx::Val( invoke_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListCell_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cb") ) { cb=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast<  ::tink::core::CallbackList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListCell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListCell_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ListCell_obj,cb),HX_("cb",9f,56,00,00)},
	{::hx::fsObject /*  ::tink::core::CallbackList */ ,(int)offsetof(ListCell_obj,list),HX_("list",5e,1c,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListCell_obj_sStaticStorageInfo = 0;
#endif

static ::String ListCell_obj_sMemberFields[] = {
	HX_("cb",9f,56,00,00),
	HX_("list",5e,1c,b3,47),
	HX_("invoke",78,77,e0,9f),
	HX_("clear",8d,71,5b,48),
	HX_("cancel",7a,ed,33,b8),
	::String(null()) };

::hx::Class ListCell_obj::__mClass;

void ListCell_obj::__register()
{
	ListCell_obj _hx_dummy;
	ListCell_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Callback.ListCell",dd,6b,4b,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListCell_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListCell_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListCell_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListCell_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Callback
