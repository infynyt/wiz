#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_url__Portion_Portion_Impl_
#include <tink/url/_Portion/Portion_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Query_QueryStringParser
#include <tink/url/_Query/QueryStringParser.h>
#endif
#ifndef INCLUDED_tink_url__Query_Query_Impl_
#include <tink/url/_Query/Query_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_11_parse,"tink.url._Query.Query_Impl_","parse",0xa07c4523,"tink.url._Query.Query_Impl_.parse","tink/url/Query.hx",11,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_13_with,"tink.url._Query.Query_Impl_","with",0xc1a3af16,"tink.url._Query.Query_Impl_.with","tink/url/Query.hx",13,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_34_iterator,"tink.url._Query.Query_Impl_","iterator",0x453f4afe,"tink.url._Query.Query_Impl_.iterator","tink/url/Query.hx",34,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_37_toMap,"tink.url._Query.Query_Impl_","toMap",0xf73b70d1,"tink.url._Query.Query_Impl_.toMap","tink/url/Query.hx",37,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_39_ofObj,"tink.url._Query.Query_Impl_","ofObj",0x10492410,"tink.url._Query.Query_Impl_.ofObj","tink/url/Query.hx",39,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_50_toString,"tink.url._Query.Query_Impl_","toString",0xea13d1bc,"tink.url._Query.Query_Impl_.toString","tink/url/Query.hx",50,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_53_build,"tink.url._Query.Query_Impl_","build",0x9e11901e,"tink.url._Query.Query_Impl_.build","tink/url/Query.hx",53,0xf3864d33)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a3b07cf788578d_56_parseString,"tink.url._Query.Query_Impl_","parseString",0x63b1de54,"tink.url._Query.Query_Impl_.parseString","tink/url/Query.hx",56,0xf3864d33)
namespace tink{
namespace url{
namespace _Query{

void Query_Impl__obj::__construct() { }

Dynamic Query_Impl__obj::__CreateEmpty() { return new Query_Impl__obj; }

void *Query_Impl__obj::_hx_vtable = 0;

Dynamic Query_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Query_Impl__obj > _hx_result = new Query_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Query_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f91762a;
}

 ::tink::url::_Query::QueryStringParser Query_Impl__obj::parse(::String this1){
            	HX_GC_STACKFRAME(&_hx_pos_f9a3b07cf788578d_11_parse)
HXDLIN(  11)		return  ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,this1,HX_("&",26,00,00,00),HX_("=",3d,00,00,00),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Query_Impl__obj,parse,return )

::String Query_Impl__obj::with(::String this1, ::haxe::ds::StringMap values){
            	HX_GC_STACKFRAME(&_hx_pos_f9a3b07cf788578d_13_with)
HXLINE(  14)		::Array< ::String > this2 = ::Array_obj< ::String >::__new(0);
HXDLIN(  14)		::Array< ::String > ret = this2;
HXLINE(  16)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  16)		{
HXLINE(  16)			 ::Dynamic key = values->keys();
HXDLIN(  16)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  16)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  16)				_g->push(key1);
            			}
            		}
HXDLIN(  16)		::Array< ::String > insert = _g;
HXLINE(  18)		{
HXLINE(  18)			 ::tink::url::_Query::QueryStringParser p =  ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,this1,HX_("&",26,00,00,00),HX_("=",3d,00,00,00),0);
HXDLIN(  18)			while(p->hasNext()){
HXLINE(  18)				 ::tink::core::NamedWith p1 = p->next();
HXLINE(  19)				if (values->exists(::tink::url::_Portion::Portion_Impl__obj::ofString(( (::String)(p1->name) )))) {
HXLINE(  20)					{
HXLINE(  20)						::String name = ::tink::url::_Portion::Portion_Impl__obj::ofString(( (::String)(p1->name) ));
HXDLIN(  20)						ret->push(((name + HX_("=",3d,00,00,00)) + values->get_string(::tink::url::_Portion::Portion_Impl__obj::ofString(( (::String)(p1->name) )))));
            					}
HXLINE(  21)					insert->remove(::tink::url::_Portion::Portion_Impl__obj::ofString(( (::String)(p1->name) )));
            				}
            				else {
HXLINE(  23)					::String name = ::tink::url::_Portion::Portion_Impl__obj::ofString(( (::String)(p1->name) ));
HXDLIN(  23)					ret->push(((name + HX_("=",3d,00,00,00)) + ( (::String)(p1->value) )));
            				}
            			}
            		}
HXLINE(  27)		{
HXLINE(  27)			int _g1 = 0;
HXDLIN(  27)			while((_g1 < insert->length)){
HXLINE(  27)				::String name = insert->__get(_g1);
HXDLIN(  27)				_g1 = (_g1 + 1);
HXDLIN(  27)				ret->push(((name + HX_("=",3d,00,00,00)) + values->get_string(name)));
            			}
            		}
HXLINE(  29)		return ret->join(HX_("&",26,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Query_Impl__obj,with,return )

 ::tink::url::_Query::QueryStringParser Query_Impl__obj::iterator(::String this1){
            	HX_GC_STACKFRAME(&_hx_pos_f9a3b07cf788578d_34_iterator)
HXDLIN(  34)		return  ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,this1,HX_("&",26,00,00,00),HX_("=",3d,00,00,00),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Query_Impl__obj,iterator,return )

 ::haxe::ds::StringMap Query_Impl__obj::toMap(::String this1){
            	HX_GC_STACKFRAME(&_hx_pos_f9a3b07cf788578d_37_toMap)
HXDLIN(  37)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  37)		{
HXDLIN(  37)			 ::tink::url::_Query::QueryStringParser p =  ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,this1,HX_("&",26,00,00,00),HX_("=",3d,00,00,00),0);
HXDLIN(  37)			while(p->hasNext()){
HXDLIN(  37)				 ::tink::core::NamedWith p1 = p->next();
HXDLIN(  37)				{
HXDLIN(  37)					::String key = ( (::String)(p1->name) ).toString();
HXDLIN(  37)					_g->set(key,p1->value);
            				}
            			}
            		}
HXDLIN(  37)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Query_Impl__obj,toMap,return )

::String Query_Impl__obj::ofObj( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f9a3b07cf788578d_39_ofObj)
HXLINE(  40)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  40)		::Array< ::String > ret = this1;
HXDLIN(  40)		 ::Dynamic v1 = v;
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			::Array< ::String > _g1 = ::Reflect_obj::fields(v1);
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				::String k = _g1->__get(_g);
HXDLIN(  43)				_g = (_g + 1);
HXLINE(  44)				{
HXLINE(  44)					::String name = ::tink::url::_Portion::Portion_Impl__obj::ofString(k);
HXDLIN(  44)					ret->push(((name + HX_("=",3d,00,00,00)) + ::tink::url::_Portion::Portion_Impl__obj::ofString(( (::String)(::Reflect_obj::field(v1,k)) ))));
            				}
            			}
            		}
HXLINE(  46)		return ret->join(HX_("&",26,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Query_Impl__obj,ofObj,return )

::String Query_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_f9a3b07cf788578d_50_toString)
HXDLIN(  50)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Query_Impl__obj,toString,return )

::Array< ::String > Query_Impl__obj::build(){
            	HX_STACKFRAME(&_hx_pos_f9a3b07cf788578d_53_build)
HXDLIN(  53)		::Array< ::String > this1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  53)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Query_Impl__obj,build,return )

 ::tink::url::_Query::QueryStringParser Query_Impl__obj::parseString(::String s,::String __o_sep,::String __o_set,::hx::Null< int >  __o_pos){
            		::String sep = __o_sep;
            		if (::hx::IsNull(__o_sep)) sep = HX_("&",26,00,00,00);
            		::String set = __o_set;
            		if (::hx::IsNull(__o_set)) set = HX_("=",3d,00,00,00);
            		int pos = __o_pos.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_f9a3b07cf788578d_56_parseString)
HXDLIN(  56)		return  ::tink::url::_Query::QueryStringParser_obj::__alloc( HX_CTX ,s,sep,set,pos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Query_Impl__obj,parseString,return )


Query_Impl__obj::Query_Impl__obj()
{
}

bool Query_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"with") ) { outValue = with_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toMap") ) { outValue = toMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofObj") ) { outValue = ofObj_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { outValue = parseString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Query_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Query_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Query_Impl__obj::__mClass;

static ::String Query_Impl__obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	HX_("with",06,76,f8,4e),
	HX_("iterator",ee,49,9a,93),
	HX_("toMap",e1,bb,14,14),
	HX_("ofObj",20,6f,22,2d),
	HX_("toString",ac,d0,6e,38),
	HX_("build",2e,db,ea,ba),
	HX_("parseString",64,d5,6c,8c),
	::String(null())
};

void Query_Impl__obj::__register()
{
	Query_Impl__obj _hx_dummy;
	Query_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Query.Query_Impl_",5e,c1,13,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Query_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Query_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Query_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Query_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Query_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace url
} // end namespace _Query
