// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhilePlaying;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePlaying :1683
// {
::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();
void WhilePlaying__IsPlaying_fn(::g::Fuse::Node* n, bool* __retval);
void WhilePlaying__OnRooted_fn(WhilePlaying* __this, ::g::Fuse::Node* parentNode);
void WhilePlaying__SetState_fn(::g::Fuse::Node* n, bool* playing);

struct WhilePlaying : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whilePlayingProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whilePlayingProp() { return WhilePlaying_typeof()->Init(), _whilePlayingProp_; }

    static bool IsPlaying(::g::Fuse::Node* n);
    static void SetState(::g::Fuse::Node* n, bool playing);
};
// }

}}} // ::g::Fuse::Triggers