#include <hxcpp.h>

#ifndef INCLUDED_Console
#include <Console.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_tech_infynyt_wiz_Handler
#include <tech/infynyt/wiz/Handler.h>
#endif
#ifndef INCLUDED_tech_infynyt_wiz_Wiz
#include <tech/infynyt/wiz/Wiz.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_71c3b0d2e67bbbf9_6_main,"tech.infynyt.wiz.Wiz","main",0x7114f2ba,"tech.infynyt.wiz.Wiz.main","tech/infynyt/wiz/Wiz.hx",6,0xca64b994)
HX_LOCAL_STACK_FRAME(_hx_pos_71c3b0d2e67bbbf9_4_boot,"tech.infynyt.wiz.Wiz","boot",0x69da3eb3,"tech.infynyt.wiz.Wiz.boot","tech/infynyt/wiz/Wiz.hx",4,0xca64b994)
namespace tech{
namespace infynyt{
namespace wiz{

void Wiz_obj::__construct() { }

Dynamic Wiz_obj::__CreateEmpty() { return new Wiz_obj; }

void *Wiz_obj::_hx_vtable = 0;

Dynamic Wiz_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Wiz_obj > _hx_result = new Wiz_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Wiz_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c7ecb77;
}

::Array< ::String > Wiz_obj::args;

void Wiz_obj::main(){
            	HX_STACKFRAME(&_hx_pos_71c3b0d2e67bbbf9_6_main)
HXLINE(   7)		if ((::tech::infynyt::wiz::Wiz_obj::args->length == 0)) {
HXLINE(  35)			{
HXLINE(  35)				::String s = (::Console_obj::logPrefix + HX_("Usage: wiz (command) [args]",be,a4,85,5f));
HXDLIN(  35)				if (::hx::IsNull( s )) {
HXLINE(  35)					s = HX_("",00,00,00,00);
            				}
HXDLIN(  35)				::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            			}
HXLINE(   9)			return;
            		}
HXLINE(  12)		if ((::tech::infynyt::wiz::Wiz_obj::args->__get(0) == HX_("install",1b,d5,9a,8d))) {
HXLINE(  14)			if (::hx::IsNull( ::tech::infynyt::wiz::Wiz_obj::args->__get(1) )) {
HXLINE(  35)				{
HXLINE(  35)					::String s = (::Console_obj::logPrefix + HX_("Usage: wiz install (package)",87,db,fa,ea));
HXDLIN(  35)					if (::hx::IsNull( s )) {
HXLINE(  35)						s = HX_("",00,00,00,00);
            					}
HXDLIN(  35)					::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            				}
HXLINE(  16)				return;
            			}
            			else {
HXLINE(  18)				Float timestart = ::Date_obj::now()->getTime();
HXLINE(  35)				{
HXLINE(  35)					::String s = (::Console_obj::logPrefix + (HX_("",00,00,00,00) + (HX_("Installing package ",53,5a,3f,bb) + ::tech::infynyt::wiz::Wiz_obj::args->__get(1))));
HXDLIN(  35)					if (::hx::IsNull( s )) {
HXLINE(  35)						s = HX_("",00,00,00,00);
            					}
HXDLIN(  35)					::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            				}
HXLINE(  20)				bool success = ::tech::infynyt::wiz::Handler_obj::install(::tech::infynyt::wiz::Wiz_obj::args->__get(1));
HXLINE(  21)				Float timeend = ::Date_obj::now()->getTime();
HXLINE(  22)				if (success) {
HXLINE(  50)					::String s = (::Console_obj::successPrefix + (HX_("",00,00,00,00) + ((HX_("Installed in ",95,bf,30,cf) + ((timeend - timestart) / ( (Float)(1000) ))) + HX_(" seconds",5f,fa,db,80))));
HXDLIN(  50)					if (::hx::IsNull( s )) {
HXLINE(  50)						s = HX_("",00,00,00,00);
            					}
HXDLIN(  50)					::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            				}
            				else {
HXLINE(  45)					::String s = (::Console_obj::errorPrefix + (HX_("",00,00,00,00) + ((HX_("Failed in ",d8,cc,28,8e) + ((timeend - timestart) / ( (Float)(1000) ))) + HX_(" seconds",5f,fa,db,80))));
HXDLIN(  45)					if (::hx::IsNull( s )) {
HXLINE(  45)						s = HX_("",00,00,00,00);
            					}
HXDLIN(  45)					::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),2);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Wiz_obj,main,(void))


Wiz_obj::Wiz_obj()
{
}

bool Wiz_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = ( args ); return true; }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

bool Wiz_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { args=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Wiz_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Wiz_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Wiz_obj::args,HX_("args",5d,8d,74,40)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Wiz_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wiz_obj::args,"args");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Wiz_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wiz_obj::args,"args");
};

#endif

::hx::Class Wiz_obj::__mClass;

static ::String Wiz_obj_sStaticFields[] = {
	HX_("args",5d,8d,74,40),
	HX_("main",39,38,56,48),
	::String(null())
};

void Wiz_obj::__register()
{
	Wiz_obj _hx_dummy;
	Wiz_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tech.infynyt.wiz.Wiz",8d,b5,b1,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Wiz_obj::__GetStatic;
	__mClass->mSetStaticField = &Wiz_obj::__SetStatic;
	__mClass->mMarkFunc = Wiz_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Wiz_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Wiz_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Wiz_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Wiz_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Wiz_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Wiz_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_71c3b0d2e67bbbf9_4_boot)
HXDLIN(   4)		args = ::Sys_obj::args();
            	}
}

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz
