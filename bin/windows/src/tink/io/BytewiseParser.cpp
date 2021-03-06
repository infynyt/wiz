#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f9fadd8140ce392f_161_read,"tink.io.BytewiseParser","read",0xf60fafcd,"tink.io.BytewiseParser.read","tink/io/StreamParser.hx",161,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_f9fadd8140ce392f_164_progress,"tink.io.BytewiseParser","progress",0x1b4463a4,"tink.io.BytewiseParser.progress","tink/io/StreamParser.hx",164,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_f9fadd8140ce392f_179_eof,"tink.io.BytewiseParser","eof",0xfc791c25,"tink.io.BytewiseParser.eof","tink/io/StreamParser.hx",179,0xd33f9d53)
namespace tink{
namespace io{

void BytewiseParser_obj::__construct() { }

Dynamic BytewiseParser_obj::__CreateEmpty() { return new BytewiseParser_obj; }

void *BytewiseParser_obj::_hx_vtable = 0;

Dynamic BytewiseParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BytewiseParser_obj > _hx_result = new BytewiseParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytewiseParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66915863;
}

static ::tink::io::StreamParserObject_obj _hx_tink_io_BytewiseParser__hx_tink_io_StreamParserObject= {
	(  ::tink::io::ParseStep (::hx::Object::*)( ::tink::chunk::ChunkCursor))&::tink::io::BytewiseParser_obj::progress,
	(  ::tink::core::Outcome (::hx::Object::*)( ::tink::chunk::ChunkCursor))&::tink::io::BytewiseParser_obj::eof,
};

void *BytewiseParser_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x048ef116: return &_hx_tink_io_BytewiseParser__hx_tink_io_StreamParserObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::tink::io::ParseStep BytewiseParser_obj::read(int _hx_char){
            	HX_STACKFRAME(&_hx_pos_f9fadd8140ce392f_161_read)
HXDLIN( 161)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("abstract",e2,c0,7e,a8)));
HXDLIN( 161)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytewiseParser_obj,read,return )

 ::tink::io::ParseStep BytewiseParser_obj::progress( ::tink::chunk::ChunkCursor cursor){
            	HX_STACKFRAME(&_hx_pos_f9fadd8140ce392f_164_progress)
HXLINE( 166)		while(true){
HXLINE( 166)			{
HXLINE( 166)				 ::tink::io::ParseStep _g = this->read(cursor->currentByte);
HXDLIN( 166)				switch((int)(_g->_hx_getIndex())){
            					case (int)0: {
            					}
            					break;
            					case (int)1: {
HXLINE( 168)						 ::Dynamic r = _g->_hx_getObject(0);
HXLINE( 169)						cursor->next();
HXLINE( 170)						return ::tink::io::ParseStep_obj::Done(r);
            					}
            					break;
            					case (int)2: {
HXLINE( 171)						 ::tink::core::TypedError e = _g->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXLINE( 172)						return ::tink::io::ParseStep_obj::Failed(e);
            					}
            					break;
            				}
            			}
HXLINE( 166)			if (!(cursor->next())) {
HXLINE( 166)				goto _hx_goto_1;
            			}
            		}
            		_hx_goto_1:;
HXLINE( 175)		return ::tink::io::ParseStep_obj::Progressed_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytewiseParser_obj,progress,return )

 ::tink::core::Outcome BytewiseParser_obj::eof( ::tink::chunk::ChunkCursor rest){
            	HX_GC_STACKFRAME(&_hx_pos_f9fadd8140ce392f_179_eof)
HXDLIN( 179)		 ::tink::io::ParseStep _g = this->read(-1);
HXDLIN( 179)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 180)				return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,HX_("Unexpected end of input",b5,d8,ec,1d),::hx::SourceInfo(HX_("tink/io/StreamParser.hx",53,9d,3f,d3),180,HX_("tink.io.BytewiseParser",57,4f,14,84),HX_("eof",bc,04,4d,00))));
            			}
            			break;
            			case (int)1: {
HXLINE( 181)				 ::Dynamic r = _g->_hx_getObject(0);
HXDLIN( 181)				return ::tink::core::Outcome_obj::Success(r);
            			}
            			break;
            			case (int)2: {
HXLINE( 182)				 ::tink::core::TypedError e = _g->_hx_getObject(0).StaticCast<  ::tink::core::TypedError >();
HXDLIN( 182)				return ::tink::core::Outcome_obj::Failure(e);
            			}
            			break;
            		}
HXLINE( 179)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytewiseParser_obj,eof,return )


BytewiseParser_obj::BytewiseParser_obj()
{
}

::hx::Val BytewiseParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return ::hx::Val( eof_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BytewiseParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BytewiseParser_obj_sStaticStorageInfo = 0;
#endif

static ::String BytewiseParser_obj_sMemberFields[] = {
	HX_("read",56,4b,a7,4b),
	HX_("progress",ad,f7,2a,86),
	HX_("eof",bc,04,4d,00),
	::String(null()) };

::hx::Class BytewiseParser_obj::__mClass;

void BytewiseParser_obj::__register()
{
	BytewiseParser_obj _hx_dummy;
	BytewiseParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.BytewiseParser",57,4f,14,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BytewiseParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BytewiseParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytewiseParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytewiseParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
