#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink_url__Path_Path_Impl_
#include <tink/url/_Path/Path_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_9_parts,"tink.url._Path.Path_Impl_","parts",0x2dc1813c,"tink.url._Path.Path_Impl_.parts","tink/url/Path.hx",9,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_13_get_absolute,"tink.url._Path.Path_Impl_","get_absolute",0x48260de4,"tink.url._Path.Path_Impl_.get_absolute","tink/url/Path.hx",13,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_17_get_isDir,"tink.url._Path.Path_Impl_","get_isDir",0xd14ff1f6,"tink.url._Path.Path_Impl_.get_isDir","tink/url/Path.hx",17,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_19__new,"tink.url._Path.Path_Impl_","_new",0x7fe99cc5,"tink.url._Path.Path_Impl_._new","tink/url/Path.hx",19,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_24_join,"tink.url._Path.Path_Impl_","join",0x872fbb4e,"tink.url._Path.Path_Impl_.join","tink/url/Path.hx",24,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_34_ofString,"tink.url._Path.Path_Impl_","ofString",0xbe5d72ac,"tink.url._Path.Path_Impl_.ofString","tink/url/Path.hx",34,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_37_normalize,"tink.url._Path.Path_Impl_","normalize",0x77fd65a9,"tink.url._Path.Path_Impl_.normalize","tink/url/Path.hx",37,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_71_toString,"tink.url._Path.Path_Impl_","toString",0x529ada10,"tink.url._Path.Path_Impl_.toString","tink/url/Path.hx",71,0x18b6105c)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9c8e84a46e6f2e_73_boot,"tink.url._Path.Path_Impl_","boot",0x81e60b96,"tink.url._Path.Path_Impl_.boot","tink/url/Path.hx",73,0x18b6105c)
namespace tink{
namespace url{
namespace _Path{

void Path_Impl__obj::__construct() { }

Dynamic Path_Impl__obj::__CreateEmpty() { return new Path_Impl__obj; }

void *Path_Impl__obj::_hx_vtable = 0;

Dynamic Path_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Path_Impl__obj > _hx_result = new Path_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Path_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x718c1a2c;
}

::Array< ::String > Path_Impl__obj::parts(::String this1){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_9_parts)
HXDLIN(   9)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(   9)		{
HXDLIN(   9)			int _g1 = 0;
HXDLIN(   9)			::Array< ::String > _g2 = this1.split(HX_("/",2f,00,00,00));
HXDLIN(   9)			while((_g1 < _g2->length)){
HXDLIN(   9)				::String p = _g2->__get(_g1);
HXDLIN(   9)				_g1 = (_g1 + 1);
HXDLIN(   9)				if ((p != HX_("",00,00,00,00))) {
HXDLIN(   9)					::String this1 = p;
HXDLIN(   9)					_g->push(this1);
            				}
            			}
            		}
HXDLIN(   9)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,parts,return )

bool Path_Impl__obj::get_absolute(::String this1){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_13_get_absolute)
HXDLIN(  13)		return (this1.charAt(0) == HX_("/",2f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,get_absolute,return )

bool Path_Impl__obj::get_isDir(::String this1){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_17_get_isDir)
HXDLIN(  17)		return (this1.charAt((this1.length - 1)) == HX_("/",2f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,get_isDir,return )

::String Path_Impl__obj::_new(::String s){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_19__new)
HXDLIN(  19)		::String this1 = s;
HXDLIN(  19)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,_new,return )

::String Path_Impl__obj::join(::String this1,::String that){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_24_join)
HXDLIN(  24)		if ((that == HX_("",00,00,00,00))) {
HXDLIN(  24)			return this1;
            		}
            		else {
HXLINE(  25)			if ((that.charAt(0) == HX_("/",2f,00,00,00))) {
HXLINE(  25)				return that;
            			}
            			else {
HXLINE(  27)				if ((this1.charAt((this1.length - 1)) == HX_("/",2f,00,00,00))) {
HXLINE(  27)					return ::tink::url::_Path::Path_Impl__obj::ofString((this1 + that));
            				}
            				else {
HXLINE(  28)					int _g = this1.lastIndexOf(HX_("/",2f,00,00,00),null());
HXDLIN(  28)					if ((_g == -1)) {
HXLINE(  29)						return that;
            					}
            					else {
HXLINE(  30)						int v = _g;
HXDLIN(  30)						::String _hx_tmp = this1.substr(0,(v + 1));
HXDLIN(  30)						::String _hx_tmp1;
HXDLIN(  30)						if (::hx::IsNull( that )) {
HXLINE(  30)							_hx_tmp1 = HX_("null",87,9e,0e,49);
            						}
            						else {
HXLINE(  30)							_hx_tmp1 = that;
            						}
HXDLIN(  30)						return ::tink::url::_Path::Path_Impl__obj::ofString((_hx_tmp + _hx_tmp1));
            					}
            				}
            			}
            		}
HXLINE(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_Impl__obj,join,return )

::String Path_Impl__obj::ofString(::String s){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_34_ofString)
HXDLIN(  34)		::String this1 = ::tink::url::_Path::Path_Impl__obj::normalize(s);
HXDLIN(  34)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,ofString,return )

::String Path_Impl__obj::normalize(::String s){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_37_normalize)
HXLINE(  38)		s = ::StringTools_obj::trim(::StringTools_obj::replace(s,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00)));
HXLINE(  39)		if ((s == HX_(".",2e,00,00,00))) {
HXLINE(  40)			return HX_("./",41,28,00,00);
            		}
HXLINE(  42)		bool isDir;
HXDLIN(  42)		bool isDir1;
HXDLIN(  42)		if (!(::StringTools_obj::endsWith(s,HX_("/..",2f,d2,23,00)))) {
HXLINE(  42)			isDir1 = ::StringTools_obj::endsWith(s,HX_("/",2f,00,00,00));
            		}
            		else {
HXLINE(  42)			isDir1 = true;
            		}
HXDLIN(  42)		if (!(isDir1)) {
HXLINE(  42)			isDir = ::StringTools_obj::endsWith(s,HX_("/.",1f,29,00,00));
            		}
            		else {
HXLINE(  42)			isDir = true;
            		}
HXLINE(  44)		::Array< ::String > parts = ::Array_obj< ::String >::__new(0);
HXDLIN(  44)		bool isAbsolute = ::StringTools_obj::startsWith(s,HX_("/",2f,00,00,00));
HXDLIN(  44)		int up = 0;
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			::Array< ::String > _g1 = s.split(HX_("/",2f,00,00,00));
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				::String part = _g1->__get(_g);
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  49)				{
HXLINE(  49)					::String _g2 = ::StringTools_obj::trim(part);
HXDLIN(  49)					::String _hx_switch_0 = _g2;
            					if (  (_hx_switch_0==HX_("",00,00,00,00)) ){
HXLINE(  50)						goto _hx_goto_8;
            					}
            					if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ){
HXLINE(  51)						goto _hx_goto_8;
            					}
            					if (  (_hx_switch_0==HX_("..",40,28,00,00)) ){
HXLINE(  53)						if (::hx::IsNull( parts->pop() )) {
HXLINE(  53)							up = (up + 1);
            						}
HXDLIN(  53)						goto _hx_goto_8;
            					}
            					/* default */{
HXLINE(  54)						::String v = _g2;
HXDLIN(  54)						parts->push(v);
            					}
            					_hx_goto_8:;
            				}
            			}
            		}
HXLINE(  57)		if (isAbsolute) {
HXLINE(  58)			parts->unshift(HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			int _g1 = up;
HXDLIN(  60)			while((_g < _g1)){
HXLINE(  60)				_g = (_g + 1);
HXDLIN(  60)				int i = (_g - 1);
HXLINE(  61)				parts->unshift(HX_("..",40,28,00,00));
            			}
            		}
HXLINE(  63)		if (isDir) {
HXLINE(  64)			parts->push(HX_("",00,00,00,00));
            		}
HXLINE(  67)		return parts->join(HX_("/",2f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,normalize,return )

::String Path_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_71_toString)
HXDLIN(  71)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_Impl__obj,toString,return )

::String Path_Impl__obj::root;


Path_Impl__obj::Path_Impl__obj()
{
}

bool Path_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { outValue = parts_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_isDir") ) { outValue = get_isDir_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_absolute") ) { outValue = get_absolute_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Path_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Path_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Path_Impl__obj::root,HX_("root",22,ee,ae,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Path_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_Impl__obj::root,"root");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Path_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_Impl__obj::root,"root");
};

#endif

::hx::Class Path_Impl__obj::__mClass;

static ::String Path_Impl__obj_sStaticFields[] = {
	HX_("parts",20,91,55,bd),
	HX_("get_absolute",80,82,af,78),
	HX_("get_isDir",da,c3,f3,04),
	HX_("_new",61,15,1f,3f),
	HX_("join",ea,33,65,46),
	HX_("ofString",48,69,31,a4),
	HX_("normalize",8d,37,a1,ab),
	HX_("toString",ac,d0,6e,38),
	HX_("root",22,ee,ae,4b),
	::String(null())
};

void Path_Impl__obj::__register()
{
	Path_Impl__obj _hx_dummy;
	Path_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.url._Path.Path_Impl_",8a,13,5f,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Path_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Path_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Path_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Path_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Path_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Path_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Path_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::String _hx_run(){
            			HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_73_boot)
HXDLIN(  73)			::String this1 = HX_("/",2f,00,00,00);
HXDLIN(  73)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_5c9c8e84a46e6f2e_73_boot)
HXDLIN(  73)		root = ( (::String)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace tink
} // end namespace url
} // end namespace _Path
