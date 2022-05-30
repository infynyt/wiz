#include <hxcpp.h>

#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkIterator
#include <tink/chunk/ChunkIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_412b656e25d8116b_11_new,"tink.chunk.ChunkIterator","new",0xbfa76610,"tink.chunk.ChunkIterator.new","tink/chunk/ChunkIterator.hx",11,0xf9ada622)
HX_LOCAL_STACK_FRAME(_hx_pos_412b656e25d8116b_17_hasNext,"tink.chunk.ChunkIterator","hasNext",0x880ed31d,"tink.chunk.ChunkIterator.hasNext","tink/chunk/ChunkIterator.hx",17,0xf9ada622)
HX_LOCAL_STACK_FRAME(_hx_pos_412b656e25d8116b_19_next,"tink.chunk.ChunkIterator","next",0xf2d1e943,"tink.chunk.ChunkIterator.next","tink/chunk/ChunkIterator.hx",19,0xf9ada622)
namespace tink{
namespace chunk{

void ChunkIterator_obj::__construct( ::tink::chunk::ChunkCursor target){
            	HX_STACKFRAME(&_hx_pos_412b656e25d8116b_11_new)
HXLINE(  12)		this->target = target;
HXLINE(  13)		this->_hasNext = (target->length > target->currentPos);
            	}

Dynamic ChunkIterator_obj::__CreateEmpty() { return new ChunkIterator_obj; }

void *ChunkIterator_obj::_hx_vtable = 0;

Dynamic ChunkIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChunkIterator_obj > _hx_result = new ChunkIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChunkIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7821aac0;
}

bool ChunkIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_412b656e25d8116b_17_hasNext)
HXDLIN(  17)		return this->_hasNext;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkIterator_obj,hasNext,return )

int ChunkIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_412b656e25d8116b_19_next)
HXLINE(  20)		int ret = this->target->currentByte;
HXLINE(  21)		this->_hasNext = this->target->next();
HXLINE(  22)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChunkIterator_obj,next,return )


::hx::ObjectPtr< ChunkIterator_obj > ChunkIterator_obj::__new( ::tink::chunk::ChunkCursor target) {
	::hx::ObjectPtr< ChunkIterator_obj > __this = new ChunkIterator_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< ChunkIterator_obj > ChunkIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::tink::chunk::ChunkCursor target) {
	ChunkIterator_obj *__this = (ChunkIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChunkIterator_obj), true, "tink.chunk.ChunkIterator"));
	*(void **)__this = ChunkIterator_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

ChunkIterator_obj::ChunkIterator_obj()
{
}

void ChunkIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChunkIterator);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_hasNext,"_hasNext");
	HX_MARK_END_CLASS();
}

void ChunkIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_hasNext,"_hasNext");
}

::hx::Val ChunkIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasNext") ) { return ::hx::Val( _hasNext ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChunkIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::tink::chunk::ChunkCursor >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasNext") ) { _hasNext=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChunkIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_hasNext",ee,fe,fe,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChunkIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::chunk::ChunkCursor */ ,(int)offsetof(ChunkIterator_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(ChunkIterator_obj,_hasNext),HX_("_hasNext",ee,fe,fe,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChunkIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ChunkIterator_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("_hasNext",ee,fe,fe,51),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ChunkIterator_obj::__mClass;

void ChunkIterator_obj::__register()
{
	ChunkIterator_obj _hx_dummy;
	ChunkIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.ChunkIterator",1e,5e,df,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChunkIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChunkIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChunkIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
