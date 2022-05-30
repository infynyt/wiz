#ifndef INCLUDED_tink_core_ProgressStatus
#define INCLUDED_tink_core_ProgressStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,MPair)
HX_DECLARE_CLASS2(tink,core,ProgressStatus)
namespace tink{
namespace core{


class ProgressStatus_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ProgressStatus_obj OBJ_;

	public:
		ProgressStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.core.ProgressStatus",92,87,1a,72); }
		::String __ToString() const { return HX_("ProgressStatus.",6f,9c,94,aa) + _hx_tag; }

		static ::tink::core::ProgressStatus Finished( ::Dynamic v);
		static ::Dynamic Finished_dyn();
		static ::tink::core::ProgressStatus InProgress( ::tink::core::MPair v);
		static ::Dynamic InProgress_dyn();
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_ProgressStatus */ 
