// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Gestures.double2.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl2D;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct CircularRangeBehavior;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class CircularRangeBehavior :149
// {
::g::Fuse::Behavior_type* CircularRangeBehavior_typeof();
void CircularRangeBehavior__ctor_1_fn(CircularRangeBehavior* __this);
void CircularRangeBehavior__Angle_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval);
void CircularRangeBehavior__get_AngleRange_fn(CircularRangeBehavior* __this, ::g::Uno::Float2* __retval);
void CircularRangeBehavior__get_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* __retval);
void CircularRangeBehavior__set_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* value);
void CircularRangeBehavior__get_CurrentRadius_fn(CircularRangeBehavior* __this, double* __retval);
void CircularRangeBehavior__get_DegreesValue_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_DegreesValue_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__add_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value);
void CircularRangeBehavior__remove_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value);
void CircularRangeBehavior__get_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__EndInteraction_fn(CircularRangeBehavior* __this);
void CircularRangeBehavior__get_IsWrapping_fn(CircularRangeBehavior* __this, bool* __retval);
void CircularRangeBehavior__set_IsWrapping_fn(CircularRangeBehavior* __this, bool* value);
void CircularRangeBehavior__LocalVector_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float2* __retval);
void CircularRangeBehavior__get_MaximumRadius_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_MaximumRadius_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__get_MinimumRadius_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_MinimumRadius_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__New1_fn(CircularRangeBehavior** __retval);
void CircularRangeBehavior__OnLostCapture_fn(CircularRangeBehavior* __this);
void CircularRangeBehavior__OnPointerMoved_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args);
void CircularRangeBehavior__OnPointerPressed_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args);
void CircularRangeBehavior__OnPointerReleased_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args);
void CircularRangeBehavior__OnRooted_fn(CircularRangeBehavior* __this, ::g::Fuse::Node* n);
void CircularRangeBehavior__OnUnrooted_fn(CircularRangeBehavior* __this, ::g::Fuse::Node* n);
void CircularRangeBehavior__OnValueChanged_fn(CircularRangeBehavior* __this, uObject* s, uObject* args);
void CircularRangeBehavior__Radius_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval);
void CircularRangeBehavior__SetDegreesValue_fn(CircularRangeBehavior* __this, float* value, uObject* origin);
void CircularRangeBehavior__get_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval);
void CircularRangeBehavior__set_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* value);
void CircularRangeBehavior__UpdateValue_fn(CircularRangeBehavior* __this, double* angle, double* radius);

struct CircularRangeBehavior : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Controls::RangeControl2D*> _binaryRangeControl;
    uStrong< ::g::Fuse::Elements::Element*> _control;
    int _down;
    float _endAngle;
    bool _hard;
    double _initialAngle;
    double _initialRadius;
    ::g::Fuse::Gestures::double2 _initialValue;
    float _maximumRadius;
    float _minimumRadius;
    uStrong< ::g::Fuse::Controls::RangeControl*> _rangeControl;
    float _startAngle;
    bool _wrap;
    uStrong<uDelegate*> DegreesValueChanged1;

    void ctor_1();
    double Angle(::g::Fuse::Input::PointerEventArgs* args);
    ::g::Uno::Float2 AngleRange();
    ::g::Fuse::Gestures::double2 ControlRelativeValue();
    void ControlRelativeValue(::g::Fuse::Gestures::double2 value);
    double CurrentRadius();
    float DegreesValue();
    void DegreesValue(float value);
    void add_DegreesValueChanged(uDelegate* value);
    void remove_DegreesValueChanged(uDelegate* value);
    float EndAngleDegrees();
    void EndAngleDegrees(float value);
    void EndInteraction();
    bool IsWrapping();
    void IsWrapping(bool value);
    ::g::Uno::Float2 LocalVector(::g::Fuse::Input::PointerEventArgs* args);
    float MaximumRadius();
    void MaximumRadius(float value);
    float MinimumRadius();
    void MinimumRadius(float value);
    void OnLostCapture();
    void OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnValueChanged(uObject* s, uObject* args);
    double Radius(::g::Fuse::Input::PointerEventArgs* args);
    void SetDegreesValue(float value, uObject* origin);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    void UpdateValue(double angle, double radius);
    static CircularRangeBehavior* New1();
};
// }

}}} // ::g::Fuse::Gestures
