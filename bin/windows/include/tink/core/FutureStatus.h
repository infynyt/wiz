#ifndef INCLUDED_tink_core_FutureStatus
#define INCLUDED_tink_core_FutureStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)
namespace tink{
namespace core{


class FutureStatus_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FutureStatus_obj OBJ_;

	public:
		FutureStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.core.FutureStatus",e8,d1,b4,f2); }
		::String __ToString() const { return HX_("FutureStatus.",99,22,18,ea) + _hx_tag; }

		static ::tink::core::FutureStatus Awaited;
		static inline ::tink::core::FutureStatus Awaited_dyn() { return Awaited; }
		static ::tink::core::FutureStatus EagerlyAwaited;
		static inline ::tink::core::FutureStatus EagerlyAwaited_dyn() { return EagerlyAwaited; }
		static ::tink::core::FutureStatus NeverEver;
		static inline ::tink::core::FutureStatus NeverEver_dyn() { return NeverEver; }
		static ::tink::core::FutureStatus Ready(::Dynamic result);
		static ::Dynamic Ready_dyn();
		static ::tink::core::FutureStatus Suspended;
		static inline ::tink::core::FutureStatus Suspended_dyn() { return Suspended; }
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_FutureStatus */ 
