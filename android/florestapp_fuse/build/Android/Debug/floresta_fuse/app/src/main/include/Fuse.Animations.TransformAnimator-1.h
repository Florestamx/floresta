// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class TransformAnimator<TransformType> :3212
// {
struct TransformAnimator_type : ::g::Fuse::Animations::Animator_type
{
    void(*fp_Update)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*);
};

TransformAnimator_type* TransformAnimator_typeof();
void TransformAnimator__ctor_2_fn(TransformAnimator* __this);
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval);
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value);
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Node** __retval);
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Node* value);
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Node** __retval);
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Node* value);
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval);
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value);

struct TransformAnimator : ::g::Fuse::Animations::TrackAnimator
{
    int _Priority;
    uStrong< ::g::Fuse::Node*> _RelativeNode;
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_2();
    int Priority();
    void Priority(int value);
    ::g::Fuse::Node* RelativeNode();
    void RelativeNode(::g::Fuse::Node* value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    void Update(::g::Fuse::Node* elm, ::g::Fuse::Transform* transform, ::g::Uno::Float4 value);
    float X();
    void X(float value);
};

}}} // ::g::Fuse::Animations

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Animations{

inline void TransformAnimator::Update(::g::Fuse::Node* elm, ::g::Fuse::Transform* transform, ::g::Uno::Float4 value) { (((TransformAnimator_type*)__type)->fp_Update)(this, elm, transform, &value); }
// }

}}} // ::g::Fuse::Animations
