// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Transform.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{struct FastMatrix;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class InteractiveTransform :2085
// {
::g::Fuse::Transform_type* InteractiveTransform_typeof();
void InteractiveTransform__AppendTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix, float* weight);
void InteractiveTransform__get_IsFlat_fn(InteractiveTransform* __this, bool* __retval);
void InteractiveTransform__PrependTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix);
void InteractiveTransform__get_Rotation_fn(InteractiveTransform* __this, float* __retval);
void InteractiveTransform__set_Rotation_fn(InteractiveTransform* __this, float* value);
void InteractiveTransform__add_RotationChanged_fn(InteractiveTransform* __this, uDelegate* value);
void InteractiveTransform__remove_RotationChanged_fn(InteractiveTransform* __this, uDelegate* value);
void InteractiveTransform__SetRotation_fn(InteractiveTransform* __this, float* value, uObject* origin);
void InteractiveTransform__SetTranslation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value, uObject* origin);
void InteractiveTransform__SetZoomFactor_fn(InteractiveTransform* __this, float* value, uObject* origin);
void InteractiveTransform__get_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* __retval);
void InteractiveTransform__set_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value);
void InteractiveTransform__add_TranslationChanged_fn(InteractiveTransform* __this, uDelegate* value);
void InteractiveTransform__remove_TranslationChanged_fn(InteractiveTransform* __this, uDelegate* value);
void InteractiveTransform__get_ZoomFactor_fn(InteractiveTransform* __this, float* __retval);
void InteractiveTransform__set_ZoomFactor_fn(InteractiveTransform* __this, float* value);
void InteractiveTransform__add_ZoomFactorChanged_fn(InteractiveTransform* __this, uDelegate* value);
void InteractiveTransform__remove_ZoomFactorChanged_fn(InteractiveTransform* __this, uDelegate* value);

struct InteractiveTransform : ::g::Fuse::Transform
{
    float _rotation;
    ::g::Uno::Float2 _translation;
    float _zoomFactor;
    uStrong<uDelegate*> RotationChanged1;
    uStrong<uDelegate*> TranslationChanged1;
    uStrong<uDelegate*> ZoomFactorChanged1;

    float Rotation();
    void Rotation(float value);
    void add_RotationChanged(uDelegate* value);
    void remove_RotationChanged(uDelegate* value);
    void SetRotation(float value, uObject* origin);
    void SetTranslation(::g::Uno::Float2 value, uObject* origin);
    void SetZoomFactor(float value, uObject* origin);
    ::g::Uno::Float2 Translation();
    void Translation(::g::Uno::Float2 value);
    void add_TranslationChanged(uDelegate* value);
    void remove_TranslationChanged(uDelegate* value);
    float ZoomFactor();
    void ZoomFactor(float value);
    void add_ZoomFactorChanged(uDelegate* value);
    void remove_ZoomFactorChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Elements
