#include <hxcpp.h>

#ifndef INCLUDED_Console
#include <Console.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_tech_infynyt_wiz_Handler
#include <tech/infynyt/wiz/Handler.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_http_Fetch
#include <tink/http/Fetch.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http__Fetch_FetchResponse_Impl_
#include <tink/http/_Fetch/FetchResponse_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_13_install,"tech.infynyt.wiz.Handler","install",0xccecf15c,"tech.infynyt.wiz.Handler.install","tech/infynyt/wiz/Handler.hx",13,0x54927a32)
HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_33_uninstall,"tech.infynyt.wiz.Handler","uninstall",0xd6df4a63,"tech.infynyt.wiz.Handler.uninstall","tech/infynyt/wiz/Handler.hx",33,0x54927a32)
HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_36_fetch,"tech.infynyt.wiz.Handler","fetch",0x3260ee3b,"tech.infynyt.wiz.Handler.fetch","tech/infynyt/wiz/Handler.hx",36,0x54927a32)
HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_55_download,"tech.infynyt.wiz.Handler","download",0xba4d0827,"tech.infynyt.wiz.Handler.download","tech/infynyt/wiz/Handler.hx",55,0x54927a32)
HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_71_download,"tech.infynyt.wiz.Handler","download",0xba4d0827,"tech.infynyt.wiz.Handler.download","tech/infynyt/wiz/Handler.hx",71,0x54927a32)
HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_84_execute,"tech.infynyt.wiz.Handler","execute",0x0b5f2676,"tech.infynyt.wiz.Handler.execute","tech/infynyt/wiz/Handler.hx",84,0x54927a32)
HX_LOCAL_STACK_FRAME(_hx_pos_6afcb2a10398e146_88_clean,"tech.infynyt.wiz.Handler","clean",0x7cc24b8a,"tech.infynyt.wiz.Handler.clean","tech/infynyt/wiz/Handler.hx",88,0x54927a32)
namespace tech{
namespace infynyt{
namespace wiz{

void Handler_obj::__construct() { }

Dynamic Handler_obj::__CreateEmpty() { return new Handler_obj; }

void *Handler_obj::_hx_vtable = 0;

Dynamic Handler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Handler_obj > _hx_result = new Handler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Handler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x079238d1;
}

bool Handler_obj::install(::String name){
            	HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_13_install)
HXLINE(  35)		{
HXLINE(  35)			::String s = (::Console_obj::logPrefix + (HX_("",00,00,00,00) + (HX_("Fetching package: ",94,f6,08,57) + name)));
HXDLIN(  35)			if (::hx::IsNull( s )) {
HXLINE(  35)				s = HX_("",00,00,00,00);
            			}
HXDLIN(  35)			::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            		}
HXLINE(  16)		 ::Dynamic pkg = ::tech::infynyt::wiz::Handler_obj::fetch(name);
HXLINE(  17)		if (::hx::IsNull( pkg )) {
HXLINE(  45)			{
HXLINE(  45)				::String s = (::Console_obj::errorPrefix + (HX_("",00,00,00,00) + (HX_("Package not found: ",a1,39,ee,0a) + name)));
HXDLIN(  45)				if (::hx::IsNull( s )) {
HXLINE(  45)					s = HX_("",00,00,00,00);
            				}
HXDLIN(  45)				::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),2);
            			}
HXLINE(  19)			return false;
            		}
HXLINE(  50)		{
HXLINE(  50)			::String s1 = (::Console_obj::successPrefix + (HX_("",00,00,00,00) + (HX_("Package found: ",ae,36,99,f2) + name)));
HXDLIN(  50)			if (::hx::IsNull( s1 )) {
HXLINE(  50)				s1 = HX_("",00,00,00,00);
            			}
HXDLIN(  50)			::Console_obj::printFormatted((s1 + HX_("\n",0a,00,00,00)),0);
            		}
HXLINE(  35)		{
HXLINE(  35)			::String s2 = (::Console_obj::logPrefix + (HX_("",00,00,00,00) + (HX_("Downloading package: ",46,b2,f2,a2) + name)));
HXDLIN(  35)			if (::hx::IsNull( s2 )) {
HXLINE(  35)				s2 = HX_("",00,00,00,00);
            			}
HXDLIN(  35)			::Console_obj::printFormatted((s2 + HX_("\n",0a,00,00,00)),0);
            		}
HXLINE(  23)		 ::haxe::io::Bytes bin = ::tech::infynyt::wiz::Handler_obj::download(pkg);
HXLINE(  24)		if (::hx::IsNull( bin )) {
HXLINE(  45)			{
HXLINE(  45)				::String s = (::Console_obj::errorPrefix + (HX_("",00,00,00,00) + (HX_("Package download failed: ",01,a6,a1,29) + name)));
HXDLIN(  45)				if (::hx::IsNull( s )) {
HXLINE(  45)					s = HX_("",00,00,00,00);
            				}
HXDLIN(  45)				::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),2);
            			}
HXLINE(  26)			return false;
            		}
HXLINE(  29)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_obj,install,return )

bool Handler_obj::uninstall(::String name){
            	HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_33_uninstall)
HXDLIN(  33)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_obj,uninstall,return )

 ::Dynamic Handler_obj::fetch(::String name){
            	HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_36_fetch)
HXLINE(  37)		if ((name == HX_("test",52,c8,f9,4c))) {
HXLINE(  38)			return  ::Dynamic(::hx::Anon_obj::Create(10)
            				->setFixed(0,HX_("repository",8a,ff,66,a5),HX_("",00,00,00,00))
            				->setFixed(1,HX_("dependencies",e9,d3,48,ac),::Array_obj< ::String >::__new(0))
            				->setFixed(2,HX_("license",81,d3,48,ca),HX_("MIT",78,ad,3a,00))
            				->setFixed(3,HX_("main",39,38,56,48),HX_("Test.hx",8c,21,fb,8a))
            				->setFixed(4,HX_("name",4b,72,ff,48),HX_("test",52,c8,f9,4c))
            				->setFixed(5,HX_("description",fc,08,1d,5f),HX_("",00,00,00,00))
            				->setFixed(6,HX_("downloadUrl",c7,5c,f4,61),HX_("http://infynyt.github.io/packages/test/1.0.0/",e2,c0,10,48))
            				->setFixed(7,HX_("author",8b,ea,7b,73),HX_("SidGames5",62,6a,e6,9d))
            				->setFixed(8,HX_("version",18,e7,f1,7c),HX_("1.0.0",b5,d1,2e,55))
            				->setFixed(9,HX_("keywords",6a,c5,a0,7f),::Array_obj< ::String >::__new(0)));
            		}
HXLINE(  52)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_obj,fetch,return )

 ::haxe::io::Bytes Handler_obj::download( ::Dynamic pkg){
            	HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_55_download)
HXLINE(  56)		::Array< ::Dynamic> output = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  58)		::String binurl = ( (::String)((pkg->__Field(HX_("downloadUrl",c7,5c,f4,61),::hx::paccDynamic) + HX_("pkg.hl",26,b8,10,a8))) );
HXLINE(  71)		{
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,output) HXARGC(1)
            			void _hx_run( ::tink::core::Outcome o){
            				HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_71_download)
HXLINE(  71)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE(  72)						 ::tink::http::Message res = ( ( ::tink::http::Message)(o->_hx_getObject(0)) );
HXDLIN(  72)						{
HXLINE(  74)							 ::haxe::io::Bytes data = ::tink::chunk::ChunkObject_obj::toBytes(res->body);
HXLINE(  75)							output[0] = data;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  77)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXLINE(  45)						{
HXLINE(  45)							::String s = ::Console_obj::errorPrefix;
HXDLIN(  45)							::String s1 = (s + (HX_("",00,00,00,00) + (HX_("Http request failed: ",0c,5c,08,aa) + ::Std_obj::string(e))));
HXDLIN(  45)							if (::hx::IsNull( s1 )) {
HXLINE(  45)								s1 = HX_("",00,00,00,00);
            							}
HXDLIN(  45)							::Console_obj::printFormatted((s1 + HX_("\n",0a,00,00,00)),2);
            						}
            					}
            					break;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  71)			 ::Dynamic options = null();
HXDLIN(  71)			::tink::core::_Future::FutureObject_obj::handle(::tink::http::_Fetch::FetchResponse_Impl__obj::all(::tink::http::Fetch_obj::fetch(::tink::_Url::Url_Impl__obj::fromString(binurl),options)), ::Dynamic(new _hx_Closure_0(output)));
            		}
HXLINE(  80)		return output->__get(0).StaticCast<  ::haxe::io::Bytes >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_obj,download,return )

bool Handler_obj::execute(::String bin){
            	HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_84_execute)
HXDLIN(  84)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_obj,execute,return )

bool Handler_obj::clean(::String dir){
            	HX_STACKFRAME(&_hx_pos_6afcb2a10398e146_88_clean)
HXDLIN(  88)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Handler_obj,clean,return )


Handler_obj::Handler_obj()
{
}

bool Handler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fetch") ) { outValue = fetch_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clean") ) { outValue = clean_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"install") ) { outValue = install_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"execute") ) { outValue = execute_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"download") ) { outValue = download_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uninstall") ) { outValue = uninstall_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Handler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Handler_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Handler_obj::__mClass;

static ::String Handler_obj_sStaticFields[] = {
	HX_("install",1b,d5,9a,8d),
	HX_("uninstall",e2,db,9c,89),
	HX_("fetch",3a,14,fa,fd),
	HX_("download",88,6b,c6,91),
	HX_("execute",35,0a,0d,cc),
	HX_("clean",89,71,5b,48),
	::String(null())
};

void Handler_obj::__register()
{
	Handler_obj _hx_dummy;
	Handler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tech.infynyt.wiz.Handler",af,d3,af,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Handler_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Handler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Handler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Handler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Handler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz
