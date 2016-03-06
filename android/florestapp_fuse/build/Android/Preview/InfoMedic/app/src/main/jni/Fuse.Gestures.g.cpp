// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Physics.BasicBoundedRegion2D.h>
#include <Experimental.Physics.BoundedRegion2D.h>
#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.ElasticForce-1.h>
#include <Experimental.Physics.Friction-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.PointerVelocity-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.RangeControl2D.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.InteractiveTransform.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Gestures.CircularRangeBehavior.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.double2.h>
#include <Fuse.Gestures.DoubleClicked.h>
#include <Fuse.Gestures.DoubleTapped.h>
#include <Fuse.Gestures.DoubleTappedArgs.h>
#include <Fuse.Gestures.DoubleTappedHandler.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.EdgeSwipeAnimation.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.Internal.TwoFinger.h>
#include <Fuse.Gestures.Internal.TwoFingerEventHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerRotateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerTranslateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerZoomHandler.h>
#include <Fuse.Gestures.ISizeConstraint.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LinearRangeBehavior.h>
#include <Fuse.Gestures.LongPressed.h>
#include <Fuse.Gestures.LongPressedArgs.h>
#include <Fuse.Gestures.LongPressedHandler.h>
#include <Fuse.Gestures.PanGesture.h>
#include <Fuse.Gestures.Pressed.h>
#include <Fuse.Gestures.Released.h>
#include <Fuse.Gestures.RotateGesture.h>
#include <Fuse.Gestures.ScrollableGoto.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.Trackball.h>
#include <Fuse.Gestures.Trackball.MoveMode.h>
#include <Fuse.Gestures.TransformGesture.h>
#include <Fuse.Gestures.WhileClickerTrigger.h>
#include <Fuse.Gestures.WhileHovering.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Gestures.WhileSwipeActive.h>
#include <Fuse.Gestures.ZoomGesture.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[9];
static uType* TYPES[78];

namespace g{
namespace Fuse{
namespace Gestures{

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(149)
// -----------------------------------------------------------------------

// public sealed class CircularRangeBehavior :149
// {
::g::Fuse::Behavior_type* CircularRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(CircularRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.CircularRangeBehavior", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)CircularRangeBehavior__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))CircularRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))CircularRangeBehavior__OnUnrooted_fn;
    ::STRINGS[0] = uString::Const(" must be rooted in a RangeControl or BinaryRangeControl");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\Gestures\\$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::double2_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::RangeControl2D_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[15] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[16] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[18] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[19] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[20] = ::g::Uno::Float_typeof();
    type->SetFields(3,
        ::g::Fuse::Controls::RangeControl2D_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _binaryRangeControl), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _control), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _down), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _endAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _hard), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialAngle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialRadius), 0,
        ::g::Fuse::Gestures::double2_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialValue), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _maximumRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _minimumRadius), 0,
        ::g::Fuse::Controls::RangeControl_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _rangeControl), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _wrap), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, DegreesValueChanged1), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_DegreesValue", NULL, (void*)CircularRangeBehavior__get_DegreesValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesValue", NULL, (void*)CircularRangeBehavior__set_DegreesValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__add_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("remove_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__remove_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("get_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsWrapping", NULL, (void*)CircularRangeBehavior__get_IsWrapping_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsWrapping", NULL, (void*)CircularRangeBehavior__set_IsWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaximumRadius", NULL, (void*)CircularRangeBehavior__get_MaximumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaximumRadius", NULL, (void*)CircularRangeBehavior__set_MaximumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MinimumRadius", NULL, (void*)CircularRangeBehavior__get_MinimumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MinimumRadius", NULL, (void*)CircularRangeBehavior__set_MinimumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)CircularRangeBehavior__New1_fn, 0, true, CircularRangeBehavior_typeof(), 0),
        new uFunction("SetDegreesValue", NULL, (void*)CircularRangeBehavior__SetDegreesValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), uObject_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated CircularRangeBehavior() :149
void CircularRangeBehavior__ctor_1_fn(CircularRangeBehavior* __this)
{
    __this->ctor_1();
}

// private double Angle(Fuse.Input.PointerEventArgs args) :285
void CircularRangeBehavior__Angle_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Angle(args);
}

// private float2 get_AngleRange() :326
void CircularRangeBehavior__get_AngleRange_fn(CircularRangeBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AngleRange();
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() :373
void CircularRangeBehavior__get_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* __retval)
{
    *__retval = __this->ControlRelativeValue();
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) :380
void CircularRangeBehavior__set_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* value)
{
    __this->ControlRelativeValue(*value);
}

// private double get_CurrentRadius() :364
void CircularRangeBehavior__get_CurrentRadius_fn(CircularRangeBehavior* __this, double* __retval)
{
    *__retval = __this->CurrentRadius();
}

// public float get_DegreesValue() :393
void CircularRangeBehavior__get_DegreesValue_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->DegreesValue();
}

// public void set_DegreesValue(float value) :398
void CircularRangeBehavior__set_DegreesValue_fn(CircularRangeBehavior* __this, float* value)
{
    __this->DegreesValue(*value);
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) :410
void CircularRangeBehavior__add_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->add_DegreesValueChanged(value);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) :410
void CircularRangeBehavior__remove_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->remove_DegreesValueChanged(value);
}

// public float get_EndAngleDegrees() :168
void CircularRangeBehavior__get_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :169
void CircularRangeBehavior__set_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// private void EndInteraction() :239
void CircularRangeBehavior__EndInteraction_fn(CircularRangeBehavior* __this)
{
    __this->EndInteraction();
}

// public bool get_IsWrapping() :189
void CircularRangeBehavior__get_IsWrapping_fn(CircularRangeBehavior* __this, bool* __retval)
{
    *__retval = __this->IsWrapping();
}

// public void set_IsWrapping(bool value) :190
void CircularRangeBehavior__set_IsWrapping_fn(CircularRangeBehavior* __this, bool* value)
{
    __this->IsWrapping(*value);
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) :273
void CircularRangeBehavior__LocalVector_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalVector(args);
}

// public float get_MaximumRadius() :182
void CircularRangeBehavior__get_MaximumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MaximumRadius();
}

// public void set_MaximumRadius(float value) :183
void CircularRangeBehavior__set_MaximumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MaximumRadius(*value);
}

// public float get_MinimumRadius() :175
void CircularRangeBehavior__get_MinimumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MinimumRadius();
}

// public void set_MinimumRadius(float value) :176
void CircularRangeBehavior__set_MinimumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MinimumRadius(*value);
}

// public generated CircularRangeBehavior New() :149
void CircularRangeBehavior__New1_fn(CircularRangeBehavior** __retval)
{
    *__retval = CircularRangeBehavior::New1();
}

// private void OnLostCapture() :230
void CircularRangeBehavior__OnLostCapture_fn(CircularRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) :294
void CircularRangeBehavior__OnPointerMoved_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(s, args);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) :252
void CircularRangeBehavior__OnPointerPressed_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(s, args);
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) :315
void CircularRangeBehavior__OnPointerReleased_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(s, args);
}

// protected override sealed void OnRooted(Fuse.Node n) :193
void CircularRangeBehavior__OnRooted_fn(CircularRangeBehavior* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->_control = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[4/*Fuse.Elements.Element*/]);
    __this->_rangeControl = uAs< ::g::Fuse::Controls::RangeControl*>(__this->ParentNode(), ::TYPES[5/*Fuse.Controls.RangeControl*/]);
    __this->_binaryRangeControl = uAs< ::g::Fuse::Controls::RangeControl2D*>(__this->ParentNode(), ::TYPES[7/*Fuse.Controls.RangeControl2D*/]);

    if ((__this->_rangeControl == NULL) && (__this->_binaryRangeControl == NULL))
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition(__this, ::STRINGS[0/*" must be ro...*/]), __this->ParentNode(), ::STRINGS[1/*"C:\\Program...*/], 203, ::STRINGS[2/*"OnRooted"*/]);
    else
    {
        ::g::Fuse::Input::Pointer::AddHandlers(__this->_control, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)CircularRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)CircularRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)CircularRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

        if (__this->_rangeControl != NULL)
            uPtr(__this->_rangeControl)->add_ValueChanged(uDelegate::New(::TYPES[15/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
        else
            uPtr(__this->_binaryRangeControl)->add_ValueChanged(uDelegate::New(::TYPES[16/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
    }
}

// protected override sealed void OnUnrooted(Fuse.Node n) :216
void CircularRangeBehavior__OnUnrooted_fn(CircularRangeBehavior* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnUnrooted(Fuse.Node)");

    if (__this->_control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->_control, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)CircularRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)CircularRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)CircularRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    if (__this->_rangeControl != NULL)
        uPtr(__this->_rangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[15/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    if (__this->_binaryRangeControl != NULL)
        uPtr(__this->_binaryRangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[16/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    __this->_control = NULL;
    __this->_rangeControl = NULL;
    __this->_binaryRangeControl = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// private void OnValueChanged(object s, object args) :411
void CircularRangeBehavior__OnValueChanged_fn(CircularRangeBehavior* __this, uObject* s, uObject* args)
{
    __this->OnValueChanged(s, args);
}

// private double Radius(Fuse.Input.PointerEventArgs args) :280
void CircularRangeBehavior__Radius_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Radius(args);
}

// public void SetDegreesValue(float value, object origin) :404
void CircularRangeBehavior__SetDegreesValue_fn(CircularRangeBehavior* __this, float* value, uObject* origin)
{
    __this->SetDegreesValue(*value, origin);
}

// public float get_StartAngleDegrees() :161
void CircularRangeBehavior__get_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :162
void CircularRangeBehavior__set_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// private void UpdateValue(double angle, double radius) :342
void CircularRangeBehavior__UpdateValue_fn(CircularRangeBehavior* __this, double* angle, double* radius)
{
    __this->UpdateValue(*angle, *radius);
}

// public generated CircularRangeBehavior() [instance] :149
void CircularRangeBehavior::ctor_1()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", ".ctor()");
    _startAngle = 0.0f;
    _endAngle = 6.28318548f;
    _minimumRadius = 0.0f;
    _maximumRadius = 1.0f;
    _down = -1;
    ctor_();
}

// private double Angle(Fuse.Input.PointerEventArgs args) [instance] :285
double CircularRangeBehavior::Angle(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Angle(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 o = LocalVector(args);
    float a = ::g::Uno::Math::Atan22(o.Y, o.X);

    if (a < 0.0f)
        a = a + 6.28318548f;

    return (double)a;
}

// private float2 get_AngleRange() [instance] :326
::g::Uno::Float2 CircularRangeBehavior::AngleRange()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_AngleRange()");
    float s = _startAngle;
    float e = _endAngle;
    bool low = s < e;
    s = ::g::Uno::Math::Mod1(s, 6.28318548f);
    e = ::g::Uno::Math::Mod1(e, 6.28318548f);

    if (low && (s > (e - 1e-05f)))
        s = s - 6.28318548f;
    else if (!low && (s < (e + 1e-05f)))
        s = s + 6.28318548f;

    return ::g::Uno::Float2__New2(s, e);
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() [instance] :373
::g::Fuse::Gestures::double2 CircularRangeBehavior::ControlRelativeValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_ControlRelativeValue()");

    if (_rangeControl != NULL)
        return ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->RelativeValue(), 0.0);
    else
        return ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->RelativeValue());
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) [instance] :380
void CircularRangeBehavior::ControlRelativeValue(::g::Fuse::Gestures::double2 value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_ControlRelativeValue(Fuse.Gestures.double2)");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->RelativeValue(value.X);
    else
        uPtr(_binaryRangeControl)->RelativeValue(value.AsFloat2());
}

// private double get_CurrentRadius() [instance] :364
double CircularRangeBehavior::CurrentRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_CurrentRadius()");
    return (((ControlRelativeValue().Y * (double)(MaximumRadius() - MinimumRadius())) + (double)MinimumRadius()) * (double)uPtr(_control)->ActualSize().X) / 2.0;
}

// public float get_DegreesValue() [instance] :393
float CircularRangeBehavior::DegreesValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_DegreesValue()");
    ::g::Uno::Float2 range = AngleRange();
    return (float)::g::Uno::Math::RadiansToDegrees((ControlRelativeValue().X * (double)(range.Y - range.X)) + (double)range.X);
}

// public void set_DegreesValue(float value) [instance] :398
void CircularRangeBehavior::DegreesValue(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_DegreesValue(float)");
    UpdateValue((double)(((value / 360.0f) * 3.14159274f) * 2.0f), CurrentRadius());
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :410
void CircularRangeBehavior::add_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DegreesValueChanged1, value), ::TYPES[18/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :410
void CircularRangeBehavior::remove_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DegreesValueChanged1, value), ::TYPES[18/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public float get_EndAngleDegrees() [instance] :168
float CircularRangeBehavior::EndAngleDegrees()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_EndAngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :169
void CircularRangeBehavior::EndAngleDegrees(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_EndAngleDegrees(float)");
    _endAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void EndInteraction() [instance] :239
void CircularRangeBehavior::EndInteraction()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "EndInteraction()");
    _down = -1;
    _hard = false;
    uPtr(_control)->EndInteraction(this);
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
}

// public bool get_IsWrapping() [instance] :189
bool CircularRangeBehavior::IsWrapping()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_IsWrapping()");
    return _wrap;
}

// public void set_IsWrapping(bool value) [instance] :190
void CircularRangeBehavior::IsWrapping(bool value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_IsWrapping(bool)");
    _wrap = value;
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) [instance] :273
::g::Uno::Float2 CircularRangeBehavior::LocalVector(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "LocalVector(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 l = uPtr(_control)->WindowToLocal(uPtr(args)->WindowPoint());
    ::g::Uno::Float2 o = ::g::Uno::Float2__op_Subtraction2(l, ::g::Uno::Float2__op_Division1(uPtr(_control)->ActualSize(), 2.0f));
    return o;
}

// public float get_MaximumRadius() [instance] :182
float CircularRangeBehavior::MaximumRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_MaximumRadius()");
    return _maximumRadius;
}

// public void set_MaximumRadius(float value) [instance] :183
void CircularRangeBehavior::MaximumRadius(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_MaximumRadius(float)");
    _maximumRadius = value;
}

// public float get_MinimumRadius() [instance] :175
float CircularRangeBehavior::MinimumRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_MinimumRadius()");
    return _minimumRadius;
}

// public void set_MinimumRadius(float value) [instance] :176
void CircularRangeBehavior::MinimumRadius(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_MinimumRadius(float)");
    _minimumRadius = value;
}

// private void OnLostCapture() [instance] :230
void CircularRangeBehavior::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnLostCapture()");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->Value(_initialValue.X);
    else
        uPtr(_binaryRangeControl)->Value(_initialValue.AsFloat2());

    EndInteraction();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) [instance] :294
void CircularRangeBehavior::OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    double radius = Radius(args);
    double angle = Angle(args);

    if (!_hard && ((::g::Uno::Math::Abs(angle - _initialAngle) > 0.0872664600610733) || (::g::Uno::Math::Abs(radius - _initialRadius) > 5.0)))
    {
        if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this), NULL))
            OnLostCapture();
        else
            _hard = true;
    }

    if (_hard)
        UpdateValue(angle, radius);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) [instance] :252
void CircularRangeBehavior::OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_down != -1)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this), NULL))
    {
        ::g::Fuse::Input::Focus::GiveTo(_control);
        uPtr(_control)->BeginInteraction(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this));
        _down = uPtr(args)->PointIndex();

        if (_rangeControl != NULL)
            _initialValue = ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->Value(), 0.0);
        else
            _initialValue = ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->Value());

        _initialAngle = Angle(args);
        _initialRadius = Radius(args);
    }
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) [instance] :315
void CircularRangeBehavior::OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    UpdateValue(Angle(args), Radius(args));
    EndInteraction();
}

// private void OnValueChanged(object s, object args) [instance] :411
void CircularRangeBehavior::OnValueChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnValueChanged(object,object)");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(DegreesValueChanged1, NULL))
        uPtr(DegreesValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[19/*Uno.UX.ValueChangedArgs<float>*/], uCRef(DegreesValue()), this, &ret2), ret2));
}

// private double Radius(Fuse.Input.PointerEventArgs args) [instance] :280
double CircularRangeBehavior::Radius(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Radius(Fuse.Input.PointerEventArgs)");
    return (double)::g::Uno::Vector::Length(LocalVector(args));
}

// public void SetDegreesValue(float value, object origin) [instance] :404
void CircularRangeBehavior::SetDegreesValue(float value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "SetDegreesValue(float,object)");
    DegreesValue(value);
}

// public float get_StartAngleDegrees() [instance] :161
float CircularRangeBehavior::StartAngleDegrees()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_StartAngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :162
void CircularRangeBehavior::StartAngleDegrees(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_StartAngleDegrees(float)");
    _startAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void UpdateValue(double angle, double radius) [instance] :342
void CircularRangeBehavior::UpdateValue(double angle, double radius)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "UpdateValue(double,double)");
    ::g::Uno::Float2 step = (_rangeControl != NULL) ? ::g::Uno::Float2__New2((float)uPtr(_rangeControl)->RelativeUserStep(), 0.0f) : uPtr(_binaryRangeControl)->RelativeUserStep();
    ::g::Uno::Float2 range = AngleRange();
    double rel = ::g::Uno::Math::Mod(angle - (double)range.X, 6.2831854820251465) / (double)(range.Y - range.X);

    if (step.X > 1e-05f)
        rel = ::g::Uno::Math::Round(rel / (double)step.X) * (double)step.X;

    if (IsWrapping() && (rel > 0.99998998641967773))
        rel = 0.0;

    double relRad = radius / (double)(uPtr(_control)->ActualSize().X / 2.0f);
    double xRad = (relRad - (double)MinimumRadius()) / (double)(MaximumRadius() - MinimumRadius());

    if (step.Y > 1e-05f)
        xRad = ::g::Uno::Math::Round(xRad / (double)step.Y) * (double)step.Y;

    ControlRelativeValue(::g::Fuse::Gestures::double2__New1(rel, xRad));
}

// public generated CircularRangeBehavior New() [static] :149
CircularRangeBehavior* CircularRangeBehavior::New1()
{
    CircularRangeBehavior* obj1 = (CircularRangeBehavior*)uNew(CircularRangeBehavior_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(16)
// -------------------------------------------------------------

// public sealed class Clicked :16
// {
::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)Clicked__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Clicked__OnUnrooted_fn;
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[22] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[23] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[24] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicked, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddHandler", NULL, (void*)Clicked__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("add_Handler", NULL, (void*)Clicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Clicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Clicked__New1_fn, 0, true, Clicked_typeof(), 0),
        new uFunction("RemoveHandler", NULL, (void*)Clicked__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Gestures::ClickedHandler_typeof()));
    return type;
}

// public generated Clicked() :16
void Clicked__ctor_3_fn(Clicked* __this)
{
    __this->ctor_3();
}

// public static void AddHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) :30
void Clicked__AddHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked::AddHandler(node, handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Node n) :18
void Clicked__GetClicked_fn(::g::Fuse::Node* n, Clicked** __retval)
{
    *__retval = Clicked::GetClicked(n);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :43
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :43
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :16
void Clicked__New1_fn(Clicked** __retval)
{
    *__retval = Clicked::New1();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :57
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :45
void Clicked__OnRooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :51
void Clicked__OnUnrooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public static void RemoveHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) :37
void Clicked__RemoveHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked::RemoveHandler(node, handler);
}

// public generated Clicked() [instance] :16
void Clicked::ctor_3()
{
    uStackFrame __("Fuse.Gestures.Clicked", ".ctor()");
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :43
void Clicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[22/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :43
void Clicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[22/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :57
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, ParentNode()));
}

// public static void AddHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) [static] :30
void Clicked::AddHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "AddHandler(Fuse.Node,Fuse.Gestures.ClickedHandler)");
    Clicked* c = Clicked::GetClicked(node);
    uPtr(c)->add_Handler(handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Node n) [static] :18
Clicked* Clicked::GetClicked(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.Clicked", "GetClicked(Fuse.Node)");
    ::g::Fuse::Behavior* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(n)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[11/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[21/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);

        if (uIs(b, Clicked_typeof()))
            return uCast<Clicked*>(b, Clicked_typeof());
    }

    Clicked* c = Clicked::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Behavior*/])), c);
    return c;
}

// public generated Clicked New() [static] :16
Clicked* Clicked::New1()
{
    Clicked* obj2 = (Clicked*)uNew(Clicked_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void RemoveHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) [static] :37
void Clicked::RemoveHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "RemoveHandler(Fuse.Node,Fuse.Gestures.ClickedHandler)");
    Clicked* c = Clicked::GetClicked(node);
    uPtr(c)->remove_Handler(handler);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(9)
// ------------------------------------------------------------

// public sealed class ClickedArgs :9
// {
::g::Fuse::NodeEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClickedArgs__New3_fn, 0, true, ClickedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :11
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :11
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, node);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :11
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Gestures.ClickedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Node)");
    ctor_3(args, node);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :11
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(14)
// -------------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :14
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\Internal\$.uno(47)
// ----------------------------------------------------------------------

// internal sealed class Clicker :47
// {
// static Clicker() :47
static void Clicker__cctor__fn(uType* __type)
{
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

uType* Clicker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_cctor_ = Clicker__cctor__fn;
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[26] = ::g::Fuse::Time_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _clickCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maybeTap), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _node), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _tapCount), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, ClickedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, LongPressedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, PressingEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Clicker::_clickerProperty_, uFieldFlagsStatic);
    return type;
}

// private Clicker(Fuse.Node node) :62
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Node* node)
{
    __this->ctor_(node);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Node elm) :68
void Clicker__AttachClicker_fn(::g::Fuse::Node* elm, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :84
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :236
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :178
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Node node) :62
void Clicker__New1_fn(::g::Fuse::Node* node, Clicker** __retval)
{
    *__retval = Clicker::New1(node);
}

// private void OnLostCapture() :255
void Clicker__OnLostCapture_fn(Clicker* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :150
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :120
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :186
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :94
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :101
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// private void OnUpdate(object s, object a) :225
void Clicker__OnUpdate_fn(Clicker* __this, uObject* s, uObject* a)
{
    __this->OnUpdate(s, a);
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :246
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Node node) [instance] :62
void Clicker::ctor_(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Gestures.Clicker", ".ctor(Fuse.Node)");
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _down = -1;
    _node = node;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::add_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :84
void Clicker::Detach()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Detach()");
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_node)->Properties())->Clear(Clicker::_clickerProperty());
    }
}

// private void DoneCapture() [instance] :236
void Clicker::DoneCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "DoneCapture()");
    _down = -1;
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :178
bool Clicker::NeedCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "NeedCapture()");
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnLostCapture() [instance] :255
void Clicker::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnLostCapture()");
    DoneCapture();
    _tapCount = 0;
    _clickCount = 0;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :150
void Clicker::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _startCoord));
    double deltaTime = ::g::Fuse::Time::FrameTime() - _startTime;

    if ((distance > _maxTapDistanceMoved) || (deltaTime > (double)_maxTapTimeHeld))
        _maybeTap = false;

    if (!NeedCapture())
    {
        uPtr(args)->ReleaseSoftCapture(this);
        DoneCapture();
    }

    bool hoverNow = uPtr(_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != _hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
            uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        _hovering = hoverNow;
    }

    _lastArgs = args;
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :120
void Clicker::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if ((_down != -1) || !uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Clicker__OnLostCapture_fn, this), NULL))
        return;

    double delta = ::g::Fuse::Time::FrameTime() - _lastUpTime;

    if (delta > (double)_maxDoubleInterval)
    {
        _tapCount = 0;
        _clickCount = 0;
    }

    _down = uPtr(args)->PointIndex();
    _startCoord = args->WindowPoint();
    _startTime = ::g::Fuse::Time::FrameTime();
    _maybeTap = true;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL))
    {
        _hasUpdate = true;
        uPtr(_node)->add_Update(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)Clicker__OnUpdate_fn, this));
    }

    if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    _lastArgs = args;
    _hovering = true;
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :186
void Clicker::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    uPtr(args)->ReleaseSoftCapture(this);
    double deltaTime = ::g::Fuse::Time::FrameTime() - _startTime;

    if (_maybeTap && (deltaTime <= (double)_maxTapTimeHeld))
    {
        _tapCount++;

        if (::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL))
            uPtr(TappedEvent1)->Invoke(2, args, uCRef<int>(_tapCount));
    }
    else
        _tapCount = 0;

    bool hoverNow = uPtr(_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        _clickCount++;

        if (::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL))
            uPtr(ClickedEvent1)->Invoke(2, args, uCRef<int>(_clickCount));
    }
    else
        _clickCount = 0;

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    _hovering = false;
    DoneCapture();
    _lastUpTime = ::g::Fuse::Time::FrameTime();
    _lastArgs = args;
}

// private void OnRooted() [instance] :94
void Clicker::OnRooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnRooted()");
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :101
void Clicker::OnUnrooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnUnrooted()");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUpdate(object s, object a) [instance] :225
void Clicker::OnUpdate(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnUpdate(object,object)");
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseSoftCapture(_down, this);
        DoneCapture();
    }
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::add_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::remove_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :246
void Clicker::ReleaseUpdate()
{
    uStackFrame __("Fuse.Gestures.Clicker", "ReleaseUpdate()");

    if (_hasUpdate)
    {
        uPtr(_node)->remove_Update(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)Clicker__OnUpdate_fn, this));
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::add_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::remove_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Node elm) [static] :68
Clicker* Clicker::AttachClicker(::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Gestures.Clicker", "AttachClicker(Fuse.Node)");
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty(), &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty(), nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Node node) [static] :62
Clicker* Clicker::New1(::g::Fuse::Node* node)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(node);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\Internal\$.uno(11)
// ----------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :11
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\Internal\$.uno(13)
// ----------------------------------------------------------------------

// public abstract class ClickerTrigger :13
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::ClickerTrigger, Clicker), 0);
    return type;
}

// protected generated ClickerTrigger() :13
void ClickerTrigger__ctor_2_fn(ClickerTrigger* __this)
{
    __this->ctor_2();
}

// protected override void OnRooted(Fuse.Node parentNode) :16
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
}

// protected override void OnUnrooted(Fuse.Node parentNode) :22
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated ClickerTrigger() [instance] :13
void ClickerTrigger::ctor_2()
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", ".ctor()");
    ctor_1();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\Internal\$.uno(578)
// -----------------------------------------------------------------------

// internal sealed class DegreeSpan :578
// {
uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _b), 0);
    return type;
}

// public DegreeSpan(float a, float b) :583
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :589
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :583
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :583
void DegreeSpan::ctor_(float a, float b)
{
    uStackFrame __("Fuse.Gestures.DegreeSpan", ".ctor(float,float)");
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :589
bool DegreeSpan::IsWithinBounds(float x)
{
    uStackFrame __("Fuse.Gestures.DegreeSpan", "IsWithinBounds(float)");
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :583
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(126)
// -----------------------------------------------------------------------

// internal struct double2 :126
// {
uStructType* double2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(double2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Gestures.double2", options);
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::double2, X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::double2, Y), 0);
    return type;
}

// public double2(double x, double y) :131
void double2__ctor__fn(double2* __this, double* x, double* y)
{
    __this->ctor_(*x, *y);
}

// public double2(float2 v) :137
void double2__ctor_1_fn(double2* __this, ::g::Uno::Float2* v)
{
    __this->ctor_1(*v);
}

// public float2 get_AsFloat2() :145
void double2__get_AsFloat2_fn(double2* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AsFloat2();
}

// public double2 New(double x, double y) :131
void double2__New1_fn(double* x, double* y, double2* __retval)
{
    *__retval = double2__New1(*x, *y);
}

// public double2 New(float2 v) :137
void double2__New2_fn(::g::Uno::Float2* v, double2* __retval)
{
    *__retval = double2__New2(*v);
}

// public double2(double x, double y) [instance] :131
void double2::ctor_(double x, double y)
{
    uStackFrame __("Fuse.Gestures.double2", ".ctor(double,double)");
    X = x;
    Y = y;
}

// public double2(float2 v) [instance] :137
void double2::ctor_1(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Gestures.double2", ".ctor(float2)");
    X = (double)v.X;
    Y = (double)v.Y;
}

// public float2 get_AsFloat2() [instance] :145
::g::Uno::Float2 double2::AsFloat2()
{
    uStackFrame __("Fuse.Gestures.double2", "get_AsFloat2()");
    return ::g::Uno::Float2__New2((float)X, (float)Y);
}

// public double2 New(double x, double y) [static] :131
double2 double2__New1(double x, double y)
{
    double2 obj1;
    obj1.ctor_(x, y);
    return obj1;
}

// public double2 New(float2 v) [static] :137
double2 double2__New2(::g::Uno::Float2 v)
{
    double2 obj2;
    obj2.ctor_1(v);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(65)
// -------------------------------------------------------------

// public sealed class DoubleClicked :65
// {
::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(DoubleClicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleClicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)DoubleClicked__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleClicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleClicked__OnUnrooted_fn;
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[22] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[23] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[24] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::DoubleClicked, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)DoubleClicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)DoubleClicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)DoubleClicked__New1_fn, 0, true, DoubleClicked_typeof(), 0));
    return type;
}

// public generated DoubleClicked() :65
void DoubleClicked__ctor_3_fn(DoubleClicked* __this)
{
    __this->ctor_3();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :67
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :67
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated DoubleClicked New() :65
void DoubleClicked__New1_fn(DoubleClicked** __retval)
{
    *__retval = DoubleClicked::New1();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :81
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :69
void DoubleClicked__OnRooted_fn(DoubleClicked* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :75
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public generated DoubleClicked() [instance] :65
void DoubleClicked::ctor_3()
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", ".ctor()");
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :67
void DoubleClicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[22/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :67
void DoubleClicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[22/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :81
void DoubleClicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (clickCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, ParentNode()));
}

// public generated DoubleClicked New() [static] :65
DoubleClicked* DoubleClicked::New1()
{
    DoubleClicked* obj1 = (DoubleClicked*)uNew(DoubleClicked_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1041)
// ---------------------------------------------------------------

// public sealed class DoubleTapped :1041
// {
::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(DoubleTapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleTapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)DoubleTapped__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleTapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleTapped__OnUnrooted_fn;
    ::TYPES[23] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[24] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[29] = ::g::Fuse::Gestures::DoubleTappedHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::DoubleTappedHandler_typeof(), offsetof(::g::Fuse::Gestures::DoubleTapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)DoubleTapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)DoubleTapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New1_fn, 0, true, DoubleTapped_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New2_fn, 0, true, DoubleTapped_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()));
    return type;
}

// public DoubleTapped() :1045
void DoubleTapped__ctor_3_fn(DoubleTapped* __this)
{
    __this->ctor_3();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) :1047
void DoubleTapped__ctor_4_fn(DoubleTapped* __this, uDelegate* handler)
{
    __this->ctor_4(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) :1043
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) :1043
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public DoubleTapped New() :1045
void DoubleTapped__New1_fn(DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New1();
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) :1047
void DoubleTapped__New2_fn(uDelegate* handler, DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New2(handler);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1052
void DoubleTapped__OnRooted_fn(DoubleTapped* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1064
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1058
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public DoubleTapped() [instance] :1045
void DoubleTapped::ctor_3()
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", ".ctor()");
    ctor_2();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) [instance] :1047
void DoubleTapped::ctor_4(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", ".ctor(Fuse.Gestures.DoubleTappedHandler)");
    ctor_2();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :1043
void DoubleTapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "add_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[29/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :1043
void DoubleTapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "remove_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[29/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1064
void DoubleTapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");

    if (tapCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::DoubleTappedArgs*)::g::Fuse::Gestures::DoubleTappedArgs::New3(args, ParentNode()));
}

// public DoubleTapped New() [static] :1045
DoubleTapped* DoubleTapped::New1()
{
    DoubleTapped* obj1 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj1->ctor_3();
    return obj1;
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) [static] :1047
DoubleTapped* DoubleTapped::New2(uDelegate* handler)
{
    DoubleTapped* obj2 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj2->ctor_4(handler);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1031)
// ---------------------------------------------------------------

// public sealed class DoubleTappedArgs :1031
// {
::g::Fuse::NodeEventArgs_type* DoubleTappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleTappedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.DoubleTappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleTappedArgs__New3_fn, 0, true, DoubleTappedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :1033
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :1033
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, DoubleTappedArgs** __retval)
{
    *__retval = DoubleTappedArgs::New3(args, node);
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :1033
void DoubleTappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Gestures.DoubleTappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Node)");
    ctor_3(args, node);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :1033
DoubleTappedArgs* DoubleTappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    DoubleTappedArgs* obj1 = (DoubleTappedArgs*)uNew(DoubleTappedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1039)
// ---------------------------------------------------------------

// public delegate void DoubleTappedHandler(object sender, Fuse.Gestures.DoubleTappedArgs args) :1039
uDelegateType* DoubleTappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.DoubleTappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::DoubleTappedArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1409)
// ---------------------------------------------------------------

// public enum Edge :1409
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1417)
// ---------------------------------------------------------------

// public sealed class EdgeSwipeAnimation :1417
// {
::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(EdgeSwipeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.EdgeSwipeAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)EdgeSwipeAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeSwipeAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeSwipeAnimation__OnUnrooted_fn;
    ::STRINGS[3] = uString::Const("EdgeSwipeAnimation must be attached to an Element");
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[30] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    ::TYPES[31] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    type->SetFields(15,
        ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), offsetof(::g::Fuse::Gestures::EdgeSwipeAnimation, _swiper), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Disable", NULL, (void*)EdgeSwipeAnimation__Disable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Edge", NULL, (void*)EdgeSwipeAnimation__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)EdgeSwipeAnimation__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__get_EdgeThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__set_EdgeThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Enable", NULL, (void*)EdgeSwipeAnimation__Enable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsEnabled", NULL, (void*)EdgeSwipeAnimation__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)EdgeSwipeAnimation__New1_fn, 0, true, EdgeSwipeAnimation_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)EdgeSwipeAnimation__get_Target_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)EdgeSwipeAnimation__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}

// public generated EdgeSwipeAnimation() :1417
void EdgeSwipeAnimation__ctor_2_fn(EdgeSwipeAnimation* __this)
{
    __this->ctor_2();
}

// public void Disable() :1471
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :1424
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :1425
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :1431
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :1432
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :1466
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this)
{
    __this->Enable();
}

// public bool get_IsEnabled() :1478
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public generated EdgeSwipeAnimation New() :1417
void EdgeSwipeAnimation__New1_fn(EdgeSwipeAnimation** __retval)
{
    *__retval = EdgeSwipeAnimation::New1();
}

// private void OnProgressChanged(object s, double progress) :1461
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged1(s, *progress);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1442
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (element == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"EdgeSwipeAn...*/]));

    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->_swiper)->Rooted(element);
    uPtr(__this->_swiper)->Seek(0.0);
    uPtr(__this->_swiper)->add_ProgressChanged(uDelegate::New(::TYPES[31/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1454
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_swiper)->Unrooted();
    uPtr(__this->_swiper)->remove_ProgressChanged(uDelegate::New(::TYPES[31/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Elements.Element get_Target() :1438
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :1439
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public generated EdgeSwipeAnimation() [instance] :1417
void EdgeSwipeAnimation::ctor_2()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", ".ctor()");
    _swiper = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
    ctor_1();
}

// public void Disable() [instance] :1471
void EdgeSwipeAnimation::Disable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Disable()");
    uPtr(_swiper)->Disable();
}

// public Fuse.Gestures.Edge get_Edge() [instance] :1424
int EdgeSwipeAnimation::Edge()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Edge()");
    return uPtr(_swiper)->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :1425
void EdgeSwipeAnimation::Edge(int value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Edge(Fuse.Gestures.Edge)");
    uPtr(_swiper)->Edge(value);
}

// public float get_EdgeThreshold() [instance] :1431
float EdgeSwipeAnimation::EdgeThreshold()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_EdgeThreshold()");
    return uPtr(_swiper)->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) [instance] :1432
void EdgeSwipeAnimation::EdgeThreshold(float value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_EdgeThreshold(float)");
    uPtr(_swiper)->EdgeThreshold(value);
}

// public void Enable() [instance] :1466
void EdgeSwipeAnimation::Enable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Enable()");
    uPtr(_swiper)->Enable();
}

// public bool get_IsEnabled() [instance] :1478
bool EdgeSwipeAnimation::IsEnabled()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_IsEnabled()");
    return uPtr(_swiper)->IsEnabled();
}

// private void OnProgressChanged(object s, double progress) [instance] :1461
void EdgeSwipeAnimation::OnProgressChanged1(uObject* s, double progress)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnProgressChanged(object,double)");
    Seek(progress);
}

// public Fuse.Elements.Element get_Target() [instance] :1438
::g::Fuse::Elements::Element* EdgeSwipeAnimation::Target()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Target()");
    return uPtr(_swiper)->Target();
}

// public void set_Target(Fuse.Elements.Element value) [instance] :1439
void EdgeSwipeAnimation::Target(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Target(Fuse.Elements.Element)");
    uPtr(_swiper)->Target(value);
}

// public generated EdgeSwipeAnimation New() [static] :1417
EdgeSwipeAnimation* EdgeSwipeAnimation::New1()
{
    EdgeSwipeAnimation* obj1 = (EdgeSwipeAnimation*)uNew(EdgeSwipeAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1328)
// ---------------------------------------------------------------

// public abstract interface ISizeConstraint :1328
// {
uInterfaceType* ISizeConstraint_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Gestures.ISizeConstraint", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ContentSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_ContentSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_TrimSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_TrimSize), false, ::g::Uno::Float2_typeof(), 0));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(186)
// --------------------------------------------------------------

// public sealed class KeepFocusInView :186
// {
::g::Fuse::Behavior_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_ctor_ = (void*)KeepFocusInView__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
    ::TYPES[32] = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    ::TYPES[33] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[34] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[35] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepFocusInView__New2_fn, 0, true, KeepFocusInView_typeof(), 0));
    return type;
}

// public generated KeepFocusInView() :186
void KeepFocusInView__ctor_2_fn(KeepFocusInView* __this)
{
    __this->ctor_2();
}

// public generated KeepFocusInView New() :186
void KeepFocusInView__New2_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New2();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :202
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :207
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :188
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[34/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[35/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :195
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[34/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[35/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this, parentNode);
}

// public generated KeepFocusInView() [instance] :186
void KeepFocusInView::ctor_2()
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", ".ctor()");
    ctor_1();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :202
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnGotFocus(object,Fuse.Input.FocusGainedArgs)");
    Target(::g::Fuse::Input::Focus::FocusedNode());
}

// private void OnLostFocus(object s, object a) [instance] :207
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnLostFocus(object,object)");
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :186
KeepFocusInView* KeepFocusInView::New2()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(182)
// --------------------------------------------------------------

// public sealed class KeepInView :182
// {
::g::Fuse::Behavior_type* KeepInView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepInView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_ctor_ = (void*)KeepInView__New2_fn;
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepInView__New2_fn, 0, true, KeepInView_typeof(), 0));
    return type;
}

// public generated KeepInView() :182
void KeepInView__ctor_2_fn(KeepInView* __this)
{
    __this->ctor_2();
}

// public generated KeepInView New() :182
void KeepInView__New2_fn(KeepInView** __retval)
{
    *__retval = KeepInView::New2();
}

// public generated KeepInView() [instance] :182
void KeepInView::ctor_2()
{
    uStackFrame __("Fuse.Gestures.KeepInView", ".ctor()");
    ctor_1();
}

// public generated KeepInView New() [static] :182
KeepInView* KeepInView::New2()
{
    KeepInView* obj1 = (KeepInView*)uNew(KeepInView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(104)
// --------------------------------------------------------------

// public class KeepInViewCommon :104
// {
::g::Fuse::Behavior_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)KeepInViewCommon__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[36] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _attached), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _rootElement), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)KeepInViewCommon__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)KeepInViewCommon__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// internal KeepInViewCommon() :106
void KeepInViewCommon__ctor_1_fn(KeepInViewCommon* __this)
{
    __this->ctor_1();
}

// private void AttachElement() :165
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// internal KeepInViewCommon New() :106
void KeepInViewCommon__New1_fn(KeepInViewCommon** __retval)
{
    *__retval = KeepInViewCommon::New1();
}

// protected override void OnRooted(Fuse.Node parentNode) :133
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[36/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted(Fuse.Node parentNode) :145
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnUnrooted(Fuse.Node)");

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[36/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void ReleaseElement() :156
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :112
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :113
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :175
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :106
void KeepInViewCommon::ctor_1()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", ".ctor()");
    ctor_();
}

// private void AttachElement() [instance] :165
void KeepInViewCommon::AttachElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "AttachElement()");

    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[36/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :156
void KeepInViewCommon::ReleaseElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "ReleaseElement()");

    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[36/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :112
::g::Fuse::Node* KeepInViewCommon::Target()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "get_Target()");
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :113
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "set_Target(Fuse.Node)");
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[4/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    AttachElement();
}

// private void Update(object s, object a) [instance] :175
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "Update(object,object)");

    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}

// internal KeepInViewCommon New() [static] :106
KeepInViewCommon* KeepInViewCommon::New1()
{
    KeepInViewCommon* obj1 = (KeepInViewCommon*)uNew(KeepInViewCommon_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(11)
// ----------------------------------------------------------------------

// public class LinearRangeBehavior :11
// {
// static LinearRangeBehavior() :11
static void LinearRangeBehavior__cctor__fn(uType* __type)
{
    LinearRangeBehavior::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[37/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
}

::g::Fuse::Behavior_type* LinearRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(LinearRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.LinearRangeBehavior", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)LinearRangeBehavior__New1_fn;
    type->fp_cctor_ = LinearRangeBehavior__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LinearRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LinearRangeBehavior__OnUnrooted_fn;
    ::STRINGS[4] = uString::Const(" must be rooted in a RangeControl");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\Gestures\\$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[37] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[5] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(3,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _down), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _initialValue), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _startCoord), 0,
        ::g::Fuse::Controls::RangeControl_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, Control), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_horizontalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LinearRangeBehavior__New1_fn, 0, true, LinearRangeBehavior_typeof(), 0));
    return type;
}

// public generated LinearRangeBehavior() :11
void LinearRangeBehavior__ctor_1_fn(LinearRangeBehavior* __this)
{
    __this->ctor_1();
}

// public generated LinearRangeBehavior New() :11
void LinearRangeBehavior__New1_fn(LinearRangeBehavior** __retval)
{
    *__retval = LinearRangeBehavior::New1();
}

// private void OnLostCapture() :39
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) :66
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    __this->OnPointerMoved(sender, c);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) :50
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    __this->OnPointerPressed(sender, c);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) :82
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    __this->OnPointerReleased(sender, c);
}

// protected override sealed void OnRooted(Fuse.Node n) :15
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->Control = uAs< ::g::Fuse::Controls::RangeControl*>(__this->ParentNode(), ::TYPES[5/*Fuse.Controls.RangeControl*/]);

    if (__this->Control == NULL)
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition(__this, ::STRINGS[4/*" must be ro...*/]), __this->ParentNode(), ::STRINGS[1/*"C:\\Program...*/], 21, ::STRINGS[2/*"OnRooted"*/]);

    ::g::Fuse::Input::Pointer::AddHandlers(__this->Control, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted(Fuse.Node n) :26
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnUnrooted(Fuse.Node)");

    if (__this->Control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->Control, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    __this->Control = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// private double PositionToValue(float2 pos) :106
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval)
{
    *__retval = __this->PositionToValue(*pos);
}

// private void UpdateValue(float2 pos) :101
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos)
{
    __this->UpdateValue(*pos);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_horizontalGesture_;

// public generated LinearRangeBehavior() [instance] :11
void LinearRangeBehavior::ctor_1()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", ".ctor()");
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _initialValue = 0.0;
    _down = -1;
    ctor_();
}

// private void OnLostCapture() [instance] :39
void LinearRangeBehavior::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnLostCapture()");
    _down = -1;
    uPtr(Control)->Value(_initialValue);
    uPtr(Control)->EndInteraction(this);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) [instance] :66
void LinearRangeBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        if (uPtr(LinearRangeBehavior::_horizontalGesture())->IsWithinBounds(::g::Uno::Float2__op_Subtraction2(uPtr(c)->WindowPoint(), _startCoord)))
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL);
    }
    else if (uPtr(c)->IsHardCapturedTo(this))
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) [instance] :50
void LinearRangeBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_down == -1)
    {
        if (uPtr(c)->TrySoftCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL))
        {
            ::g::Fuse::Input::Focus::GiveTo(Control);
            uPtr(Control)->BeginInteraction(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this));
            _startCoord = uPtr(c)->WindowPoint();
            _down = c->PointIndex();
            _initialValue = uPtr(Control)->Value();
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) [instance] :82
void LinearRangeBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsHardCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseHardCapture(this);
    }

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseSoftCapture(this);
    }

    uPtr(Control)->EndInteraction(this);
    _down = -1;
}

// private double PositionToValue(float2 pos) [instance] :106
double LinearRangeBehavior::PositionToValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "PositionToValue(float2)");
    return (double)(pos.X / uPtr(Control)->ActualSize().X);
}

// private void UpdateValue(float2 pos) [instance] :101
void LinearRangeBehavior::UpdateValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "UpdateValue(float2)");
    uPtr(Control)->RelativeValue(PositionToValue(pos));
}

// public generated LinearRangeBehavior New() [static] :11
LinearRangeBehavior* LinearRangeBehavior::New1()
{
    LinearRangeBehavior* obj1 = (LinearRangeBehavior*)uNew(LinearRangeBehavior_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(233)
// --------------------------------------------------------------

// public sealed class LongPressed :233
// {
::g::Fuse::Triggers::Trigger_type* LongPressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(LongPressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.LongPressed", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)LongPressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LongPressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LongPressed__OnUnrooted_fn;
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[38] = ::g::Fuse::Gestures::LongPressedHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[23] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[24] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::LongPressedHandler_typeof(), offsetof(::g::Fuse::Gestures::LongPressed, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)LongPressed__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::LongPressedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)LongPressed__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::LongPressedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)LongPressed__New1_fn, 0, true, LongPressed_typeof(), 0));
    return type;
}

// public generated LongPressed() :233
void LongPressed__ctor_3_fn(LongPressed* __this)
{
    __this->ctor_3();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) :235
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) :235
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated LongPressed New() :233
void LongPressed__New1_fn(LongPressed** __retval)
{
    *__retval = LongPressed::New1();
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) :249
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnLongPressed(args, *count);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :237
void LongPressed__OnRooted_fn(LongPressed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_LongPressedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :243
void LongPressed__OnUnrooted_fn(LongPressed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->remove_LongPressedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public generated LongPressed() [instance] :233
void LongPressed::ctor_3()
{
    uStackFrame __("Fuse.Gestures.LongPressed", ".ctor()");
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :235
void LongPressed::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "add_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[38/*Fuse.Gestures.LongPressedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :235
void LongPressed::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "remove_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[38/*Fuse.Gestures.LongPressedHandler*/]);
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) [instance] :249
void LongPressed::OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnLongPressed(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::LongPressedArgs*)::g::Fuse::Gestures::LongPressedArgs::New3(args, ParentNode()));
}

// public generated LongPressed New() [static] :233
LongPressed* LongPressed::New1()
{
    LongPressed* obj1 = (LongPressed*)uNew(LongPressed_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(223)
// --------------------------------------------------------------

// public sealed class LongPressedArgs :223
// {
::g::Fuse::NodeEventArgs_type* LongPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LongPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.LongPressedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LongPressedArgs__New3_fn, 0, true, LongPressedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :225
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :225
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, LongPressedArgs** __retval)
{
    *__retval = LongPressedArgs::New3(args, node);
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :225
void LongPressedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Gestures.LongPressedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Node)");
    ctor_3(args, node);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :225
LongPressedArgs* LongPressedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    LongPressedArgs* obj1 = (LongPressedArgs*)uNew(LongPressedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(231)
// --------------------------------------------------------------

// public delegate void LongPressedHandler(object sender, Fuse.Gestures.LongPressedArgs args) :231
uDelegateType* LongPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.LongPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::LongPressedArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1090)
// ---------------------------------------------------------------

// private enum Trackball.MoveMode :1090
uEnumType* Trackball__MoveMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Trackball.MoveMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Stop", 0LL,
        "Attraction", 1LL,
        "Friction", 2LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(824)
// -----------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :824
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(274)
// --------------------------------------------------------------

// public sealed class PanGesture :274
// {
::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(PanGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.PanGesture", options);
    type->SetBase(::g::Fuse::Gestures::TransformGesture_typeof());
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PanGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PanGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnUpdate_fn;
    ::TYPES[39] = ::g::Fuse::Gestures::TransformGesture_typeof();
    ::TYPES[40] = ::g::Fuse::Gestures::Internal::TwoFinger_typeof();
    ::TYPES[41] = ::g::Fuse::Gestures::Internal::TwoFingerTranslateHandler_typeof();
    ::TYPES[42] = ::g::Fuse::Elements::InteractiveTransform_typeof();
    ::TYPES[43] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[44] = ::g::Uno::Float4_typeof();
    ::TYPES[45] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[46] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[47] = ::g::Fuse::Gestures::ISizeConstraint_typeof();
    ::TYPES[48] = ::g::Uno::Rect_typeof();
    type->SetFields(7,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _constrainElement), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _invTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _screenPrevTranslation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _screenStartTranslation), 0,
        ::g::Fuse::Gestures::ISizeConstraint_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _sizeConstraint), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _startTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _startTranslation), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ConstrainElement", NULL, (void*)PanGesture__get_ConstrainElement_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_ConstrainElement", NULL, (void*)PanGesture__set_ConstrainElement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_Constraint", NULL, (void*)PanGesture__get_Constraint_fn, 0, false, ::g::Fuse::Gestures::ISizeConstraint_typeof(), 0),
        new uFunction("set_Constraint", NULL, (void*)PanGesture__set_Constraint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ISizeConstraint_typeof()),
        new uFunction(".ctor", NULL, (void*)PanGesture__New1_fn, 0, true, PanGesture_typeof(), 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
    return type;
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) :277
void PanGesture__ctor_2_fn(PanGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_2(target);
}

// public Fuse.Elements.Element get_ConstrainElement() :389
void PanGesture__get_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->ConstrainElement();
}

// public void set_ConstrainElement(Fuse.Elements.Element value) :390
void PanGesture__set_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->ConstrainElement(value);
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() :399
void PanGesture__get_Constraint_fn(PanGesture* __this, uObject** __retval)
{
    *__retval = __this->Constraint();
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) :400
void PanGesture__set_Constraint_fn(PanGesture* __this, uObject* value)
{
    __this->Constraint(value);
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) :277
void PanGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, PanGesture** __retval)
{
    *__retval = PanGesture::New1(target);
}

// protected override sealed void OnEnded() :313
void PanGesture__OnEnded_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnEnded()");
    ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted(Fuse.Node n) :281
void PanGesture__OnRooted_fn(PanGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this, n);
    uPtr(__this->Impl)->add_Translated(uDelegate::New(::TYPES[41/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
}

// protected override sealed void OnStarted() :298
void PanGesture__OnStarted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnStarted()");
    ::g::Uno::Float4 ind1;
    __this->_startTranslation = uPtr(__this->Target())->Translation();
    __this->_startTransform = ::g::Fuse::FastMatrix::Identity();
    uPtr(__this->Target())->AppendRotationScale(__this->_startTransform);
    __this->_invTransform = ::g::Uno::Matrix::Invert2(uPtr(__this->_startTransform)->Matrix());
    __this->_screenStartTranslation = (__this->_screenPrevTranslation = (ind1 = ::g::Uno::Vector::Transform1(__this->_startTranslation, uPtr(__this->_startTransform)->Matrix()), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(__this->_screenStartTranslation));
    __this->UpdateConstraint();
    ::g::Experimental::Physics::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// private void OnTranslated(float2 dist) :326
void PanGesture__OnTranslated_fn(PanGesture* __this, ::g::Uno::Float2* dist)
{
    __this->OnTranslated(*dist);
}

// protected override sealed void OnUnrooted(Fuse.Node n) :287
void PanGesture__OnUnrooted_fn(PanGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Impl)->remove_Translated(uDelegate::New(::TYPES[41/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this, n);
}

// protected override sealed void OnUpdate() :339
void PanGesture__OnUpdate_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUpdate()");
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float4 ind3 = ::g::Uno::Vector::Transform1((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret6), ret6), __this->_invTransform);
    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(ind3.X, ind3.Y);
    uPtr(__this->Target())->SetTranslation(r, __this);
}

// internal float4 get_TranslationConstraint() :348
void PanGesture__get_TranslationConstraint_fn(PanGesture* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TranslationConstraint();
}

// private void UpdateConstraint() :319
void PanGesture__UpdateConstraint_fn(PanGesture* __this)
{
    __this->UpdateConstraint();
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) [instance] :277
void PanGesture::ctor_2(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.PanGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_1(target);
}

// public Fuse.Elements.Element get_ConstrainElement() [instance] :389
::g::Fuse::Elements::Element* PanGesture::ConstrainElement()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_ConstrainElement()");
    return _constrainElement;
}

// public void set_ConstrainElement(Fuse.Elements.Element value) [instance] :390
void PanGesture::ConstrainElement(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "set_ConstrainElement(Fuse.Elements.Element)");
    _constrainElement = value;
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() [instance] :399
uObject* PanGesture::Constraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_Constraint()");
    return _sizeConstraint;
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) [instance] :400
void PanGesture::Constraint(uObject* value)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "set_Constraint(Fuse.Gestures.ISizeConstraint)");
    _sizeConstraint = value;
}

// private void OnTranslated(float2 dist) [instance] :326
void PanGesture::OnTranslated(::g::Uno::Float2 dist)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnTranslated(float2)");
    ::g::Uno::Float2 ret5;
    UpdateConstraint();
    ::g::Uno::Float2 screen = ::g::Uno::Float2__op_Addition2(_screenStartTranslation, dist);
    ::g::Uno::Float2 step = ::g::Uno::Float2__op_Subtraction2(screen, _screenPrevTranslation);
    ::g::Experimental::Physics::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), step);
    _screenPrevTranslation = screen;
    ::g::Uno::Float4 ind2 = ::g::Uno::Vector::Transform1((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret5), ret5), _invTransform);
    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(ind2.X, ind2.Y);
    uPtr(Target())->SetTranslation(r, this);
}

// internal float4 get_TranslationConstraint() [instance] :348
::g::Uno::Float4 PanGesture::TranslationConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_TranslationConstraint()");
    bool hasSize = false;
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 trimSize = ::g::Uno::Float2__New1(0.0f);

    if (_constrainElement != NULL)
    {
        size = uPtr(_constrainElement)->ActualSize();
        hasSize = true;
    }

    if (_sizeConstraint != NULL)
    {
        size = ::g::Fuse::Gestures::ISizeConstraint::ContentSize(uInterface(uPtr(_sizeConstraint), ::TYPES[47/*Fuse.Gestures.ISizeConstraint*/]));
        trimSize = ::g::Fuse::Gestures::ISizeConstraint::TrimSize(uInterface(uPtr(_sizeConstraint), ::TYPES[47/*Fuse.Gestures.ISizeConstraint*/]));
        hasSize = true;
    }

    if (hasSize)
    {
        ::g::Fuse::FastMatrix* trans = ::g::Fuse::FastMatrix::Identity();
        uPtr(Target())->AppendRotationScale(trans);
        ::g::Uno::Rect rect = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_UnaryNegation(size), 2.0f), size);
        ::g::Uno::Rect bounds = ::g::Uno::Rect__Transform(rect, uPtr(trans)->Matrix());
        ::g::Uno::Float2 full = bounds.Maximum();
        ::g::Uno::Float2 over = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(full, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(size, trimSize), 2.0f)));
        ::g::Uno::Float4 c = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(over), over);
        return c;
    }

    return ::g::Uno::Float4__New2(-FLT_INF, -FLT_INF, FLT_INF, FLT_INF);
}

// private void UpdateConstraint() [instance] :319
void PanGesture::UpdateConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "UpdateConstraint()");
    ::g::Uno::Float4 c = TranslationConstraint();
    ::g::Experimental::Physics::BoundedRegion2D::MinPosition(uInterface(uPtr(Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.X, c.Y));
    ::g::Experimental::Physics::BoundedRegion2D::MaxPosition(uInterface(uPtr(Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.Z, c.W));
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) [static] :277
PanGesture* PanGesture::New1(::g::Fuse::Elements::InteractiveTransform* target)
{
    PanGesture* obj4 = (PanGesture*)uNew(PanGesture_typeof());
    obj4->ctor_2(target);
    return obj4;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(417)
// --------------------------------------------------------------

// public sealed class Pressed :417
// {
::g::Fuse::Triggers::Trigger_type* Pressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(Pressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Pressed", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Pressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Pressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Pressed__OnUnrooted_fn;
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pressed__New1_fn, 0, true, Pressed_typeof(), 0));
    return type;
}

// public generated Pressed() :417
void Pressed__ctor_2_fn(Pressed* __this)
{
    __this->ctor_2();
}

// public generated Pressed New() :417
void Pressed__New1_fn(Pressed** __retval)
{
    *__retval = Pressed::New1();
}

// private void OnPressed(object s, object a) :431
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a)
{
    __this->OnPressed(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :419
void Pressed__OnRooted_fn(Pressed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :425
void Pressed__OnUnrooted_fn(Pressed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Pressed() [instance] :417
void Pressed::ctor_2()
{
    uStackFrame __("Fuse.Gestures.Pressed", ".ctor()");
    ctor_1();
}

// private void OnPressed(object s, object a) [instance] :431
void Pressed::OnPressed(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnPressed(object,object)");
    Pulse();
}

// public generated Pressed New() [static] :417
Pressed* Pressed::New1()
{
    Pressed* obj1 = (Pressed*)uNew(Pressed_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(528)
// --------------------------------------------------------------

// public sealed class Released :528
// {
::g::Fuse::Triggers::Trigger_type* Released_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(Released);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Released", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Released__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Released__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Released__OnUnrooted_fn;
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Released__New1_fn, 0, true, Released_typeof(), 0));
    return type;
}

// public generated Released() :528
void Released__ctor_2_fn(Released* __this)
{
    __this->ctor_2();
}

// public generated Released New() :528
void Released__New1_fn(Released** __retval)
{
    *__retval = Released::New1();
}

// private void OnReleased(object s, object a) :542
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a)
{
    __this->OnReleased(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :530
void Released__OnRooted_fn(Released* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Released", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :536
void Released__OnUnrooted_fn(Released* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Released", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Released() [instance] :528
void Released::ctor_2()
{
    uStackFrame __("Fuse.Gestures.Released", ".ctor()");
    ctor_1();
}

// private void OnReleased(object s, object a) [instance] :542
void Released::OnReleased(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Released", "OnReleased(object,object)");
    Pulse();
}

// public generated Released New() [static] :528
Released* Released::New1()
{
    Released* obj1 = (Released*)uNew(Released_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(565)
// --------------------------------------------------------------

// public sealed class RotateGesture :565
// {
::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(RotateGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.RotateGesture", options);
    type->SetBase(::g::Fuse::Gestures::TransformGesture_typeof());
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RotateGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RotateGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnUpdate_fn;
    ::TYPES[39] = ::g::Fuse::Gestures::TransformGesture_typeof();
    ::TYPES[46] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[40] = ::g::Fuse::Gestures::Internal::TwoFinger_typeof();
    ::TYPES[49] = ::g::Fuse::Gestures::Internal::TwoFingerRotateHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[42] = ::g::Fuse::Elements::InteractiveTransform_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[45] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetFields(7,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::RotateGesture, _startRotation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::RotateGesture, _Step), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)RotateGesture__New1_fn, 0, true, RotateGesture_typeof(), 1, ::g::Fuse::Elements::InteractiveTransform_typeof()),
        new uFunction("get_Step", NULL, (void*)RotateGesture__get_Step_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Step", NULL, (void*)RotateGesture__set_Step_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StepDegrees", NULL, (void*)RotateGesture__get_StepDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StepDegrees", NULL, (void*)RotateGesture__set_StepDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) :568
void RotateGesture__ctor_2_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_2(target);
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) :568
void RotateGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval)
{
    *__retval = RotateGesture::New1(target);
}

// protected override sealed void OnEnded() :601
void RotateGesture__OnEnded_fn(RotateGesture* __this)
{
}

// protected override sealed void OnRooted(Fuse.Node n) :582
void RotateGesture__OnRooted_fn(RotateGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this, n);
    uPtr(__this->Impl)->add_Rotated(uDelegate::New(::TYPES[49/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
}

// private void OnRotated(float angle) :610
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle)
{
    __this->OnRotated(*angle);
}

// protected override sealed void OnStarted() :595
void RotateGesture__OnStarted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnStarted()");
    __this->_startRotation = uPtr(__this->Target())->Rotation();
    ::g::Experimental::Physics::BoundedRegion2D::Reset(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(__this->_startRotation, 0.0f));
}

// protected override sealed void OnUnrooted(Fuse.Node n) :588
void RotateGesture__OnUnrooted_fn(RotateGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Impl)->remove_Rotated(uDelegate::New(::TYPES[49/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this, n);
}

// protected override sealed void OnUpdate() :605
void RotateGesture__OnUpdate_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->SetRotation((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret2), ret2).X, __this);
}

// public generated float get_Step() :574
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->Step();
}

// public generated void set_Step(float value) :574
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value)
{
    __this->Step(*value);
}

// public float get_StepDegrees() :578
void RotateGesture__get_StepDegrees_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->StepDegrees();
}

// public void set_StepDegrees(float value) :579
void RotateGesture__set_StepDegrees_fn(RotateGesture* __this, float* value)
{
    __this->StepDegrees(*value);
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) [instance] :568
void RotateGesture::ctor_2(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_1(target);
    Region = (uObject*)::g::Experimental::Physics::BasicBoundedRegion2D::CreateAngle();
}

// private void OnRotated(float angle) [instance] :610
void RotateGesture::OnRotated(float angle)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRotated(float)");
    float q = _startRotation + angle;

    if (Step() > 0.0f)
    {
        float s = ::g::Uno::Math::Round2(q / Step()) * Step();
        ::g::Experimental::Physics::BoundedRegion2D::MoveTo(uInterface(uPtr(Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(s, 0.0f));
        CheckNeedUpdate();
    }
    else
        uPtr(Target())->SetRotation(q, this);
}

// public generated float get_Step() [instance] :574
float RotateGesture::Step()
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "get_Step()");
    return _Step;
}

// public generated void set_Step(float value) [instance] :574
void RotateGesture::Step(float value)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "set_Step(float)");
    _Step = value;
}

// public float get_StepDegrees() [instance] :578
float RotateGesture::StepDegrees()
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "get_StepDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(Step());
}

// public void set_StepDegrees(float value) [instance] :579
void RotateGesture::StepDegrees(float value)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "set_StepDegrees(float)");
    Step(::g::Uno::Math::DegreesToRadians1(value));
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) [static] :568
RotateGesture* RotateGesture::New1(::g::Fuse::Elements::InteractiveTransform* target)
{
    RotateGesture* obj1 = (RotateGesture*)uNew(RotateGesture_typeof());
    obj1->ctor_2(target);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(430)
// -----------------------------------------------------------------------

// public sealed class ScrollableGoto :430
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(ScrollableGoto);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollableGoto", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)ScrollableGoto__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollableGoto__Perform_fn;
    ::TYPES[50] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(7,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _hasPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _hasRelativePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)ScrollableGoto__New1_fn, 0, true, ScrollableGoto_typeof(), 0),
        new uFunction("get_Position", NULL, (void*)ScrollableGoto__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)ScrollableGoto__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativePosition", NULL, (void*)ScrollableGoto__get_RelativePosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_RelativePosition", NULL, (void*)ScrollableGoto__set_RelativePosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Target", NULL, (void*)ScrollableGoto__get_Target_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ScrollableGoto__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
    return type;
}

// public generated ScrollableGoto() :430
void ScrollableGoto__ctor_1_fn(ScrollableGoto* __this)
{
    __this->ctor_1();
}

// public generated ScrollableGoto New() :430
void ScrollableGoto__New1_fn(ScrollableGoto** __retval)
{
    *__retval = ScrollableGoto::New1();
}

// protected override sealed void Perform(Fuse.Node target) :458
void ScrollableGoto__Perform_fn(ScrollableGoto* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "Perform(Fuse.Node)");

    if (__this->Target() == NULL)
        return;

    if (__this->_hasRelativePosition)
        uPtr(__this->Target())->Goto(::g::Uno::Float2__op_Addition2(uPtr(__this->Target())->MinScroll(), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(__this->Target())->MaxScroll(), uPtr(__this->Target())->MinScroll()), __this->_relativePosition)));
    else if (__this->_hasPosition)
        uPtr(__this->Target())->Goto(__this->_position);
}

// public float2 get_Position() :438
void ScrollableGoto__get_Position_fn(ScrollableGoto* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :439
void ScrollableGoto__set_Position_fn(ScrollableGoto* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RelativePosition() :450
void ScrollableGoto__get_RelativePosition_fn(ScrollableGoto* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativePosition();
}

// public void set_RelativePosition(float2 value) :451
void ScrollableGoto__set_RelativePosition_fn(ScrollableGoto* __this, ::g::Uno::Float2* value)
{
    __this->RelativePosition(*value);
}

// public generated Fuse.Controls.ScrollView get_Target() :432
void ScrollableGoto__get_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :432
void ScrollableGoto__set_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated ScrollableGoto() [instance] :430
void ScrollableGoto::ctor_1()
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", ".ctor()");
    ctor_();
}

// public float2 get_Position() [instance] :438
::g::Uno::Float2 ScrollableGoto::Position()
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "get_Position()");
    return _position;
}

// public void set_Position(float2 value) [instance] :439
void ScrollableGoto::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "set_Position(float2)");
    _position = value;
    _hasPosition = true;
}

// public float2 get_RelativePosition() [instance] :450
::g::Uno::Float2 ScrollableGoto::RelativePosition()
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "get_RelativePosition()");
    return _relativePosition;
}

// public void set_RelativePosition(float2 value) [instance] :451
void ScrollableGoto::RelativePosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "set_RelativePosition(float2)");
    _relativePosition = value;
    _hasRelativePosition = true;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :432
::g::Fuse::Controls::ScrollView* ScrollableGoto::Target()
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :432
void ScrollableGoto::Target(::g::Fuse::Controls::ScrollView* value)
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", "set_Target(Fuse.Controls.ScrollView)");
    _Target = value;
}

// public generated ScrollableGoto New() [static] :430
ScrollableGoto* ScrollableGoto::New1()
{
    ScrollableGoto* obj1 = (ScrollableGoto*)uNew(ScrollableGoto_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(484)
// -----------------------------------------------------------------------

// public enum ScrollDirections :484
uEnumType* ScrollDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ScrollDirections", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Left", 1LL,
        "Right", 2LL,
        "Up", 4LL,
        "Down", 8LL,
        "Horizontal", 3LL,
        "Vertical", 12LL,
        "Both", 15LL,
        "All", 15LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Gestures\$.uno(496)
// -----------------------------------------------------------------------

// public sealed class Scroller :496
// {
// static Scroller() :496
static void Scroller__cctor__fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[37/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[37/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

::g::Fuse::Behavior_type* Scroller_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Scroller__New1_fn;
    type->fp_cctor_ = Scroller__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    ::STRINGS[5] = uString::Const("Scroller can only be used in a ScrollView");
    ::STRINGS[6] = uString::Const("Invalid tear-down of pointer events");
    ::TYPES[37] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[46] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[51] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[52] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[45] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[50] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[53] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[54] = ::g::Fuse::RequestBringIntoViewArgs_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[55] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Time_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _isHardCapture), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevTime), 0,
        ::g::Experimental::Physics::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _region), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _scrollable), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _userScroll), 0,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("CheckLimits", NULL, (void*)Scroller__CheckLimits_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_DelayStart", NULL, (void*)Scroller__get_DelayStart_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayStart", NULL, (void*)Scroller__set_DelayStart_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Goto", NULL, (void*)Scroller__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Scroller__New1_fn, 0, true, Scroller_typeof(), 0),
        new uFunction("get_OverflowExtent", NULL, (void*)Scroller__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_UserScroll", NULL, (void*)Scroller__get_UserScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserScroll", NULL, (void*)Scroller__set_UserScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public generated Scroller() :496
void Scroller__ctor_1_fn(Scroller* __this)
{
    __this->ctor_1();
}

// public void CheckLimits() :751
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :589
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart() :510
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value) :511
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private void EndInteraction() :661
void Scroller__EndInteraction_fn(Scroller* __this)
{
    __this->EndInteraction();
}

// private float2 FromWindow(float2 p) :649
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public void Goto(float2 position) :776
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) :681
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->HardCapture(args);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags) :831
void Scroller__MoveUser_fn(Scroller* __this, int* flags)
{
    __this->MoveUser(*flags);
}

// public generated Scroller New() :496
void Scroller__New1_fn(Scroller** __retval)
{
    *__retval = Scroller::New1();
}

// private void OnLostCapture() :654
void Scroller__OnLostCapture_fn(Scroller* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :690
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :621
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :726
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :760
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :516
void Scroller__OnRooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->ParentNode(), ::TYPES[50/*Fuse.Controls.ScrollView*/]);

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Scroller ca...*/]));

    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::TYPES[55/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    __this->UpdatePointerEvents(false);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :529
void Scroller__OnUnrooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::TYPES[55/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);
    __this->_scrollable = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdated() :797
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// public float2 get_OverflowExtent() :856
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// private void PerformBringIntoView() :767
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private void SetScrollPosition(float2 position) :806
void Scroller__SetScrollPosition_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->SetScrollPosition(*position);
}

// private void UpdatePointerEvents([bool forceOff]) :562
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :788
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll() :549
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :550
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public generated Scroller() [instance] :496
void Scroller::ctor_1()
{
    uStackFrame __("Fuse.Gestures.Scroller", ".ctor()");
    _region = (uObject*)::g::Experimental::Physics::BasicBoundedRegion2D::CreatePoints();
    _velocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[51/*Experimental.Physics.PointerVelocity<float2>*/]));
    _delayStart = true;
    _userScroll = true;
    _down = -1;
    ctor_();
}

// public void CheckLimits() [instance] :751
void Scroller::CheckLimits()
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckLimits()");
    UpdateScrollMax();

    if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[52/*Experimental.Physics.Simulation*/])))
        ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));

    CheckNeedUpdated(false);
}

// private void CheckNeedUpdated([bool off]) [instance] :589
void Scroller::CheckNeedUpdated(bool off)
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckNeedUpdated([bool])");
    bool needUpdated = !::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[52/*Experimental.Physics.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance] :510
bool Scroller::DelayStart()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_DelayStart()");
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance] :511
void Scroller::DelayStart(bool value)
{
    uStackFrame __("Fuse.Gestures.Scroller", "set_DelayStart(bool)");
    _delayStart = value;
}

// private void EndInteraction() [instance] :661
void Scroller::EndInteraction()
{
    uStackFrame __("Fuse.Gestures.Scroller", "EndInteraction()");
    _down = -1;
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
    uPtr(_scrollable)->EndInteraction(this);
}

// private float2 FromWindow(float2 p) [instance] :649
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Scroller", "FromWindow(float2)");
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :776
void Scroller::Goto(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Goto(float2)");

    if (_scrollable == NULL)
        return;

    UpdateScrollMax();
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
    ::g::Experimental::Physics::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), position);
    CheckNeedUpdated(false);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) [instance] :681
bool Scroller::HardCapture(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "HardCapture(Fuse.Input.PointerEventArgs)");
    _isHardCapture = uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

    if (!_isHardCapture)
        OnLostCapture();

    uPtr(_scrollable)->BeginInteraction(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this));
    return _isHardCapture;
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags) [instance] :831
void Scroller::MoveUser(int flags)
{
    uStackFrame __("Fuse.Gestures.Scroller", "MoveUser(Fuse.Gestures.Scroller.MoveUserFlags)");
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;

    if ((flags & 1) == 1)
    {
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Experimental::Physics::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), diff);
    }

    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((float)elapsed), uCRef(!_isHardCapture));
}

// private void OnLostCapture() [instance] :654
void Scroller::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnLostCapture()");
    EndInteraction();

    if (::g::Experimental::Physics::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/])))
        ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :690
void Scroller::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
        OnLostCapture();

    if (!_isHardCapture)
    {
        _softCaptureCurrent = uPtr(args)->WindowPoint();
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_softCaptureCurrent, _softCaptureStart);

        if (uPtr(_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::g::Uno::Vector::Length(diff) > 10.0f)
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }
    }

    _pointerPos = uPtr(args)->WindowPoint();
    MoveUser((!_delayStart || _isHardCapture) ? 1 : 0);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :621
void Scroller::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Float2 ret2;

    if (_down == -1)
    {
        bool captured = false;
        _isHardCapture = false;

        if (::g::Uno::Vector::Length((::g::Experimental::Physics::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret2), ret2)) > 100.0f)
            captured = HardCapture(args);
        else
            captured = uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

        if (captured)
        {
            _softCaptureStart = (_softCaptureCurrent = uPtr(args)->WindowPoint());
            _down = args->PointIndex();
            _pointerPos = args->WindowPoint();
            _prevPos = (_startPos = _pointerPos);
            _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
            ::g::Experimental::Physics::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)));
            ::g::Experimental::Physics::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]));
            ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :726
void Scroller::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    ::g::Uno::Float2 ret3;

    if (_down == uPtr(args)->PointIndex())
    {
        if (_delayStart && !_isHardCapture)
        {
            OnLostCapture();
            return;
        }

        if (::g::Experimental::Physics::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/])))
        {
            _pointerPos = uPtr(args)->WindowPoint();
            MoveUser(3);
            ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3)));
        }

        EndInteraction();
    }
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :760
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRequestBringIntoView(object,Fuse.RequestBringIntoViewArgs)");
    _pendingBringIntoView = uPtr(args)->Node();
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 0);
}

// private void OnUpdated() [instance] :797
void Scroller::OnUpdated()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUpdated()");
    ::g::Uno::Float2 ret4;
    UpdateScrollMax();
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_region), ::TYPES[52/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    SetScrollPosition((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret4), ret4));
    CheckNeedUpdated(true);
}

// public float2 get_OverflowExtent() [instance] :856
::g::Uno::Float2 Scroller::OverflowExtent()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_OverflowExtent()");
    return ::g::Experimental::Physics::BoundedRegion2D::OverflowExtent(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]));
}

// private void PerformBringIntoView() [instance] :767
void Scroller::PerformBringIntoView()
{
    uStackFrame __("Fuse.Gestures.Scroller", "PerformBringIntoView()");

    if (_pendingBringIntoView == NULL)
        return;

    Goto(uPtr(_scrollable)->GetNodeScrollPosition(_pendingBringIntoView));
    _pendingBringIntoView = NULL;
}

// private void SetScrollPosition(float2 position) [instance] :806
void Scroller::SetScrollPosition(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Gestures.Scroller", "SetScrollPosition(float2)");

    if (_scrollable == NULL)
        return;

    if (!((uPtr(_scrollable)->AllowedScrollDirections() & 3) == 3))
        position.X = 0.0f;

    if (!((uPtr(_scrollable)->AllowedScrollDirections() & 12) == 12))
        position.Y = 0.0f;

    if (uPtr(_scrollable)->SnapToPixels())
        position = uPtr(_scrollable)->InternSnap(position);

    if (::g::Uno::Vector::LengthSquared(::g::Uno::Float2__op_Subtraction2(position, uPtr(_scrollable)->ScrollPosition())) > 1e-05f)
        uPtr(_scrollable)->SetScrollPosition(position, this);
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :562
void Scroller::UpdatePointerEvents(bool forceOff)
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdatePointerEvents([bool])");
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && _userScroll;

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else if (_scrollable != NULL)
    {
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"Invalid tea...*/]));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :788
void Scroller::UpdateScrollMax()
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdateScrollMax()");

    if (_scrollable == NULL)
        return;

    ::g::Experimental::Physics::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
    ::g::Experimental::Physics::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
}

// public bool get_UserScroll() [instance] :549
bool Scroller::UserScroll()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_UserScroll()");
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :550
void Scroller::UserScroll(bool value)
{
    uStackFrame __("Fuse.Gestures.Scroller", "set_UserScroll(bool)");

    if (_userScroll != value)
    {
        _userScroll = value;
        UpdatePointerEvents(false);
        OnLostCapture();
    }
}

// public generated Scroller New() [static] :496
Scroller* Scroller::New1()
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(879)
// --------------------------------------------------------------

// public sealed class SetSwipeActive :879
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)SetSwipeActive__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)SetSwipeActive__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)SetSwipeActive__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)SetSwipeActive__New1_fn, 0, true, SetSwipeActive_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)SetSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SetSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Value", NULL, (void*)SetSwipeActive__get_Value_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)SetSwipeActive__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public generated SetSwipeActive() :879
void SetSwipeActive__ctor_1_fn(SetSwipeActive* __this)
{
    __this->ctor_1();
}

// public generated bool get_Bypass() :885
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :885
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated SetSwipeActive New() :879
void SetSwipeActive__New1_fn(SetSwipeActive** __retval)
{
    *__retval = SetSwipeActive::New1();
}

// protected override sealed void Perform(Fuse.Node target) :887
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :881
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :881
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :883
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :883
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated SetSwipeActive() [instance] :879
void SetSwipeActive::ctor_1()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", ".ctor()");
    ctor_();
}

// public generated bool get_Bypass() [instance] :885
bool SetSwipeActive::Bypass()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "get_Bypass()");
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :885
void SetSwipeActive::Bypass(bool value)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "set_Bypass(bool)");
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :881
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :881
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "set_Target(Fuse.Gestures.SwipeGesture)");
    _Target = value;
}

// public generated bool get_Value() [instance] :883
bool SetSwipeActive::Value()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "get_Value()");
    return _Value;
}

// public generated void set_Value(bool value) [instance] :883
void SetSwipeActive::Value(bool value)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "set_Value(bool)");
    _Value = value;
}

// public generated SetSwipeActive New() [static] :879
SetSwipeActive* SetSwipeActive::New1()
{
    SetSwipeActive* obj1 = (SetSwipeActive*)uNew(SetSwipeActive_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(941)
// --------------------------------------------------------------

// public sealed class Swiped :941
// {
::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Swiped__OnUnrooted_fn;
    ::TYPES[56] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    ::TYPES[57] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[53] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _Source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_How", NULL, (void*)Swiped__get_How_fn, 0, false, ::g::Fuse::Gestures::SwipedHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)Swiped__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipedHow_typeof()),
        new uFunction(".ctor", NULL, (void*)Swiped__New1_fn, 0, true, Swiped_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)Swiped__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
    return type;
}

// public Swiped(Fuse.Gestures.SwipeGesture source) :946
void Swiped__ctor_2_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_2(source);
}

// public Fuse.Gestures.SwipedHow get_How() :954
void Swiped__get_How_fn(Swiped* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value) :955
void Swiped__set_How_fn(Swiped* __this, int* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) :946
void Swiped__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New1(source);
}

// protected override sealed void OnRooted(Fuse.Node n) :959
void Swiped__OnRooted_fn(Swiped* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, n);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[58/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v) :972
void Swiped__OnSwiped_fn(Swiped* __this, bool* v)
{
    __this->OnSwiped(*v);
}

// protected override sealed void OnUnrooted(Fuse.Node n) :966
void Swiped__OnUnrooted_fn(Swiped* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[58/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, n);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :943
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :943
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance] :946
void Swiped::ctor_2(::g::Fuse::Gestures::SwipeGesture* source)
{
    uStackFrame __("Fuse.Gestures.Swiped", ".ctor(Fuse.Gestures.SwipeGesture)");
    ctor_1();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance] :954
int Swiped::How()
{
    uStackFrame __("Fuse.Gestures.Swiped", "get_How()");
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance] :955
void Swiped::How(int value)
{
    uStackFrame __("Fuse.Gestures.Swiped", "set_How(Fuse.Gestures.SwipedHow)");
    _how = value;
}

// private void OnSwiped(bool v) [instance] :972
void Swiped::OnSwiped(bool v)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnSwiped(bool)");

    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :943
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    uStackFrame __("Fuse.Gestures.Swiped", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :943
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.Swiped", "set_Source(Fuse.Gestures.SwipeGesture)");
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static] :946
Swiped* Swiped::New1(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_2(source);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(934)
// --------------------------------------------------------------

// public enum SwipedHow :934
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(639)
// --------------------------------------------------------------

// public enum SwipeDirection :639
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(656)
// --------------------------------------------------------------

// public sealed class SwipeGesture :656
// {
::g::Fuse::Behavior_type* SwipeGesture_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)SwipeGesture__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    ::STRINGS[7] = uString::Const("SwipingAnimation must be attached to an Element");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Gestures\\0.24.7\\$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[57] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[59] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof());
    ::TYPES[53] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[60] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[61] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(3,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _direction), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasEdge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hitSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _lengthNode), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _type), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Gestures::SwipeGesture, IsActiveChanged1), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Direction", NULL, (void*)SwipeGesture__get_Direction_fn, 0, false, ::g::Fuse::Gestures::SwipeDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)SwipeGesture__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeDirection_typeof()),
        new uFunction("get_Edge", NULL, (void*)SwipeGesture__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)SwipeGesture__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_HitSize", NULL, (void*)SwipeGesture__get_HitSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_HitSize", NULL, (void*)SwipeGesture__set_HitSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsActive", NULL, (void*)SwipeGesture__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)SwipeGesture__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Length", NULL, (void*)SwipeGesture__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)SwipeGesture__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeGesture__get_LengthNode_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeGesture__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)SwipeGesture__New1_fn, 0, true, SwipeGesture_typeof(), 0),
        new uFunction("SetIsActive", NULL, (void*)SwipeGesture__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), uObject_typeof()),
        new uFunction("get_Type", NULL, (void*)SwipeGesture__get_Type_fn, 0, false, ::g::Fuse::Gestures::SwipeType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)SwipeGesture__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeType_typeof()));
    return type;
}

// public generated SwipeGesture() :656
void SwipeGesture__ctor_1_fn(SwipeGesture* __this)
{
    __this->ctor_1();
}

// private void ConstructRegion() :727
void SwipeGesture__ConstructRegion_fn(SwipeGesture* __this)
{
    __this->ConstructRegion();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :684
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :685
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public Fuse.Gestures.Edge get_Edge() :672
void SwipeGesture__get_Edge_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :673
void SwipeGesture__set_Edge_fn(SwipeGesture* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_HitSize() :709
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value) :710
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive() :826
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :827
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// internal generated void add_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) :819
void SwipeGesture__add_IsActiveChanged_fn(SwipeGesture* __this, uDelegate* value)
{
    __this->add_IsActiveChanged(value);
}

// internal generated void remove_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) :819
void SwipeGesture__remove_IsActiveChanged_fn(SwipeGesture* __this, uDelegate* value)
{
    __this->remove_IsActiveChanged(value);
}

// public float get_Length() :695
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :696
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode() :702
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :703
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public generated SwipeGesture New() :656
void SwipeGesture__New1_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New1();
}

// protected override sealed void OnRooted(Fuse.Node n) :713
void SwipeGesture__OnRooted_fn(SwipeGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[7/*"SwipingAnim...*/], __this->ParentNode(), ::STRINGS[8/*"C:\\Program...*/], 719, ::STRINGS[2/*"OnRooted"*/]);
        return;
    }

    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
}

// protected override sealed void OnUnrooted(Fuse.Node n) :802
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnUnrooted(Fuse.Node)");

    if (__this->_swiper != NULL)
    {
        if (__this->_region != NULL)
        {
            uPtr(__this->_region)->remove_ActivationChanged(uDelegate::New(::TYPES[59/*Uno.Action<bool, object>*/], (void*)SwipeGesture__SetIsActive_fn, __this));
            __this->_region = NULL;
            uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        }

        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :794
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, object origin, [bool bypass]) :835
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, object origin) :830
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :664
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :665
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// public generated SwipeGesture() [instance] :656
void SwipeGesture::ctor_1()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", ".ctor()");
    _length = 100.0f;
    _hitSize = 100.0f;
    ctor_();
}

// private void ConstructRegion() [instance] :727
void SwipeGesture::ConstructRegion()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "ConstructRegion()");
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New1();

    if (_hasEdge)
    {
        uPtr(_region)->Area = 1;

        switch (_edge)
        {
            case 0:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 1;
                break;
            }
            case 2:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 2;
                break;
            }
            case 1:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 3;
                break;
            }
            case 3:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 4;
                break;
            }
        }
    }
    else
    {
        uPtr(_region)->Area = 0;

        switch (Direction())
        {
            case 0:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 101;
                break;
            }
            case 1:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 102;
                break;
            }
            case 2:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 103;
                break;
            }
            case 3:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 104;
                break;
            }
        }
    }

    uPtr(_region)->SetProgress((double)(IsActive() ? 1 : 0), false);
    uPtr(_region)->Length = (double)Length();
    uPtr(_region)->LengthElement = LengthNode();
    uPtr(_region)->AreaVectorDistance = HitSize();
    uPtr(_region)->add_ActivationChanged(uDelegate::New(::TYPES[59/*Uno.Action<bool, object>*/], (void*)SwipeGesture__SetIsActive_fn, this));
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() == 0);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :684
int SwipeGesture::Direction()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Direction()");
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :685
void SwipeGesture::Direction(int value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Direction(Fuse.Gestures.SwipeDirection)");
    _direction = value;
    _hasDirection = true;
}

// public Fuse.Gestures.Edge get_Edge() [instance] :672
int SwipeGesture::Edge()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Edge()");
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :673
void SwipeGesture::Edge(int value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Edge(Fuse.Gestures.Edge)");
    _edge = value;
    _hasEdge = true;
}

// public float get_HitSize() [instance] :709
float SwipeGesture::HitSize()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_HitSize()");
    return _hitSize;
}

// public void set_HitSize(float value) [instance] :710
void SwipeGesture::HitSize(float value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_HitSize(float)");
    _hitSize = value;
}

// public bool get_IsActive() [instance] :826
bool SwipeGesture::IsActive()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_IsActive()");
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :827
void SwipeGesture::IsActive(bool value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_IsActive(bool)");
    SetIsActive(value, NULL);
}

// internal generated void add_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :819
void SwipeGesture::add_IsActiveChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "add_IsActiveChanged(Uno.UX.ValueChangedHandler<bool>)");
    IsActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsActiveChanged1, value), ::TYPES[60/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// internal generated void remove_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :819
void SwipeGesture::remove_IsActiveChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "remove_IsActiveChanged(Uno.UX.ValueChangedHandler<bool>)");
    IsActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsActiveChanged1, value), ::TYPES[60/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// public float get_Length() [instance] :695
float SwipeGesture::Length()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Length()");
    return _length;
}

// public void set_Length(float value) [instance] :696
void SwipeGesture::Length(float value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Length(float)");
    _length = value;
}

// public Fuse.Elements.Element get_LengthNode() [instance] :702
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_LengthNode()");
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :703
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_LengthNode(Fuse.Elements.Element)");
    _lengthNode = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :794
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Region()");

    if (_region == NULL)
        ConstructRegion();

    return _region;
}

// internal void SetActive(bool value, object origin, [bool bypass]) [instance] :835
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetActive(bool,object,[bool])");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if ((value == _isActive) || (origin == this))
        return;

    _isActive = value;

    if (::g::Uno::Delegate::op_Inequality(IsActiveChanged1, NULL))
        uPtr(IsActiveChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[61/*Uno.UX.ValueChangedArgs<bool>*/], uCRef(value), (origin != NULL) ? origin : this, &ret2), ret2));

    if (_region != NULL)
        uPtr(_swiper)->SetActivation(_region, value, (origin != NULL) ? origin : this, bypass);
}

// public void SetIsActive(bool value, object origin) [instance] :830
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetIsActive(bool,object)");
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :664
int SwipeGesture::Type()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Type()");
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :665
void SwipeGesture::Type(int value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Type(Fuse.Gestures.SwipeType)");
    _type = value;
}

// public generated SwipeGesture New() [static] :656
SwipeGesture* SwipeGesture::New1()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\Internal\$.uno(615)
// -----------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :615
// {
uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[37] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _spans), 0);
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :621
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :627
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :621
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :621
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    uStackFrame __("Fuse.Gestures.SwipeGestureHelper", ".ctor(float,Fuse.Gestures.DegreeSpan[])");
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :627
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    uStackFrame __("Fuse.Gestures.SwipeGestureHelper", "IsWithinBounds(float2)");
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :621
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(647)
// --------------------------------------------------------------

// public enum SwipeType :647
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(848)
// --------------------------------------------------------------

// public sealed class SwipingAnimation :848
// {
::g::Fuse::Triggers::Trigger_type* SwipingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    ::TYPES[56] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    ::TYPES[57] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[62] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof());
    type->SetFields(15,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SwipingAnimation__New1_fn, 0, true, SwipingAnimation_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)SwipingAnimation__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
    return type;
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) :855
void SwipingAnimation__ctor_2_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_2(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) :855
void SwipingAnimation__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New1(source);
}

// private void OnProgressChanged(double progress, object origin) :873
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress, uObject* origin)
{
    __this->OnProgressChanged1(*progress, origin);
}

// protected override sealed void OnRooted(Fuse.Node n) :860
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, n);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_ProgressChanged(uDelegate::New(::TYPES[62/*Uno.Action<double, object>*/], (void*)SwipingAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node n) :867
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_region)->remove_ProgressChanged(uDelegate::New(::TYPES[62/*Uno.Action<double, object>*/], (void*)SwipingAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, n);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :850
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :850
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance] :855
void SwipingAnimation::ctor_2(::g::Fuse::Gestures::SwipeGesture* source)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", ".ctor(Fuse.Gestures.SwipeGesture)");
    ctor_1();
    Source(source);
}

// private void OnProgressChanged(double progress, object origin) [instance] :873
void SwipingAnimation::OnProgressChanged1(double progress, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnProgressChanged(double,object)");
    Seek(progress);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :850
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :850
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "set_Source(Fuse.Gestures.SwipeGesture)");
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static] :855
SwipingAnimation* SwipingAnimation::New1(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_2(source);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1000)
// ---------------------------------------------------------------

// public sealed class Tapped :1000
// {
::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)Tapped__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Tapped__OnUnrooted_fn;
    ::TYPES[23] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[24] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[63] = ::g::Fuse::Gestures::TappedHandler_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::TappedHandler_typeof(), offsetof(::g::Fuse::Gestures::Tapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)Tapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Tapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Tapped__New1_fn, 0, true, Tapped_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Tapped__New2_fn, 0, true, Tapped_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()));
    return type;
}

// public Tapped() :1004
void Tapped__ctor_3_fn(Tapped* __this)
{
    __this->ctor_3();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) :1006
void Tapped__ctor_4_fn(Tapped* __this, uDelegate* handler)
{
    __this->ctor_4(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :1002
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :1002
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :1004
void Tapped__New1_fn(Tapped** __retval)
{
    *__retval = Tapped::New1();
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) :1006
void Tapped__New2_fn(uDelegate* handler, Tapped** __retval)
{
    *__retval = Tapped::New2(handler);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1011
void Tapped__OnRooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1023
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1017
void Tapped__OnUnrooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public Tapped() [instance] :1004
void Tapped::ctor_3()
{
    uStackFrame __("Fuse.Gestures.Tapped", ".ctor()");
    ctor_2();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) [instance] :1006
void Tapped::ctor_4(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", ".ctor(Fuse.Gestures.TappedHandler)");
    ctor_2();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :1002
void Tapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "add_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[63/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :1002
void Tapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "remove_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[63/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1023
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, ParentNode()));
}

// public Tapped New() [static] :1004
Tapped* Tapped::New1()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_3();
    return obj1;
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) [static] :1006
Tapped* Tapped::New2(uDelegate* handler)
{
    Tapped* obj2 = (Tapped*)uNew(Tapped_typeof());
    obj2->ctor_4(handler);
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(990)
// --------------------------------------------------------------

// public sealed class TappedArgs :990
// {
::g::Fuse::NodeEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TappedArgs__New3_fn, 0, true, TappedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :992
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :992
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, node);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :992
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Gestures.TappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Node)");
    ctor_3(args, node);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :992
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(998)
// --------------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :998
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(894)
// --------------------------------------------------------------

// public sealed class ToggleSwipeActive :894
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)ToggleSwipeActive__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[56] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetFields(7,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::ToggleSwipeActive, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ToggleSwipeActive__New1_fn, 0, true, ToggleSwipeActive_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)ToggleSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ToggleSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()));
    return type;
}

// public generated ToggleSwipeActive() :894
void ToggleSwipeActive__ctor_1_fn(ToggleSwipeActive* __this)
{
    __this->ctor_1();
}

// public generated ToggleSwipeActive New() :894
void ToggleSwipeActive__New1_fn(ToggleSwipeActive** __retval)
{
    *__retval = ToggleSwipeActive::New1();
}

// protected override sealed void Perform(Fuse.Node target) :898
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :896
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :896
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated ToggleSwipeActive() [instance] :894
void ToggleSwipeActive::ctor_1()
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", ".ctor()");
    ctor_();
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :896
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :896
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "set_Target(Fuse.Gestures.SwipeGesture)");
    _Target = value;
}

// public generated ToggleSwipeActive New() [static] :894
ToggleSwipeActive* ToggleSwipeActive::New1()
{
    ToggleSwipeActive* obj1 = (ToggleSwipeActive*)uNew(ToggleSwipeActive_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1088)
// ---------------------------------------------------------------

// public sealed class Trackball :1088
// {
::g::Fuse::Behavior_type* Trackball_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Trackball);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.Trackball", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Trackball__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trackball__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trackball__OnUnrooted_fn;
    ::TYPES[64] = ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[65] = ::g::Experimental::Physics::ElasticForce_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[66] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[67] = ::g::Experimental::Physics::Friction_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[68] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[69] = ::g::Fuse::Entities::Transform3D_typeof();
    ::TYPES[70] = ::g::Uno::Float3_typeof();
    ::TYPES[71] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[53] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[26] = ::g::Fuse::Time_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[72] = ::g::Fuse::Transform_typeof();
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[52] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[73] = ::g::Fuse::IViewport_typeof();
    type->SetFields(3,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _angularVelocity), 0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _attractor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _captured), 0,
        ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _friction), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _frictionQ), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _frictionVector), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _hasViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _haveUpdate), 0,
        Trackball__MoveMode_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _moveMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressIndex), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressInvView), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressLoc), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressQ), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _prevAngular), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _radius), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _soft), 0,
        ::g::Fuse::Entities::Transform3D_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _transform), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _viewport), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("BringToFront", NULL, (void*)Trackball__BringToFront_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Trackball__New1_fn, 0, true, Trackball_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)Trackball__get_Viewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("set_Viewport", NULL, (void*)Trackball__set_Viewport_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IViewport_typeof()));
    return type;
}

// public generated Trackball() :1088
void Trackball__ctor_1_fn(Trackball* __this)
{
    __this->ctor_1();
}

// public void BringToFront(float3 normal) :1293
void Trackball__BringToFront_fn(Trackball* __this, ::g::Uno::Float3* normal)
{
    __this->BringToFront(*normal);
}

// private void CheckNeedUpdate() :1146
void Trackball__CheckNeedUpdate_fn(Trackball* __this)
{
    __this->CheckNeedUpdate();
}

// private float4x4 get_InverseViewProjection() :1285
void Trackball__get_InverseViewProjection_fn(Trackball* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->InverseViewProjection();
}

// public generated Trackball New() :1088
void Trackball__New1_fn(Trackball** __retval)
{
    *__retval = Trackball::New1();
}

// private void OnLostCapture() :1227
void Trackball__OnLostCapture_fn(Trackball* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) :1251
void Trackball__OnPointerMoved_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(s, args);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) :1203
void Trackball__OnPointerPressed_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(s, args);
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) :1233
void Trackball__OnPointerReleased_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1116
void Trackball__OnRooted_fn(Trackball* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->ParentNode())->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[72/*Fuse.Transform*/])), __this->_transform);
    __this->_moveMode = 0;
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Trackball__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Trackball__OnPointerReleased_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->ParentNode(), uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)Trackball__OnPointerMoved_fn, __this));

    if (!__this->_hasViewport)
        __this->_viewport = uPtr(__this->ParentNode())->Viewport();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1131
void Trackball__OnUnrooted_fn(Trackball* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnUnrooted(Fuse.Node)");
    bool ret5;
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)Trackball__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)Trackball__OnPointerReleased_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->ParentNode(), uDelegate::New(::TYPES[13/*Fuse.Input.PointerMovedHandler*/], (void*)Trackball__OnPointerMoved_fn, __this));
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->ParentNode())->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[72/*Fuse.Transform*/])), __this->_transform, &ret5);
    __this->_moveMode = 0;
    __this->CheckNeedUpdate();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdate() :1166
void Trackball__OnUpdate_fn(Trackball* __this)
{
    __this->OnUpdate();
}

// public Fuse.IViewport get_Viewport() :1104
void Trackball__get_Viewport_fn(Trackball* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public void set_Viewport(Fuse.IViewport value) :1105
void Trackball__set_Viewport_fn(Trackball* __this, uObject* value)
{
    __this->Viewport(value);
}

// public generated Trackball() [instance] :1088
void Trackball::ctor_1()
{
    uStackFrame __("Fuse.Gestures.Trackball", ".ctor()");
    _transform = ::g::Fuse::Entities::Transform3D::New1();
    _radius = 100.0f;
    _attractor = (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreateAngle(::TYPES[65/*Experimental.Physics.ElasticForce<float4>*/]));
    _friction = (uObject*)((::g::Experimental::Physics::Friction*)::g::Experimental::Physics::Friction::CreateRadians(::TYPES[67/*Experimental.Physics.Friction<float>*/]));
    _angularVelocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[68/*Experimental.Physics.PointerVelocity<float>*/]));
    _frictionVector = ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f);
    ctor_();
}

// public void BringToFront(float3 normal) [instance] :1293
void Trackball::BringToFront(::g::Uno::Float3 normal)
{
    uStackFrame __("Fuse.Gestures.Trackball", "BringToFront(float3)");
    ::g::Uno::Float4 old = uPtr(_transform)->RotationQuaternion();
    uPtr(_transform)->RotationQuaternion(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Uno::Float3 ind2 = ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 0.0f, -1.0f), InverseViewProjection()));
    ::g::Uno::Float3 localForward = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
    ::g::Uno::Float4 lq = ::g::Uno::Quaternion::RotationBetween(normal, localForward);
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_attractor), ::TYPES[64/*Experimental.Physics.DestinationSimulation<float4>*/]), uCRef(lq));
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_attractor), ::TYPES[71/*Experimental.Physics.MotionSimulation<float4>*/]), uCRef(old));
    uPtr(_transform)->RotationQuaternion(old);
    _moveMode = 1;
    CheckNeedUpdate();
}

// private void CheckNeedUpdate() [instance] :1146
void Trackball::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Gestures.Trackball", "CheckNeedUpdate()");

    if (_moveMode == 0)
    {
        if (_haveUpdate)
        {
            ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Trackball__OnUpdate_fn, this), 0);
            _haveUpdate = false;
        }
    }
    else if (!_haveUpdate)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Trackball__OnUpdate_fn, this), 0);
        _haveUpdate = true;
    }
}

// private float4x4 get_InverseViewProjection() [instance] :1285
::g::Uno::Float4x4 Trackball::InverseViewProjection()
{
    uStackFrame __("Fuse.Gestures.Trackball", "get_InverseViewProjection()");
    ::g::Uno::Float4x4 at = uPtr(ParentNode())->WorldTransform();
    ::g::Uno::Float4x4 vp = ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(Viewport()), ::TYPES[73/*Fuse.IViewport*/]));
    return ::g::Uno::Matrix::Invert2(::g::Uno::Matrix::Mul8(at, vp));
}

// private void OnLostCapture() [instance] :1227
void Trackball::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnLostCapture()");
    _captured = false;
    uPtr(_transform)->RotationQuaternion(_pressQ);
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) [instance] :1251
void Trackball::OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (!_captured || (uPtr(args)->PointIndex() != _pressIndex))
        return;

    ::g::Uno::Float2 dir0 = ::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _pressLoc);
    ::g::Uno::Float2 dir = ::g::Uno::Float2__New2(dir0.X, -dir0.Y);
    ::g::Uno::Float3 norm = ::g::Uno::Vector::Normalize1(::g::Uno::Float3__New2(-dir.Y, dir.X, 0.0f));
    float length = ::g::Uno::Vector::Length(dir);
    float angular = length / (2.0f * _radius);
    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_angularVelocity), uCRef(angular), uCRef(::g::Fuse::Time::FrameIntervalFloat()), uCRef(false));
    _prevAngular = angular;
    ::g::Uno::Float3 ind1 = ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(norm, _pressInvView));
    ::g::Uno::Float3 localNorm = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    _frictionVector = localNorm;
    ::g::Uno::Float4 q = ::g::Uno::Quaternion::RotationAxis(localNorm, angular);
    ::g::Uno::Float4 cq = ::g::Uno::Quaternion::Mul(_pressQ, q);
    uPtr(_transform)->RotationQuaternion(cq);

    if (_soft && (length > 10.0f))
    {
        if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Trackball__OnLostCapture_fn, this), NULL))
            OnLostCapture();

        _soft = false;
    }
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) [instance] :1203
void Trackball::OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_captured || !uPtr(args)->IsPrimary())
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Trackball__OnLostCapture_fn, this), NULL))
    {
        _moveMode = 0;
        _captured = true;
        _soft = true;
        _pressLoc = uPtr(args)->WindowPoint();
        _pressIndex = args->PointIndex();
        _pressQ = uPtr(_transform)->RotationQuaternion();
        uPtr(_transform)->RotationQuaternion(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
        ::g::Experimental::Physics::PointerVelocity__Reset_fn(uPtr(_angularVelocity), uCRef(0.0f));
        _prevAngular = 0.0f;
        _pressInvView = InverseViewProjection();
        uPtr(_transform)->RotationQuaternion(_pressQ);
    }
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) [instance] :1233
void Trackball::OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    float ret4;

    if (!_captured || (uPtr(args)->PointIndex() != _pressIndex))
        return;

    if (_soft)
        uPtr(args)->ReleaseSoftCapture(this);
    else
        args->ReleaseHardCapture(this);

    _captured = false;
    _moveMode = 2;
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_friction), ::TYPES[66/*Experimental.Physics.MotionSimulation<float>*/]), uCRef(0.0f));
    ::g::Experimental::Physics::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[66/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_angularVelocity), &ret4), ret4)));
    _frictionQ = uPtr(_transform)->RotationQuaternion();
    CheckNeedUpdate();
}

// private void OnUpdate() [instance] :1166
void Trackball::OnUpdate()
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnUpdate()");
    ::g::Uno::Float4 ret6;
    float ret7;

    if (_moveMode == 1)
    {
        ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_attractor), ::TYPES[52/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());

        if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_attractor), ::TYPES[52/*Experimental.Physics.Simulation*/])))
            _moveMode = 0;

        uPtr(_transform)->RotationQuaternion(::g::Uno::Vector::Normalize2((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_attractor), ::TYPES[71/*Experimental.Physics.MotionSimulation<float4>*/]), &ret6), ret6)));
    }
    else if (_moveMode == 2)
    {
        ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_friction), ::TYPES[52/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());

        if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_friction), ::TYPES[52/*Experimental.Physics.Simulation*/])))
            _moveMode = 0;

        ::g::Uno::Float4 q = ::g::Uno::Quaternion::RotationAxis(_frictionVector, (::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_friction), ::TYPES[66/*Experimental.Physics.MotionSimulation<float>*/]), &ret7), ret7));
        ::g::Uno::Float4 cq = ::g::Uno::Quaternion::Mul(_frictionQ, q);
        uPtr(_transform)->RotationQuaternion(cq);
    }

    CheckNeedUpdate();
}

// public Fuse.IViewport get_Viewport() [instance] :1104
uObject* Trackball::Viewport()
{
    uStackFrame __("Fuse.Gestures.Trackball", "get_Viewport()");
    return _viewport;
}

// public void set_Viewport(Fuse.IViewport value) [instance] :1105
void Trackball::Viewport(uObject* value)
{
    uStackFrame __("Fuse.Gestures.Trackball", "set_Viewport(Fuse.IViewport)");
    _viewport = value;
    _hasViewport = true;
}

// public generated Trackball New() [static] :1088
Trackball* Trackball::New1()
{
    Trackball* obj3 = (Trackball*)uNew(Trackball_typeof());
    obj3->ctor_1();
    return obj3;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1334)
// ---------------------------------------------------------------

// public abstract class TransformGesture :1334
// {
TransformGesture_type* TransformGesture_typeof()
{
    static uSStrong<TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TransformGesture);
    options.TypeSize = sizeof(TransformGesture_type);
    type = (TransformGesture_type*)uClassType::New("Fuse.Gestures.TransformGesture", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))TransformGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))TransformGesture__OnUnrooted_fn;
    type->fp_OnUpdate = TransformGesture__OnUpdate_fn;
    ::TYPES[46] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[52] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    ::TYPES[40] = ::g::Fuse::Gestures::Internal::TwoFinger_typeof();
    ::TYPES[74] = ::g::Fuse::Gestures::Internal::TwoFingerEventHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Time_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, _hasUpdate), 0,
        ::g::Fuse::Gestures::Internal::TwoFinger_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, Impl), 0,
        ::g::Experimental::Physics::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, Region), 0,
        ::g::Fuse::Elements::InteractiveTransform_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, _Target), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Target", NULL, (void*)TransformGesture__get_Target_fn, 0, false, ::g::Fuse::Elements::InteractiveTransform_typeof(), 0));
    return type;
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) :1344
void TransformGesture__ctor_1_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_1(target);
}

// protected void CheckNeedUpdate() :1379
void TransformGesture__CheckNeedUpdate_fn(TransformGesture* __this)
{
    __this->CheckNeedUpdate();
}

// protected override void OnRooted(Fuse.Node n) :1350
void TransformGesture__OnRooted_fn(TransformGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->Impl = ::g::Fuse::Gestures::Internal::TwoFinger::Attach(__this->ParentNode());
    uPtr(__this->Impl)->add_Started(uDelegate::New(::TYPES[74/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->add_Ended(uDelegate::New(::TYPES[74/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
}

// protected override void OnUnrooted(Fuse.Node n) :1358
void TransformGesture__OnUnrooted_fn(TransformGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Impl)->remove_Started(uDelegate::New(::TYPES[74/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->remove_Ended(uDelegate::New(::TYPES[74/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
    uPtr(__this->Impl)->Detach();
    __this->Impl = NULL;
    __this->CheckNeedUpdate();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// protected virtual void OnUpdate() :1392
void TransformGesture__OnUpdate_fn(TransformGesture* __this)
{
}

// public generated Fuse.Elements.InteractiveTransform get_Target() :1338
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) :1339
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value)
{
    __this->Target(value);
}

// private void Updated(object s, object a) :1371
void TransformGesture__Updated_fn(TransformGesture* __this, uObject* s, uObject* a)
{
    __this->Updated(s, a);
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) [instance] :1344
void TransformGesture::ctor_1(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    Region = (uObject*)::g::Experimental::Physics::BasicBoundedRegion2D::CreatePoints();
    ctor_();
    Target(target);
}

// protected void CheckNeedUpdate() [instance] :1379
void TransformGesture::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "CheckNeedUpdate()");
    bool need = IsRooted() && !::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(Region), ::TYPES[52/*Experimental.Physics.Simulation*/]));

    if (need == _hasUpdate)
        return;

    _hasUpdate = need;

    if (need)
        uPtr(ParentNode())->add_Update(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)TransformGesture__Updated_fn, this));
    else
        uPtr(ParentNode())->remove_Update(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)TransformGesture__Updated_fn, this));
}

// public generated Fuse.Elements.InteractiveTransform get_Target() [instance] :1338
::g::Fuse::Elements::InteractiveTransform* TransformGesture::Target()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "get_Target()");
    return _Target;
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) [instance] :1339
void TransformGesture::Target(::g::Fuse::Elements::InteractiveTransform* value)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "set_Target(Fuse.Elements.InteractiveTransform)");
    _Target = value;
}

// private void Updated(object s, object a) [instance] :1371
void TransformGesture::Updated(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "Updated(object,object)");
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(Region), ::TYPES[52/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    OnUpdate();
    CheckNeedUpdate();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\Internal\$.uno(30)
// ----------------------------------------------------------------------

// public abstract class WhileClickerTrigger :30
// {
::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileClickerTrigger__OnUnrooted_fn;
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    type->SetFields(17,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhileClickerTrigger, Clicker), 0);
    return type;
}

// protected generated WhileClickerTrigger() :30
void WhileClickerTrigger__ctor_3_fn(WhileClickerTrigger* __this)
{
    __this->ctor_3();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :33
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :39
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated WhileClickerTrigger() [instance] :30
void WhileClickerTrigger::ctor_3()
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", ".ctor()");
    ctor_2();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1497)
// ---------------------------------------------------------------

// public sealed class WhileHovering :1497
// {
::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(WhileHovering);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileHovering", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileHovering__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileHovering__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileHovering__OnUnrooted_fn;
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[75] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[76] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileHovering__New1_fn, 0, true, WhileHovering_typeof(), 0));
    return type;
}

// public generated WhileHovering() :1497
void WhileHovering__ctor_2_fn(WhileHovering* __this)
{
    __this->ctor_2();
}

// public generated WhileHovering New() :1497
void WhileHovering__New1_fn(WhileHovering** __retval)
{
    *__retval = WhileHovering::New1();
}

// private void OnIsEnabledChanged(object s, object a) :1526
void WhileHovering__OnIsEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a)
{
    __this->OnIsEnabledChanged(s, a);
}

// private void OnPointerEntered(object sender, object args) :1515
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :1520
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1499
void WhileHovering__OnRooted_fn(WhileHovering* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[75/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[76/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)WhileHovering__OnIsEnabledChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1507
void WhileHovering__OnUnrooted_fn(WhileHovering* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[75/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[76/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)WhileHovering__OnIsEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileHovering() [instance] :1497
void WhileHovering::ctor_2()
{
    uStackFrame __("Fuse.Gestures.WhileHovering", ".ctor()");
    ctor_1();
}

// private void OnIsEnabledChanged(object s, object a) [instance] :1526
void WhileHovering::OnIsEnabledChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnIsEnabledChanged(object,object)");

    if (!uPtr(ParentNode())->IsEnabled())
        Deactivate();
}

// private void OnPointerEntered(object sender, object args) [instance] :1515
void WhileHovering::OnPointerEntered(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnPointerEntered(object,object)");
    Activate(NULL);
}

// private void OnPointerLeft(object sender, object args) [instance] :1520
void WhileHovering::OnPointerLeft(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnPointerLeft(object,object)");
    Deactivate();
}

// public generated WhileHovering New() [static] :1497
WhileHovering* WhileHovering::New1()
{
    WhileHovering* obj1 = (WhileHovering*)uNew(WhileHovering_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(437)
// --------------------------------------------------------------

// public sealed class WhilePressed :437
// {
::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[53] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[23] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[75] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[76] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[12] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _inside), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pointerType), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, Clicker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _Capture), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Capture", NULL, (void*)WhilePressed__get_Capture_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Capture", NULL, (void*)WhilePressed__set_Capture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)WhilePressed__New1_fn, 0, true, WhilePressed_typeof(), 0),
        new uFunction("get_PointerType", NULL, (void*)WhilePressed__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("set_PointerType", NULL, (void*)WhilePressed__set_PointerType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerType_typeof()));
    return type;
}

// public generated WhilePressed() :437
void WhilePressed__ctor_3_fn(WhilePressed* __this)
{
    __this->ctor_3();
}

// public generated bool get_Capture() :439
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value) :439
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a) :513
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New() :437
void WhilePressed__New1_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New1();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) :492
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args) :501
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :507
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :450
void WhilePressed__OnRooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[75/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[76/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::NodeEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->BypassSetActive(false);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :472
void WhilePressed__OnUnrooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnUnrooted(Fuse.Node)");

    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[75/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[76/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[12/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::NodeEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[14/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Uno.Platform.PointerType get_PointerType() :446
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value) :447
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated WhilePressed() [instance] :437
void WhilePressed::ctor_3()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", ".ctor()");
    ctor_2();
}

// public generated bool get_Capture() [instance] :439
bool WhilePressed::Capture()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "get_Capture()");
    return _Capture;
}

// public generated void set_Capture(bool value) [instance] :439
void WhilePressed::Capture(bool value)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "set_Capture(bool)");
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance] :513
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "CheckStatus(object,object)");
    SetActive((_inside && uPtr(ParentNode())->IsEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance] :492
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnClickerPressing(Fuse.Input.PointerEventArgs,int)");
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance] :501
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerEntered(object,object)");
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance] :507
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerLeft(object,object)");
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :446
int WhilePressed::PointerType()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "get_PointerType()");
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance] :447
void WhilePressed::PointerType(int value)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "set_PointerType(Uno.Platform.PointerType)");
    _pointerType = value;
}

// public generated WhilePressed New() [static] :437
WhilePressed* WhilePressed::New1()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(905)
// --------------------------------------------------------------

// public sealed class WhileSwipeActive :905
// {
::g::Fuse::Triggers::Trigger_type* WhileSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileSwipeActive__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileSwipeActive__OnUnrooted_fn;
    ::TYPES[61] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[56] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    ::TYPES[60] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(17,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::WhileSwipeActive, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileSwipeActive__New1_fn, 0, true, WhileSwipeActive_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)WhileSwipeActive__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
    return type;
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) :910
void WhileSwipeActive__ctor_3_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_3(source);
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) :910
void WhileSwipeActive__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval)
{
    *__retval = WhileSwipeActive::New1(source);
}

// private void OnIsActiveChanged(object s, Uno.UX.ValueChangedArgs<bool> v) :928
void WhileSwipeActive__OnIsActiveChanged_fn(WhileSwipeActive* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* v)
{
    __this->OnIsActiveChanged(s, v);
}

// protected override sealed void OnRooted(Fuse.Node n) :915
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, n);
    uPtr(__this->Source())->add_IsActiveChanged(uDelegate::New(::TYPES[60/*Uno.UX.ValueChangedHandler<bool>*/], (void*)WhileSwipeActive__OnIsActiveChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->Source())->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node n) :922
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Source())->remove_IsActiveChanged(uDelegate::New(::TYPES[60/*Uno.UX.ValueChangedHandler<bool>*/], (void*)WhileSwipeActive__OnIsActiveChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, n);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :907
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :907
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) [instance] :910
void WhileSwipeActive::ctor_3(::g::Fuse::Gestures::SwipeGesture* source)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", ".ctor(Fuse.Gestures.SwipeGesture)");
    ctor_2();
    Source(source);
}

// private void OnIsActiveChanged(object s, Uno.UX.ValueChangedArgs<bool> v) [instance] :928
void WhileSwipeActive::OnIsActiveChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* v)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnIsActiveChanged(object,Uno.UX.ValueChangedArgs<bool>)");
    bool ret2;
    SetActive((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(v), &ret2), ret2));
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :907
::g::Fuse::Gestures::SwipeGesture* WhileSwipeActive::Source()
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :907
void WhileSwipeActive::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "set_Source(Fuse.Gestures.SwipeGesture)");
    _Source = value;
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) [static] :910
WhileSwipeActive* WhileSwipeActive::New1(::g::Fuse::Gestures::SwipeGesture* source)
{
    WhileSwipeActive* obj1 = (WhileSwipeActive*)uNew(WhileSwipeActive_typeof());
    obj1->ctor_3(source);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Gestures\0.24.7\$.uno(1550)
// ---------------------------------------------------------------

// public sealed class ZoomGesture :1550
// {
::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(ZoomGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.ZoomGesture", options);
    type->SetBase(::g::Fuse::Gestures::TransformGesture_typeof());
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ZoomGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ZoomGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnUpdate_fn;
    ::TYPES[39] = ::g::Fuse::Gestures::TransformGesture_typeof();
    ::TYPES[46] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[40] = ::g::Fuse::Gestures::Internal::TwoFinger_typeof();
    ::TYPES[77] = ::g::Fuse::Gestures::Internal::TwoFingerZoomHandler_typeof();
    ::TYPES[42] = ::g::Fuse::Elements::InteractiveTransform_typeof();
    ::TYPES[45] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetFields(7,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _maximum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _minimum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _prevZoom), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _startZoom), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Maximum", NULL, (void*)ZoomGesture__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)ZoomGesture__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)ZoomGesture__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)ZoomGesture__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ZoomGesture__New1_fn, 0, true, ZoomGesture_typeof(), 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
    return type;
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) :1553
void ZoomGesture__ctor_2_fn(ZoomGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_2(target);
}

// public float get_Maximum() :1609
void ZoomGesture__get_Maximum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float value) :1610
void ZoomGesture__set_Maximum_fn(ZoomGesture* __this, float* value)
{
    __this->Maximum(*value);
}

// public float get_Minimum() :1616
void ZoomGesture__get_Minimum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float value) :1617
void ZoomGesture__set_Minimum_fn(ZoomGesture* __this, float* value)
{
    __this->Minimum(*value);
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) :1553
void ZoomGesture__New1_fn(::g::Fuse::Elements::InteractiveTransform* target, ZoomGesture** __retval)
{
    *__retval = ZoomGesture::New1(target);
}

// protected override sealed void OnEnded() :1584
void ZoomGesture__OnEnded_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnEnded()");
    ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted(Fuse.Node n) :1559
void ZoomGesture__OnRooted_fn(ZoomGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnRooted(Fuse.Node)");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this, n);
    uPtr(__this->Impl)->add_Zoomed(uDelegate::New(::TYPES[77/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
}

// protected override sealed void OnStarted() :1572
void ZoomGesture__OnStarted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnStarted()");
    __this->_startZoom = uPtr(__this->Target())->ZoomFactor();
    __this->_prevZoom = ::g::Uno::Math::Log1(__this->_startZoom);
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_prevZoom, 0.0f)));
    ::g::Experimental::Physics::BoundedRegion2D::MinPosition(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Minimum()), 0.0f));
    ::g::Experimental::Physics::BoundedRegion2D::MaxPosition(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Maximum()), 0.0f));
    ::g::Experimental::Physics::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnUnrooted(Fuse.Node n) :1565
void ZoomGesture__OnUnrooted_fn(ZoomGesture* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUnrooted(Fuse.Node)");
    uPtr(__this->Impl)->remove_Zoomed(uDelegate::New(::TYPES[77/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this, n);
}

// protected override sealed void OnUpdate() :1601
void ZoomGesture__OnUpdate_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->SetZoomFactor(::g::Uno::Math::Exp1((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret2), ret2).X), __this);
}

// private void OnZoomed(float factor) :1590
void ZoomGesture__OnZoomed_fn(ZoomGesture* __this, float* factor)
{
    __this->OnZoomed(*factor);
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) [instance] :1553
void ZoomGesture::ctor_2(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    _maximum = FLT_INF;
    _minimum = 0.0f;
    ctor_1(target);
    Region = (uObject*)::g::Experimental::Physics::BasicBoundedRegion2D::CreateExponential();
}

// public float get_Maximum() [instance] :1609
float ZoomGesture::Maximum()
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "get_Maximum()");
    return _maximum;
}

// public void set_Maximum(float value) [instance] :1610
void ZoomGesture::Maximum(float value)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "set_Maximum(float)");
    _maximum = value;
}

// public float get_Minimum() [instance] :1616
float ZoomGesture::Minimum()
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "get_Minimum()");
    return _minimum;
}

// public void set_Minimum(float value) [instance] :1617
void ZoomGesture::Minimum(float value)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "set_Minimum(float)");
    _minimum = value;
}

// private void OnZoomed(float factor) [instance] :1590
void ZoomGesture::OnZoomed(float factor)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnZoomed(float)");
    ::g::Uno::Float2 ret3;
    float current = _startZoom * factor;
    float step = ::g::Uno::Math::Log1(current) - _prevZoom;
    ::g::Experimental::Physics::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[46/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New2(step, 0.0f));
    _prevZoom = ::g::Uno::Math::Log1(current);
    float z = ::g::Uno::Math::Exp1((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[45/*Experimental.Physics.MotionSimulation<float2>*/]), &ret3), ret3).X);
    uPtr(Target())->SetZoomFactor(z, this);
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) [static] :1553
ZoomGesture* ZoomGesture::New1(::g::Fuse::Elements::InteractiveTransform* target)
{
    ZoomGesture* obj1 = (ZoomGesture*)uNew(ZoomGesture_typeof());
    obj1->ctor_2(target);
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
