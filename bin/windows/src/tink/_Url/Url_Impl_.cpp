#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink__Url_Url_Impl_
#include <tink/_Url/Url_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Host_Host_Impl_
#include <tink/url/_Host/Host_Impl_.h>
#endif
#ifndef INCLUDED_tink_url__Path_Path_Impl_
#include <tink/url/_Path/Path_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_23_get_host,"tink._Url.Url_Impl_","get_host",0x36fc8bf2,"tink._Url.Url_Impl_.get_host","tink/Url.hx",23,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_27_get_hosts,"tink._Url.Url_Impl_","get_hosts",0xe5fde841,"tink._Url.Url_Impl_.get_hosts","tink/Url.hx",27,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_31_get_pathWithQuery,"tink._Url.Url_Impl_","get_pathWithQuery",0xd596eef3,"tink._Url.Url_Impl_.get_pathWithQuery","tink/Url.hx",31,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_33__new,"tink._Url.Url_Impl_","_new",0x6d1741e2,"tink._Url.Url_Impl_._new","tink/Url.hx",33,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_38_resolve,"tink._Url.Url_Impl_","resolve",0xaf0fed0b,"tink._Url.Url_Impl_.resolve","tink/Url.hx",38,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_62_makePayload,"tink._Url.Url_Impl_","makePayload",0xb050bcdf,"tink._Url.Url_Impl_.makePayload","tink/Url.hx",62,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_93_toString,"tink._Url.Url_Impl_","toString",0xaa9dd1ad,"tink._Url.Url_Impl_.toString","tink/Url.hx",93,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_97_fromString,"tink._Url.Url_Impl_","fromString",0xf126311c,"tink._Url.Url_Impl_.fromString","tink/Url.hx",97,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_98_noop,"tink._Url.Url_Impl_","noop",0x77024023,"tink._Url.Url_Impl_.noop","tink/Url.hx",98,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_99_parse,"tink._Url.Url_Impl_","parse",0xc8845492,"tink._Url.Url_Impl_.parse","tink/Url.hx",99,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_159_make,"tink._Url.Url_Impl_","make",0x764e666f,"tink._Url.Url_Impl_.make","tink/Url.hx",159,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_13_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",13,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_14_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",14,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_15_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",15,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_16_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",16,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_17_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",17,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_18_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",18,0x591f7d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_0918bb212228a32b_19_boot,"tink._Url.Url_Impl_","boot",0x6f13b0b3,"tink._Url.Url_Impl_.boot","tink/Url.hx",19,0x591f7d8c)
namespace tink{
namespace _Url{

void Url_Impl__obj::__construct() { }

Dynamic Url_Impl__obj::__CreateEmpty() { return new Url_Impl__obj; }

void *Url_Impl__obj::_hx_vtable = 0;

Dynamic Url_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Url_Impl__obj > _hx_result = new Url_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Url_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x142a69a5;
}

int Url_Impl__obj::SCHEME;

int Url_Impl__obj::PAYLOAD;

int Url_Impl__obj::AUTH;

int Url_Impl__obj::HOSTNAMES;

int Url_Impl__obj::PATH;

int Url_Impl__obj::QUERY;

int Url_Impl__obj::HASH;

::String Url_Impl__obj::get_host( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_23_get_host)
HXDLIN(  23)		return ( (::Array< ::String >)(this1->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) )->__get(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,get_host,return )

::Array< ::String > Url_Impl__obj::get_hosts( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_27_get_hosts)
HXDLIN(  27)		return ( (::Array< ::String >)(this1->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,get_hosts,return )

::String Url_Impl__obj::get_pathWithQuery( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_31_get_pathWithQuery)
HXDLIN(  31)		if (::hx::IsNull( this1->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXDLIN(  31)			return ( (::String)(this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            		}
            		else {
HXDLIN(  31)			::String _hx_tmp;
HXDLIN(  31)			if (::hx::IsNull( this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic) )) {
HXDLIN(  31)				_hx_tmp = HX_("null",87,9e,0e,49);
            			}
            			else {
HXDLIN(  31)				_hx_tmp = ( (::String)(this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            			}
HXDLIN(  31)			::String _hx_tmp1;
HXDLIN(  31)			if (::hx::IsNull( this1->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXDLIN(  31)				_hx_tmp1 = HX_("null",87,9e,0e,49);
            			}
            			else {
HXDLIN(  31)				_hx_tmp1 = ( (::String)(this1->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)) );
            			}
HXDLIN(  31)			return ((_hx_tmp + HX_("?",3f,00,00,00)) + _hx_tmp1);
            		}
HXDLIN(  31)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,get_pathWithQuery,return )

 ::Dynamic Url_Impl__obj::_new( ::Dynamic parts){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_33__new)
HXDLIN(  33)		 ::Dynamic this1 = parts;
HXDLIN(  33)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,_new,return )

 ::Dynamic Url_Impl__obj::resolve( ::Dynamic this1, ::Dynamic that){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_38_resolve)
HXDLIN(  38)		if (::hx::IsNotNull( that->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic) )) {
HXDLIN(  38)			return that;
            		}
            		else {
HXLINE(  39)			if (::hx::IsNotNull( ( (::Array< ::String >)(that->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) )->__get(0) )) {
HXLINE(  40)				if (::hx::IsNotNull( that->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic) )) {
HXLINE(  40)					return that;
            				}
            				else {
HXLINE(  42)					 ::Dynamic copy = ::Reflect_obj::copy(that);
HXLINE(  43)					copy->__SetField(HX_("scheme",25,20,c1,40),this1->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic),::hx::paccDynamic);
HXLINE(  44)					return copy;
            				}
            			}
            			else {
HXLINE(  48)				::String parts = ::tink::url::_Path::Path_Impl__obj::join(( (::String)(this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) ),( (::String)(that->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) ));
HXLINE(  47)				 ::Dynamic parts1 =  ::Dynamic(::hx::Anon_obj::Create(7)
            					->setFixed(0,HX_("payload",8e,bf,35,ed),HX_("",00,00,00,00))
            					->setFixed(1,HX_("hosts",0b,ac,62,2b), ::Dynamic(this1->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)))
            					->setFixed(2,HX_("auth",68,df,76,40), ::Dynamic(this1->__Field(HX_("auth",68,df,76,40),::hx::paccDynamic)))
            					->setFixed(3,HX_("scheme",25,20,c1,40), ::Dynamic(this1->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)))
            					->setFixed(4,HX_("hash",ce,2f,08,45), ::Dynamic(that->__Field(HX_("hash",ce,2f,08,45),::hx::paccDynamic)))
            					->setFixed(5,HX_("path",a5,e5,51,4a),parts)
            					->setFixed(6,HX_("query",08,8b,ea,5d), ::Dynamic(that->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic))));
HXLINE(  57)				::tink::_Url::Url_Impl__obj::makePayload(parts1);
HXLINE(  59)				 ::Dynamic this2 = parts1;
HXDLIN(  59)				return this2;
            			}
            		}
HXLINE(  38)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Url_Impl__obj,resolve,return )

void Url_Impl__obj::makePayload( ::Dynamic parts){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_62_makePayload)
HXLINE(  64)		::String payload = HX_("",00,00,00,00);
HXLINE(  66)		{
HXLINE(  66)			::String _g = ( (::String)(parts->__Field(HX_("auth",68,df,76,40),::hx::paccDynamic)) );
HXDLIN(  66)			::String _g1 = ( (::String)(parts->__Field(HX_("hash",ce,2f,08,45),::hx::paccDynamic)) );
HXDLIN(  66)			::Array< ::String > _g2 = ( (::Array< ::String >)(parts->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)) );
HXDLIN(  66)			::String _g3 = ( (::String)(parts->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
HXDLIN(  66)			::String _g4 = ( (::String)(parts->__Field(HX_("payload",8e,bf,35,ed),::hx::paccDynamic)) );
HXDLIN(  66)			::String _g5 = ( (::String)(parts->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)) );
HXDLIN(  66)			::String _g6 = ( (::String)(parts->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)) );
HXDLIN(  66)			if (::hx::IsNull( _g )) {
HXLINE(  66)				if ((_g2->length != 0)) {
HXLINE(  68)					::Array< ::String > v = _g2;
HXLINE(  69)					payload = (payload + (HX_("//",20,29,00,00) + v->join(HX_(",",2c,00,00,00))));
            				}
            			}
            			else {
HXLINE(  66)				if ((_g2->length == 0)) {
HXLINE(  70)					::String auth = _g;
HXLINE(  71)					::String payload1;
HXDLIN(  71)					if (::hx::IsNull( auth )) {
HXLINE(  71)						payload1 = HX_("null",87,9e,0e,49);
            					}
            					else {
HXLINE(  71)						if (::hx::IsNull( auth )) {
HXLINE(  71)							payload1 = HX_("",00,00,00,00);
            						}
            						else {
HXLINE(  71)							payload1 = ((HX_("",00,00,00,00) + auth) + HX_("@",40,00,00,00));
            						}
            					}
HXDLIN(  71)					payload = (payload + (HX_("//",20,29,00,00) + payload1));
            				}
            				else {
HXLINE(  72)					::String auth = _g;
HXDLIN(  72)					::Array< ::String > v = _g2;
HXLINE(  73)					::String payload1;
HXDLIN(  73)					if (::hx::IsNull( auth )) {
HXLINE(  73)						payload1 = HX_("null",87,9e,0e,49);
            					}
            					else {
HXLINE(  73)						if (::hx::IsNull( auth )) {
HXLINE(  73)							payload1 = HX_("",00,00,00,00);
            						}
            						else {
HXLINE(  73)							payload1 = ((HX_("",00,00,00,00) + auth) + HX_("@",40,00,00,00));
            						}
            					}
HXDLIN(  73)					payload = (payload + ((HX_("//",20,29,00,00) + payload1) + v->join(HX_(",",2c,00,00,00))));
            				}
            			}
            		}
HXLINE(  76)		::String payload1;
HXDLIN(  76)		if (::hx::IsNull( parts->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic) )) {
HXLINE(  76)			payload1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE(  76)			payload1 = ( (::String)(parts->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            		}
HXDLIN(  76)		payload = (payload + payload1);
HXLINE(  78)		{
HXLINE(  78)			::String _g7 = ( (::String)(parts->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)) );
HXLINE(  79)			if (::hx::IsNotNull( _g7 )) {
HXLINE(  80)				::String v = _g7;
HXDLIN(  80)				::String payload1;
HXDLIN(  80)				if (::hx::IsNull( v )) {
HXLINE(  80)					payload1 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE(  80)					payload1 = v;
            				}
HXDLIN(  80)				payload = (payload + (HX_("?",3f,00,00,00) + payload1));
            			}
            		}
HXLINE(  83)		{
HXLINE(  83)			::String _g8 = ( (::String)(parts->__Field(HX_("hash",ce,2f,08,45),::hx::paccDynamic)) );
HXLINE(  84)			if (::hx::IsNotNull( _g8 )) {
HXLINE(  85)				::String v = _g8;
HXDLIN(  85)				payload = (payload + (HX_("#",23,00,00,00) + v));
            			}
            		}
HXLINE(  88)		parts->__SetField(HX_("payload",8e,bf,35,ed),payload.toString(),::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,makePayload,(void))

::String Url_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_93_toString)
HXDLIN(  93)		if (::hx::IsNull( this1->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic) )) {
HXDLIN(  93)			return ( (::String)(this1->__Field(HX_("payload",8e,bf,35,ed),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  94)			return ( (::String)((((HX_("",00,00,00,00) + this1->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)) + HX_(":",3a,00,00,00)) + this1->__Field(HX_("payload",8e,bf,35,ed),::hx::paccDynamic))) );
            		}
HXLINE(  93)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,toString,return )

 ::Dynamic Url_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_97_fromString)
HXDLIN(  97)		return ::tink::_Url::Url_Impl__obj::parse(s,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,fromString,return )

void Url_Impl__obj::noop(::String _){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_98_noop)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,noop,(void))

 ::Dynamic Url_Impl__obj::parse(::String s, ::Dynamic onError){
            	HX_GC_STACKFRAME(&_hx_pos_0918bb212228a32b_99_parse)
HXLINE( 101)		if (::hx::IsNull( s )) {
HXLINE( 102)			return ::tink::_Url::Url_Impl__obj::parse(HX_("",00,00,00,00),null());
            		}
HXLINE( 104)		if (::hx::IsNull( onError )) {
HXLINE( 105)			onError = ::tink::_Url::Url_Impl__obj::noop_dyn();
            		}
HXLINE( 107)		s = ::StringTools_obj::trim(s);
HXLINE( 109)		if (::StringTools_obj::startsWith(s,HX_("data:",d0,0e,88,d4))) {
HXLINE( 110)			 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("payload",8e,bf,35,ed),s.substr(5,null()))
            				->setFixed(1,HX_("hosts",0b,ac,62,2b),::Array_obj< ::String >::__new(0))
            				->setFixed(2,HX_("scheme",25,20,c1,40),HX_("data",2a,56,63,42)));
HXDLIN( 110)			return this1;
            		}
HXLINE( 112)		 ::EReg FORMAT =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(([a-zA-Z][a-zA-Z0-9\\-+.]*):)?((//(([^@/]+)@)?([^/?#]*))?([^?#]*)(\\?([^#]*))?(#(.*))?)$",01,fd,14,be),HX_("",00,00,00,00));
HXLINE( 113)		 ::EReg HOST =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(\\[(.*)\\]|([^:]*))(:(.*))?$",ae,83,22,ec),HX_("",00,00,00,00));
HXLINE( 116)		FORMAT->match(s);
HXLINE( 118)		::Array< ::String > hosts;
HXDLIN( 118)		::String _g = FORMAT->matched(7);
HXLINE( 119)		if (::hx::IsNull( _g )) {
HXLINE( 118)			hosts = ::Array_obj< ::String >::__new(0);
            		}
            		else {
HXLINE( 120)			::String v = _g;
HXLINE( 121)			::Array< ::String > _g1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 121)			{
HXLINE( 121)				int _g2 = 0;
HXDLIN( 121)				::Array< ::String > _g3 = v.split(HX_(",",2c,00,00,00));
HXDLIN( 121)				while((_g2 < _g3->length)){
HXLINE( 121)					::String host = _g3->__get(_g2);
HXDLIN( 121)					_g2 = (_g2 + 1);
HXLINE( 122)					HOST->match(host);
HXLINE( 123)					::String host1;
HXDLIN( 123)					::String _g = HOST->matched(3);
HXDLIN( 123)					::String _g4 = HOST->matched(2);
HXLINE( 124)					if (::hx::IsNull( _g4 )) {
HXLINE( 124)						::String ipv4 = _g;
HXLINE( 123)						host1 = ipv4;
            					}
            					else {
HXLINE( 125)						if (::hx::IsNull( _g )) {
HXLINE( 125)							::String ipv6 = _g4;
HXLINE( 123)							host1 = ((HX_("[",5b,00,00,00) + ipv6) + HX_("]",5d,00,00,00));
            						}
            						else {
HXLINE( 127)							onError((HX_("invalid host ",cf,25,ab,c7) + host));
HXLINE( 123)							host1 = null();
            						}
            					}
HXLINE( 130)					 ::Dynamic port;
HXDLIN( 130)					::String _g5 = HOST->matched(5);
HXLINE( 131)					if (::hx::IsNull( _g5 )) {
HXLINE( 130)						port = null();
            					}
            					else {
HXLINE( 132)						::String v = _g5;
HXLINE( 133)						 ::Dynamic _g = ::Std_obj::parseInt(v);
HXLINE( 134)						if (::hx::IsNull( _g )) {
HXLINE( 135)							onError((HX_("invalid port ",96,07,df,62) + v));
HXLINE( 130)							port = null();
            						}
            						else {
HXLINE( 137)							 ::Dynamic p = _g;
HXLINE( 130)							port = p;
            						}
            					}
HXLINE( 140)					_g1->push(::tink::url::_Host::Host_Impl__obj::_new(host1,port));
            				}
            			}
HXLINE( 118)			hosts = _g1;
            		}
HXLINE( 143)		::String path = FORMAT->matched(8);
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		if ((hosts->length > 0)) {
HXLINE( 145)			_hx_tmp = (path.charAt(0) != HX_("/",2f,00,00,00));
            		}
            		else {
HXLINE( 145)			_hx_tmp = false;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 146)			path = (HX_("/",2f,00,00,00) + path);
            		}
HXLINE( 149)		::String parts = FORMAT->matched(2);
HXLINE( 150)		::String parts1 = FORMAT->matched(3);
HXLINE( 152)		::String parts2 = FORMAT->matched(6);
HXLINE( 153)		::String parts3 = ::tink::url::_Path::Path_Impl__obj::ofString(path);
HXLINE( 154)		::String parts4 = FORMAT->matched(10);
HXLINE( 148)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("payload",8e,bf,35,ed),parts1)
            			->setFixed(1,HX_("hosts",0b,ac,62,2b),hosts)
            			->setFixed(2,HX_("auth",68,df,76,40),parts2)
            			->setFixed(3,HX_("scheme",25,20,c1,40),parts)
            			->setFixed(4,HX_("hash",ce,2f,08,45),FORMAT->matched(12))
            			->setFixed(5,HX_("path",a5,e5,51,4a),parts3)
            			->setFixed(6,HX_("query",08,8b,ea,5d),parts4));
HXDLIN( 148)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Url_Impl__obj,parse,return )

 ::Dynamic Url_Impl__obj::make( ::Dynamic parts){
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_159_make)
HXLINE( 160)		 ::Dynamic parts1 =  ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("payload",8e,bf,35,ed),HX_("",00,00,00,00))
            			->setFixed(1,HX_("hosts",0b,ac,62,2b), ::Dynamic(parts->__Field(HX_("hosts",0b,ac,62,2b),::hx::paccDynamic)))
            			->setFixed(2,HX_("auth",68,df,76,40), ::Dynamic(parts->__Field(HX_("auth",68,df,76,40),::hx::paccDynamic)))
            			->setFixed(3,HX_("scheme",25,20,c1,40), ::Dynamic(parts->__Field(HX_("scheme",25,20,c1,40),::hx::paccDynamic)))
            			->setFixed(4,HX_("hash",ce,2f,08,45), ::Dynamic(parts->__Field(HX_("hash",ce,2f,08,45),::hx::paccDynamic)))
            			->setFixed(5,HX_("path",a5,e5,51,4a), ::Dynamic(parts->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)))
            			->setFixed(6,HX_("query",08,8b,ea,5d), ::Dynamic(parts->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic))));
HXLINE( 169)		::tink::_Url::Url_Impl__obj::makePayload(parts1);
HXLINE( 170)		 ::Dynamic this1 = parts1;
HXDLIN( 170)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Url_Impl__obj,make,return )


Url_Impl__obj::Url_Impl__obj()
{
}

bool Url_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"noop") ) { outValue = noop_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_host") ) { outValue = get_host_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_hosts") ) { outValue = get_hosts_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makePayload") ) { outValue = makePayload_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pathWithQuery") ) { outValue = get_pathWithQuery_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Url_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Url_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Url_Impl__obj::SCHEME,HX_("SCHEME",25,cc,43,f3)},
	{::hx::fsInt,(void *) &Url_Impl__obj::PAYLOAD,HX_("PAYLOAD",6e,93,09,6d)},
	{::hx::fsInt,(void *) &Url_Impl__obj::AUTH,HX_("AUTH",68,a7,37,2b)},
	{::hx::fsInt,(void *) &Url_Impl__obj::HOSTNAMES,HX_("HOSTNAMES",40,57,59,20)},
	{::hx::fsInt,(void *) &Url_Impl__obj::PATH,HX_("PATH",a5,ad,12,35)},
	{::hx::fsInt,(void *) &Url_Impl__obj::QUERY,HX_("QUERY",e8,c2,d8,db)},
	{::hx::fsInt,(void *) &Url_Impl__obj::HASH,HX_("HASH",ce,f7,c8,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Url_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Url_Impl__obj::SCHEME,"SCHEME");
	HX_MARK_MEMBER_NAME(Url_Impl__obj::PAYLOAD,"PAYLOAD");
	HX_MARK_MEMBER_NAME(Url_Impl__obj::AUTH,"AUTH");
	HX_MARK_MEMBER_NAME(Url_Impl__obj::HOSTNAMES,"HOSTNAMES");
	HX_MARK_MEMBER_NAME(Url_Impl__obj::PATH,"PATH");
	HX_MARK_MEMBER_NAME(Url_Impl__obj::QUERY,"QUERY");
	HX_MARK_MEMBER_NAME(Url_Impl__obj::HASH,"HASH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Url_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::SCHEME,"SCHEME");
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::PAYLOAD,"PAYLOAD");
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::AUTH,"AUTH");
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::HOSTNAMES,"HOSTNAMES");
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::PATH,"PATH");
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::QUERY,"QUERY");
	HX_VISIT_MEMBER_NAME(Url_Impl__obj::HASH,"HASH");
};

#endif

::hx::Class Url_Impl__obj::__mClass;

static ::String Url_Impl__obj_sStaticFields[] = {
	HX_("SCHEME",25,cc,43,f3),
	HX_("PAYLOAD",6e,93,09,6d),
	HX_("AUTH",68,a7,37,2b),
	HX_("HOSTNAMES",40,57,59,20),
	HX_("PATH",a5,ad,12,35),
	HX_("QUERY",e8,c2,d8,db),
	HX_("HASH",ce,f7,c8,2f),
	HX_("get_host",f1,8a,cd,c4),
	HX_("get_hosts",62,08,0c,6f),
	HX_("get_pathWithQuery",14,98,e3,7a),
	HX_("_new",61,15,1f,3f),
	HX_("resolve",ec,12,60,67),
	HX_("makePayload",40,e7,3f,31),
	HX_("toString",ac,d0,6e,38),
	HX_("fromString",db,2d,74,54),
	HX_("noop",a2,13,0a,49),
	HX_("parse",33,90,55,bd),
	HX_("make",ee,39,56,48),
	::String(null())
};

void Url_Impl__obj::__register()
{
	Url_Impl__obj _hx_dummy;
	Url_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink._Url.Url_Impl_",8d,83,ed,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Url_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Url_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Url_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Url_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Url_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Url_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Url_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Url_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_13_boot)
HXDLIN(  13)		SCHEME = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_14_boot)
HXDLIN(  14)		PAYLOAD = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_15_boot)
HXDLIN(  15)		AUTH = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_16_boot)
HXDLIN(  16)		HOSTNAMES = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_17_boot)
HXDLIN(  17)		PATH = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_18_boot)
HXDLIN(  18)		QUERY = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0918bb212228a32b_19_boot)
HXDLIN(  19)		HASH = 12;
            	}
}

} // end namespace tink
} // end namespace _Url
