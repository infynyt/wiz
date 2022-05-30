#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
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
#ifndef INCLUDED_tink_core__Future_SyncFuture
#include <tink/core/_Future/SyncFuture.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_49_new,"tink.core.TypedError","new",0x4984b7c3,"tink.core.TypedError.new","tink/core/Error.hx",49,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_66_printPos,"tink.core.TypedError","printPos",0x9795c924,"tink.core.TypedError.printPos","tink/core/Error.hx",66,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_75_toString,"tink.core.TypedError","toString",0xa6ed4269,"tink.core.TypedError.toString","tink/core/Error.hx",75,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_85_toPromise,"tink.core.TypedError","toPromise",0x67a31903,"tink.core.TypedError.toPromise","tink/core/Error.hx",85,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_88_throwSelf,"tink.core.TypedError","throwSelf",0xb40bb375,"tink.core.TypedError.throwSelf","tink/core/Error.hx",88,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_100_withData,"tink.core.TypedError","withData",0x838de50d,"tink.core.TypedError.withData","tink/core/Error.hx",100,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_103_typed,"tink.core.TypedError","typed",0xbf8f368d,"tink.core.TypedError.typed","tink/core/Error.hx",103,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_120_asError,"tink.core.TypedError","asError",0xf4df8e59,"tink.core.TypedError.asError","tink/core/Error.hx",120,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_130_catchExceptions,"tink.core.TypedError","catchExceptions",0xd35c5d42,"tink.core.TypedError.catchExceptions","tink/core/Error.hx",130,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_148_reporter,"tink.core.TypedError","reporter",0x4c129bde,"tink.core.TypedError.reporter","tink/core/Error.hx",148,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_147_reporter,"tink.core.TypedError","reporter",0x4c129bde,"tink.core.TypedError.reporter","tink/core/Error.hx",147,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_150_rethrow,"tink.core.TypedError","rethrow",0x28068576,"tink.core.TypedError.rethrow","tink/core/Error.hx",150,0xd3f844e9)
HX_LOCAL_STACK_FRAME(_hx_pos_bdf6d47d1422c74a_172_tryFinally,"tink.core.TypedError","tryFinally",0xeb3e4e85,"tink.core.TypedError.tryFinally","tink/core/Error.hx",172,0xd3f844e9)
namespace tink{
namespace core{

void TypedError_obj::__construct( ::Dynamic __o_code,::String message, ::Dynamic pos){
            		 ::Dynamic code = __o_code;
            		if (::hx::IsNull(__o_code)) code = 500;
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_49_new)
HXLINE(  56)		this->isTinkError = true;
HXLINE(  59)		this->code = ( (int)(code) );
HXLINE(  60)		this->message = message;
HXLINE(  61)		this->pos = pos;
HXLINE(  62)		this->exceptionStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  63)		this->callStack = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic TypedError_obj::__CreateEmpty() { return new TypedError_obj; }

void *TypedError_obj::_hx_vtable = 0;

Dynamic TypedError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypedError_obj > _hx_result = new TypedError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TypedError_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07b6f513;
}

::String TypedError_obj::printPos(){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_66_printPos)
HXDLIN(  66)		return ( (::String)(((((this->pos->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic) + HX_(".",2e,00,00,00)) + this->pos->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic)) + HX_(":",3a,00,00,00)) + this->pos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedError_obj,printPos,return )

::String TypedError_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_75_toString)
HXLINE(  76)		::String ret = (((HX_("Error#",7b,f7,fc,85) + this->code) + HX_(": ",a6,32,00,00)) + this->message);
HXLINE(  78)		if (::hx::IsNotNull( this->pos )) {
HXLINE(  79)			ret = (ret + (HX_(" @ ",00,80,18,00) + this->printPos()));
            		}
HXLINE(  81)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedError_obj,toString,return )

::Dynamic TypedError_obj::toPromise(){
            	HX_GC_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_85_toPromise)
HXDLIN(  85)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(::hx::ObjectPtr<OBJ_>(this))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedError_obj,toPromise,return )

 ::Dynamic TypedError_obj::throwSelf(){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_88_throwSelf)
HXLINE(  96)		 ::Dynamic any = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  96)		HX_STACK_DO_RETHROW(any);
HXDLIN(  96)		return any;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedError_obj,throwSelf,return )

 ::tink::core::TypedError TypedError_obj::withData( ::Dynamic code,::String message, ::Dynamic data, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_100_withData)
HXDLIN( 100)		return ::tink::core::TypedError_obj::typed(code,message,data,pos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TypedError_obj,withData,return )

 ::tink::core::TypedError TypedError_obj::typed( ::Dynamic code,::String message, ::Dynamic data, ::Dynamic pos){
            	HX_GC_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_103_typed)
HXLINE( 104)		 ::tink::core::TypedError ret =  ::tink::core::TypedError_obj::__alloc( HX_CTX ,code,message,pos);
HXLINE( 105)		ret->data = data;
HXLINE( 106)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TypedError_obj,typed,return )

 ::tink::core::TypedError TypedError_obj::asError( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_120_asError)
HXDLIN( 120)		return ( ( ::tink::core::TypedError)(::Std_obj::downcast(v,::hx::ClassOf< ::tink::core::TypedError >())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedError_obj,asError,return )

 ::tink::core::Outcome TypedError_obj::catchExceptions( ::Dynamic f, ::Dynamic report, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_130_catchExceptions)
HXDLIN( 130)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 131)			return ::tink::core::Outcome_obj::Success(f());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 132)				{
HXLINE( 132)					null();
            				}
HXDLIN( 132)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 133)				 ::tink::core::TypedError e1 = ::tink::core::TypedError_obj::asError(e);
HXLINE( 135)				 ::tink::core::TypedError _hx_tmp;
HXDLIN( 135)				if (::hx::IsNull( e1 )) {
HXLINE( 137)					if (::hx::IsNull( report )) {
HXLINE( 135)						_hx_tmp = ::tink::core::TypedError_obj::withData(null(),HX_("Unexpected Error",39,6c,75,d6),e1,pos);
            					}
            					else {
HXLINE( 135)						_hx_tmp = ( ( ::tink::core::TypedError)(report(e1)) );
            					}
            				}
            				else {
HXLINE( 141)					 ::tink::core::TypedError e = e1;
HXLINE( 135)					_hx_tmp = e;
            				}
HXLINE( 134)				return ::tink::core::Outcome_obj::Failure(_hx_tmp);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 130)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedError_obj,catchExceptions,return )

 ::Dynamic TypedError_obj::reporter( ::Dynamic code,::String message, ::Dynamic pos){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,message, ::Dynamic,code, ::Dynamic,pos) HXARGC(1)
            		 ::tink::core::TypedError _hx_run( ::Dynamic e){
            			HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_148_reporter)
HXLINE( 148)			return ::tink::core::TypedError_obj::withData(code,message,e,pos);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_147_reporter)
HXDLIN( 147)		return  ::Dynamic(new _hx_Closure_0(message,code,pos));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedError_obj,reporter,return )

 ::Dynamic TypedError_obj::rethrow( ::Dynamic any){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_150_rethrow)
HXLINE( 156)		HX_STACK_DO_RETHROW(any);
HXLINE( 160)		return any;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedError_obj,rethrow,return )

 ::Dynamic TypedError_obj::tryFinally( ::Dynamic f, ::Dynamic cleanup){
            	HX_STACKFRAME(&_hx_pos_bdf6d47d1422c74a_172_tryFinally)
HXDLIN( 172)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 173)			 ::Dynamic ret = f();
HXLINE( 174)			cleanup();
HXLINE( 175)			return ret;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 177)				{
HXLINE( 177)					null();
            				}
HXDLIN( 177)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 178)				cleanup();
HXLINE( 179)				HX_STACK_DO_RETHROW(e);
HXDLIN( 179)				return e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 172)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedError_obj,tryFinally,return )


::hx::ObjectPtr< TypedError_obj > TypedError_obj::__new( ::Dynamic __o_code,::String message, ::Dynamic pos) {
	::hx::ObjectPtr< TypedError_obj > __this = new TypedError_obj();
	__this->__construct(__o_code,message,pos);
	return __this;
}

::hx::ObjectPtr< TypedError_obj > TypedError_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_code,::String message, ::Dynamic pos) {
	TypedError_obj *__this = (TypedError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypedError_obj), true, "tink.core.TypedError"));
	*(void **)__this = TypedError_obj::_hx_vtable;
	__this->__construct(__o_code,message,pos);
	return __this;
}

TypedError_obj::TypedError_obj()
{
}

void TypedError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypedError);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(callStack,"callStack");
	HX_MARK_MEMBER_NAME(exceptionStack,"exceptionStack");
	HX_MARK_MEMBER_NAME(isTinkError,"isTinkError");
	HX_MARK_END_CLASS();
}

void TypedError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(callStack,"callStack");
	HX_VISIT_MEMBER_NAME(exceptionStack,"exceptionStack");
	HX_VISIT_MEMBER_NAME(isTinkError,"isTinkError");
}

::hx::Val TypedError_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return ::hx::Val( code ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return ::hx::Val( message ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"printPos") ) { return ::hx::Val( printPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { return ::hx::Val( callStack ); }
		if (HX_FIELD_EQ(inName,"toPromise") ) { return ::hx::Val( toPromise_dyn() ); }
		if (HX_FIELD_EQ(inName,"throwSelf") ) { return ::hx::Val( throwSelf_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isTinkError") ) { return ::hx::Val( isTinkError ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { return ::hx::Val( exceptionStack ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TypedError_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"typed") ) { outValue = typed_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"asError") ) { outValue = asError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rethrow") ) { outValue = rethrow_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"withData") ) { outValue = withData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reporter") ) { outValue = reporter_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tryFinally") ) { outValue = tryFinally_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"catchExceptions") ) { outValue = catchExceptions_dyn(); return true; }
	}
	return false;
}

::hx::Val TypedError_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { callStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isTinkError") ) { isTinkError=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { exceptionStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TypedError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("code",2d,b1,c4,41));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("callStack",ca,c1,4a,10));
	outFields->push(HX_("exceptionStack",79,48,56,0b));
	outFields->push(HX_("isTinkError",2c,f8,54,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TypedError_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TypedError_obj,message),HX_("message",c7,35,11,9a)},
	{::hx::fsInt,(int)offsetof(TypedError_obj,code),HX_("code",2d,b1,c4,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TypedError_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TypedError_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TypedError_obj,callStack),HX_("callStack",ca,c1,4a,10)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TypedError_obj,exceptionStack),HX_("exceptionStack",79,48,56,0b)},
	{::hx::fsBool,(int)offsetof(TypedError_obj,isTinkError),HX_("isTinkError",2c,f8,54,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TypedError_obj_sStaticStorageInfo = 0;
#endif

static ::String TypedError_obj_sMemberFields[] = {
	HX_("message",c7,35,11,9a),
	HX_("code",2d,b1,c4,41),
	HX_("data",2a,56,63,42),
	HX_("pos",94,5d,55,00),
	HX_("callStack",ca,c1,4a,10),
	HX_("exceptionStack",79,48,56,0b),
	HX_("isTinkError",2c,f8,54,96),
	HX_("printPos",67,57,17,29),
	HX_("toString",ac,d0,6e,38),
	HX_("toPromise",60,05,7e,27),
	HX_("throwSelf",d2,9f,e6,73),
	::String(null()) };

::hx::Class TypedError_obj::__mClass;

static ::String TypedError_obj_sStaticFields[] = {
	HX_("withData",50,73,0f,15),
	HX_("typed",6a,70,cb,1a),
	HX_("asError",76,b9,03,c3),
	HX_("catchExceptions",5f,6d,7c,d7),
	HX_("reporter",21,2a,94,dd),
	HX_("rethrow",93,b0,2a,f6),
	HX_("tryFinally",88,33,f2,0a),
	::String(null())
};

void TypedError_obj::__register()
{
	TypedError_obj _hx_dummy;
	TypedError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.TypedError",51,1a,bf,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypedError_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TypedError_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TypedError_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TypedError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypedError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypedError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
