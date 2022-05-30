#include <hxcpp.h>

#ifndef INCLUDED_tink_url__Query_QueryStringBuilder_Impl_
#include <tink/url/_Query/QueryStringBuilder_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8c47e221c0674834_62__new,"tink.url._Query.QueryStringBuilder_Impl_","_new",0x94c0b643,"tink.url._Query.QueryStringBuilder_Impl_._new","tink/url/Query.hx",62,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_8c47e221c0674834_66_add,"tink.url._Query.QueryStringBuilder_Impl_","add",0xe087837f,"tink.url._Query.QueryStringBuilder_Impl_.add","tink/url/Query.hx",66,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_8c47e221c0674834_72_toString,"tink.url._Query.QueryStringBuilder_Impl_","toString",0xafef8a8e,"tink.url._Query.QueryStringBuilder_Impl_.toString","tink/url/Query.hx",72,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_8c47e221c0674834_75_copy,"tink.url._Query.QueryStringBuilder_Impl_","copy",0x97665c97,"tink.url._Query.QueryStringBuilder_Impl_.copy","tink/url/Query.hx",75,0xf3864d33)
namespace tink{
namespace url{
namespace _Query{

void QueryStringBuilder_Impl__obj::__construct() { }

Dynamic QueryStringBuilder_Impl__obj::__CreateEmpty() { return new QueryStringBuilder_Impl__obj; }

void *QueryStringBuilder_Impl__obj::_hx_vtable = 0;

Dynamic QueryStringBuilder_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QueryStringBuilder_Impl__obj > _hx_result = new QueryStringBuilder_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QueryStringBuilder_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6efda448;
}

::Array< ::String > QueryStringBuilder_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_8c47e221c0674834_62__new)
HXDLIN(  62)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  62)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(QueryStringBuilder_Impl__obj,_new,return )

::Array< ::String > QueryStringBuilder_Impl__obj::add(::Array< ::String > this1,::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_8c47e221c0674834_66_add)
HXLINE(  67)		this1->push(((name + HX_("=",3d,00,00,00)) + value));
HXLINE(  68)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(QueryStringBuilder_Impl__obj,add,return )

::String QueryStringBuilder_Impl__obj::toString(::Array< ::String > this1,::String __o_sep){
            		::String sep = __o_sep;
            		if (::hx::IsNull(__o_sep)) sep = HX_("&",26,00,00,00);
            	HX_STACKFRAME(&_hx_pos_8c47e221c0674834_72_toString)
HXDLIN(  72)		return this1->join(sep);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(QueryStringBuilder_Impl__obj,toString,return )

::Array< ::String > QueryStringBuilder_Impl__obj::copy(::Array< ::String > this1){
            	HX_STACKFRAME(&_hx_pos_8c47e221c0674834_75_copy)
HXDLIN(  75)		return this1->copy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(QueryStringBuilder_Impl__obj,copy,return )


QueryStringBuilder_Impl__obj::QueryStringBuilder_Impl__obj()
{
}

bool QueryStringBuilder_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *QueryStringBuilder_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QueryStringBuilder_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class QueryStringBuilder_Impl__obj::__mClass;

static ::String QueryStringBuilder_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("add",21,f2,49,00),
	HX_("toString",ac,d0,6e,38),
	HX_("copy",b5,bb,c4,41),
	::String(null())
};

void QueryStringBuilder_Impl__obj::__register()
{
	QueryStringBuilder_Impl__obj _hx_dummy;
	QueryStringBuilder_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Query.QueryStringBuilder_Impl_",cc,6a,9a,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &QueryStringBuilder_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(QueryStringBuilder_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< QueryStringBuilder_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QueryStringBuilder_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QueryStringBuilder_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _Query
