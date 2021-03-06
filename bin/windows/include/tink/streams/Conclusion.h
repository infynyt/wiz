#ifndef INCLUDED_tink_streams_Conclusion
#define INCLUDED_tink_streams_Conclusion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS2(tink,streams,Conclusion)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace streams{


class Conclusion_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Conclusion_obj OBJ_;

	public:
		Conclusion_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.streams.Conclusion",96,99,43,ae); }
		::String __ToString() const { return HX_("Conclusion.",4f,54,5d,ac) + _hx_tag; }

		static ::tink::streams::Conclusion Clogged( ::tink::core::TypedError error,::Dynamic at);
		static ::Dynamic Clogged_dyn();
		static ::tink::streams::Conclusion Depleted;
		static inline ::tink::streams::Conclusion Depleted_dyn() { return Depleted; }
		static ::tink::streams::Conclusion Failed( ::tink::core::TypedError error);
		static ::Dynamic Failed_dyn();
		static ::tink::streams::Conclusion Halted(::Dynamic rest);
		static ::Dynamic Halted_dyn();
};

} // end namespace tink
} // end namespace streams

#endif /* INCLUDED_tink_streams_Conclusion */ 
