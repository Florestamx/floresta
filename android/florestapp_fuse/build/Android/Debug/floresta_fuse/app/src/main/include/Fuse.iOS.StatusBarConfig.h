// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed class StatusBarConfig :952
// {
::g::Fuse::Behavior_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this);
void StatusBarConfig__Apply_fn();
void StatusBarConfig__New1_fn(StatusBarConfig** __retval);
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode);
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode);
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval);
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    bool _hasStyle;
    static uSStrong< ::g::Uno::Collections::List*> _stack_;
    static uSStrong< ::g::Uno::Collections::List*>& _stack() { return StatusBarConfig_typeof()->Init(), _stack_; }
    int _style;

    void ctor_1();
    int Style();
    void Style(int value);
    static void Apply();
    static StatusBarConfig* New1();
};
// }

}}} // ::g::Fuse::iOS
