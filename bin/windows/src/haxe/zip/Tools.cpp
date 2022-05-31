#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Tools
#include <haxe/zip/Tools.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c809b4228dfd7cab_38_uncompress,"haxe.zip.Tools","uncompress",0xdd175003,"haxe.zip.Tools.uncompress","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Tools.hx",38,0x0e1bdaa1)
namespace haxe{
namespace zip{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e588a84;
}

void Tools_obj::uncompress( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_c809b4228dfd7cab_38_uncompress)
HXLINE(  39)		if (!(( (bool)(f->__Field(HX_("compressed",81,4c,da,67),::hx::paccDynamic)) ))) {
HXLINE(  40)			return;
            		}
HXLINE(  42)		 ::haxe::zip::Uncompress c =  ::haxe::zip::Uncompress_obj::__alloc( HX_CTX ,-15);
HXLINE(  43)		 ::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(( (int)(f->__Field(HX_("fileSize",5d,89,97,65),::hx::paccDynamic)) ));
HXLINE(  44)		 ::Dynamic r = c->execute(( ( ::haxe::io::Bytes)(f->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ),0,s,0);
HXLINE(  45)		c->close();
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		bool _hx_tmp1;
HXDLIN(  46)		if (( (bool)(r->__Field(HX_("done",82,f0,6d,42),::hx::paccDynamic)) )) {
HXLINE(  46)			_hx_tmp1 = ::hx::IsNotEq( r->__Field(HX_("read",56,4b,a7,4b),::hx::paccDynamic),( ( ::haxe::io::Bytes)(f->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) )->length );
            		}
            		else {
HXLINE(  46)			_hx_tmp1 = true;
            		}
HXDLIN(  46)		if (!(_hx_tmp1)) {
HXLINE(  46)			_hx_tmp = ::hx::IsNotEq( r->__Field(HX_("write",df,6c,59,d0),::hx::paccDynamic),f->__Field(HX_("fileSize",5d,89,97,65),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((HX_("Invalid compressed data for ",37,5a,72,7b) + f->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)))));
            		}
HXLINE(  48)		f->__SetField(HX_("compressed",81,4c,da,67),false,::hx::paccDynamic);
HXLINE(  49)		f->__SetField(HX_("dataSize",0b,80,c7,8b),f->__Field(HX_("fileSize",5d,89,97,65),::hx::paccDynamic),::hx::paccDynamic);
HXLINE(  50)		f->__SetField(HX_("data",2a,56,63,42),s,::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,uncompress,(void))


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"uncompress") ) { outValue = uncompress_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("uncompress",fb,2e,83,09),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip.Tools",66,12,1e,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
