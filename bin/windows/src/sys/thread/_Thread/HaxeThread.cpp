#include <hxcpp.h>

#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f636ea23ce47cfc_171_new,"sys.thread._Thread.HaxeThread","new",0x28e1daea,"sys.thread._Thread.HaxeThread.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/thread/Thread.hx",171,0x5ec2eeb7)
HX_LOCAL_STACK_FRAME(_hx_pos_a4cd9bf3b59d48f4_79___init__,"::sys::thread::_Thread::HaxeThread_obj","__init__",0x85b0f2c4,"::sys::thread::_Thread::HaxeThread_obj.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/thread/Thread.hx",79,0x5ec2eeb7)
HX_LOCAL_STACK_FRAME(_hx_pos_5f636ea23ce47cfc_91_current,"sys.thread._Thread.HaxeThread","current",0xca8ab3c3,"sys.thread._Thread.HaxeThread.current","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/thread/Thread.hx",91,0x5ec2eeb7)
namespace sys{
namespace thread{
namespace _Thread{

void HaxeThread_obj::__construct( ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_5f636ea23ce47cfc_171_new)
HXDLIN( 171)		this->handle = h;
            	}

Dynamic HaxeThread_obj::__CreateEmpty() { return new HaxeThread_obj; }

void *HaxeThread_obj::_hx_vtable = 0;

Dynamic HaxeThread_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HaxeThread_obj > _hx_result = new HaxeThread_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HaxeThread_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72cf0b82;
}

void HaxeThread_obj::__init__(){
            	HX_GC_STACKFRAME(&_hx_pos_a4cd9bf3b59d48f4_79___init__)
HXLINE(  80)		::sys::thread::_Thread::HaxeThread_obj::threads = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  81)		::sys::thread::_Thread::HaxeThread_obj::threadsMutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
HXLINE(  82)		::sys::thread::_Thread::HaxeThread_obj::mainThreadHandle =  ::__hxcpp_thread_current();
HXLINE(  83)		::sys::thread::_Thread::HaxeThread_obj::mainThread =  ::sys::thread::_Thread::HaxeThread_obj::__alloc( HX_CTX , ::__hxcpp_thread_current());
HXLINE(  84)		::sys::thread::_Thread::HaxeThread_obj::mainThread->events =  ::sys::thread::EventLoop_obj::__alloc( HX_CTX );
            	}


::Array< ::Dynamic> HaxeThread_obj::threads;

 ::sys::thread::Mutex HaxeThread_obj::threadsMutex;

 ::Dynamic HaxeThread_obj::mainThreadHandle;

 ::sys::thread::_Thread::HaxeThread HaxeThread_obj::mainThread;

 ::sys::thread::_Thread::HaxeThread HaxeThread_obj::current(){
            	HX_GC_STACKFRAME(&_hx_pos_5f636ea23ce47cfc_91_current)
HXLINE(  92)		 ::Dynamic handle =  ::__hxcpp_thread_current();
HXLINE(  93)		if (::hx::IsEq( handle,::sys::thread::_Thread::HaxeThread_obj::mainThreadHandle )) {
HXLINE(  94)			return ::sys::thread::_Thread::HaxeThread_obj::mainThread;
            		}
HXLINE(  96)		::sys::thread::_Thread::HaxeThread_obj::threadsMutex->acquire();
HXLINE(  97)		 ::sys::thread::_Thread::HaxeThread thread = null();
HXLINE(  98)		{
HXLINE(  98)			int _g = 0;
HXDLIN(  98)			::Array< ::Dynamic> _g1 = ::sys::thread::_Thread::HaxeThread_obj::threads;
HXDLIN(  98)			while((_g < _g1->length)){
HXLINE(  98)				 ::Dynamic item = _g1->__get(_g);
HXDLIN(  98)				_g = (_g + 1);
HXLINE(  99)				if (::hx::IsEq( item->__Field(HX_("handle",a8,83,fd,b7),::hx::paccDynamic),handle )) {
HXLINE( 100)					thread = ( ( ::sys::thread::_Thread::HaxeThread)(item->__Field(HX_("thread",ca,7a,b9,8e),::hx::paccDynamic)) );
HXLINE( 101)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 104)		if (::hx::IsNull( thread )) {
HXLINE( 105)			thread =  ::sys::thread::_Thread::HaxeThread_obj::__alloc( HX_CTX ,handle);
HXLINE( 106)			::sys::thread::_Thread::HaxeThread_obj::threads->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("thread",ca,7a,b9,8e),thread)
            				->setFixed(1,HX_("handle",a8,83,fd,b7),handle)));
            		}
HXLINE( 108)		::sys::thread::_Thread::HaxeThread_obj::threadsMutex->release();
HXLINE( 109)		return thread;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HaxeThread_obj,current,return )


::hx::ObjectPtr< HaxeThread_obj > HaxeThread_obj::__new( ::Dynamic h) {
	::hx::ObjectPtr< HaxeThread_obj > __this = new HaxeThread_obj();
	__this->__construct(h);
	return __this;
}

::hx::ObjectPtr< HaxeThread_obj > HaxeThread_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic h) {
	HaxeThread_obj *__this = (HaxeThread_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HaxeThread_obj), true, "sys.thread._Thread.HaxeThread"));
	*(void **)__this = HaxeThread_obj::_hx_vtable;
	__this->__construct(h);
	return __this;
}

HaxeThread_obj::HaxeThread_obj()
{
}

void HaxeThread_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxeThread);
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void HaxeThread_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

::hx::Val HaxeThread_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HaxeThread_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { outValue = ( threads ); return true; }
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { outValue = ( mainThread ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"threadsMutex") ) { outValue = ( threadsMutex ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mainThreadHandle") ) { outValue = ( mainThreadHandle ); return true; }
	}
	return false;
}

::hx::Val HaxeThread_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast<  ::sys::thread::EventLoop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HaxeThread_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { threads=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=ioValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"threadsMutex") ) { threadsMutex=ioValue.Cast<  ::sys::thread::Mutex >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mainThreadHandle") ) { mainThreadHandle=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void HaxeThread_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("handle",a8,83,fd,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HaxeThread_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::EventLoop */ ,(int)offsetof(HaxeThread_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HaxeThread_obj,handle),HX_("handle",a8,83,fd,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HaxeThread_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &HaxeThread_obj::threads,HX_("threads",69,f6,91,53)},
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(void *) &HaxeThread_obj::threadsMutex,HX_("threadsMutex",56,2c,94,88)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &HaxeThread_obj::mainThreadHandle,HX_("mainThreadHandle",eb,1b,4b,b3)},
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(void *) &HaxeThread_obj::mainThread,HX_("mainThread",e3,97,65,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HaxeThread_obj_sMemberFields[] = {
	HX_("events",19,4f,6a,96),
	HX_("handle",a8,83,fd,b7),
	::String(null()) };

static void HaxeThread_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeThread_obj::threads,"threads");
	HX_MARK_MEMBER_NAME(HaxeThread_obj::threadsMutex,"threadsMutex");
	HX_MARK_MEMBER_NAME(HaxeThread_obj::mainThreadHandle,"mainThreadHandle");
	HX_MARK_MEMBER_NAME(HaxeThread_obj::mainThread,"mainThread");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HaxeThread_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeThread_obj::threads,"threads");
	HX_VISIT_MEMBER_NAME(HaxeThread_obj::threadsMutex,"threadsMutex");
	HX_VISIT_MEMBER_NAME(HaxeThread_obj::mainThreadHandle,"mainThreadHandle");
	HX_VISIT_MEMBER_NAME(HaxeThread_obj::mainThread,"mainThread");
};

#endif

::hx::Class HaxeThread_obj::__mClass;

static ::String HaxeThread_obj_sStaticFields[] = {
	HX_("threads",69,f6,91,53),
	HX_("threadsMutex",56,2c,94,88),
	HX_("mainThreadHandle",eb,1b,4b,b3),
	HX_("mainThread",e3,97,65,e4),
	HX_("current",39,9c,e3,cb),
	::String(null())
};

void HaxeThread_obj::__register()
{
	HaxeThread_obj _hx_dummy;
	HaxeThread_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread._Thread.HaxeThread",f8,dd,13,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HaxeThread_obj::__GetStatic;
	__mClass->mSetStaticField = &HaxeThread_obj::__SetStatic;
	__mClass->mMarkFunc = HaxeThread_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HaxeThread_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HaxeThread_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HaxeThread_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HaxeThread_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxeThread_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxeThread_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HaxeThread_obj::__boot()
{
}

} // end namespace sys
} // end namespace thread
} // end namespace _Thread
