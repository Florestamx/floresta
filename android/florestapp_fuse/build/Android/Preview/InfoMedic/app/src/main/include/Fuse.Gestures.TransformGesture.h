// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct TwoFinger;}}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class TransformGesture :1334
// {
struct TransformGesture_type : ::g::Fuse::Behavior_type
{
    void(*fp_OnEnded)(::g::Fuse::Gestures::TransformGesture*);
    void(*fp_OnStarted)(::g::Fuse::Gestures::TransformGesture*);
    void(*fp_OnUpdate)(::g::Fuse::Gestures::TransformGesture*);
};

TransformGesture_type* TransformGesture_typeof();
void TransformGesture__ctor_1_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void TransformGesture__CheckNeedUpdate_fn(TransformGesture* __this);
void TransformGesture__OnRooted_fn(TransformGesture* __this, ::g::Fuse::Node* n);
void TransformGesture__OnUnrooted_fn(TransformGesture* __this, ::g::Fuse::Node* n);
void TransformGesture__OnUpdate_fn(TransformGesture* __this);
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval);
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value);
void TransformGesture__Updated_fn(TransformGesture* __this, uObject* s, uObject* a);

struct TransformGesture : ::g::Fuse::Behavior
{
    bool _hasUpdate;
    uStrong< ::g::Fuse::Gestures::Internal::TwoFinger*> Impl;
    uStrong<uObject*> Region;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> _Target;

    void ctor_1(::g::Fuse::Elements::InteractiveTransform* target);
    void CheckNeedUpdate();
    void OnEnded() { (((TransformGesture_type*)__type)->fp_OnEnded)(this); }
    void OnStarted() { (((TransformGesture_type*)__type)->fp_OnStarted)(this); }
    void OnUpdate() { (((TransformGesture_type*)__type)->fp_OnUpdate)(this); }
    ::g::Fuse::Elements::InteractiveTransform* Target();
    void Target(::g::Fuse::Elements::InteractiveTransform* value);
    void Updated(uObject* s, uObject* a);
    static void OnUpdate(TransformGesture* __this) { TransformGesture__OnUpdate_fn(__this); }
};
// }

}}} // ::g::Fuse::Gestures
