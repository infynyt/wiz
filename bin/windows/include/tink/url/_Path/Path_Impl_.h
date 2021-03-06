#ifndef INCLUDED_tink_url__Path_Path_Impl_
#define INCLUDED_tink_url__Path_Path_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,url,_Path,Path_Impl_)

namespace tink{
namespace url{
namespace _Path{


class HXCPP_CLASS_ATTRIBUTES Path_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Path_Impl__obj OBJ_;
		Path_Impl__obj();

	public:
		enum { _hx_ClassId = 0x718c1a2c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.url._Path.Path_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.url._Path.Path_Impl_"); }

		inline static ::hx::ObjectPtr< Path_Impl__obj > __new() {
			::hx::ObjectPtr< Path_Impl__obj > __this = new Path_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Path_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Path_Impl__obj *__this = (Path_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Path_Impl__obj), false, "tink.url._Path.Path_Impl_"));
			*(void **)__this = Path_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Path_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Path_Impl_",25,70,db,20); }

		static void __boot();
		static ::Array< ::String > parts(::String this1);
		static ::Dynamic parts_dyn();

		static bool get_absolute(::String this1);
		static ::Dynamic get_absolute_dyn();

		static bool get_isDir(::String this1);
		static ::Dynamic get_isDir_dyn();

		static ::String _new(::String s);
		static ::Dynamic _new_dyn();

		static ::String join(::String this1,::String that);
		static ::Dynamic join_dyn();

		static ::String ofString(::String s);
		static ::Dynamic ofString_dyn();

		static ::String normalize(::String s);
		static ::Dynamic normalize_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

		static ::String root;
};

} // end namespace tink
} // end namespace url
} // end namespace _Path

#endif /* INCLUDED_tink_url__Path_Path_Impl_ */ 
