#include <hxcpp.h>

#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#include <tink/url/_Portion/Portion_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Query_QueryStringParser
#include <tink/url/_Query/QueryStringParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bde4a567013990e9_87_new,"tink.url._Query.QueryStringParser","new",0xa0bc4fe0,"tink.url._Query.QueryStringParser.new","tink/url/Query.hx",87,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_bde4a567013990e9_98_hasNext,"tink.url._Query.QueryStringParser","hasNext",0xa3a4e4ed,"tink.url._Query.QueryStringParser.hasNext","tink/url/Query.hx",98,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_bde4a567013990e9_100_next,"tink.url._Query.QueryStringParser","next",0x04099573,"tink.url._Query.QueryStringParser.next","tink/url/Query.hx",100,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_bde4a567013990e9_118_trimmedSub,"tink.url._Query.QueryStringParser","trimmedSub",0x96b985b6,"tink.url._Query.QueryStringParser.trimmedSub","tink/url/Query.hx",118,0xf3864d33)
namespace tink{
namespace url{
namespace _Query{

void QueryStringParser_obj::__construct(::String s,::String sep,::String set,int pos){
            	HX_STACKFRAME(&_hx_pos_bde4a567013990e9_87_new)
HXLINE(  88)		::String _hx_tmp;
HXDLIN(  88)		if (::hx::IsNull( s )) {
HXLINE(  88)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  88)			_hx_tmp = s;
            		}
HXDLIN(  88)		this->s = _hx_tmp;
HXLINE(  92)		this->sep = sep;
HXLINE(  93)		this->set = set;
HXLINE(  94)		this->pos = pos;
            	}

Dynamic QueryStringParser_obj::__CreateEmpty() { return new QueryStringParser_obj; }

void *QueryStringParser_obj::_hx_vtable = 0;

Dynamic QueryStringParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QueryStringParser_obj > _hx_result = new QueryStringParser_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool QueryStringParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78240256;
}

bool QueryStringParser_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_bde4a567013990e9_98_hasNext)
HXDLIN(  98)		return (this->pos < this->s.length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(QueryStringParser_obj,hasNext,return )

 ::tink::core::NamedWith QueryStringParser_obj::next(){
            	HX_GC_STACKFRAME(&_hx_pos_bde4a567013990e9_100_next)
HXLINE( 101)		int next = this->s.indexOf(this->sep,this->pos);
HXLINE( 103)		if ((next == -1)) {
HXLINE( 104)			next = this->s.length;
            		}
HXLINE( 106)		int split = this->s.indexOf(this->set,this->pos);
HXLINE( 107)		int start = this->pos;
HXLINE( 109)		this->pos = (next + this->sep.length);
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if ((split != -1)) {
HXLINE( 112)			_hx_tmp = (split > next);
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 113)			::String _hx_tmp = ::tink::url::_Portion::Portion_Impl__obj::toString(::tink::url::_Query::QueryStringParser_obj::trimmedSub(this->s,start,next));
HXDLIN( 113)			return  ::tink::core::NamedWith_obj::__alloc( HX_CTX ,_hx_tmp,::tink::url::_Portion::Portion_Impl__obj::ofString(HX_("",00,00,00,00)));
            		}
            		else {
HXLINE( 115)			::String _hx_tmp = ::tink::url::_Portion::Portion_Impl__obj::toString(::tink::url::_Query::QueryStringParser_obj::trimmedSub(this->s,start,split));
HXDLIN( 115)			return  ::tink::core::NamedWith_obj::__alloc( HX_CTX ,_hx_tmp,::tink::url::_Query::QueryStringParser_obj::trimmedSub(this->s,(split + this->set.length),next));
            		}
HXLINE( 112)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(QueryStringParser_obj,next,return )

::String QueryStringParser_obj::trimmedSub(::String s,int start,int end){
            	HX_STACKFRAME(&_hx_pos_bde4a567013990e9_118_trimmedSub)
HXLINE( 120)		if ((start >= s.length)) {
HXLINE( 120)			::String this1 = HX_("",00,00,00,00);
HXDLIN( 120)			return this1;
            		}
HXLINE( 122)		while((s.cca(start) < 33)){
HXLINE( 123)			start = (start + 1);
            		}
HXLINE( 125)		if ((end < (s.length - 1))) {
HXLINE( 126)			while((s.cca((end - 1)) < 33)){
HXLINE( 127)				end = (end - 1);
            			}
            		}
HXLINE( 129)		::String this1 = s.substring(start,end);
HXDLIN( 129)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(QueryStringParser_obj,trimmedSub,return )


::hx::ObjectPtr< QueryStringParser_obj > QueryStringParser_obj::__new(::String s,::String sep,::String set,int pos) {
	::hx::ObjectPtr< QueryStringParser_obj > __this = new QueryStringParser_obj();
	__this->__construct(s,sep,set,pos);
	return __this;
}

::hx::ObjectPtr< QueryStringParser_obj > QueryStringParser_obj::__alloc(::hx::Ctx *_hx_ctx,::String s,::String sep,::String set,int pos) {
	QueryStringParser_obj *__this = (QueryStringParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QueryStringParser_obj), true, "tink.url._Query.QueryStringParser"));
	*(void **)__this = QueryStringParser_obj::_hx_vtable;
	__this->__construct(s,sep,set,pos);
	return __this;
}

QueryStringParser_obj::QueryStringParser_obj()
{
}

void QueryStringParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QueryStringParser);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(sep,"sep");
	HX_MARK_MEMBER_NAME(set,"set");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void QueryStringParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(sep,"sep");
	HX_VISIT_MEMBER_NAME(set,"set");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

::hx::Val QueryStringParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sep") ) { return ::hx::Val( sep ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool QueryStringParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"trimmedSub") ) { outValue = trimmedSub_dyn(); return true; }
	}
	return false;
}

::hx::Val QueryStringParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sep") ) { sep=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"set") ) { set=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QueryStringParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("sep",9e,9b,57,00));
	outFields->push(HX_("set",a2,9b,57,00));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QueryStringParser_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(QueryStringParser_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsString,(int)offsetof(QueryStringParser_obj,sep),HX_("sep",9e,9b,57,00)},
	{::hx::fsString,(int)offsetof(QueryStringParser_obj,set),HX_("set",a2,9b,57,00)},
	{::hx::fsInt,(int)offsetof(QueryStringParser_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QueryStringParser_obj_sStaticStorageInfo = 0;
#endif

static ::String QueryStringParser_obj_sMemberFields[] = {
	HX_("s",73,00,00,00),
	HX_("sep",9e,9b,57,00),
	HX_("set",a2,9b,57,00),
	HX_("pos",94,5d,55,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class QueryStringParser_obj::__mClass;

static ::String QueryStringParser_obj_sStaticFields[] = {
	HX_("trimmedSub",36,15,4b,3a),
	::String(null())
};

void QueryStringParser_obj::__register()
{
	QueryStringParser_obj _hx_dummy;
	QueryStringParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Query.QueryStringParser",ee,1f,27,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &QueryStringParser_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(QueryStringParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QueryStringParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QueryStringParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QueryStringParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QueryStringParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _Query
