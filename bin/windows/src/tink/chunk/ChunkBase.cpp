#include <hxcpp.h>

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

HX_LOCAL_STACK_FRAME(_hx_pos_a1a1dd73485bb6ab_8_getCursor,"tink.chunk.ChunkBase","getCursor",0x99fb019f,"tink.chunk.ChunkBase.getCursor","tink/chunk/ChunkBase.hx",8,0xae4a0edf)
HX_LOCAL_STACK_FRAME(_hx_pos_a1a1dd73485bb6ab_13_flatten,"tink.chunk.ChunkBase","flatten",0xb6e7fa97,"tink.chunk.ChunkBase.flatten","tink/chunk/ChunkBase.hx",13,0xae4a0edf)
namespace tink{
namespace chunk{

void ChunkBase_obj::__construct() { }

Dynamic ChunkBase_obj::__CreateEmpty() { return new ChunkBase_obj; }

void *ChunkBase_obj::_hx_vtable = 0;

Dynamic ChunkBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkBase_obj > _hx_result = new ChunkBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChunkBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49bef7e3;
}

 ::tink::chunk::ChunkCursor ChunkBase_obj::getCursor(){
            	HX_STACKFRAME(&_hx_pos_a1a1dd73485bb6ab_8_getCursor)
HXLINE(   9)		if (::hx::IsNull( this->flattened )) {
HXLINE(  10)			this->flatten((this->flattened = ::Array_obj< ::Dynamic>::__new(0)));
            		}
HXLINE(  11)		return ::tink::chunk::ChunkCursor_obj::create(this->flattened->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkBase_obj,getCursor,return )

void ChunkBase_obj::flatten(::Array< ::Dynamic> into){
            	HX_STACKFRAME(&_hx_pos_a1a1dd73485bb6ab_13_flatten)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChunkBase_obj,flatten,(void))


ChunkBase_obj::ChunkBase_obj()
{
}

void ChunkBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChunkBase);
	HX_MARK_MEMBER_NAME(flattened,"flattened");
	HX_MARK_END_CLASS();
}

void ChunkBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flattened,"flattened");
}

::hx::Val ChunkBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"flatten") ) { return ::hx::Val( flatten_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flattened") ) { return ::hx::Val( flattened ); }
		if (HX_FIELD_EQ(inName,"getCursor") ) { return ::hx::Val( getCursor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChunkBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"flattened") ) { flattened=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChunkBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flattened",23,7d,11,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChunkBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ChunkBase_obj,flattened),HX_("flattened",23,7d,11,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChunkBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ChunkBase_obj_sMemberFields[] = {
	HX_("flattened",23,7d,11,5e),
	HX_("getCursor",0c,18,3f,bb),
	HX_("flatten",c4,ab,fb,e6),
	::String(null()) };

::hx::Class ChunkBase_obj::__mClass;

void ChunkBase_obj::__register()
{
	ChunkBase_obj _hx_dummy;
	ChunkBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.ChunkBase",41,24,cc,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChunkBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
