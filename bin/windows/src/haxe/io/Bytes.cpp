#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_464b3142acc6d207_34_new,"haxe.io.Bytes","new",0x3938d57d,"haxe.io.Bytes.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",34,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_90_blit,"haxe.io.Bytes","blit",0xd098ac78,"haxe.io.Bytes.blit","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",90,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_155_sub,"haxe.io.Bytes","sub",0x393cae9d,"haxe.io.Bytes.sub","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",155,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_415_getString,"haxe.io.Bytes","getString",0xa16beae4,"haxe.io.Bytes.getString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",415,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_516_toString,"haxe.io.Bytes","toString",0x0291226f,"haxe.io.Bytes.toString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",516,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_524_toHex,"haxe.io.Bytes","toHex",0x14173a7d,"haxe.io.Bytes.toHex","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",524,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_549_alloc,"haxe.io.Bytes","alloc",0x2199ead2,"haxe.io.Bytes.alloc","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",549,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_580_ofString,"haxe.io.Bytes","ofString",0x6e53bb0b,"haxe.io.Bytes.ofString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",580,0x20b05d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_464b3142acc6d207_664_ofData,"haxe.io.Bytes","ofData",0x4f3005e4,"haxe.io.Bytes.ofData","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",664,0x20b05d0c)
namespace haxe{
namespace io{

void Bytes_obj::__construct(int length,::Array< unsigned char > b){
            	HX_STACKFRAME(&_hx_pos_464b3142acc6d207_34_new)
HXLINE(  35)		this->length = length;
HXLINE(  36)		this->b = b;
            	}

Dynamic Bytes_obj::__CreateEmpty() { return new Bytes_obj; }

void *Bytes_obj::_hx_vtable = 0;

Dynamic Bytes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bytes_obj > _hx_result = new Bytes_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Bytes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x195c64b7;
}

void Bytes_obj::blit(int pos, ::haxe::io::Bytes src,int srcpos,int len){
            	HX_STACKFRAME(&_hx_pos_464b3142acc6d207_90_blit)
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		bool _hx_tmp1;
HXDLIN(  92)		bool _hx_tmp2;
HXDLIN(  92)		bool _hx_tmp3;
HXDLIN(  92)		if ((pos >= 0)) {
HXLINE(  92)			_hx_tmp3 = (srcpos < 0);
            		}
            		else {
HXLINE(  92)			_hx_tmp3 = true;
            		}
HXDLIN(  92)		if (!(_hx_tmp3)) {
HXLINE(  92)			_hx_tmp2 = (len < 0);
            		}
            		else {
HXLINE(  92)			_hx_tmp2 = true;
            		}
HXDLIN(  92)		if (!(_hx_tmp2)) {
HXLINE(  92)			_hx_tmp1 = ((pos + len) > this->length);
            		}
            		else {
HXLINE(  92)			_hx_tmp1 = true;
            		}
HXDLIN(  92)		if (!(_hx_tmp1)) {
HXLINE(  92)			_hx_tmp = ((srcpos + len) > src->length);
            		}
            		else {
HXLINE(  92)			_hx_tmp = true;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  93)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE( 111)		this->b->blit(pos,src->b,srcpos,len);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

 ::haxe::io::Bytes Bytes_obj::sub(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_464b3142acc6d207_155_sub)
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		bool _hx_tmp1;
HXDLIN( 157)		if ((pos >= 0)) {
HXLINE( 157)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = true;
            		}
HXDLIN( 157)		if (!(_hx_tmp1)) {
HXLINE( 157)			_hx_tmp = ((pos + len) > this->length);
            		}
            		else {
HXLINE( 157)			_hx_tmp = true;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 158)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE( 178)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,len,this->b->slice(pos,(pos + len)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

::String Bytes_obj::getString(int pos,int len, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_464b3142acc6d207_415_getString)
HXLINE( 416)		bool _hx_tmp = ::hx::IsNull( encoding );
HXLINE( 419)		bool _hx_tmp1;
HXDLIN( 419)		bool _hx_tmp2;
HXDLIN( 419)		if ((pos >= 0)) {
HXLINE( 419)			_hx_tmp2 = (len < 0);
            		}
            		else {
HXLINE( 419)			_hx_tmp2 = true;
            		}
HXDLIN( 419)		if (!(_hx_tmp2)) {
HXLINE( 419)			_hx_tmp1 = ((pos + len) > this->length);
            		}
            		else {
HXLINE( 419)			_hx_tmp1 = true;
            		}
HXDLIN( 419)		if (_hx_tmp1) {
HXLINE( 420)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE( 428)		::String result = HX_("",00,00,00,00);
HXLINE( 429)		 ::__hxcpp_string_of_bytes(this->b,result,pos,len);
HXLINE( 430)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Bytes_obj,getString,return )

::String Bytes_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_464b3142acc6d207_516_toString)
HXDLIN( 516)		return this->getString(0,this->length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

::String Bytes_obj::toHex(){
            	HX_GC_STACKFRAME(&_hx_pos_464b3142acc6d207_524_toHex)
HXLINE( 525)		 ::StringBuf s =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 526)		::Array< ::Dynamic> chars = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 527)		::String str = HX_("0123456789abcdef",68,7e,d5,ef);
HXLINE( 528)		{
HXLINE( 528)			int _g = 0;
HXDLIN( 528)			int _g1 = str.length;
HXDLIN( 528)			while((_g < _g1)){
HXLINE( 528)				_g = (_g + 1);
HXDLIN( 528)				int i = (_g - 1);
HXLINE( 529)				chars->push(str.charCodeAt(i));
            			}
            		}
HXLINE( 530)		{
HXLINE( 530)			int _g2 = 0;
HXDLIN( 530)			int _g3 = this->length;
HXDLIN( 530)			while((_g2 < _g3)){
HXLINE( 530)				_g2 = (_g2 + 1);
HXDLIN( 530)				int i = (_g2 - 1);
HXLINE( 531)				int c = ( (int)(this->b->__get(i)) );
HXLINE( 532)				{
HXLINE( 532)					int c1 = ( (int)(chars->__get((c >> 4))) );
HXDLIN( 532)					if ((c1 >= 127)) {
HXLINE( 532)						::String x = ::String::fromCharCode(c1);
HXDLIN( 532)						if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 532)							s->flush();
            						}
HXDLIN( 532)						if (::hx::IsNull( s->b )) {
HXLINE( 532)							s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 532)							::Array< ::String > s1 = s->b;
HXDLIN( 532)							s1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 532)						if (::hx::IsNull( s->charBuf )) {
HXLINE( 532)							s->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 532)						s->charBuf->push(c1);
            					}
            				}
HXLINE( 533)				{
HXLINE( 533)					int c2 = ( (int)(chars->__get((c & 15))) );
HXDLIN( 533)					if ((c2 >= 127)) {
HXLINE( 533)						::String x = ::String::fromCharCode(c2);
HXDLIN( 533)						if (::hx::IsNotNull( s->charBuf )) {
HXLINE( 533)							s->flush();
            						}
HXDLIN( 533)						if (::hx::IsNull( s->b )) {
HXLINE( 533)							s->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 533)							::Array< ::String > s1 = s->b;
HXDLIN( 533)							s1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 533)						if (::hx::IsNull( s->charBuf )) {
HXLINE( 533)							s->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 533)						s->charBuf->push(c2);
            					}
            				}
            			}
            		}
HXLINE( 535)		return s->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toHex,return )

 ::haxe::io::Bytes Bytes_obj::alloc(int length){
            	HX_GC_STACKFRAME(&_hx_pos_464b3142acc6d207_549_alloc)
HXLINE( 557)		::Array< unsigned char > a = ::Array_obj< unsigned char >::__new();
HXLINE( 558)		if ((length > 0)) {
HXLINE( 559)			_hx_array_set_size_exact(a,length);
            		}
HXLINE( 560)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,length,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

 ::haxe::io::Bytes Bytes_obj::ofString(::String s, ::haxe::io::Encoding encoding){
            	HX_GC_STACKFRAME(&_hx_pos_464b3142acc6d207_580_ofString)
HXLINE( 591)		::Array< unsigned char > a = ::Array_obj< unsigned char >::__new();
HXLINE( 592)		 ::__hxcpp_bytes_of_string(a,s);
HXLINE( 593)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,a->length,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,ofString,return )

 ::haxe::io::Bytes Bytes_obj::ofData(::Array< unsigned char > b){
            	HX_GC_STACKFRAME(&_hx_pos_464b3142acc6d207_664_ofData)
HXDLIN( 664)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,b->length,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )


::hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,::Array< unsigned char > b) {
	::hx::ObjectPtr< Bytes_obj > __this = new Bytes_obj();
	__this->__construct(length,b);
	return __this;
}

::hx::ObjectPtr< Bytes_obj > Bytes_obj::__alloc(::hx::Ctx *_hx_ctx,int length,::Array< unsigned char > b) {
	Bytes_obj *__this = (Bytes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bytes_obj), true, "haxe.io.Bytes"));
	*(void **)__this = Bytes_obj::_hx_vtable;
	__this->__construct(length,b);
	return __this;
}

Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

::hx::Val Bytes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return ::hx::Val( blit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toHex") ) { return ::hx::Val( toHex_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return ::hx::Val( getString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
	}
	return false;
}

::hx::Val Bytes_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("b",62,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Bytes_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Bytes_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /* ::Array< unsigned char > */ ,(int)offsetof(Bytes_obj,b),HX_("b",62,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Bytes_obj_sStaticStorageInfo = 0;
#endif

static ::String Bytes_obj_sMemberFields[] = {
	HX_("length",e6,94,07,9f),
	HX_("b",62,00,00,00),
	HX_("blit",35,38,19,41),
	HX_("sub",80,a9,57,00),
	HX_("getString",07,b2,86,8d),
	HX_("toString",ac,d0,6e,38),
	HX_("toHex",20,f4,10,14),
	::String(null()) };

::hx::Class Bytes_obj::__mClass;

static ::String Bytes_obj_sStaticFields[] = {
	HX_("alloc",75,a4,93,21),
	HX_("ofString",48,69,31,a4),
	HX_("ofData",e1,ba,b8,49),
	::String(null())
};

void Bytes_obj::__register()
{
	Bytes_obj _hx_dummy;
	Bytes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Bytes",0b,53,6f,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Bytes_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Bytes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Bytes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bytes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bytes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
