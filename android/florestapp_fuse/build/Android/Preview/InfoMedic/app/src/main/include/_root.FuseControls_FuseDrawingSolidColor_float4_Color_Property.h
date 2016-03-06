// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\.uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{struct FuseControls_FuseDrawingSolidColor_float4_Color_Property;}

namespace g{

// internal sealed class FuseControls_FuseDrawingSolidColor_float4_Color_Property :265
// {
::g::Uno::UX::Property_type* FuseControls_FuseDrawingSolidColor_float4_Color_Property_typeof();
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__ctor_1_fn(FuseControls_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj);
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, FuseControls_FuseDrawingSolidColor_float4_Color_Property** __retval);
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__OnGet_fn(FuseControls_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Uno::Float4* __retval);
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__OnSet_fn(FuseControls_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);

struct FuseControls_FuseDrawingSolidColor_float4_Color_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Drawing::SolidColor*> _obj;

    void ctor_1(::g::Fuse::Drawing::SolidColor* obj);
    static FuseControls_FuseDrawingSolidColor_float4_Color_Property* New1(::g::Fuse::Drawing::SolidColor* obj);
};
// }

} // ::g
