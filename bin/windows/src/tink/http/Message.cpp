#include <hxcpp.h>

#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bcbf082f6c47a594_8_new,"tink.http.Message","new",0x27dc172f,"tink.http.Message.new","tink/http/Message.hx",8,0x3a75b781)
namespace tink{
namespace http{

void Message_obj::__construct( ::Dynamic header, ::Dynamic body){
            	HX_STACKFRAME(&_hx_pos_bcbf082f6c47a594_8_new)
HXLINE(   9)		this->header = header;
HXLINE(  10)		this->body = body;
            	}

Dynamic Message_obj::__CreateEmpty() { return new Message_obj; }

void *Message_obj::_hx_vtable = 0;

Dynamic Message_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Message_obj > _hx_result = new Message_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Message_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7888e42d;
}


Message_obj::Message_obj()
{
}

void Message_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Message);
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_END_CLASS();
}

void Message_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(body,"body");
}

::hx::Val Message_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return ::hx::Val( body ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return ::hx::Val( header ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Message_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Message_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("header",8d,09,00,fd));
	outFields->push(HX_("body",a2,7a,1b,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Message_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Message_obj,header),HX_("header",8d,09,00,fd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Message_obj,body),HX_("body",a2,7a,1b,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Message_obj_sStaticStorageInfo = 0;
#endif

static ::String Message_obj_sMemberFields[] = {
	HX_("header",8d,09,00,fd),
	HX_("body",a2,7a,1b,41),
	::String(null()) };

::hx::Class Message_obj::__mClass;

void Message_obj::__register()
{
	Message_obj _hx_dummy;
	Message_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.Message",bd,53,bf,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Message_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Message_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Message_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Message_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
