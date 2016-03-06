// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class Panel :2410
// {
::g::Fuse::Controls::ParentControl_type* Panel_typeof();
void Panel__ctor_4_fn(Panel* __this);
void Panel__get_Color_fn(Panel* __this, ::g::Uno::Float4* __retval);
void Panel__set_Color_fn(Panel* __this, ::g::Uno::Float4* value);
void Panel__add_ColorChanged_fn(Panel* __this, uDelegate* value);
void Panel__remove_ColorChanged_fn(Panel* __this, uDelegate* value);
void Panel__New2_fn(Panel** __retval);
void Panel__OnColorChanged_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin);
void Panel__OnColorChanged1_fn(Panel* c);
void Panel__SetColor_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin);

struct Panel : ::g::Fuse::Controls::ParentControl
{
    static uSStrong< ::g::Fuse::StyleProperty1*> ColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ColorProperty() { return Panel_typeof()->Init(), ColorProperty_; }
    uStrong<uDelegate*> ColorChanged1;

    void ctor_4();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void add_ColorChanged(uDelegate* value);
    void remove_ColorChanged(uDelegate* value);
    void OnColorChanged(::g::Uno::Float4 value, uObject* origin);
    void SetColor(::g::Uno::Float4 value, uObject* origin);
    static Panel* New2();
    static void OnColorChanged1(Panel* c);
};
// }

}}} // ::g::Fuse::Controls
