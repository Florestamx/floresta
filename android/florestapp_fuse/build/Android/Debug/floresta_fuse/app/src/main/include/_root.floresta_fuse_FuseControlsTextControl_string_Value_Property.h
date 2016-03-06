// This file was generated based on '/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/.uno/floresta_fuse.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{struct floresta_fuse_FuseControlsTextControl_string_Value_Property;}

namespace g{

// internal sealed class floresta_fuse_FuseControlsTextControl_string_Value_Property :8
// {
::g::Uno::UX::Property_type* floresta_fuse_FuseControlsTextControl_string_Value_Property_typeof();
void floresta_fuse_FuseControlsTextControl_string_Value_Property__ctor_1_fn(floresta_fuse_FuseControlsTextControl_string_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj);
void floresta_fuse_FuseControlsTextControl_string_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, floresta_fuse_FuseControlsTextControl_string_Value_Property** __retval);
void floresta_fuse_FuseControlsTextControl_string_Value_Property__OnAddListener_fn(floresta_fuse_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener);
void floresta_fuse_FuseControlsTextControl_string_Value_Property__OnGet_fn(floresta_fuse_FuseControlsTextControl_string_Value_Property* __this, uString** __retval);
void floresta_fuse_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn(floresta_fuse_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener);
void floresta_fuse_FuseControlsTextControl_string_Value_Property__OnSet_fn(floresta_fuse_FuseControlsTextControl_string_Value_Property* __this, uString* v, uObject* origin);

struct floresta_fuse_FuseControlsTextControl_string_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_1(::g::Fuse::Controls::TextControl* obj);
    static floresta_fuse_FuseControlsTextControl_string_Value_Property* New1(::g::Fuse::Controls::TextControl* obj);
};
// }

} // ::g
