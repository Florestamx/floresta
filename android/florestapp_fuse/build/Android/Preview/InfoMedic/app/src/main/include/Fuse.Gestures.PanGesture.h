// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.TransformGesture.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{struct PanGesture;}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class PanGesture :274
// {
::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof();
void PanGesture__ctor_2_fn(PanGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void PanGesture__get_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element** __retval);
void PanGesture__set_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element* value);
void PanGesture__get_Constraint_fn(PanGesture* __this, uObject** __retval);
void PanGesture__set_Constraint_fn(PanGesture* __this, uObject* value);
void PanGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, PanGesture** __retval);
void PanGesture__OnEnded_fn(PanGesture* __this);
void PanGesture__OnRooted_fn(PanGesture* __this, ::g::Fuse::Node* n);
void PanGesture__OnStarted_fn(PanGesture* __this);
void PanGesture__OnTranslated_fn(PanGesture* __this, ::g::Uno::Float2* dist);
void PanGesture__OnUnrooted_fn(PanGesture* __this, ::g::Fuse::Node* n);
void PanGesture__OnUpdate_fn(PanGesture* __this);
void PanGesture__get_TranslationConstraint_fn(PanGesture* __this, ::g::Uno::Float4* __retval);
void PanGesture__UpdateConstraint_fn(PanGesture* __this);

struct PanGesture : ::g::Fuse::Gestures::TransformGesture
{
    uStrong< ::g::Fuse::Elements::Element*> _constrainElement;
    ::g::Uno::Float4x4 _invTransform;
    ::g::Uno::Float2 _screenPrevTranslation;
    ::g::Uno::Float2 _screenStartTranslation;
    uStrong<uObject*> _sizeConstraint;
    uStrong< ::g::Fuse::FastMatrix*> _startTransform;
    ::g::Uno::Float2 _startTranslation;

    void ctor_2(::g::Fuse::Elements::InteractiveTransform* target);
    ::g::Fuse::Elements::Element* ConstrainElement();
    void ConstrainElement(::g::Fuse::Elements::Element* value);
    uObject* Constraint();
    void Constraint(uObject* value);
    void OnTranslated(::g::Uno::Float2 dist);
    ::g::Uno::Float4 TranslationConstraint();
    void UpdateConstraint();
    static PanGesture* New1(::g::Fuse::Elements::InteractiveTransform* target);
};
// }

}}} // ::g::Fuse::Gestures
