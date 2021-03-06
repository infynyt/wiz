#ifndef INCLUDED_tink_streams_Handled
#define INCLUDED_tink_streams_Handled

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,Handled)
namespace tink{
namespace streams{


class Handled_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Handled_obj OBJ_;

	public:
		Handled_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.Handled",a5,94,ee,d9); }
		::String __ToString() const { return HX_("Handled.",12,d1,d5,ae) + _hx_tag; }

		static ::tink::streams::Handled BackOff;
		static inline ::tink::streams::Handled BackOff_dyn() { return BackOff; }
		static ::tink::streams::Handled Clog( ::tink::core::TypedError e);
		static ::Dynamic Clog_dyn();
		static ::tink::streams::Handled Finish;
		static inline ::tink::streams::Handled Finish_dyn() { return Finish; }
		static ::tink::streams::Handled Resume;
		static inline ::tink::streams::Handled Resume_dyn() { return Resume; }
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Handled */ 
