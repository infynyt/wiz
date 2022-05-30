#include <hxcpp.h>

#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_io_SimpleBytewiseParser
#include <tink/io/SimpleBytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7bf465eb2d4e9703_152_new,"tink.io.SimpleBytewiseParser","new",0x07ccad9b,"tink.io.SimpleBytewiseParser.new","tink/io/StreamParser.hx",152,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf465eb2d4e9703_155_read,"tink.io.SimpleBytewiseParser","read",0xcdf001bb,"tink.io.SimpleBytewiseParser.read","tink/io/StreamParser.hx",155,0xd33f9d53)
namespace tink{
namespace io{

void SimpleBytewiseParser_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_7bf465eb2d4e9703_152_new)
HXDLIN( 152)		this->_read = f;
            	}

Dynamic SimpleBytewiseParser_obj::__CreateEmpty() { return new SimpleBytewiseParser_obj; }

void *SimpleBytewiseParser_obj::_hx_vtable = 0;

Dynamic SimpleBytewiseParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleBytewiseParser_obj > _hx_result = new SimpleBytewiseParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SimpleBytewiseParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x66915863) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x66915863;
	} else {
		return inClassId==(int)0x741c9e35;
	}
}

 ::tink::io::ParseStep SimpleBytewiseParser_obj::read(int _hx_char){
            	HX_STACKFRAME(&_hx_pos_7bf465eb2d4e9703_155_read)
HXDLIN( 155)		return this->_read(_hx_char);
            	}



::hx::ObjectPtr< SimpleBytewiseParser_obj > SimpleBytewiseParser_obj::__new( ::Dynamic f) {
	::hx::ObjectPtr< SimpleBytewiseParser_obj > __this = new SimpleBytewiseParser_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< SimpleBytewiseParser_obj > SimpleBytewiseParser_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f) {
	SimpleBytewiseParser_obj *__this = (SimpleBytewiseParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleBytewiseParser_obj), true, "tink.io.SimpleBytewiseParser"));
	*(void **)__this = SimpleBytewiseParser_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

SimpleBytewiseParser_obj::SimpleBytewiseParser_obj()
{
}

void SimpleBytewiseParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleBytewiseParser);
	HX_MARK_MEMBER_NAME(_read,"_read");
	HX_MARK_END_CLASS();
}

void SimpleBytewiseParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_read,"_read");
}

::hx::Val SimpleBytewiseParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_read") ) { return ::hx::Val( _read ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SimpleBytewiseParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_read") ) { _read=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleBytewiseParser_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SimpleBytewiseParser_obj,_read),HX_("_read",35,67,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SimpleBytewiseParser_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleBytewiseParser_obj_sMemberFields[] = {
	HX_("_read",35,67,b8,fe),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class SimpleBytewiseParser_obj::__mClass;

void SimpleBytewiseParser_obj::__register()
{
	SimpleBytewiseParser_obj _hx_dummy;
	SimpleBytewiseParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.SimpleBytewiseParser",29,44,b1,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleBytewiseParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleBytewiseParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleBytewiseParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleBytewiseParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
