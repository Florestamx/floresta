// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.TransformGesture.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{struct RotateGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class RotateGesture :565
// {
::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof();
void RotateGesture__ctor_2_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void RotateGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval);
void RotateGesture__OnEnded_fn(RotateGesture* __this);
void RotateGesture__OnRooted_fn(RotateGesture* __this, ::g::Fuse::Node* n);
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle);
void RotateGesture__OnStarted_fn(RotateGesture* __this);
void RotateGesture__OnUnrooted_fn(RotateGesture* __this, ::g::Fuse::Node* n);
void RotateGesture__OnUpdate_fn(RotateGesture* __this);
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval);
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value);
void RotateGesture__get_StepDegrees_fn(RotateGesture* __this, float* __retval);
void RotateGesture__set_StepDegrees_fn(RotateGesture* __this, float* value);

struct RotateGesture : ::g::Fuse::Gestures::TransformGesture
{
    float _startRotation;
    float _Step;

    void ctor_2(::g::Fuse::Elements::InteractiveTransform* target);
    void OnRotated(float angle);
    float Step();
    void Step(float value);
    float StepDegrees();
    void StepDegrees(float value);
    static RotateGesture* New1(::g::Fuse::Elements::InteractiveTransform* target);
};
// }

}}} // ::g::Fuse::Gestures
