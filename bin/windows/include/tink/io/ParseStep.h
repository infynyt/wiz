#ifndef INCLUDED_tink_io_ParseStep
#define INCLUDED_tink_io_ParseStep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,io,ParseStep)
namespace tink{
namespace io{


class ParseStep_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ParseStep_obj OBJ_;

	public:
		ParseStep_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.io.ParseStep",73,2b,8e,cf); }
		::String __ToString() const { return HX_("ParseStep.",4f,c6,a0,a4) + _hx_tag; }

		static ::tink::io::ParseStep Done( ::Dynamic r);
		static ::Dynamic Done_dyn();
		static ::tink::io::ParseStep Failed( ::tink::core::TypedError e);
		static ::Dynamic Failed_dyn();
		static ::tink::io::ParseStep Progressed;
		static inline ::tink::io::ParseStep Progressed_dyn() { return Progressed; }
};

} // end namespace tink
} // end namespace io

#endif /* INCLUDED_tink_io_ParseStep */ 
