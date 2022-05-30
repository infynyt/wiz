#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif
#ifndef INCLUDED_tink_chunk__Seekable_Seekable_Impl_
#include <tink/chunk/_Seekable/Seekable_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_638aa2ecd15ba814_7__new,"tink.chunk._Seekable.Seekable_Impl_","_new",0x6a152a63,"tink.chunk._Seekable.Seekable_Impl_._new","tink/chunk/Seekable.hx",7,0x7f5e254d)
HX_LOCAL_STACK_FRAME(_hx_pos_638aa2ecd15ba814_11_get_length,"tink.chunk._Seekable.Seekable_Impl_","get_length",0xecedc731,"tink.chunk._Seekable.Seekable_Impl_.get_length","tink/chunk/Seekable.hx",11,0x7f5e254d)
HX_LOCAL_STACK_FRAME(_hx_pos_638aa2ecd15ba814_14_get,"tink.chunk._Seekable.Seekable_Impl_","get",0x2af981d4,"tink.chunk._Seekable.Seekable_Impl_.get","tink/chunk/Seekable.hx",14,0x7f5e254d)
HX_LOCAL_STACK_FRAME(_hx_pos_638aa2ecd15ba814_17_ofChunk,"tink.chunk._Seekable.Seekable_Impl_","ofChunk",0x1ebcfa14,"tink.chunk._Seekable.Seekable_Impl_.ofChunk","tink/chunk/Seekable.hx",17,0x7f5e254d)
HX_LOCAL_STACK_FRAME(_hx_pos_638aa2ecd15ba814_20_ofBytes,"tink.chunk._Seekable.Seekable_Impl_","ofBytes",0x96923c12,"tink.chunk._Seekable.Seekable_Impl_.ofBytes","tink/chunk/Seekable.hx",20,0x7f5e254d)
HX_LOCAL_STACK_FRAME(_hx_pos_638aa2ecd15ba814_23_ofString,"tink.chunk._Seekable.Seekable_Impl_","ofString",0x1323274a,"tink.chunk._Seekable.Seekable_Impl_.ofString","tink/chunk/Seekable.hx",23,0x7f5e254d)
namespace tink{
namespace chunk{
namespace _Seekable{

void Seekable_Impl__obj::__construct() { }

Dynamic Seekable_Impl__obj::__CreateEmpty() { return new Seekable_Impl__obj; }

void *Seekable_Impl__obj::_hx_vtable = 0;

Dynamic Seekable_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Seekable_Impl__obj > _hx_result = new Seekable_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Seekable_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08b9b650;
}

::Array< int > Seekable_Impl__obj::_new(::Array< int > a){
            	HX_STACKFRAME(&_hx_pos_638aa2ecd15ba814_7__new)
HXDLIN(   7)		::Array< int > this1 = a;
HXDLIN(   7)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Seekable_Impl__obj,_new,return )

int Seekable_Impl__obj::get_length(::Array< int > this1){
            	HX_STACKFRAME(&_hx_pos_638aa2ecd15ba814_11_get_length)
HXDLIN(  11)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Seekable_Impl__obj,get_length,return )

int Seekable_Impl__obj::get(::Array< int > this1,int index){
            	HX_STACKFRAME(&_hx_pos_638aa2ecd15ba814_14_get)
HXDLIN(  14)		return this1->__get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Seekable_Impl__obj,get,return )

::Array< int > Seekable_Impl__obj::ofChunk(::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_638aa2ecd15ba814_17_ofChunk)
HXDLIN(  17)		return ::tink::chunk::_Seekable::Seekable_Impl__obj::ofBytes(::tink::chunk::ChunkObject_obj::toBytes(c));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Seekable_Impl__obj,ofChunk,return )

::Array< int > Seekable_Impl__obj::ofBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_638aa2ecd15ba814_20_ofBytes)
HXDLIN(  20)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(  20)		{
HXDLIN(  20)			int _g1 = 0;
HXDLIN(  20)			int _g2 = b->length;
HXDLIN(  20)			while((_g1 < _g2)){
HXDLIN(  20)				_g1 = (_g1 + 1);
HXDLIN(  20)				int i = (_g1 - 1);
HXDLIN(  20)				_g->push(b->b->__get(i));
            			}
            		}
HXDLIN(  20)		::Array< int > this1 = _g;
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Seekable_Impl__obj,ofBytes,return )

::Array< int > Seekable_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_638aa2ecd15ba814_23_ofString)
HXDLIN(  23)		return ::tink::chunk::_Seekable::Seekable_Impl__obj::ofBytes(::haxe::io::Bytes_obj::ofString(s,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Seekable_Impl__obj,ofString,return )


Seekable_Impl__obj::Seekable_Impl__obj()
{
}

bool Seekable_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofChunk") ) { outValue = ofChunk_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofBytes") ) { outValue = ofBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Seekable_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Seekable_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Seekable_Impl__obj::__mClass;

static ::String Seekable_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_length",af,04,8f,8f),
	HX_("get",96,80,4e,00),
	HX_("ofChunk",d6,81,25,a9),
	HX_("ofBytes",d4,c3,fa,20),
	HX_("ofString",48,69,31,a4),
	::String(null())
};

void Seekable_Impl__obj::__register()
{
	Seekable_Impl__obj _hx_dummy;
	Seekable_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk._Seekable.Seekable_Impl_",ac,6a,da,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Seekable_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Seekable_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Seekable_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Seekable_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Seekable_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
} // end namespace _Seekable
