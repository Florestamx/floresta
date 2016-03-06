// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.24.6/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Slider.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template3;}}}
namespace g{struct FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property;}
namespace g{struct FuseBasicTheme_FuseElementsElement_float_Opacity_Property;}
namespace g{struct FuseBasicTheme_FuseElementsElement_float_Width_Property;}
namespace g{struct FuseBasicTheme_FuseTranslation_float_X_Property;}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template3 :214
// {
::g::Uno::UX::Template_type* BasicStyle__Template3_typeof();
void BasicStyle__Template3__ctor_1_fn(BasicStyle__Template3* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template3__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template3** __retval);
void BasicStyle__Template3__OnApply_fn(BasicStyle__Template3* __this, ::g::Fuse::Controls::Slider* self);

struct BasicStyle__Template3 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::FuseBasicTheme_FuseElementsElement_float_Opacity_Property*> _focusedThumbDot_Opacity_inst;
    uStrong< ::g::FuseBasicTheme_FuseElementsElement_float_Opacity_Property*> _focusedThumbRing_Opacity_inst;
    uStrong< ::g::FuseBasicTheme_FuseElementsElement_float_Width_Property*> _progressTrack_Width_inst;
    uStrong< ::g::FuseBasicTheme_FuseTranslation_float_X_Property*> _sliderPos_X_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property*> temp_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property*> temp1_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property*> temp2_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property*> temp3_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property*> temp4_Color_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template3* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
