// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Android{struct StatusBarConfig;}}}

namespace g{
namespace Fuse{
namespace Android{

// public sealed class StatusBarConfig :789
// {
::g::Fuse::Behavior_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval);
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value);
void StatusBarConfig__get_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__New1_fn(StatusBarConfig** __retval);
void StatusBarConfig__SetNavigationBarVisible_fn(StatusBarConfig* __this, bool* visible);
void StatusBarConfig__SetStatusBarColor_fn(StatusBarConfig* __this, ::g::Uno::Float4* color);
void StatusBarConfig__SetStatusBarColor1_fn(StatusBarConfig* __this, int* color);
void StatusBarConfig__SetStatusBarVisible_fn(StatusBarConfig* __this, bool* visible);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    ::g::Uno::Float4 _color;
    bool _isNavigationBarVisible;
    bool _isVisible;

    void ctor_1();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    bool IsNavigationBarVisible();
    void IsNavigationBarVisible(bool value);
    bool IsVisible();
    void IsVisible(bool value);
    void SetNavigationBarVisible(bool visible);
    void SetStatusBarColor(::g::Uno::Float4 color);
    void SetStatusBarColor1(int color);
    void SetStatusBarVisible(bool visible);
    static StatusBarConfig* New1();
};
// }

}}} // ::g::Fuse::Android
