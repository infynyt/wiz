#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_tink_http_ContentType
#include <tink/http/ContentType.h>
#endif
#ifndef INCLUDED_tink_http__Header_HeaderValue_Impl_
#include <tink/http/_Header/HeaderValue_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5315a3ae75e09cad_29_new,"tink.http.ContentType","new",0x4afa26fb,"tink.http.ContentType.new","tink/http/Header.hx",29,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_5315a3ae75e09cad_32_get_fullType,"tink.http.ContentType","get_fullType",0xb82badf7,"tink.http.ContentType.get_fullType","tink/http/Header.hx",32,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_5315a3ae75e09cad_44_toString,"tink.http.ContentType","toString",0x3e61a831,"tink.http.ContentType.toString","tink/http/Header.hx",44,0xf5720e67)
HX_LOCAL_STACK_FRAME(_hx_pos_5315a3ae75e09cad_46_ofString,"tink.http.ContentType","ofString",0xaa2440cd,"tink.http.ContentType.ofString","tink/http/Header.hx",46,0xf5720e67)
namespace tink{
namespace http{

void ContentType_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5315a3ae75e09cad_29_new)
HXLINE(  35)		this->subtype = HX_("*",2a,00,00,00);
HXLINE(  34)		this->type = HX_("*",2a,00,00,00);
HXLINE(  40)		this->extensions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ContentType_obj::__CreateEmpty() { return new ContentType_obj; }

void *ContentType_obj::_hx_vtable = 0;

Dynamic ContentType_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ContentType_obj > _hx_result = new ContentType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ContentType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67f0ac31;
}

::String ContentType_obj::get_fullType(){
            	HX_STACKFRAME(&_hx_pos_5315a3ae75e09cad_32_get_fullType)
HXDLIN(  32)		return (((HX_("",00,00,00,00) + this->type) + HX_("/",2f,00,00,00)) + this->subtype);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ContentType_obj,get_fullType,return )

::String ContentType_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5315a3ae75e09cad_44_toString)
HXDLIN(  44)		return this->raw;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ContentType_obj,toString,return )

 ::tink::http::ContentType ContentType_obj::ofString(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_5315a3ae75e09cad_46_ofString)
HXLINE(  47)		 ::tink::http::ContentType ret =  ::tink::http::ContentType_obj::__alloc( HX_CTX );
HXLINE(  49)		ret->raw = s;
HXLINE(  50)		::Array< ::Dynamic> parsed = ::tink::http::_Header::HeaderValue_Impl__obj::parse(s);
HXLINE(  51)		::String value = ( (::String)(parsed->__get(0)->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
HXLINE(  52)		{
HXLINE(  52)			int _g = value.indexOf(HX_("/",2f,00,00,00),null());
HXDLIN(  52)			if ((_g == -1)) {
HXLINE(  54)				ret->type = value;
            			}
            			else {
HXLINE(  55)				int pos = _g;
HXDLIN(  55)				{
HXLINE(  56)					ret->type = value.substring(0,pos);
HXLINE(  57)					ret->subtype = value.substring((pos + 1),null());
            				}
            			}
            		}
HXLINE(  59)		ret->extensions = ( ( ::haxe::ds::StringMap)(parsed->__get(0)->__Field(HX_("extensions",14,7c,70,89),::hx::paccDynamic)) );
HXLINE(  61)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContentType_obj,ofString,return )


::hx::ObjectPtr< ContentType_obj > ContentType_obj::__new() {
	::hx::ObjectPtr< ContentType_obj > __this = new ContentType_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ContentType_obj > ContentType_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ContentType_obj *__this = (ContentType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ContentType_obj), true, "tink.http.ContentType"));
	*(void **)__this = ContentType_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ContentType_obj::ContentType_obj()
{
}

void ContentType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContentType);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(subtype,"subtype");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_MEMBER_NAME(raw,"raw");
	HX_MARK_END_CLASS();
}

void ContentType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(subtype,"subtype");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
	HX_VISIT_MEMBER_NAME(raw,"raw");
}

::hx::Val ContentType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { return ::hx::Val( raw ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subtype") ) { return ::hx::Val( subtype ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fullType() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return ::hx::Val( extensions ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_fullType") ) { return ::hx::Val( get_fullType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ContentType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

::hx::Val ContentType_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { raw=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subtype") ) { subtype=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ContentType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fullType",e9,7b,1c,61));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("subtype",3a,5c,33,30));
	outFields->push(HX_("extensions",14,7c,70,89));
	outFields->push(HX_("raw",e8,d5,56,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ContentType_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ContentType_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsString,(int)offsetof(ContentType_obj,subtype),HX_("subtype",3a,5c,33,30)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ContentType_obj,extensions),HX_("extensions",14,7c,70,89)},
	{::hx::fsString,(int)offsetof(ContentType_obj,raw),HX_("raw",e8,d5,56,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ContentType_obj_sStaticStorageInfo = 0;
#endif

static ::String ContentType_obj_sMemberFields[] = {
	HX_("get_fullType",f2,2f,36,16),
	HX_("type",ba,f2,08,4d),
	HX_("subtype",3a,5c,33,30),
	HX_("extensions",14,7c,70,89),
	HX_("raw",e8,d5,56,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class ContentType_obj::__mClass;

static ::String ContentType_obj_sStaticFields[] = {
	HX_("ofString",48,69,31,a4),
	::String(null())
};

void ContentType_obj::__register()
{
	ContentType_obj _hx_dummy;
	ContentType_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.ContentType",89,8d,8e,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ContentType_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ContentType_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ContentType_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ContentType_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContentType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContentType_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
