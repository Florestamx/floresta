// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.24.6/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Text.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template__Template1;}}}
namespace g{struct FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property;}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template.Template1 :14
// {
::g::Uno::UX::Template_type* BasicStyle__Template__Template1_typeof();
void BasicStyle__Template__Template1__ctor_1_fn(BasicStyle__Template__Template1* __this, ::g::Fuse::BasicTheme::BasicStyle__Template* parent);
void BasicStyle__Template__Template1__New1_fn(::g::Fuse::BasicTheme::BasicStyle__Template* parent, BasicStyle__Template__Template1** __retval);
void BasicStyle__Template__Template1__OnApply_fn(BasicStyle__Template__Template1* __this, ::g::Fuse::Controls::Text* self);

struct BasicStyle__Template__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Template*> __parent1;
    uStrong< ::g::FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property*> self_TextColor_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle__Template* parent);
    static BasicStyle__Template__Template1* New1(::g::Fuse::BasicTheme::BasicStyle__Template* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
