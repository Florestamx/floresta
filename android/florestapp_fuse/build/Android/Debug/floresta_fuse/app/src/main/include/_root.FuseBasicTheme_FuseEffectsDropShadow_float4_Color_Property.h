// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.24.6/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{struct FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property :720
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property_typeof();
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__ctor_1_fn(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* __this, ::g::Fuse::Effects::DropShadow* obj);
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property** __retval);
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__OnGet_fn(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* __this, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__OnSet_fn(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);

struct FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Effects::DropShadow*> _obj;

    void ctor_1(::g::Fuse::Effects::DropShadow* obj);
    static FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* New1(::g::Fuse::Effects::DropShadow* obj);
};
// }

} // ::g
