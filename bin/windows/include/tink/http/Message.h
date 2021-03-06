#ifndef INCLUDED_tink_http_Message
#define INCLUDED_tink_http_Message

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bcbf082f6c47a594_8_new)
HX_DECLARE_CLASS2(tink,http,Message)

namespace tink{
namespace http{


class HXCPP_CLASS_ATTRIBUTES Message_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Message_obj OBJ_;
		Message_obj();

	public:
		enum { _hx_ClassId = 0x7888e42d };

		void __construct( ::Dynamic header, ::Dynamic body);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.Message")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.Message"); }

		inline static ::hx::ObjectPtr< Message_obj > __new( ::Dynamic header, ::Dynamic body) {
			::hx::ObjectPtr< Message_obj > __this = new Message_obj();
			__this->__construct(header,body);
			return __this;
		}

		inline static ::hx::ObjectPtr< Message_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic header, ::Dynamic body) {
			Message_obj *__this = (Message_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Message_obj), true, "tink.http.Message"));
			*(void **)__this = Message_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bcbf082f6c47a594_8_new)
HXLINE(   9)		( ( ::tink::http::Message)(__this) )->header = header;
HXLINE(  10)		( ( ::tink::http::Message)(__this) )->body = body;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Message_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Message",a7,5d,62,67); }

		 ::Dynamic header;
		 ::Dynamic body;
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_Message */ 
