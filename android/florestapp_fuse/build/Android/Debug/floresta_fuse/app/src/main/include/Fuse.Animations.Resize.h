// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Resize;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Resize :2502
// {
::g::Fuse::Animations::Animator_type* Resize_typeof();
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Node** __retval);
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Node* value);
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval);
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value);
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Node** __retval);
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Node* value);

struct Resize : ::g::Fuse::Animations::TrackAnimator
{
    uStrong<uObject*> _resizeMode;
    uStrong< ::g::Fuse::Node*> _RelativeNode;
    uStrong< ::g::Fuse::Node*> _Target;

    ::g::Fuse::Node* RelativeNode();
    void RelativeNode(::g::Fuse::Node* value);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
};
// }

}}} // ::g::Fuse::Animations
