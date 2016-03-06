// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.24.6/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.TextEdit.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template5;}}}
namespace g{struct FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property;}
namespace g{struct FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property;}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template5 :436
// {
::g::Uno::UX::Template_type* BasicStyle__Template5_typeof();
void BasicStyle__Template5__ctor_1_fn(BasicStyle__Template5* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template5__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template5** __retval);
void BasicStyle__Template5__OnApply_fn(BasicStyle__Template5* __this, ::g::Fuse::Controls::TextEdit* self);

struct BasicStyle__Template5 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property*> self_Focus_IsFocusable_inst;
    uStrong< ::g::FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property*> temp_IsActive_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template5* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
