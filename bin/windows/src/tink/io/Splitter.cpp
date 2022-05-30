#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_tink__Chunk_Chunk_Impl_
#include <tink/_Chunk/Chunk_Impl_.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_io_BytewiseParser
#include <tink/io/BytewiseParser.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_io_Splitter
#include <tink/io/Splitter.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_270cc894fe4dff9e_110_new,"tink.io.Splitter","new",0x3043c1e5,"tink.io.Splitter.new","tink/io/StreamParser.hx",110,0xd33f9d53)
HX_LOCAL_STACK_FRAME(_hx_pos_270cc894fe4dff9e_116_read,"tink.io.Splitter","read",0x0daaae31,"tink.io.Splitter.read","tink/io/StreamParser.hx",116,0xd33f9d53)
namespace tink{
namespace io{

void Splitter_obj::__construct(::Dynamic delim){
            	HX_STACKFRAME(&_hx_pos_270cc894fe4dff9e_110_new)
HXLINE( 112)		this->buf = ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
HXLINE( 114)		this->delim = delim;
            	}

Dynamic Splitter_obj::__CreateEmpty() { return new Splitter_obj; }

void *Splitter_obj::_hx_vtable = 0;

Dynamic Splitter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Splitter_obj > _hx_result = new Splitter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Splitter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08b3637f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08b3637f;
	} else {
		return inClassId==(int)0x66915863;
	}
}

 ::tink::io::ParseStep Splitter_obj::read(int _hx_char){
            	HX_STACKFRAME(&_hx_pos_270cc894fe4dff9e_116_read)
HXLINE( 118)		if ((_hx_char == -1)) {
HXLINE( 118)			return ::tink::io::ParseStep_obj::Done(::haxe::ds::Option_obj::None_dyn());
            		}
HXLINE( 120)		::Dynamic a = this->buf;
HXDLIN( 120)		this->buf = ::tink::_Chunk::Chunk_Impl__obj::concat(a,::tink::chunk::ByteChunk_obj::of(::haxe::io::Bytes_obj::ofString(::String::fromCharCode(_hx_char),null())));
HXLINE( 121)		int _hx_tmp = ::tink::chunk::ChunkObject_obj::getLength(this->buf);
HXDLIN( 121)		if ((_hx_tmp >= ::tink::chunk::ChunkObject_obj::getLength(this->delim))) {
HXLINE( 122)			 ::tink::chunk::ChunkCursor bcursor = ::tink::chunk::ChunkObject_obj::getCursor(this->buf);
HXLINE( 123)			{
HXLINE( 123)				int delta = ::tink::chunk::ChunkObject_obj::getLength(this->buf);
HXDLIN( 123)				int delta1 = (delta - ::tink::chunk::ChunkObject_obj::getLength(this->delim));
HXDLIN( 123)				bcursor->moveTo((bcursor->currentPos + delta1));
            			}
HXLINE( 124)			 ::tink::chunk::ChunkCursor dcursor = ::tink::chunk::ChunkObject_obj::getCursor(this->delim);
HXLINE( 126)			{
HXLINE( 126)				int _g = 0;
HXDLIN( 126)				int _g1 = ::tink::chunk::ChunkObject_obj::getLength(this->delim);
HXDLIN( 126)				while((_g < _g1)){
HXLINE( 126)					_g = (_g + 1);
HXDLIN( 126)					int i = (_g - 1);
HXLINE( 127)					if ((bcursor->currentByte != dcursor->currentByte)) {
HXLINE( 128)						return ::tink::io::ParseStep_obj::Progressed_dyn();
            					}
            					else {
HXLINE( 131)						bcursor->next();
HXLINE( 132)						dcursor->next();
            					}
            				}
            			}
HXLINE( 135)			::Dynamic this1 = this->buf;
HXDLIN( 135)			int bcursor1 = bcursor->currentPos;
HXDLIN( 135)			 ::tink::io::ParseStep out = ::tink::io::ParseStep_obj::Done(::haxe::ds::Option_obj::Some(::tink::chunk::ChunkObject_obj::slice(this1,0,(bcursor1 - ::tink::chunk::ChunkObject_obj::getLength(this->delim)))));
HXLINE( 136)			this->buf = ::tink::_Chunk::Chunk_Impl__obj::EMPTY;
HXLINE( 137)			return out;
            		}
            		else {
HXLINE( 141)			return ::tink::io::ParseStep_obj::Progressed_dyn();
            		}
HXLINE( 121)		return null();
            	}



::hx::ObjectPtr< Splitter_obj > Splitter_obj::__new(::Dynamic delim) {
	::hx::ObjectPtr< Splitter_obj > __this = new Splitter_obj();
	__this->__construct(delim);
	return __this;
}

::hx::ObjectPtr< Splitter_obj > Splitter_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic delim) {
	Splitter_obj *__this = (Splitter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Splitter_obj), true, "tink.io.Splitter"));
	*(void **)__this = Splitter_obj::_hx_vtable;
	__this->__construct(delim);
	return __this;
}

Splitter_obj::Splitter_obj()
{
}

void Splitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Splitter);
	HX_MARK_MEMBER_NAME(delim,"delim");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Splitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delim,"delim");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

::hx::Val Splitter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delim") ) { return ::hx::Val( delim ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Splitter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delim") ) { delim=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Splitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delim",6f,de,26,d7));
	outFields->push(HX_("buf",33,c3,4a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Splitter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Splitter_obj,delim),HX_("delim",6f,de,26,d7)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Splitter_obj,buf),HX_("buf",33,c3,4a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Splitter_obj_sStaticStorageInfo = 0;
#endif

static ::String Splitter_obj_sMemberFields[] = {
	HX_("delim",6f,de,26,d7),
	HX_("buf",33,c3,4a,00),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Splitter_obj::__mClass;

void Splitter_obj::__register()
{
	Splitter_obj _hx_dummy;
	Splitter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.Splitter",73,eb,a1,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Splitter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Splitter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Splitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Splitter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
