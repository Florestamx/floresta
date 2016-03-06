// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.24.6/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{struct FuseBasicTheme_FuseControlsButton_string_Text_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsButton_string_Text_Property :785
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsButton_string_Text_Property_typeof();
void FuseBasicTheme_FuseControlsButton_string_Text_Property__ctor_1_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, ::g::Fuse::Controls::Button* obj);
void FuseBasicTheme_FuseControlsButton_string_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, FuseBasicTheme_FuseControlsButton_string_Text_Property** __retval);
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnAddListener_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uDelegate* listener);
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnGet_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uString** __retval);
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnRemoveListener_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uDelegate* listener);
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnSet_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uString* v, uObject* origin);

struct FuseBasicTheme_FuseControlsButton_string_Text_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Button*> _obj;

    void ctor_1(::g::Fuse::Controls::Button* obj);
    static FuseBasicTheme_FuseControlsButton_string_Text_Property* New1(::g::Fuse::Controls::Button* obj);
};
// }

} // ::g
