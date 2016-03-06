// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.BeginRemoveArgs.h>
#include <Fuse.BeginRemoveHandler.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInputActionArgs.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Android.h>
#include <Fuse.Triggers.ContainingText.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.InteractionCompleted.h>
#include <Fuse.Triggers.iOS.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.IVisibility.h>
#include <Fuse.Triggers.KeyPressHandler.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutAnimationType.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransition.PositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ResizeChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ScaleChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransitioned.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.OnUserEventFilter.h>
#include <Fuse.Triggers.PageBeginLoading.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Fuse.Triggers.RangeAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimationRange.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.TextInputActionTriggered.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Timeline.State.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.TriggerBypassMode.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileContainsText.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileFloat.h>
#include <Fuse.Triggers.WhileFloat.Range.h>
#include <Fuse.Triggers.WhileFocused.h>
#include <Fuse.Triggers.WhileFocusWithin.h>
#include <Fuse.Triggers.WhileInteracting.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhileNotFocused.h>
#include <Fuse.Triggers.WhilePageLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileScrollable.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileValueStatic.h>
#include <Fuse.Triggers.WhileVisible.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Fuse.Triggers.WhileWindowLandscape.h>
#include <Fuse.Triggers.WhileWindowPortrait.h>
#include <Fuse.Triggers.WhileWindowSize.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[15];
static uType* TYPES[100];

namespace g{
namespace Fuse{
namespace Triggers{

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(16)
// -------------------------------------------------------------

// public sealed class AddingAnimation :16
// {
::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(AddingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.AddingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)AddingAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))AddingAnimation__OnRooted_fn;
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AddingAnimation__New1_fn, 0, true, AddingAnimation_typeof(), 0));
    return type;
}

// public generated AddingAnimation() :16
void AddingAnimation__ctor_2_fn(AddingAnimation* __this)
{
    __this->ctor_2();
}

// public generated AddingAnimation New() :16
void AddingAnimation__New1_fn(AddingAnimation** __retval)
{
    *__retval = AddingAnimation::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :18
void AddingAnimation__OnRooted_fn(AddingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->BypassActivate();
    __this->Deactivate();
}

// public generated AddingAnimation() [instance] :16
void AddingAnimation::ctor_2()
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", ".ctor()");
    ctor_1();
}

// public generated AddingAnimation New() [static] :16
AddingAnimation* AddingAnimation::New1()
{
    AddingAnimation* obj1 = (AddingAnimation*)uNew(AddingAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(287)
// --------------------------------------------------------------

// public sealed class Android :287
// {
::g::Fuse::Triggers::Trigger_type* Android_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Android", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Android__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Android__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Android__OnUnrooted_fn;
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Android__New1_fn, 0, true, Android_typeof(), 0));
    return type;
}

// public generated Android() :287
void Android__ctor_2_fn(Android* __this)
{
    __this->ctor_2();
}

// public generated Android New() :287
void Android__New1_fn(Android** __retval)
{
    *__retval = Android::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :289
void Android__OnRooted_fn(Android* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.Android", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->BypassActivate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :298
void Android__OnUnrooted_fn(Android* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.Android", "OnUnrooted(Fuse.Node)");
    __this->Deactivate();
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Android() [instance] :287
void Android::ctor_2()
{
    uStackFrame __("Fuse.Triggers.Android", ".ctor()");
    ctor_1();
}

// public generated Android New() [static] :287
Android* Android::New1()
{
    Android* obj1 = (Android*)uNew(Android_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(94)
// ----------------------------------------------------------------------

// public sealed class ContainingText :94
// {
::g::Fuse::Triggers::Trigger_type* ContainingText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(ContainingText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ContainingText", options);
    type->SetBase(::g::Fuse::Triggers::WhileContainsText_typeof());
    type->fp_ctor_ = (void*)ContainingText__New2_fn;
    ::STRINGS[0] = uString::Const("Use the trigger WhileContainsText instead");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\Triggers\\$.uno");
    ::STRINGS[2] = uString::Const(".ctor");
    ::TYPES[0] = uObject_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ContainingText__New2_fn, 0, true, ContainingText_typeof(), 0));
    return type;
}

// public ContainingText() :96
void ContainingText__ctor_4_fn(ContainingText* __this)
{
    __this->ctor_4();
}

// public ContainingText New() :96
void ContainingText__New2_fn(ContainingText** __retval)
{
    *__retval = ContainingText::New2();
}

// public ContainingText() [instance] :96
void ContainingText::ctor_4()
{
    uStackFrame __("Fuse.Triggers.ContainingText", ".ctor()");
    ctor_3();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*"Use the tri...*/], this, ::STRINGS[1/*"C:\\Program...*/], 98, ::STRINGS[2/*".ctor"*/]);
}

// public ContainingText New() [static] :96
ContainingText* ContainingText::New2()
{
    ContainingText* obj1 = (ContainingText*)uNew(ContainingText_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\Actions\$.uno(207)
// ----------------------------------------------------------------------

// public abstract interface IMediaPlayback :207
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Duration", NULL, NULL, offsetof(IMediaPlayback, fp_get_Duration), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(IMediaPlayback, fp_get_Position), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(IMediaPlayback, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_get_Volume), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_set_Volume), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(507)
// -----------------------------------------------------------------------

// public sealed class InteractionCompleted :507
// {
::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(InteractionCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.InteractionCompleted", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)InteractionCompleted__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))InteractionCompleted__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))InteractionCompleted__OnUnrooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::InteractionCompleted, _node), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::InteractionCompleted, _on), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::InteractionCompleted, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)InteractionCompleted__New1_fn, 0, true, InteractionCompleted_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)InteractionCompleted__get_Source_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)InteractionCompleted__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated InteractionCompleted() :507
void InteractionCompleted__ctor_2_fn(InteractionCompleted* __this)
{
    __this->ctor_2();
}

// public generated InteractionCompleted New() :507
void InteractionCompleted__New1_fn(InteractionCompleted** __retval)
{
    *__retval = InteractionCompleted::New1();
}

// private void OnInteractingChanged(object s, object a) :534
void InteractionCompleted__OnInteractingChanged_fn(InteractionCompleted* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :518
void InteractionCompleted__OnRooted_fn(InteractionCompleted* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnRooted(Fuse.Node)");
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_node = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Node*)__this->ParentNode()));
    uPtr(__this->_node)->add_IsInteractingChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)InteractionCompleted__OnInteractingChanged_fn, __this));
    __this->_on = uPtr(__this->_node)->IsInteracting();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :527
void InteractionCompleted__OnUnrooted_fn(InteractionCompleted* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_node)->remove_IsInteractingChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)InteractionCompleted__OnInteractingChanged_fn, __this));
    __this->_node = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Node get_Source() :512
void InteractionCompleted__get_Source_fn(InteractionCompleted* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Node value) :513
void InteractionCompleted__set_Source_fn(InteractionCompleted* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// public generated InteractionCompleted() [instance] :507
void InteractionCompleted::ctor_2()
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", ".ctor()");
    ctor_1();
}

// private void OnInteractingChanged(object s, object a) [instance] :534
void InteractionCompleted::OnInteractingChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnInteractingChanged(object,object)");
    bool n = uPtr(_node)->IsInteracting();

    if (n == _on)
        return;

    _on = n;

    if (!n)
        Pulse();
}

// public Fuse.Node get_Source() [instance] :512
::g::Fuse::Node* InteractionCompleted::Source()
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Node value) [instance] :513
void InteractionCompleted::Source(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "set_Source(Fuse.Node)");
    _source = value;
}

// public generated InteractionCompleted New() [static] :507
InteractionCompleted* InteractionCompleted::New1()
{
    InteractionCompleted* obj2 = (InteractionCompleted*)uNew(InteractionCompleted_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(266)
// --------------------------------------------------------------

// public sealed class iOS :266
// {
::g::Fuse::Triggers::Trigger_type* iOS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(iOS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.iOS", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)iOS__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))iOS__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))iOS__OnUnrooted_fn;
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOS__New1_fn, 0, true, iOS_typeof(), 0));
    return type;
}

// public generated iOS() :266
void iOS__ctor_2_fn(iOS* __this)
{
    __this->ctor_2();
}

// public generated iOS New() :266
void iOS__New1_fn(iOS** __retval)
{
    *__retval = iOS::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :268
void iOS__OnRooted_fn(iOS* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.iOS", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :277
void iOS__OnUnrooted_fn(iOS* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.iOS", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated iOS() [instance] :266
void iOS::ctor_2()
{
    uStackFrame __("Fuse.Triggers.iOS", ".ctor()");
    ctor_1();
}

// public generated iOS New() [static] :266
iOS* iOS::New1()
{
    iOS* obj1 = (iOS*)uNew(iOS_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\Actions\$.uno(193)
// ----------------------------------------------------------------------

// public abstract interface IPlayback :193
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_CanPause", NULL, NULL, offsetof(IPlayback, fp_get_CanPause), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, NULL, offsetof(IPlayback, fp_get_CanPlayTo), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, NULL, offsetof(IPlayback, fp_get_CanResume), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, NULL, offsetof(IPlayback, fp_get_CanStop), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pause", NULL, NULL, offsetof(IPlayback, fp_Pause), false, uVoid_typeof(), 0),
        new uFunction("PlayTo", NULL, NULL, offsetof(IPlayback, fp_PlayTo), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, NULL, offsetof(IPlayback, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, NULL, offsetof(IPlayback, fp_set_Progress), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Resume", NULL, NULL, offsetof(IPlayback, fp_Resume), false, uVoid_typeof(), 0),
        new uFunction("Stop", NULL, NULL, offsetof(IPlayback, fp_Stop), false, uVoid_typeof(), 0));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(319)
// --------------------------------------------------------------

// public abstract interface IProgress :319
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Progress", NULL, NULL, offsetof(IProgress, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_add_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_remove_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(668)
// --------------------------------------------------------------

// public abstract interface IPulseTrigger :668
// {
uInterfaceType* IPulseTrigger_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPulseTrigger", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Pulse", NULL, NULL, offsetof(IPulseTrigger, fp_Pulse), false, uVoid_typeof(), 0));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(95)
// -------------------------------------------------------------

// public abstract interface IValue<T> :95
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Value", NULL, NULL, offsetof(IValue, fp_get_Value), false, type->T(0), 0),
        new uFunction("set_Value", NULL, NULL, offsetof(IValue, fp_set_Value), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, NULL, offsetof(IValue, fp_add_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, NULL, offsetof(IValue, fp_remove_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(12)
// -------------------------------------------------------------

// internal abstract interface IVisibility :12
// {
uInterfaceType* IVisibility_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IVisibility", 0, 0);
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(219)
// --------------------------------------------------------------

// public delegate void KeyPressHandler(object sender, Fuse.Input.KeyEventArgs args) :219
uDelegateType* KeyPressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.KeyPressHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyEventArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(161)
// -----------------------------------------------------------------------

// public sealed class LayoutAnimation :161
// {
::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 24;
    options.ObjectSize = sizeof(LayoutAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.LayoutAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)LayoutAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LayoutAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LayoutAnimation__OnUnrooted_fn;
    ::STRINGS[3] = uString::Const("LayoutAnimation can only be used on an Element");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Elements\\0.24.7\\Triggers\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[6] = ::g::Fuse::UpdateManager_typeof();
    ::TYPES[7] = ::g::Uno::Float4x4_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Fuse::Elements::PreplacementArgs_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    ::TYPES[12] = ::g::Fuse::Triggers::LayoutTransition_typeof();
    ::TYPES[13] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _element), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _frameTrans), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _hasOld), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldLocal), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldParent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldWorld), 0,
        ::g::Fuse::Triggers::LayoutAnimationType_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _type), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LayoutAnimation__New1_fn, 0, true, LayoutAnimation_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)LayoutAnimation__get_Type_fn, 0, false, ::g::Fuse::Triggers::LayoutAnimationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)LayoutAnimation__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::LayoutAnimationType_typeof()));
    return type;
}

// public generated LayoutAnimation() :161
void LayoutAnimation__ctor_2_fn(LayoutAnimation* __this)
{
    __this->ctor_2();
}

// public generated LayoutAnimation New() :161
void LayoutAnimation__New1_fn(LayoutAnimation** __retval)
{
    *__retval = LayoutAnimation::New1();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :226
void LayoutAnimation__OnPlaced_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) :205
void LayoutAnimation__OnPreplacement_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    __this->OnPreplacement(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :171
void LayoutAnimation__OnRooted_fn(LayoutAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[8/*Fuse.Elements.Element*/]);

    if (__this->_element == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"LayoutAnima...*/], __this->ParentNode(), ::STRINGS[4/*"C:\\Program...*/], 177, ::STRINGS[5/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[10/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
    uPtr(__this->_element)->add_Preplacement(uDelegate::New(::TYPES[11/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
    uPtr(__this->_element)->ignoreTempArrange = true;
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[13/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :252
void LayoutAnimation__OnTransitioned_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    __this->OnTransitioned(sender, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :187
void LayoutAnimation__OnUnrooted_fn(LayoutAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnUnrooted(Fuse.Node)");

    if (__this->_element != NULL)
    {
        uPtr(__this->_element)->ignoreTempArrange = false;
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[10/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
        uPtr(__this->_element)->remove_Preplacement(uDelegate::New(::TYPES[11/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[13/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Triggers.LayoutAnimationType get_Type() :166
void LayoutAnimation__get_Type_fn(LayoutAnimation* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Triggers.LayoutAnimationType value) :167
void LayoutAnimation__set_Type_fn(LayoutAnimation* __this, int* value)
{
    __this->Type(*value);
}

// public generated LayoutAnimation() [instance] :161
void LayoutAnimation::ctor_2()
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", ".ctor()");
    _type = 3;
    ctor_1();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :226
void LayoutAnimation::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnPlaced(object,Fuse.PlacedArgs)");

    if (!((Type() & 1) == 1))
        return;

    if (_hasOld != ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (_frameTrans == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    ::g::Uno::Float4x4 ind1 = _oldLocal;
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = _oldSize;
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(_oldWorld, uPtr(uPtr(_element)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_element)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_element, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_element, oldPosition, uPtr(_element)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_element, oldSize, uPtr(_element)->IntendedSize());
    BypassActivate();
    Deactivate();
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) [instance] :205
void LayoutAnimation::OnPreplacement(uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnPreplacement(object,Fuse.Elements.PreplacementArgs)");

    if (!((Type() & 1) == 1))
        return;

    if (_hasOld == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (!uPtr(args)->HasPrev())
        return;

    _hasOld = ::g::Fuse::UpdateManager::FrameIndex();
    _oldWorld = uPtr(_element)->WorldTransform();
    _oldPosition = uPtr(_element)->ActualPosition();
    _oldSize = uPtr(_element)->ActualSize();
    _oldParent = uPtr(_element)->Parent();
    _oldLocal = uPtr(_element)->LocalTransform();
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) [instance] :252
void LayoutAnimation::OnTransitioned(uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnTransitioned(object,Fuse.Triggers.LayoutTransitionedArgs)");

    if (!((Type() & 2) == 2))
        return;

    _frameTrans = ::g::Fuse::UpdateManager::FrameIndex();
    BypassActivate();
    Deactivate();
}

// public Fuse.Triggers.LayoutAnimationType get_Type() [instance] :166
int LayoutAnimation::Type()
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "get_Type()");
    return _type;
}

// public void set_Type(Fuse.Triggers.LayoutAnimationType value) [instance] :167
void LayoutAnimation::Type(int value)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "set_Type(Fuse.Triggers.LayoutAnimationType)");
    _type = value;
}

// public generated LayoutAnimation New() [static] :161
LayoutAnimation* LayoutAnimation::New1()
{
    LayoutAnimation* obj2 = (LayoutAnimation*)uNew(LayoutAnimation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(154)
// -----------------------------------------------------------------------

// public enum LayoutAnimationType :154
uEnumType* LayoutAnimationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.LayoutAnimationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Implicit", 1LL,
        "Explicit", 2LL,
        "Both", 3LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(26)
// ----------------------------------------------------------------------

// public static class LayoutTransition :26
// {
// static LayoutTransition() :26
static void LayoutTransition__cctor__fn(uType* __type)
{
    LayoutTransition::_transitioned_ = ::g::Fuse::Triggers::LayoutTransitioned::New1();
    LayoutTransition::PositionLayoutChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::WorldPositionChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::_worldPositionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::PositionChange_ = (uObject*)LayoutTransition__PositionChangeMode::New1();
    LayoutTransition::_positionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::SizeLayoutChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ResizeSizeChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ScalingSizeChange_ = (uObject*)LayoutTransition__ScaleChangeMode::New1();
    LayoutTransition::_sizeChange_ = ::g::Fuse::Properties::CreateHandle();
}

uClassType* LayoutTransition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.LayoutTransition", options);
    type->fp_cctor_ = LayoutTransition__cctor__fn;
    ::TYPES[14] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[15] = ::g::Fuse::Animations::IResizeMode_typeof();
    ::TYPES[16] = ::g::Fuse::IScalingMode_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Uno::Float4_typeof();
    ::TYPES[18] = ::g::Uno::Float3_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[19] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_positionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_sizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::LayoutTransitioned_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_transitioned_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_worldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("PositionChange", 4),
        new uField("PositionLayoutChange", 5),
        new uField("ResizeSizeChange", 6),
        new uField("ScalingSizeChange", 7),
        new uField("SizeLayoutChange", 8),
        new uField("WorldPositionChange", 9));
    type->Reflection.SetFunctions(1,
        new uFunction("get_Transitioned", NULL, (void*)LayoutTransition__get_Transitioned_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()), 0));
    return type;
}

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) :75
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval)
{
    *__retval = LayoutTransition::GetPositionChange(n, oldPos, newPos);
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) :135
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval)
{
    *__retval = LayoutTransition::GetSizeChange(n, oldSize, newSize);
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) :47
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* __retval)
{
    *__retval = LayoutTransition::GetWorldPositionChange(n);
}

// internal static void SetPositionChange(Fuse.Node n, float2 oldPos, float2 newPos) :85
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition::SetPositionChange(n, *oldPos, *newPos);
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) :130
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition::SetSizeChange(n, *oldSize, *newSize);
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) :54
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* change)
{
    LayoutTransition::SetWorldPositionChange(n, *change);
}

// public static Fuse.NodeEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() :30
void LayoutTransition__get_Transitioned_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = LayoutTransition::Transitioned();
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_positionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_sizeChange_;
uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> LayoutTransition::_transitioned_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_worldPositionChange_;
uSStrong<uObject*> LayoutTransition::PositionChange_;
uSStrong<uObject*> LayoutTransition::PositionLayoutChange_;
uSStrong<uObject*> LayoutTransition::ResizeSizeChange_;
uSStrong<uObject*> LayoutTransition::ScalingSizeChange_;
uSStrong<uObject*> LayoutTransition::SizeLayoutChange_;
uSStrong<uObject*> LayoutTransition::WorldPositionChange_;

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) [static] :75
bool LayoutTransition::GetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetPositionChange(Fuse.Node,float2&,float2&)");
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange());
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::TYPES[17/*float4*/], v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) [static] :135
bool LayoutTransition::GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetSizeChange(Fuse.Node,float2&,float2&)");
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange(), &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::TYPES[17/*float4*/], res);
        *oldSize = ::g::Uno::Float2__New2(f.X, f.Y);
        *newSize = ::g::Uno::Float2__New2(f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::g::Uno::Float2__New1(0.0f);
        *newSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) [static] :47
::g::Uno::Float3 LayoutTransition::GetWorldPositionChange(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetWorldPositionChange(Fuse.Node)");
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange());

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::TYPES[18/*float3*/], v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Node n, float2 oldPos, float2 newPos) [static] :85
void LayoutTransition::SetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetPositionChange(Fuse.Node,float2,float2)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange(), uBox(::TYPES[17/*float4*/], ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) [static] :130
void LayoutTransition::SetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetSizeChange(Fuse.Node,float2,float2)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange(), uBox(::TYPES[17/*float4*/], ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) [static] :54
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Node* n, ::g::Uno::Float3 change)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetWorldPositionChange(Fuse.Node,float3)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange(), uBox(::TYPES[18/*float3*/], change));
}

// public static Fuse.NodeEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static] :30
::g::Fuse::NodeEvent* LayoutTransition::Transitioned()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "get_Transitioned()");
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(17)
// ----------------------------------------------------------------------

// internal sealed class LayoutTransitioned :17
// {
::g::Fuse::NodeEvent_type* LayoutTransitioned_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitioned);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Triggers.LayoutTransitioned", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()));
    type->fp_ctor_ = (void*)LayoutTransitioned__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))LayoutTransitioned__Invoke_fn;
    ::TYPES[13] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated LayoutTransitioned() :17
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Triggers.LayoutTransitionedHandler handler, object sender, Fuse.Triggers.LayoutTransitionedArgs args) :19
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutTransitioned", "Invoke(Fuse.Triggers.LayoutTransitionedHandler,object,Fuse.Triggers.LayoutTransitionedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated LayoutTransitioned New() :17
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval)
{
    *__retval = LayoutTransitioned::New1();
}

// public generated LayoutTransitioned() [instance] :17
void LayoutTransitioned::ctor_1()
{
    uStackFrame __("Fuse.Triggers.LayoutTransitioned", ".ctor()");
    ctor_();
}

// public generated LayoutTransitioned New() [static] :17
LayoutTransitioned* LayoutTransitioned::New1()
{
    LayoutTransitioned* obj1 = (LayoutTransitioned*)uNew(LayoutTransitioned_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(10)
// ----------------------------------------------------------------------

// internal sealed class LayoutTransitionedArgs :10
// {
::g::Fuse::NodeEventArgs_type* LayoutTransitionedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransitionedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Triggers.LayoutTransitionedArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2);
    return type;
}

// public LayoutTransitionedArgs(Fuse.Node node) :12
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_2(node);
}

// public LayoutTransitionedArgs New(Fuse.Node node) :12
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Node* node, LayoutTransitionedArgs** __retval)
{
    *__retval = LayoutTransitionedArgs::New3(node);
}

// public LayoutTransitionedArgs(Fuse.Node node) [instance] :12
void LayoutTransitionedArgs::ctor_2(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Triggers.LayoutTransitionedArgs", ".ctor(Fuse.Node)");
    ctor_1(node);
}

// public LayoutTransitionedArgs New(Fuse.Node node) [static] :12
LayoutTransitionedArgs* LayoutTransitionedArgs::New3(::g::Fuse::Node* node)
{
    LayoutTransitionedArgs* obj1 = (LayoutTransitionedArgs*)uNew(LayoutTransitionedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(16)
// ----------------------------------------------------------------------

// internal delegate void LayoutTransitionedHandler(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :16
uDelegateType* LayoutTransitionedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.LayoutTransitionedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(250)
// --------------------------------------------------------------

// public sealed class OnBackButton :250
// {
::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(OnBackButton);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnBackButton", options);
    type->SetBase(::g::Fuse::Triggers::OnKeyPress_typeof());
    type->fp_ctor_ = (void*)OnBackButton__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnBackButton__OnRooted_fn;
    ::TYPES[20] = ::g::Fuse::Triggers::OnKeyPress_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OnBackButton__New2_fn, 0, true, OnBackButton_typeof(), 0));
    return type;
}

// public generated OnBackButton() :250
void OnBackButton__ctor_3_fn(OnBackButton* __this)
{
    __this->ctor_3();
}

// public generated OnBackButton New() :250
void OnBackButton__New2_fn(OnBackButton** __retval)
{
    *__retval = OnBackButton::New2();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :252
void OnBackButton__OnRooted_fn(OnBackButton* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.OnBackButton", "OnRooted(Fuse.Node)");
    __this->Key(201);
    ::g::Fuse::Triggers::OnKeyPress__OnRooted_fn(__this, parentNode);
}

// public generated OnBackButton() [instance] :250
void OnBackButton::ctor_3()
{
    uStackFrame __("Fuse.Triggers.OnBackButton", ".ctor()");
    ctor_2();
}

// public generated OnBackButton New() [static] :250
OnBackButton* OnBackButton::New2()
{
    OnBackButton* obj1 = (OnBackButton*)uNew(OnBackButton_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(221)
// --------------------------------------------------------------

// public class OnKeyPress :221
// {
::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(OnKeyPress);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnKeyPress", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)OnKeyPress__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnKeyPress__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnKeyPress__OnUnrooted_fn;
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[21] = ::g::Fuse::Input::KeyEventArgs_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[23] = ::g::Fuse::Triggers::KeyPressHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[24] = ::g::Fuse::Input::Keyboard_typeof();
    ::TYPES[25] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    type->SetFields(15,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Fuse::Triggers::OnKeyPress, _Key), 0,
        ::g::Fuse::Triggers::KeyPressHandler_typeof(), offsetof(::g::Fuse::Triggers::OnKeyPress, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("add_Handler", NULL, (void*)OnKeyPress__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::KeyPressHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)OnKeyPress__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::KeyPressHandler_typeof()),
        new uFunction("get_Key", NULL, (void*)OnKeyPress__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)OnKeyPress__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::Key_typeof()),
        new uFunction(".ctor", NULL, (void*)OnKeyPress__New1_fn, 0, true, OnKeyPress_typeof(), 0));
    return type;
}

// public generated OnKeyPress() :221
void OnKeyPress__ctor_2_fn(OnKeyPress* __this)
{
    __this->ctor_2();
}

// public generated void add_Handler(Fuse.Triggers.KeyPressHandler value) :223
void OnKeyPress__add_Handler_fn(OnKeyPress* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.KeyPressHandler value) :223
void OnKeyPress__remove_Handler_fn(OnKeyPress* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Uno.Platform.Key get_Key() :225
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int* __retval)
{
    *__retval = __this->Key();
}

// public generated void set_Key(Uno.Platform.Key value) :225
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int* value)
{
    __this->Key(*value);
}

// public generated OnKeyPress New() :221
void OnKeyPress__New1_fn(OnKeyPress** __retval)
{
    *__retval = OnKeyPress::New1();
}

// internal void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :239
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override void OnRooted(Fuse.Node parentNode) :227
void OnKeyPress__OnRooted_fn(OnKeyPress* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[25/*Fuse.Input.KeyPressedHandler*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :233
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[25/*Fuse.Input.KeyPressedHandler*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated OnKeyPress() [instance] :221
void OnKeyPress::ctor_2()
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", ".ctor()");
    ctor_1();
}

// public generated void add_Handler(Fuse.Triggers.KeyPressHandler value) [instance] :223
void OnKeyPress::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "add_Handler(Fuse.Triggers.KeyPressHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[23/*Fuse.Triggers.KeyPressHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.KeyPressHandler value) [instance] :223
void OnKeyPress::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "remove_Handler(Fuse.Triggers.KeyPressHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[23/*Fuse.Triggers.KeyPressHandler*/]);
}

// public generated Uno.Platform.Key get_Key() [instance] :225
int OnKeyPress::Key()
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "get_Key()");
    return _Key;
}

// public generated void set_Key(Uno.Platform.Key value) [instance] :225
void OnKeyPress::Key(int value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "set_Key(Uno.Platform.Key)");
    _Key = value;
}

// internal void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :239
void OnKeyPress::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnKeyPressed(object,Fuse.Input.KeyEventArgs)");

    if (uPtr(args)->Key() == Key())
    {
        Pulse();

        if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
            uPtr(Handler1)->Invoke(2, this, args);
    }
}

// public generated OnKeyPress New() [static] :221
OnKeyPress* OnKeyPress::New1()
{
    OnKeyPress* obj1 = (OnKeyPress*)uNew(OnKeyPress_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.UserEvents\0.24.7\$.uno(12)
// ---------------------------------------------------------------

// public sealed class OnUserEvent :12
// {
::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(OnUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnUserEvent", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)OnUserEvent__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnUserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnUserEvent__OnUnrooted_fn;
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[26] = ::g::Fuse::UserEventArgs_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[27] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::UserEventDispatch_typeof();
    type->SetFields(15,
        ::g::Fuse::Triggers::OnUserEventFilter_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _filter), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _rootedEvent), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _scope), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _Name), 0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Filter", NULL, (void*)OnUserEvent__get_Filter_fn, 0, false, ::g::Fuse::Triggers::OnUserEventFilter_typeof(), 0),
        new uFunction("set_Filter", NULL, (void*)OnUserEvent__set_Filter_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::OnUserEventFilter_typeof()),
        new uFunction("add_Handler", NULL, (void*)OnUserEvent__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)OnUserEvent__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("get_Name", NULL, (void*)OnUserEvent__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)OnUserEvent__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)OnUserEvent__New1_fn, 0, true, OnUserEvent_typeof(), 0));
    return type;
}

// public generated OnUserEvent() :12
void OnUserEvent__ctor_2_fn(OnUserEvent* __this)
{
    __this->ctor_2();
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() :19
void OnUserEvent__get_Filter_fn(OnUserEvent* __this, int* __retval)
{
    *__retval = __this->Filter();
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) :20
void OnUserEvent__set_Filter_fn(OnUserEvent* __this, int* value)
{
    __this->Filter(*value);
}

// public generated void add_Handler(Fuse.UserEventHandler value) :23
void OnUserEvent__add_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) :23
void OnUserEvent__remove_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated string get_Name() :14
void OnUserEvent__get_Name_fn(OnUserEvent* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public generated void set_Name(string value) :14
void OnUserEvent__set_Name_fn(OnUserEvent* __this, uString* value)
{
    __this->Name(value);
}

// public generated OnUserEvent New() :12
void OnUserEvent__New1_fn(OnUserEvent** __retval)
{
    *__retval = OnUserEvent::New1();
}

// private void OnRaised(object s, Fuse.UserEventArgs args) :42
void OnUserEvent__OnRaised_fn(OnUserEvent* __this, uObject* s, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :26
void OnUserEvent__OnRooted_fn(OnUserEvent* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_rootedEvent = ::g::Fuse::UserEventDispatch::GetByName(__this->Name());
    uPtr(__this->_rootedEvent)->add_Raised(uDelegate::New(::TYPES[27/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
    __this->_scope = NULL;
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :34
void OnUserEvent__OnUnrooted_fn(OnUserEvent* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_rootedEvent)->remove_Raised(uDelegate::New(::TYPES[27/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
    __this->_rootedEvent = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated OnUserEvent() [instance] :12
void OnUserEvent::ctor_2()
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", ".ctor()");
    ctor_1();
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() [instance] :19
int OnUserEvent::Filter()
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "get_Filter()");
    return _filter;
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) [instance] :20
void OnUserEvent::Filter(int value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "set_Filter(Fuse.Triggers.OnUserEventFilter)");
    _filter = value;
}

// public generated void add_Handler(Fuse.UserEventHandler value) [instance] :23
void OnUserEvent::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "add_Handler(Fuse.UserEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[27/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) [instance] :23
void OnUserEvent::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "remove_Handler(Fuse.UserEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[27/*Fuse.UserEventHandler*/]);
}

// public generated string get_Name() [instance] :14
uString* OnUserEvent::Name()
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "get_Name()");
    return _Name;
}

// public generated void set_Name(string value) [instance] :14
void OnUserEvent::Name(uString* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "set_Name(string)");
    _Name = value;
}

// private void OnRaised(object s, Fuse.UserEventArgs args) [instance] :42
void OnUserEvent::OnRaised(uObject* s, ::g::Fuse::UserEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnRaised(object,Fuse.UserEventArgs)");

    if (Filter() == 0)
    {
        if (_scope == NULL)
        {
            ::g::Fuse::Node* n;
            ::g::Fuse::UserEvent::ScanTree(ParentNode(), Name(), &n);
            _scope = n;
        }

        if (_scope != uPtr(args)->Source())
            return;
    }

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);

    Pulse();
}

// public generated OnUserEvent New() [static] :12
OnUserEvent* OnUserEvent::New1()
{
    OnUserEvent* obj1 = (OnUserEvent*)uNew(OnUserEvent_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.UserEvents\0.24.7\$.uno(5)
// --------------------------------------------------------------

// public enum OnUserEventFilter :5
uEnumType* OnUserEventFilter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.OnUserEventFilter", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Global", 1LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\WebView\$.uno(90)
// ---------------------------------------------------------------------

// public sealed class PageBeginLoading :90
// {
::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(PageBeginLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageBeginLoading", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)PageBeginLoading__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageBeginLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageBeginLoading__OnUnrooted_fn;
    ::STRINGS[6] = uString::Const("Warning: ");
    ::STRINGS[7] = uString::Const(" only applies to WebViews. Was attached to: ");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\WebView\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[29] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(15,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::PageBeginLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageBeginLoading__New1_fn, 0, true, PageBeginLoading_typeof(), 0));
    return type;
}

// public generated PageBeginLoading() :90
void PageBeginLoading__ctor_2_fn(PageBeginLoading* __this)
{
    __this->ctor_2();
}

// public generated PageBeginLoading New() :90
void PageBeginLoading__New1_fn(PageBeginLoading** __retval)
{
    *__retval = PageBeginLoading::New1();
}

// private void OnPageBeginLoading(object s, object a) :108
void PageBeginLoading__OnPageBeginLoading_fn(PageBeginLoading* __this, uObject* s, uObject* a)
{
    __this->OnPageBeginLoading(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :94
void PageBeginLoading__OnRooted_fn(PageBeginLoading* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);

    if (uIs(__this->ParentNode(), ::TYPES[29/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->ParentNode(), ::TYPES[29/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[29/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Warning: "*/], __this), ::STRINGS[7/*" only appli...*/]), __this->ParentNode()), __this, ::STRINGS[8/*"C:\\Program...*/], 104, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :113
void PageBeginLoading__OnUnrooted_fn(PageBeginLoading* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnUnrooted(Fuse.Node)");

    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[29/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated PageBeginLoading() [instance] :90
void PageBeginLoading::ctor_2()
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", ".ctor()");
    ctor_1();
}

// private void OnPageBeginLoading(object s, object a) [instance] :108
void PageBeginLoading::OnPageBeginLoading(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnPageBeginLoading(object,object)");
    Pulse();
}

// public generated PageBeginLoading New() [static] :90
PageBeginLoading* PageBeginLoading::New1()
{
    PageBeginLoading* obj1 = (PageBeginLoading*)uNew(PageBeginLoading_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\WebView\$.uno(131)
// ----------------------------------------------------------------------

// public sealed class PageLoaded :131
// {
::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(PageLoaded);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageLoaded", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)PageLoaded__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageLoaded__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageLoaded__OnUnrooted_fn;
    ::STRINGS[6] = uString::Const("Warning: ");
    ::STRINGS[7] = uString::Const(" only applies to WebViews. Was attached to: ");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\WebView\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[29] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(15,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::PageLoaded, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageLoaded__New1_fn, 0, true, PageLoaded_typeof(), 0));
    return type;
}

// public generated PageLoaded() :131
void PageLoaded__ctor_2_fn(PageLoaded* __this)
{
    __this->ctor_2();
}

// public generated PageLoaded New() :131
void PageLoaded__New1_fn(PageLoaded** __retval)
{
    *__retval = PageLoaded::New1();
}

// private void OnPageLoaded(object s, object a) :149
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a)
{
    __this->OnPageLoaded(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :135
void PageLoaded__OnRooted_fn(PageLoaded* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);

    if (uIs(__this->ParentNode(), ::TYPES[29/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->ParentNode(), ::TYPES[29/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[29/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Warning: "*/], __this), ::STRINGS[7/*" only appli...*/]), __this->ParentNode()), __this, ::STRINGS[8/*"C:\\Program...*/], 145, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :154
void PageLoaded__OnUnrooted_fn(PageLoaded* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnUnrooted(Fuse.Node)");

    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[29/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated PageLoaded() [instance] :131
void PageLoaded::ctor_2()
{
    uStackFrame __("Fuse.Triggers.PageLoaded", ".ctor()");
    ctor_1();
}

// private void OnPageLoaded(object s, object a) [instance] :149
void PageLoaded::OnPageLoaded(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnPageLoaded(object,object)");
    Pulse();
}

// public generated PageLoaded New() [static] :131
PageLoaded* PageLoaded::New1()
{
    PageLoaded* obj1 = (PageLoaded*)uNew(PageLoaded_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(59)
// ----------------------------------------------------------------------

// private sealed class LayoutTransition.PositionChangeMode :59
// {
LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__PositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__PositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__PositionChangeMode_type);
    type = (LayoutTransition__PositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.PositionChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__PositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__PositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__PositionChangeMode__get_Flags_fn;
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[30] = ::g::Fuse::Transform_typeof();
    ::TYPES[31] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface1));
    return type;
}

// public generated PositionChangeMode() :59
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :68
void LayoutTransition__PositionChangeMode__get_Flags_fn(LayoutTransition__PositionChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :61
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated PositionChangeMode New() :59
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval)
{
    *__retval = LayoutTransition__PositionChangeMode::New1();
}

// public generated PositionChangeMode() [instance] :59
void LayoutTransition__PositionChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :68
int LayoutTransition__PositionChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.PositionChangeMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :61
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.PositionChangeMode", "GetAbsVector(Fuse.Translation)");
    ::g::Uno::Float2 oldPos;
    ::g::Uno::Float2 newPos;

    if (!::g::Fuse::Triggers::LayoutTransition::GetPositionChange(uPtr(t)->RelativeNode(), &oldPos, &newPos))
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Subtraction2(oldPos, newPos), 0.0f), uPtr(t)->Vector());
}

// public generated PositionChangeMode New() [static] :59
LayoutTransition__PositionChangeMode* LayoutTransition__PositionChangeMode::New1()
{
    LayoutTransition__PositionChangeMode* obj1 = (LayoutTransition__PositionChangeMode*)uNew(LayoutTransition__PositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(325)
// --------------------------------------------------------------

// public sealed class ProgressAnimation :325
// {
::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(ProgressAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ProgressAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)ProgressAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ProgressAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ProgressAnimation__OnUnrooted_fn;
    ::TYPES[32] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[33] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetFields(15,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _prevValue), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _progress), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _Source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ProgressAnimation__New1_fn, 0, true, ProgressAnimation_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)ProgressAnimation__get_Source_fn, 0, false, ::g::Fuse::Triggers::IProgress_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)ProgressAnimation__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IProgress_typeof()));
    return type;
}

// public generated ProgressAnimation() :325
void ProgressAnimation__ctor_2_fn(ProgressAnimation* __this)
{
    __this->ctor_2();
}

// public generated ProgressAnimation New() :325
void ProgressAnimation__New1_fn(ProgressAnimation** __retval)
{
    *__retval = ProgressAnimation::New1();
}

// private void OnChanged(object s, object a) :355
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a)
{
    __this->OnChanged(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :331
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnRooted(Fuse.Node)");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_progress = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : uAs<uObject*>(__this->ParentNode(), ::TYPES[32/*Fuse.Triggers.IProgress*/])));

    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[33/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_prevValue = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(__this->_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]));
        __this->BypassSeek(__this->_prevValue, 0);
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :344
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnUnrooted(Fuse.Node)");

    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[33/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_progress = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Fuse.Triggers.IProgress get_Source() :327
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(Fuse.Triggers.IProgress value) :327
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value)
{
    __this->Source(value);
}

// public generated ProgressAnimation() [instance] :325
void ProgressAnimation::ctor_2()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", ".ctor()");
    ctor_1();
}

// private void OnChanged(object s, object a) [instance] :355
void ProgressAnimation::OnChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnChanged(object,object)");
    double p = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]));
    double diff = p - _prevValue;
    _prevValue = p;
    Seek1(p, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Triggers.IProgress get_Source() [instance] :327
uObject* ProgressAnimation::Source()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "get_Source()");
    return _Source;
}

// public generated void set_Source(Fuse.Triggers.IProgress value) [instance] :327
void ProgressAnimation::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "set_Source(Fuse.Triggers.IProgress)");
    _Source = value;
}

// public generated ProgressAnimation New() [static] :325
ProgressAnimation* ProgressAnimation::New1()
{
    ProgressAnimation* obj2 = (ProgressAnimation*)uNew(ProgressAnimation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(114)
// -----------------------------------------------------------------------

// public partial sealed class PullToReload :114
// {
// static PullToReload() :226
static void PullToReload__cctor__fn(uType* __type)
{
}

::g::Fuse::Triggers::Trigger_type* PullToReload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.ObjectSize = sizeof(PullToReload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PullToReload", options);
    type->SetBase(::g::Fuse::Triggers::ScrollingAnimation_typeof());
    type->fp_ctor_ = (void*)PullToReload__New2_fn;
    type->fp_cctor_ = PullToReload__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PullToReload__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PullToReload__OnUnrooted_fn;
    ::TYPES[34] = ::g::Fuse::Triggers::ScrollingAnimation_typeof();
    ::TYPES[35] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[36] = ::g::Fuse::Triggers::Actions::Callback_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[38] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[39] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[41] = ::g::Fuse::Triggers::StateGroup_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[42] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(23,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _internLoading), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _isLoading), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _loading), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _pulledPastThreshold), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _pulling), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _rest), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, StateGroup), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, threshold), 0,
        ::g::Fuse::NodeEventHandler_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, ReloadHandler1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_IsLoading", NULL, (void*)PullToReload__get_IsLoading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLoading", NULL, (void*)PullToReload__set_IsLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Loading", NULL, (void*)PullToReload__get_Loading_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Loading", NULL, (void*)PullToReload__set_Loading_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction(".ctor", NULL, (void*)PullToReload__New2_fn, 0, true, PullToReload_typeof(), 0),
        new uFunction("get_PulledPastThreshold", NULL, (void*)PullToReload__get_PulledPastThreshold_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_PulledPastThreshold", NULL, (void*)PullToReload__set_PulledPastThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_Pulling", NULL, (void*)PullToReload__get_Pulling_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Pulling", NULL, (void*)PullToReload__set_Pulling_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("add_ReloadHandler", NULL, (void*)PullToReload__add_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::NodeEventHandler_typeof()),
        new uFunction("remove_ReloadHandler", NULL, (void*)PullToReload__remove_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::NodeEventHandler_typeof()),
        new uFunction("get_Rest", NULL, (void*)PullToReload__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)PullToReload__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()));
    return type;
}

// public PullToReload() :229
void PullToReload__ctor_3_fn(PullToReload* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :233
void PullToReload__InitializeUX_fn(PullToReload* __this)
{
    __this->InitializeUX();
}

// public bool get_IsLoading() :166
void PullToReload__get_IsLoading_fn(PullToReload* __this, bool* __retval)
{
    *__retval = __this->IsLoading();
}

// public void set_IsLoading(bool value) :167
void PullToReload__set_IsLoading_fn(PullToReload* __this, bool* value)
{
    __this->IsLoading(*value);
}

// public Fuse.Triggers.State get_Loading() :145
void PullToReload__get_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Loading();
}

// public void set_Loading(Fuse.Triggers.State value) :146
void PullToReload__set_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Loading(value);
}

// public PullToReload New() :229
void PullToReload__New2_fn(PullToReload** __retval)
{
    *__retval = PullToReload::New2();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :151
void PullToReload__OnRooted_fn(PullToReload* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::ScrollingAnimation__OnRooted_fn(__this, parentNode);
    uPtr(__this->StateGroup)->Rooted(__this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :157
void PullToReload__OnUnrooted_fn(PullToReload* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "OnUnrooted(Fuse.Node)");
    uPtr(__this->StateGroup)->Unrooted(__this->ParentNode());
    ::g::Fuse::Triggers::ScrollingAnimation__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Triggers.State get_PulledPastThreshold() :140
void PullToReload__get_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->PulledPastThreshold();
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) :141
void PullToReload__set_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->PulledPastThreshold(value);
}

// public Fuse.Triggers.State get_Pulling() :135
void PullToReload__get_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Pulling();
}

// public void set_Pulling(Fuse.Triggers.State value) :136
void PullToReload__set_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Pulling(value);
}

// private void ReachThreshold() :205
void PullToReload__ReachThreshold_fn(PullToReload* __this)
{
    __this->ReachThreshold();
}

// private void ReleasePull() :188
void PullToReload__ReleasePull_fn(PullToReload* __this)
{
    __this->ReleasePull();
}

// public generated void add_ReloadHandler(Fuse.NodeEventHandler value) :149
void PullToReload__add_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->add_ReloadHandler(value);
}

// public generated void remove_ReloadHandler(Fuse.NodeEventHandler value) :149
void PullToReload__remove_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->remove_ReloadHandler(value);
}

// private Fuse.Triggers.State Replace(Fuse.Triggers.State state, Fuse.Triggers.State value) :118
void PullToReload__Replace_fn(PullToReload* __this, ::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Replace(state, value);
}

// public Fuse.Triggers.State get_Rest() :130
void PullToReload__get_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value) :131
void PullToReload__set_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// private void StartPull() :179
void PullToReload__StartPull_fn(PullToReload* __this)
{
    __this->StartPull();
}

// public PullToReload() [instance] :229
void PullToReload::ctor_3()
{
    uStackFrame __("Fuse.Triggers.PullToReload", ".ctor()");
    StateGroup = ::g::Fuse::Triggers::StateGroup::New1();
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :233
void PullToReload::InitializeUX()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "InitializeUX()");
    ::g::Fuse::Triggers::Actions::Callback* temp = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp1 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp2 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Animations::Nothing* temp3 = ::g::Fuse::Animations::Nothing::New1();
    Range(1);
    temp->Direction(0);
    temp->Action(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)PullToReload__StartPull_fn, this));
    temp1->Direction(1);
    temp1->Action(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)PullToReload__ReleasePull_fn, this));
    temp2->Delay(0.5f);
    temp2->Action(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)PullToReload__ReachThreshold_fn, this));
    temp3->Duration(1.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[40/*Fuse.Animations.Animator*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Triggers.Actions.TriggerAction*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Triggers.Actions.TriggerAction*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Triggers.Actions.TriggerAction*/])), temp2);
}

// public bool get_IsLoading() [instance] :166
bool PullToReload::IsLoading()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_IsLoading()");
    return _isLoading;
}

// public void set_IsLoading(bool value) [instance] :167
void PullToReload::IsLoading(bool value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_IsLoading(bool)");
    _isLoading = value;
    _internLoading = value;

    if (_isLoading)
        uPtr(StateGroup)->Active(Loading());
    else
        uPtr(StateGroup)->Active(Rest());
}

// public Fuse.Triggers.State get_Loading() [instance] :145
::g::Fuse::Triggers::State* PullToReload::Loading()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_Loading()");
    return _loading;
}

// public void set_Loading(Fuse.Triggers.State value) [instance] :146
void PullToReload::Loading(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Loading(Fuse.Triggers.State)");
    _loading = Replace(_loading, value);
}

// public Fuse.Triggers.State get_PulledPastThreshold() [instance] :140
::g::Fuse::Triggers::State* PullToReload::PulledPastThreshold()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_PulledPastThreshold()");
    return _pulledPastThreshold;
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) [instance] :141
void PullToReload::PulledPastThreshold(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_PulledPastThreshold(Fuse.Triggers.State)");
    _pulledPastThreshold = Replace(_pulledPastThreshold, value);
}

// public Fuse.Triggers.State get_Pulling() [instance] :135
::g::Fuse::Triggers::State* PullToReload::Pulling()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_Pulling()");
    return _pulling;
}

// public void set_Pulling(Fuse.Triggers.State value) [instance] :136
void PullToReload::Pulling(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Pulling(Fuse.Triggers.State)");
    _pulling = Replace(_pulling, value);
}

// private void ReachThreshold() [instance] :205
void PullToReload::ReachThreshold()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "ReachThreshold()");

    if (IsLoading() || _internLoading)
        return;

    threshold = true;
    uPtr(StateGroup)->Active(PulledPastThreshold());
}

// private void ReleasePull() [instance] :188
void PullToReload::ReleasePull()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "ReleasePull()");

    if (IsLoading() || _internLoading)
        return;

    if (threshold)
    {
        _internLoading = true;
        uPtr(StateGroup)->Active(Loading());

        if (::g::Uno::Delegate::op_Inequality(ReloadHandler1, NULL))
            uPtr(ReloadHandler1)->Invoke(2, this, (::g::Fuse::NodeEventArgs*)::g::Fuse::NodeEventArgs::New2(ParentNode()));
    }
    else
        uPtr(StateGroup)->Active(Rest());
}

// public generated void add_ReloadHandler(Fuse.NodeEventHandler value) [instance] :149
void PullToReload::add_ReloadHandler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "add_ReloadHandler(Fuse.NodeEventHandler)");
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ReloadHandler1, value), ::TYPES[42/*Fuse.NodeEventHandler*/]);
}

// public generated void remove_ReloadHandler(Fuse.NodeEventHandler value) [instance] :149
void PullToReload::remove_ReloadHandler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "remove_ReloadHandler(Fuse.NodeEventHandler)");
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ReloadHandler1, value), ::TYPES[42/*Fuse.NodeEventHandler*/]);
}

// private Fuse.Triggers.State Replace(Fuse.Triggers.State state, Fuse.Triggers.State value) [instance] :118
::g::Fuse::Triggers::State* PullToReload::Replace(::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "Replace(Fuse.Triggers.State,Fuse.Triggers.State)");
    bool ret2;

    if (state != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[57/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), state, &ret2);

    if (value != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[57/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), value);

    return value;
}

// public Fuse.Triggers.State get_Rest() [instance] :130
::g::Fuse::Triggers::State* PullToReload::Rest()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_Rest()");
    return _rest;
}

// public void set_Rest(Fuse.Triggers.State value) [instance] :131
void PullToReload::Rest(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Rest(Fuse.Triggers.State)");
    _rest = Replace(_rest, value);
}

// private void StartPull() [instance] :179
void PullToReload::StartPull()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "StartPull()");

    if (IsLoading() || _internLoading)
        return;

    threshold = false;
    uPtr(StateGroup)->Active(Pulling());
}

// public PullToReload New() [static] :229
PullToReload* PullToReload::New2()
{
    PullToReload* obj1 = (PullToReload*)uNew(PullToReload_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1446)
// ---------------------------------------------------------------

// private enum WhileFloat.Range :1446
uEnumType* WhileFloat__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.WhileFloat.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(377)
// --------------------------------------------------------------

// public sealed class RangeAnimation :377
// {
::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(RangeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.RangeAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)RangeAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RangeAnimation__OnRooted_fn;
    ::TYPES[43] = ::g::Uno::Double_typeof();
    ::TYPES[44] = ::g::Uno::Float_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    type->SetFields(15,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _prevValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _value), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _Maximum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _Minimum), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Maximum", NULL, (void*)RangeAnimation__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)RangeAnimation__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)RangeAnimation__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)RangeAnimation__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)RangeAnimation__New1_fn, 0, true, RangeAnimation_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)RangeAnimation__get_Value_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)RangeAnimation__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated RangeAnimation() :377
void RangeAnimation__ctor_2_fn(RangeAnimation* __this)
{
    __this->ctor_2();
}

// public generated float get_Maximum() :392
void RangeAnimation__get_Maximum_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public generated void set_Maximum(float value) :392
void RangeAnimation__set_Maximum_fn(RangeAnimation* __this, float* value)
{
    __this->Maximum(*value);
}

// public generated float get_Minimum() :391
void RangeAnimation__get_Minimum_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public generated void set_Minimum(float value) :391
void RangeAnimation__set_Minimum_fn(RangeAnimation* __this, float* value)
{
    __this->Minimum(*value);
}

// public generated RangeAnimation New() :377
void RangeAnimation__New1_fn(RangeAnimation** __retval)
{
    *__retval = RangeAnimation::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :395
void RangeAnimation__OnRooted_fn(RangeAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_prevValue = (double)__this->Value();
    __this->BypassSeek(__this->_prevValue, 0);
}

// private void Update() :403
void RangeAnimation__Update_fn(RangeAnimation* __this)
{
    __this->Update();
}

// public float get_Value() :382
void RangeAnimation__get_Value_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float value) :383
void RangeAnimation__set_Value_fn(RangeAnimation* __this, float* value)
{
    __this->Value(*value);
}

// public generated RangeAnimation() [instance] :377
void RangeAnimation::ctor_2()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", ".ctor()");
    ctor_1();
}

// public generated float get_Maximum() [instance] :392
float RangeAnimation::Maximum()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "get_Maximum()");
    return _Maximum;
}

// public generated void set_Maximum(float value) [instance] :392
void RangeAnimation::Maximum(float value)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "set_Maximum(float)");
    _Maximum = value;
}

// public generated float get_Minimum() [instance] :391
float RangeAnimation::Minimum()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "get_Minimum()");
    return _Minimum;
}

// public generated void set_Minimum(float value) [instance] :391
void RangeAnimation::Minimum(float value)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "set_Minimum(float)");
    _Minimum = value;
}

// private void Update() [instance] :403
void RangeAnimation::Update()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "Update()");
    float p = Value();
    double diff = (double)p - _prevValue;
    _prevValue = (double)p;
    Seek1((double)p, (diff >= 0.0) ? 0 : 1);
}

// public float get_Value() [instance] :382
float RangeAnimation::Value()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "get_Value()");
    return (float)_value;
}

// public void set_Value(float value) [instance] :383
void RangeAnimation::Value(float value)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "set_Value(float)");
    _value = (double)value;

    if (IsRooted())
        Update();
}

// public generated RangeAnimation New() [static] :377
RangeAnimation* RangeAnimation::New1()
{
    RangeAnimation* obj1 = (RangeAnimation*)uNew(RangeAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(190)
// --------------------------------------------------------------

// private sealed class WhileKeyboardVisible.RelativeToKeyboardMode :190
// {
WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof()
{
    static uSStrong<WhileKeyboardVisible__RelativeToKeyboardMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode);
    options.TypeSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode_type);
    type = (WhileKeyboardVisible__RelativeToKeyboardMode_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", options);
    type->fp_ctor_ = (void*)WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn;
    ::TYPES[18] = ::g::Uno::Float3_typeof();
    ::TYPES[31] = ::g::Fuse::Translation_typeof();
    ::TYPES[45] = ::g::Fuse::Triggers::WhileKeyboardVisible_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface1));
    return type;
}

// public generated RelativeToKeyboardMode() :190
void WhileKeyboardVisible__RelativeToKeyboardMode__ctor__fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :197
void WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :192
void WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated RelativeToKeyboardMode New() :190
void WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn(WhileKeyboardVisible__RelativeToKeyboardMode** __retval)
{
    *__retval = WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

// public generated RelativeToKeyboardMode() [instance] :190
void WhileKeyboardVisible__RelativeToKeyboardMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :197
int WhileKeyboardVisible__RelativeToKeyboardMode::Flags()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :192
::g::Uno::Float3 WhileKeyboardVisible__RelativeToKeyboardMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Uno::Float3__New2(0.0f, uPtr(t)->Vector().Y * ::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY(), 0.0f);
}

// public generated RelativeToKeyboardMode New() [static] :190
WhileKeyboardVisible__RelativeToKeyboardMode* WhileKeyboardVisible__RelativeToKeyboardMode::New1()
{
    WhileKeyboardVisible__RelativeToKeyboardMode* obj1 = (WhileKeyboardVisible__RelativeToKeyboardMode*)uNew(WhileKeyboardVisible__RelativeToKeyboardMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(424)
// --------------------------------------------------------------

// public sealed class RemovingAnimation :424
// {
::g::Fuse::Triggers::Trigger_type* RemovingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(RemovingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.RemovingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)RemovingAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RemovingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RemovingAnimation__OnUnrooted_fn;
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[46] = ::g::Fuse::BeginRemoveHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::BeginRemoveArgs_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation, _args), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RemovingAnimation__New1_fn, 0, true, RemovingAnimation_typeof(), 0));
    return type;
}

// public generated RemovingAnimation() :424
void RemovingAnimation__ctor_2_fn(RemovingAnimation* __this)
{
    __this->ctor_2();
}

// public generated RemovingAnimation New() :424
void RemovingAnimation__New1_fn(RemovingAnimation** __retval)
{
    *__retval = RemovingAnimation::New1();
}

// private void OnBeginRemove(object sender, Fuse.BeginRemoveArgs args) :440
void RemovingAnimation__OnBeginRemove_fn(RemovingAnimation* __this, uObject* sender, ::g::Fuse::BeginRemoveArgs* args)
{
    __this->OnBeginRemove(sender, args);
}

// private void OnDone() :447
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this)
{
    __this->OnDone();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :426
void RemovingAnimation__OnRooted_fn(RemovingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_BeginRemove(uDelegate::New(::TYPES[46/*Fuse.BeginRemoveHandler*/], (void*)RemovingAnimation__OnBeginRemove_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :432
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnUnrooted(Fuse.Node)");
    uPtr(__this->ParentNode())->remove_BeginRemove(uDelegate::New(::TYPES[46/*Fuse.BeginRemoveHandler*/], (void*)RemovingAnimation__OnBeginRemove_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated RemovingAnimation() [instance] :424
void RemovingAnimation::ctor_2()
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", ".ctor()");
    ctor_1();
}

// private void OnBeginRemove(object sender, Fuse.BeginRemoveArgs args) [instance] :440
void RemovingAnimation::OnBeginRemove(uObject* sender, ::g::Fuse::BeginRemoveArgs* args)
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnBeginRemove(object,Fuse.BeginRemoveArgs)");
    _args = args;
    uPtr(args)->AddSubscriber();
    Activate(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)RemovingAnimation__OnDone_fn, this));
}

// private void OnDone() [instance] :447
void RemovingAnimation::OnDone()
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnDone()");
    uPtr(_args)->RemoveSubscriber();
    _args = NULL;
}

// public generated RemovingAnimation New() [static] :424
RemovingAnimation* RemovingAnimation::New1()
{
    RemovingAnimation* obj1 = (RemovingAnimation*)uNew(RemovingAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(91)
// ----------------------------------------------------------------------

// private sealed class LayoutTransition.ResizeChangeMode :91
// {
LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ResizeChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ResizeChangeMode_type);
    type = (LayoutTransition__ResizeChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ResizeChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__ResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))LayoutTransition__ResizeChangeMode__GetSizeChange_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__ResizeChangeMode__get_Flags_fn;
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface1));
    return type;
}

// public generated ResizeChangeMode() :91
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :102
void LayoutTransition__ResizeChangeMode__get_Flags_fn(LayoutTransition__ResizeChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public bool GetSizeChange(Fuse.Node n, Fuse.Node relative, float2& baseSize, float2& deltaSize) :93
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Node* n, ::g::Fuse::Node* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(n, relative, baseSize, deltaSize);
}

// public generated ResizeChangeMode New() :91
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval)
{
    *__retval = LayoutTransition__ResizeChangeMode::New1();
}

// public generated ResizeChangeMode() [instance] :91
void LayoutTransition__ResizeChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :102
int LayoutTransition__ResizeChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ResizeChangeMode", "get_Flags()");
    return 0;
}

// public bool GetSizeChange(Fuse.Node n, Fuse.Node relative, float2& baseSize, float2& deltaSize) [instance] :93
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Node* n, ::g::Fuse::Node* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ResizeChangeMode", "GetSizeChange(Fuse.Node,Fuse.Node,float2&,float2&)");
    ::g::Uno::Float2 oldSize;
    ::g::Uno::Float2 newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(n, &oldSize, &newSize);
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(oldSize, newSize);
    *baseSize = newSize;
    return b;
}

// public generated ResizeChangeMode New() [static] :91
LayoutTransition__ResizeChangeMode* LayoutTransition__ResizeChangeMode::New1()
{
    LayoutTransition__ResizeChangeMode* obj1 = (LayoutTransition__ResizeChangeMode*)uNew(LayoutTransition__ResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(105)
// -----------------------------------------------------------------------

// private sealed class LayoutTransition.ScaleChangeMode :105
// {
LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ScaleChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ScaleChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ScaleChangeMode_type);
    type = (LayoutTransition__ScaleChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ScaleChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__ScaleChangeMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))LayoutTransition__ScaleChangeMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__ScaleChangeMode__get_Flags_fn;
    ::TYPES[30] = ::g::Fuse::Transform_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[47] = ::g::Uno::Float2_typeof();
    ::TYPES[48] = ::g::Fuse::Scaling_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface1));
    return type;
}

// public generated ScaleChangeMode() :105
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :118
void LayoutTransition__ScaleChangeMode__get_Flags_fn(LayoutTransition__ScaleChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling v) :107
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(v);
}

// public generated ScaleChangeMode New() :105
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval)
{
    *__retval = LayoutTransition__ScaleChangeMode::New1();
}

// public generated ScaleChangeMode() [instance] :105
void LayoutTransition__ScaleChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :118
int LayoutTransition__ScaleChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ScaleChangeMode", "get_Flags()");
    return 0;
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance] :107
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ScaleChangeMode", "GetScaleVector(Fuse.Scaling)");
    ::g::Uno::Float2 oldSize;
    ::g::Uno::Float2 newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(uPtr(v)->RelativeNode(), &oldSize, &newSize);

    if ((!b || (newSize.Y < 1e-05f)) || (newSize.X < 1e-05f))
        return v->Vector();

    ::g::Uno::Float2 n = ::g::Uno::Float2__op_Division2(oldSize, newSize);
    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(n, 1.0f), v->Vector());
}

// public generated ScaleChangeMode New() [static] :105
LayoutTransition__ScaleChangeMode* LayoutTransition__ScaleChangeMode::New1()
{
    LayoutTransition__ScaleChangeMode* obj1 = (LayoutTransition__ScaleChangeMode*)uNew(LayoutTransition__ScaleChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(237)
// -----------------------------------------------------------------------

// public class ScrollingAnimation :237
// {
::g::Fuse::Triggers::Trigger_type* ScrollingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.ObjectSize = sizeof(ScrollingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ScrollingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)ScrollingAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ScrollingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ScrollingAnimation__OnUnrooted_fn;
    ::TYPES[49] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[50] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[51] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[47] = ::g::Uno::Float2_typeof();
    ::TYPES[43] = ::g::Uno::Double_typeof();
    type->SetFields(15,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _from), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasFrom), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasTo), 0,
        ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _range), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _scrollable), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _to), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _Inverse), 0,
        ::g::Fuse::Gestures::ScrollDirections_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _ScrollDirections), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_From", NULL, (void*)ScrollingAnimation__get_From_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_From", NULL, (void*)ScrollingAnimation__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Inverse", NULL, (void*)ScrollingAnimation__get_Inverse_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Inverse", NULL, (void*)ScrollingAnimation__set_Inverse_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollingAnimation__New1_fn, 0, true, ScrollingAnimation_typeof(), 0),
        new uFunction("get_Range", NULL, (void*)ScrollingAnimation__get_Range_fn, 0, false, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), 0),
        new uFunction("set_Range", NULL, (void*)ScrollingAnimation__set_Range_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof()),
        new uFunction("get_ScrollDirections", NULL, (void*)ScrollingAnimation__get_ScrollDirections_fn, 0, false, ::g::Fuse::Gestures::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)ScrollingAnimation__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ScrollDirections_typeof()),
        new uFunction("get_To", NULL, (void*)ScrollingAnimation__get_To_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_To", NULL, (void*)ScrollingAnimation__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public ScrollingAnimation() :323
void ScrollingAnimation__ctor_2_fn(ScrollingAnimation* __this)
{
    __this->ctor_2();
}

// public float get_From() :258
void ScrollingAnimation__get_From_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->From();
}

// public void set_From(float value) :259
void ScrollingAnimation__set_From_fn(ScrollingAnimation* __this, float* value)
{
    __this->From(*value);
}

// public generated bool get_Inverse() :252
void ScrollingAnimation__get_Inverse_fn(ScrollingAnimation* __this, bool* __retval)
{
    *__retval = __this->Inverse();
}

// public generated void set_Inverse(bool value) :252
void ScrollingAnimation__set_Inverse_fn(ScrollingAnimation* __this, bool* value)
{
    __this->Inverse(*value);
}

// public ScrollingAnimation New() :323
void ScrollingAnimation__New1_fn(ScrollingAnimation** __retval)
{
    *__retval = ScrollingAnimation::New1();
}

// protected override void OnRooted(Fuse.Node parentNode) :328
void ScrollingAnimation__OnRooted_fn(ScrollingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollView*)uPtr(__this->ParentNode())->FindByType(::TYPES[49/*Fuse.Node.FindByType<Fuse.Controls.ScrollView>*/]));

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[51/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)ScrollingAnimation__OnScrollPositionChanged_fn, __this));
        __this->BypassSeek(__this->ScrollProgress(), 0);
    }
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) :351
void ScrollingAnimation__OnScrollPositionChanged_fn(ScrollingAnimation* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnScrollPositionChanged(sender, args);
}

// protected override void OnUnrooted(Fuse.Node parentNode) :341
void ScrollingAnimation__OnUnrooted_fn(ScrollingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnUnrooted(Fuse.Node)");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[51/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)ScrollingAnimation__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() :245
void ScrollingAnimation__get_Range_fn(ScrollingAnimation* __this, int* __retval)
{
    *__retval = __this->Range();
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) :246
void ScrollingAnimation__set_Range_fn(ScrollingAnimation* __this, int* value)
{
    __this->Range(*value);
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() :240
void ScrollingAnimation__get_ScrollDirections_fn(ScrollingAnimation* __this, int* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) :240
void ScrollingAnimation__set_ScrollDirections_fn(ScrollingAnimation* __this, int* value)
{
    __this->ScrollDirections(*value);
}

// private double get_ScrollProgress() :282
void ScrollingAnimation__get_ScrollProgress_fn(ScrollingAnimation* __this, double* __retval)
{
    *__retval = __this->ScrollProgress();
}

// public float get_To() :269
void ScrollingAnimation__get_To_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->To();
}

// public void set_To(float value) :270
void ScrollingAnimation__set_To_fn(ScrollingAnimation* __this, float* value)
{
    __this->To(*value);
}

// public ScrollingAnimation() [instance] :323
void ScrollingAnimation::ctor_2()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", ".ctor()");
    ctor_1();
    ScrollDirections(12);
}

// public float get_From() [instance] :258
float ScrollingAnimation::From()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_From()");
    return _from;
}

// public void set_From(float value) [instance] :259
void ScrollingAnimation::From(float value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_From(float)");
    _from = value;
    _hasFrom = true;
    _range = 2;
}

// public generated bool get_Inverse() [instance] :252
bool ScrollingAnimation::Inverse()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_Inverse()");
    return _Inverse;
}

// public generated void set_Inverse(bool value) [instance] :252
void ScrollingAnimation::Inverse(bool value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_Inverse(bool)");
    _Inverse = value;
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) [instance] :351
void ScrollingAnimation::OnScrollPositionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnScrollPositionChanged(object,Uno.EventArgs)");
    Seek(ScrollProgress());
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() [instance] :245
int ScrollingAnimation::Range()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_Range()");
    return _range;
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) [instance] :246
void ScrollingAnimation::Range(int value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_Range(Fuse.Triggers.ScrollingAnimationRange)");
    _range = value;
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() [instance] :240
int ScrollingAnimation::ScrollDirections()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_ScrollDirections()");
    return _ScrollDirections;
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) [instance] :240
void ScrollingAnimation::ScrollDirections(int value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_ScrollDirections(Fuse.Gestures.ScrollDirections)");
    _ScrollDirections = value;
}

// private double get_ScrollProgress() [instance] :282
double ScrollingAnimation::ScrollProgress()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_ScrollProgress()");
    ::g::Uno::Float2 from;
    ::g::Uno::Float2 to;

    if (Range() == 1)
    {
        from = uPtr(_scrollable)->MinScroll();
        to = uPtr(_scrollable)->MinOverflow();
    }
    else
    {
        from = _hasFrom ? ::g::Uno::Float2__New1(From()) : uPtr(_scrollable)->MinScroll();
        to = _hasTo ? ::g::Uno::Float2__New1(To()) : uPtr(_scrollable)->MaxScroll();
    }

    ::g::Uno::Float2 range2 = ::g::Uno::Float2__op_Subtraction2(to, from);
    float at;
    float range;

    if (ScrollDirections() == 3)
    {
        at = uPtr(_scrollable)->ScrollPosition().X - from.X;
        range = range2.X;
    }
    else if (ScrollDirections() == 12)
    {
        at = uPtr(_scrollable)->ScrollPosition().Y - from.Y;
        range = range2.Y;
    }
    else
    {
        at = 0.0f;
        range = 0.0f;
    }

    if (::g::Uno::Math::Abs1(range) < 1e-05f)
        return 0.0;

    float p = ::g::Uno::Math::Clamp1(at / range, 0.0f, 1.0f);
    return (double)(Inverse() ? 1.0f - p : p);
}

// public float get_To() [instance] :269
float ScrollingAnimation::To()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_To()");
    return _to;
}

// public void set_To(float value) [instance] :270
void ScrollingAnimation::To(float value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_To(float)");
    _to = value;
    _hasTo = true;
    _range = 2;
}

// public ScrollingAnimation New() [static] :323
ScrollingAnimation* ScrollingAnimation::New1()
{
    ScrollingAnimation* obj1 = (ScrollingAnimation*)uNew(ScrollingAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(230)
// -----------------------------------------------------------------------

// public enum ScrollingAnimationRange :230
uEnumType* ScrollingAnimationRange_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrollingAnimationRange", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "SnapMin", 1LL,
        "Explicit", 2LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(617)
// --------------------------------------------------------------

// public sealed class State :617
// {
::g::Fuse::Triggers::Trigger_type* State_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.State", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)State__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))State__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[39] = ::g::Fuse::Triggers::Trigger_typeof();
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::State, _on), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::State, _Name), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Name", NULL, (void*)State__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)State__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)State__New1_fn, 0, true, State_typeof(), 0),
        new uFunction("get_On", NULL, (void*)State__get_On_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_On", NULL, (void*)State__set_On_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Progress", NULL, (void*)State__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0));
    return type;
}

// public generated State() :617
void State__ctor_2_fn(State* __this)
{
    __this->ctor_2();
}

// public generated string get_Name() :622
void State__get_Name_fn(State* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public generated void set_Name(string value) :622
void State__set_Name_fn(State* __this, uString* value)
{
    __this->Name(value);
}

// public generated State New() :617
void State__New1_fn(State** __retval)
{
    *__retval = State::New1();
}

// public bool get_On() :628
void State__get_On_fn(State* __this, bool* __retval)
{
    *__retval = __this->On();
}

// public void set_On(bool value) :629
void State__set_On_fn(State* __this, bool* value)
{
    __this->On(*value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :644
void State__OnRooted_fn(State* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.State", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);

    if (__this->_on)
        __this->BypassActivate();
}

// public new double get_Progress() :651
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public generated State() [instance] :617
void State::ctor_2()
{
    uStackFrame __("Fuse.Triggers.State", ".ctor()");
    ctor_1();
}

// public generated string get_Name() [instance] :622
uString* State::Name()
{
    uStackFrame __("Fuse.Triggers.State", "get_Name()");
    return _Name;
}

// public generated void set_Name(string value) [instance] :622
void State::Name(uString* value)
{
    uStackFrame __("Fuse.Triggers.State", "set_Name(string)");
    _Name = value;
}

// public bool get_On() [instance] :628
bool State::On()
{
    uStackFrame __("Fuse.Triggers.State", "get_On()");
    return _on;
}

// public void set_On(bool value) [instance] :629
void State::On(bool value)
{
    uStackFrame __("Fuse.Triggers.State", "set_On(bool)");

    if (_on == value)
        return;

    _on = value;

    if (ParentNode() != NULL)
    {
        if (_on)
            Activate(NULL);
        else
            Deactivate();
    }
}

// public new double get_Progress() [instance] :651
double State::Progress1()
{
    uStackFrame __("Fuse.Triggers.State", "get_Progress()");
    return Progress();
}

// public generated State New() [static] :617
State* State::New1()
{
    State* obj1 = (State*)uNew(State_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(682)
// --------------------------------------------------------------

// private enum Timeline.State :682
uEnumType* Timeline__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Timeline.State", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(471)
// --------------------------------------------------------------

// public sealed class StateGroup :471
// {
StateGroup_type* StateGroup_typeof()
{
    static uSStrong<StateGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(StateGroup_type);
    type = (StateGroup_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StateGroup__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))StateGroup__FindObjectByName_fn;
    ::TYPES[52] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[53] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[54] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[55] = ::g::Fuse::Triggers::State_typeof();
    ::TYPES[56] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[0] = uObject_typeof();
    ::TYPES[57] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[39] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Triggers::Trigger_typeof());
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(StateGroup_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _active), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _rest), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), offsetof(::g::Fuse::Triggers::StateGroup, _states), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _transition), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Active", NULL, (void*)StateGroup__get_Active_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Active", NULL, (void*)StateGroup__set_Active_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("FindObjectByName", NULL, (void*)StateGroup__FindObjectByName_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof())),
        new uFunction("GotoNextState", NULL, (void*)StateGroup__GotoNextState_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StateGroup__New1_fn, 0, true, StateGroup_typeof(), 0),
        new uFunction("get_Rest", NULL, (void*)StateGroup__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)StateGroup__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_States", NULL, (void*)StateGroup__get_States_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), 0),
        new uFunction("get_Transition", NULL, (void*)StateGroup__get_Transition_fn, 0, false, ::g::Fuse::Triggers::StateTransition_typeof(), 0),
        new uFunction("set_Transition", NULL, (void*)StateGroup__set_Transition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateTransition_typeof()));
    return type;
}

// public generated StateGroup() :471
void StateGroup__ctor_1_fn(StateGroup* __this)
{
    __this->ctor_1();
}

// public Fuse.Triggers.State get_Active() :480
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Triggers.State value) :481
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Active(value);
}

// private int get_ActiveIndex() :504
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->ActiveIndex();
}

// private void set_ActiveIndex(int value) :511
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value)
{
    __this->ActiveIndex(*value);
}

// private void CheckAllDone() :589
void StateGroup__CheckAllDone_fn(StateGroup* __this)
{
    __this->CheckAllDone();
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) :522
void StateGroup__FindObjectByName_fn(StateGroup* __this, uString* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(name, acceptor);
}

// private void Goto(Fuse.Triggers.State next) :564
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next)
{
    __this->Goto(next);
}

// public void GotoNextState() :517
void StateGroup__GotoNextState_fn(StateGroup* __this)
{
    __this->GotoNextState();
}

// public generated StateGroup New() :471
void StateGroup__New1_fn(StateGroup** __retval)
{
    *__retval = StateGroup::New1();
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) :583
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which)
{
    __this->OnPlaybackDone(which);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :549
void StateGroup__OnRooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::State* ret13;
    ::g::Fuse::Triggers::State* ret14;

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[57/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[52/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret13), ret13);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[55/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret14), ret14);
        uPtr(state)->On(state == __this->_active);
        state->add_PlaybackDone(uDelegate::New(::TYPES[58/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->Rooted(__this->ParentNode());
    }

    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :538
void StateGroup__OnUnrooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::Triggers::State* ret15;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[55/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret15), ret15);
        uPtr(state)->remove_PlaybackDone(uDelegate::New(::TYPES[58/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->Unrooted(__this->ParentNode());
    }
}

// public Fuse.Triggers.State get_Rest() :491
void StateGroup__get_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value) :499
void StateGroup__set_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() :475
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval)
{
    *__retval = __this->States();
}

// public Fuse.Triggers.StateTransition get_Transition() :534
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Triggers.StateTransition value) :535
void StateGroup__set_Transition_fn(StateGroup* __this, int* value)
{
    __this->Transition(*value);
}

// public generated StateGroup() [instance] :471
void StateGroup::ctor_1()
{
    uStackFrame __("Fuse.Triggers.StateGroup", ".ctor()");
    _states = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[53/*Uno.Collections.List<Fuse.Triggers.State>*/]));
    ctor_();
}

// public Fuse.Triggers.State get_Active() [instance] :480
::g::Fuse::Triggers::State* StateGroup::Active()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Active()");
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance] :481
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Active(Fuse.Triggers.State)");

    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance] :504
int StateGroup::ActiveIndex()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_ActiveIndex()");
    ::g::Fuse::Triggers::State* ret16;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[57/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[52/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(i), &ret16), ret16))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance] :511
void StateGroup::ActiveIndex(int value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_ActiveIndex(int)");
    ::g::Fuse::Triggers::State* ret17;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[52/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(value), &ret17), ret17));
}

// private void CheckAllDone() [instance] :589
void StateGroup::CheckAllDone()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "CheckAllDone()");
    ::g::Fuse::Triggers::State* ret8;
    bool all = true;

    for (uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[55/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

        if (uPtr(state)->Progress1() > 0.0)
            all = false;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) [instance] :522
uObject* StateGroup::FindObjectByName(uString* name, uDelegate* acceptor)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "FindObjectByName(string,Uno.Predicate<object>)");
    ::g::Fuse::Triggers::State* ret9;
    bool ret10;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[55/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret9), ret9);

        if (::g::Uno::String::op_Equality(uPtr(s)->Name(), name) && (uPtr(acceptor)->Invoke(&ret10, 1, s), ret10))
            return s;
    }

    return NULL;
}

// private void Goto(Fuse.Triggers.State next) [instance] :564
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "Goto(Fuse.Triggers.State)");
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Triggers::State* ret12;
    _active = next;

    switch (Transition())
    {
        case 0:
        {
            for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[55/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
            {
                ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
                uPtr(state)->On(state == next);
            }

            break;
        }
        case 1:
        {
            for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[55/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
            {
                ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
                uPtr(state1)->On(false);
            }

            CheckAllDone();
            break;
        }
    }
}

// public void GotoNextState() [instance] :517
void StateGroup::GotoNextState()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "GotoNextState()");
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[57/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) [instance] :583
void StateGroup::OnPlaybackDone(::g::Fuse::Triggers::Trigger* which)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnPlaybackDone(Fuse.Triggers.Trigger)");

    if (Transition() == 1)
        CheckAllDone();
}

// public Fuse.Triggers.State get_Rest() [instance] :491
::g::Fuse::Triggers::State* StateGroup::Rest()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Rest()");
    ::g::Fuse::Triggers::State* ret18;

    if (_rest != NULL)
        return _rest;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[57/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0)
        return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[52/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret18), ret18);

    return NULL;
}

// public void set_Rest(Fuse.Triggers.State value) [instance] :499
void StateGroup::Rest(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Rest(Fuse.Triggers.State)");
    _rest = value;
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance] :475
uObject* StateGroup::States()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_States()");
    return _states;
}

// public Fuse.Triggers.StateTransition get_Transition() [instance] :534
int StateGroup::Transition()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Transition()");
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance] :535
void StateGroup::Transition(int value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Transition(Fuse.Triggers.StateTransition)");
    _transition = value;
}

// public generated StateGroup New() [static] :471
StateGroup* StateGroup::New1()
{
    StateGroup* obj7 = (StateGroup*)uNew(StateGroup_typeof());
    obj7->ctor_1();
    return obj7;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(465)
// --------------------------------------------------------------

// public enum StateTransition :465
uEnumType* StateTransition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.StateTransition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(423)
// -----------------------------------------------------------------------

// public sealed class TextInputActionTriggered :423
// {
::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(TextInputActionTriggered);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.TextInputActionTriggered", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)TextInputActionTriggered__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))TextInputActionTriggered__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))TextInputActionTriggered__OnUnrooted_fn;
    ::STRINGS[9] = uString::Const("TextInputActionTriggered must be a child of a TextEdit");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\Triggers\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[59] = ::g::Fuse::Controls::TextInputActionArgs_typeof();
    ::TYPES[60] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[61] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::Fuse::Triggers::TextInputActionTriggered, _textEdit), 0,
        ::g::Fuse::Controls::TextInputActionType_typeof(), offsetof(::g::Fuse::Triggers::TextInputActionTriggered, _type), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)TextInputActionTriggered__New1_fn, 0, true, TextInputActionTriggered_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)TextInputActionTriggered__get_Type_fn, 0, false, ::g::Fuse::Controls::TextInputActionType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TextInputActionTriggered__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionType_typeof()));
    return type;
}

// public generated TextInputActionTriggered() :423
void TextInputActionTriggered__ctor_2_fn(TextInputActionTriggered* __this)
{
    __this->ctor_2();
}

// public generated TextInputActionTriggered New() :423
void TextInputActionTriggered__New1_fn(TextInputActionTriggered** __retval)
{
    *__retval = TextInputActionTriggered::New1();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) :457
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    __this->OnActionTriggered(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :433
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_textEdit = uAs< ::g::Fuse::Controls::TextEdit*>(__this->ParentNode(), ::TYPES[60/*Fuse.Controls.TextEdit*/]);

    if (__this->_textEdit == NULL)
        ::g::Fuse::Diagnostics::Error(::STRINGS[9/*"TextInputAc...*/], __this->ParentNode(), ::STRINGS[1/*"C:\\Program...*/], 439, ::STRINGS[5/*"OnRooted"*/]);
    else
        uPtr(__this->_textEdit)->add_ActionTriggered(uDelegate::New(::TYPES[61/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :447
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnUnrooted(Fuse.Node)");

    if (__this->_textEdit != NULL)
    {
        uPtr(__this->_textEdit)->remove_ActionTriggered(uDelegate::New(::TYPES[61/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
        __this->_textEdit = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Controls.TextInputActionType get_Type() :428
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Controls.TextInputActionType value) :429
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int* value)
{
    __this->Type(*value);
}

// public generated TextInputActionTriggered() [instance] :423
void TextInputActionTriggered::ctor_2()
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", ".ctor()");
    ctor_1();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) [instance] :457
void TextInputActionTriggered::OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnActionTriggered(object,Fuse.Controls.TextInputActionArgs)");

    if (uPtr(args)->Type() != Type())
        return;

    Pulse();
}

// public Fuse.Controls.TextInputActionType get_Type() [instance] :428
int TextInputActionTriggered::Type()
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "get_Type()");
    return _type;
}

// public void set_Type(Fuse.Controls.TextInputActionType value) [instance] :429
void TextInputActionTriggered::Type(int value)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "set_Type(Fuse.Controls.TextInputActionType)");
    _type = value;
}

// public generated TextInputActionTriggered New() [static] :423
TextInputActionTriggered* TextInputActionTriggered::New1()
{
    TextInputActionTriggered* obj1 = (TextInputActionTriggered*)uNew(TextInputActionTriggered_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(673)
// --------------------------------------------------------------

// public sealed class Timeline :673
// {
Timeline_type* Timeline_typeof()
{
    static uSStrong<Timeline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Timeline);
    options.TypeSize = sizeof(Timeline_type);
    type = (Timeline_type*)uClassType::New("Fuse.Triggers.Timeline", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Timeline__New1_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Timeline__OnRooted_fn;
    type->interface0.fp_Stop = (void(*)(uObject*))Timeline__Stop1_fn;
    type->interface0.fp_PlayTo = (void(*)(uObject*, double*))Timeline__PlayTo1_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))Timeline__Pause_fn;
    type->interface0.fp_Resume = (void(*)(uObject*))Timeline__Resume_fn;
    type->interface0.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Timeline__set_Progress_fn;
    type->interface0.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Timeline__get_CanPlayTo_fn;
    type->interface0.fp_get_CanStop = (void(*)(uObject*, bool*))Timeline__get_CanStop_fn;
    type->interface0.fp_get_CanPause = (void(*)(uObject*, bool*))Timeline__get_CanPause_fn;
    type->interface0.fp_get_CanResume = (void(*)(uObject*, bool*))Timeline__get_CanResume_fn;
    type->interface1.fp_Pulse = (void(*)(uObject*))Timeline__Pulse1_fn;
    type->interface2.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface2.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__add_ProgressChanged_fn;
    type->interface2.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__remove_ProgressChanged_fn;
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[0] = uObject_typeof();
    ::TYPES[62] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[39] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[63] = ::g::Fuse::Animations::TriggerAnimation_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Timeline_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(Timeline_type, interface1),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Timeline_type, interface2));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasInitialProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasTargetProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _initialProgress), 0,
        Timeline__State_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _state), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _targetProgress), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Triggers::Timeline, ProgressChanged1), 0);
    type->Reflection.SetFunctions(25,
        new uFunction("get_CanPause", NULL, (void*)Timeline__get_CanPause_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, (void*)Timeline__get_CanPlayTo_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, (void*)Timeline__get_CanResume_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, (void*)Timeline__get_CanStop_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_InitialProgress", NULL, (void*)Timeline__get_InitialProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_InitialProgress", NULL, (void*)Timeline__set_InitialProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Timeline__New1_fn, 0, true, Timeline_typeof(), 0),
        new uFunction("get_OnAtZero", NULL, (void*)Timeline__get_OnAtZero_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_OnAtZero", NULL, (void*)Timeline__set_OnAtZero_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Pause", NULL, (void*)Timeline__Pause_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_PlayMode", NULL, (void*)Timeline__get_PlayMode_fn, 0, false, ::g::Fuse::Animations::PlayMode_typeof(), 0),
        new uFunction("set_PlayMode", NULL, (void*)Timeline__set_PlayMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::PlayMode_typeof()),
        new uFunction("PlayTo", NULL, (void*)Timeline__PlayTo1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, (void*)Timeline__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)Timeline__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ProgressChanged", NULL, (void*)Timeline__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)Timeline__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Pulse", NULL, (void*)Timeline__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PulseBackward", NULL, (void*)Timeline__PulseBackward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PulseForward", NULL, (void*)Timeline__PulseForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Resume", NULL, (void*)Timeline__Resume_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SetProgress", NULL, (void*)Timeline__SetProgress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), uObject_typeof()),
        new uFunction("Stop", NULL, (void*)Timeline__Stop1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_TargetProgress", NULL, (void*)Timeline__get_TargetProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TargetProgress", NULL, (void*)Timeline__set_TargetProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public generated Timeline() :673
void Timeline__ctor_2_fn(Timeline* __this)
{
    __this->ctor_2();
}

// private void BypassOff() :830
void Timeline__BypassOff_fn(Timeline* __this)
{
    __this->BypassOff();
}

// public bool get_CanPause() :793
void Timeline__get_CanPause_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :789
void Timeline__get_CanPlayTo_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :795
void Timeline__get_CanResume_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :791
void Timeline__get_CanStop_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public double get_InitialProgress() :693
void Timeline__get_InitialProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->InitialProgress();
}

// public void set_InitialProgress(double value) :694
void Timeline__set_InitialProgress_fn(Timeline* __this, double* value)
{
    __this->InitialProgress(*value);
}

// public generated Timeline New() :673
void Timeline__New1_fn(Timeline** __retval)
{
    *__retval = Timeline::New1();
}

// public bool get_OnAtZero() :677
void Timeline__get_OnAtZero_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->OnAtZero();
}

// public void set_OnAtZero(bool value) :678
void Timeline__set_OnAtZero_fn(Timeline* __this, bool* value)
{
    __this->OnAtZero(*value);
}

// protected override sealed void OnProgressChanged() :741
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    uStackFrame __("Fuse.Triggers.Timeline", "OnProgressChanged()");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, __this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[62/*Uno.UX.ValueChangedArgs<double>*/], uCRef(__this->Progress1()), __this, &ret2), ret2));
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :727
void Timeline__OnRooted_fn(Timeline* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.Timeline", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->BypassSeek(__this->_initialProgress, 0);

    if ((__this->Bypass() == 0) && !__this->_hasInitialProgress)
        __this->BypassSeek(__this->TargetProgress(), 0);

    if (__this->_state == 0)
        __this->Play(__this->TargetProgress());
}

// public void Pause() :771
void Timeline__Pause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Play(double progress) :763
void Timeline__Play_fn(Timeline* __this, double* progress)
{
    __this->Play(*progress);
}

// public Fuse.Animations.PlayMode get_PlayMode() :723
void Timeline__get_PlayMode_fn(Timeline* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :724
void Timeline__set_PlayMode_fn(Timeline* __this, int* value)
{
    __this->PlayMode(*value);
}

// public void PlayTo(double progress) :757
void Timeline__PlayTo1_fn(Timeline* __this, double* progress)
{
    __this->PlayTo1(*progress);
}

// public new double get_Progress() :800
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public new void set_Progress(double value) :801
void Timeline__set_Progress_fn(Timeline* __this, double* value)
{
    __this->Progress1(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :739
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :739
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public new void Pulse() :819
void Timeline__Pulse1_fn(Timeline* __this)
{
    __this->Pulse1();
}

// public void PulseBackward() :836
void Timeline__PulseBackward_fn(Timeline* __this)
{
    __this->PulseBackward();
}

// public void PulseForward() :824
void Timeline__PulseForward_fn(Timeline* __this)
{
    __this->PulseForward();
}

// public void Resume() :780
void Timeline__Resume_fn(Timeline* __this)
{
    __this->Resume();
}

// public void SetProgress(double value, object origin) :808
void Timeline__SetProgress_fn(Timeline* __this, double* value, uObject* origin)
{
    __this->SetProgress(*value, origin);
}

// public void Stop() :747
void Timeline__Stop1_fn(Timeline* __this)
{
    __this->Stop1();
}

// public double get_TargetProgress() :705
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->TargetProgress();
}

// public void set_TargetProgress(double value) :712
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value)
{
    __this->TargetProgress(*value);
}

// public generated Timeline() [instance] :673
void Timeline::ctor_2()
{
    uStackFrame __("Fuse.Triggers.Timeline", ".ctor()");
    _initialProgress = 0.0;
    _targetProgress = 0.0;
    ctor_1();
}

// private void BypassOff() [instance] :830
void Timeline::BypassOff()
{
    uStackFrame __("Fuse.Triggers.Timeline", "BypassOff()");
    _targetProgress = 0.0;
    BypassDeactivate();
}

// public bool get_CanPause() [instance] :793
bool Timeline::CanPause()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanPause()");
    return true;
}

// public bool get_CanPlayTo() [instance] :789
bool Timeline::CanPlayTo()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanPlayTo()");
    return true;
}

// public bool get_CanResume() [instance] :795
bool Timeline::CanResume()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanResume()");
    return true;
}

// public bool get_CanStop() [instance] :791
bool Timeline::CanStop()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanStop()");
    return true;
}

// public double get_InitialProgress() [instance] :693
double Timeline::InitialProgress()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_InitialProgress()");
    return _initialProgress;
}

// public void set_InitialProgress(double value) [instance] :694
void Timeline::InitialProgress(double value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_InitialProgress(double)");
    _hasInitialProgress = true;
    _initialProgress = value;
}

// public bool get_OnAtZero() [instance] :677
bool Timeline::OnAtZero()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_OnAtZero()");
    return _startAtZero;
}

// public void set_OnAtZero(bool value) [instance] :678
void Timeline::OnAtZero(bool value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_OnAtZero(bool)");
    _startAtZero = value;
}

// public void Pause() [instance] :771
void Timeline::Pause()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Pause()");

    if (IsRooted())
    {
        _state = 1;
        Seek(Progress1());
    }
}

// private void Play(double progress) [instance] :763
void Timeline::Play(double progress)
{
    uStackFrame __("Fuse.Triggers.Timeline", "Play(double)");
    _state = 0;
    PlayTo(progress, (progress >= Progress1()) ? 0 : 1);
    _targetProgress = progress;
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :723
int Timeline::PlayMode()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_PlayMode()");
    return uPtr(Animation())->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :724
void Timeline::PlayMode(int value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_PlayMode(Fuse.Animations.PlayMode)");
    uPtr(Animation())->PlayMode(value);
}

// public void PlayTo(double progress) [instance] :757
void Timeline::PlayTo1(double progress)
{
    uStackFrame __("Fuse.Triggers.Timeline", "PlayTo(double)");

    if (IsRooted())
        Play(progress);
}

// public new double get_Progress() [instance] :800
double Timeline::Progress1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_Progress()");
    return Progress();
}

// public new void set_Progress(double value) [instance] :801
void Timeline::Progress1(double value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_Progress(double)");
    Seek(value);
    _targetProgress = value;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :739
void Timeline::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[33/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :739
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[33/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public new void Pulse() [instance] :819
void Timeline::Pulse1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Pulse()");
    Pulse();
}

// public void PulseBackward() [instance] :836
void Timeline::PulseBackward()
{
    uStackFrame __("Fuse.Triggers.Timeline", "PulseBackward()");
    BypassActivate();
    _targetProgress = 0.0;
    Deactivate();
}

// public void PulseForward() [instance] :824
void Timeline::PulseForward()
{
    uStackFrame __("Fuse.Triggers.Timeline", "PulseForward()");
    _targetProgress = 1.0;
    Activate(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Timeline__BypassOff_fn, this));
}

// public void Resume() [instance] :780
void Timeline::Resume()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Resume()");

    if (IsRooted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void SetProgress(double value, object origin) [instance] :808
void Timeline::SetProgress(double value, uObject* origin)
{
    uStackFrame __("Fuse.Triggers.Timeline", "SetProgress(double,object)");

    if (origin != this)
    {
        if (IsRooted())
            Seek(value);
        else if (!_hasInitialProgress)
            _initialProgress = value;
    }
}

// public void Stop() [instance] :747
void Timeline::Stop1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Stop()");

    if (IsRooted())
    {
        Seek(Progress1());
        _targetProgress = Progress1();
        _state = 1;
    }
}

// public double get_TargetProgress() [instance] :705
double Timeline::TargetProgress()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_TargetProgress()");

    if (!_hasTargetProgress && (PlayMode() == 1))
        return 1.0;

    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance] :712
void Timeline::TargetProgress(double value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_TargetProgress(double)");
    _targetProgress = value;
    _hasTargetProgress = true;

    if (IsRooted() && (_state == 0))
        PlayTo1(_targetProgress);
}

// public generated Timeline New() [static] :673
Timeline* Timeline::New1()
{
    Timeline* obj1 = (Timeline*)uNew(Timeline_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(866)
// --------------------------------------------------------------

// public abstract class Trigger :866
// {
Trigger_type* Trigger_typeof()
{
    static uSStrong<Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(Trigger);
    options.TypeSize = sizeof(Trigger_type);
    type = (Trigger_type*)uClassType::New("Fuse.Triggers.Trigger", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnNodeAdded = Trigger__OnNodeAdded_fn;
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    ::STRINGS[10] = uString::Const("Trigger started prior to being rooted: ");
    ::TYPES[64] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[65] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[0] = uObject_typeof();
    ::TYPES[66] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[67] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[68] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[69] = ::g::Fuse::Animations::TriggerAnimationState_typeof();
    ::TYPES[70] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[71] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[35] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[43] = ::g::Uno::Double_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[38] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[63] = ::g::Fuse::Animations::TriggerAnimation_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[58] = ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof());
    ::TYPES[44] = ::g::Uno::Float_typeof();
    ::TYPES[72] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[73] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[74] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[75] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[76] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(3,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _actions), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animation), 0,
        ::g::Fuse::Animations::TriggerAnimationState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animState), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _behaviors), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneOn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _isStarted), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _lastPlayDirection), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _nodes), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _startAtZero), 0,
        ::g::Fuse::Triggers::TriggerBypassMode_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _Bypass), 0,
        ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof()), offsetof(::g::Fuse::Triggers::Trigger, PlaybackDone1), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Actions", NULL, (void*)Trigger__get_Actions_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), 0),
        new uFunction("get_Animation", NULL, (void*)Trigger__get_Animation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)Trigger__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Animators", NULL, (void*)Trigger__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), 0),
        new uFunction("get_BackwardAnimation", NULL, (void*)Trigger__get_BackwardAnimation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_BackwardAnimation", NULL, (void*)Trigger__set_BackwardAnimation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Behaviors", NULL, (void*)Trigger__get_Behaviors_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), 0),
        new uFunction("get_Bypass", NULL, (void*)Trigger__get_Bypass_fn, 0, false, ::g::Fuse::Triggers::TriggerBypassMode_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)Trigger__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::TriggerBypassMode_typeof()),
        new uFunction("get_CrossFadeDuration", NULL, (void*)Trigger__get_CrossFadeDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_CrossFadeDuration", NULL, (void*)Trigger__set_CrossFadeDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_HasActions", NULL, (void*)Trigger__get_HasActions_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasAnimators", NULL, (void*)Trigger__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Nodes", NULL, (void*)Trigger__get_Nodes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("get_StretchDuration", NULL, (void*)Trigger__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)Trigger__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)Trigger__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Trigger__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// protected generated Trigger() :866
void Trigger__ctor_1_fn(Trigger* __this)
{
    __this->ctor_1();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() :934
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Actions();
}

// protected void Activate([Uno.Action done]) :1104
void Trigger__Activate_fn(Trigger* __this, uDelegate* done)
{
    __this->Activate(done);
}

// protected void AddContent(Fuse.Node target) :988
void Trigger__AddContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->AddContent(target);
}

// public Fuse.Animations.TriggerAnimation get_Animation() :888
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) :893
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :924
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() :913
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->BackwardAnimation();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) :914
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->BackwardAnimation(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() :959
void Trigger__get_Behaviors_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Behaviors();
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() :884
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) :884
void Trigger__set_Bypass_fn(Trigger* __this, int* value)
{
    __this->Bypass(*value);
}

// protected void BypassActivate() :1117
void Trigger__BypassActivate_fn(Trigger* __this)
{
    __this->BypassActivate();
}

// protected void BypassDeactivate() :1146
void Trigger__BypassDeactivate_fn(Trigger* __this)
{
    __this->BypassDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :1314
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->BypassSeek(*progress, *direction);
}

// private void CleanupState() :1185
void Trigger__CleanupState_fn(Trigger* __this)
{
    __this->CleanupState();
}

// private void CreateState() :1194
void Trigger__CreateState_fn(Trigger* __this)
{
    __this->CreateState();
}

// public double get_CrossFadeDuration() :919
void Trigger__get_CrossFadeDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :920
void Trigger__set_CrossFadeDuration_fn(Trigger* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// protected void Deactivate() :1131
void Trigger__Deactivate_fn(Trigger* __this)
{
    __this->Deactivate();
}

// private void EnsureAnimationLength() :1214
void Trigger__EnsureAnimationLength_fn(Trigger* __this)
{
    __this->EnsureAnimationLength();
}

// private bool EnsureState(double progress) :1204
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval)
{
    *__retval = __this->EnsureState(*progress);
}

// public bool get_HasActions() :943
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasActions();
}

// public bool get_HasAnimators() :928
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// protected void InversePulse() :1166
void Trigger__InversePulse_fn(Trigger* __this)
{
    __this->InversePulse();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() :949
void Trigger__get_Nodes_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Nodes();
}

// protected void OnBehaviorAdded(Fuse.Behavior b) :966
void Trigger__OnBehaviorAdded_fn(Trigger* __this, ::g::Fuse::Behavior* b)
{
    __this->OnBehaviorAdded(b);
}

// protected void OnBehaviorRemoved(Fuse.Behavior b) :971
void Trigger__OnBehaviorRemoved_fn(Trigger* __this, ::g::Fuse::Behavior* b)
{
    __this->OnBehaviorRemoved(b);
}

// protected virtual void OnNodeAdded(Fuse.Node n) :976
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnNodeAdded(Fuse.Node)");
    uObject* iar = uAs<uObject*>(__this->ParentNode(), ::TYPES[64/*Fuse.IObjectContainer*/]);

    if ((iar != NULL) && __this->_isStarted)
        ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(iar), ::TYPES[64/*Fuse.IObjectContainer*/]), n);
}

// protected void OnNodeRemoved(Fuse.Node n) :982
void Trigger__OnNodeRemoved_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeRemoved(n);
}

// private void OnPlaybackDone(object s) :1060
void Trigger__OnPlaybackDone_fn(Trigger* __this, uObject* s)
{
    __this->OnPlaybackDone(s);
}

// protected virtual void OnProgressChanged() :1257
void Trigger__OnProgressChanged_fn(Trigger* __this)
{
}

// private void OnProgressUpdated(object s) :1261
void Trigger__OnProgressUpdated_fn(Trigger* __this, uObject* s)
{
    __this->OnProgressUpdated(s);
}

// protected override void OnRooted(Fuse.Node parentNode) :1332
void Trigger__OnRooted_fn(Trigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnRooted(Fuse.Node)");

    if (__this->_startAtZero)
    {
        __this->Start();
        __this->EnsureState(0.0);
    }
}

// protected override void OnUnrooted(Fuse.Node parentNode) :1341
void Trigger__OnUnrooted_fn(Trigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnUnrooted(Fuse.Node)");
    __this->Stop(true);
    __this->CleanupState();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :882
void Trigger__add_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->add_PlaybackDone(value);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :882
void Trigger__remove_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->remove_PlaybackDone(value);
}

// protected void PlayEnd(bool on, [Uno.Action done]) :1176
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done)
{
    __this->PlayEnd(*on, done);
}

// private void PlayOn() :1171
void Trigger__PlayOn_fn(Trigger* __this)
{
    __this->PlayOn();
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) :1292
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant)
{
    __this->PlayTo(*progress, *variant);
}

// protected double get_Progress() :1028
void Trigger__get_Progress_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// protected void Pulse() :1159
void Trigger__Pulse_fn(Trigger* __this)
{
    __this->Pulse();
}

// protected void RemoveContent(Fuse.Node target) :1004
void Trigger__RemoveContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->RemoveContent(target);
}

// protected void Seek(double progress) :1298
void Trigger__Seek_fn(Trigger* __this, double* progress)
{
    __this->Seek(*progress);
}

// protected void Seek(double progress, Fuse.Animations.AnimationVariant direction) :1303
void Trigger__Seek1_fn(Trigger* __this, double* progress, int* direction)
{
    __this->Seek1(*progress, *direction);
}

// private void SetDone(Uno.Action done, bool on) :1020
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on)
{
    __this->SetDone(done, *on);
}

// private void SetPlayDirection(int next) :1038
void Trigger__SetPlayDirection_fn(Trigger* __this, int* next)
{
    __this->SetPlayDirection(*next);
}

// protected void Start() :1081
void Trigger__Start_fn(Trigger* __this)
{
    __this->Start();
}

// protected void Stop([bool force]) :1092
void Trigger__Stop_fn(Trigger* __this, bool* force)
{
    __this->Stop(*force);
}

// private void StopAction() :1144
void Trigger__StopAction_fn(Trigger* __this)
{
    __this->StopAction();
}

// public double get_StretchDuration() :907
void Trigger__get_StretchDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value) :908
void Trigger__set_StretchDuration_fn(Trigger* __this, double* value)
{
    __this->StretchDuration(*value);
}

// public double get_TimeMultiplier() :901
void Trigger__get_TimeMultiplier_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :902
void Trigger__set_TimeMultiplier_fn(Trigger* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// protected generated Trigger() [instance] :866
void Trigger::ctor_1()
{
    uStackFrame __("Fuse.Triggers.Trigger", ".ctor()");
    ctor_();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance] :934
uObject* Trigger::Actions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Actions()");

    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[71/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/]));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance] :1104
void Trigger::Activate(uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Activate([Uno.Action])");
    Start();
    SetDone(done, true);

    if ((Progress() < 1.0) || (_lastPlayDirection != 0))
        SetPlayDirection(1);

    if (EnsureState(1.0))
        uPtr(_animState)->PlayOn();
}

// protected void AddContent(Fuse.Node target) [instance] :988
void Trigger::AddContent(::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Trigger", "AddContent(Fuse.Node)");
    ::g::Fuse::Node* ret1;
    ::g::Fuse::Behavior* ret2;
    uObject* iarn = uAs<uObject*>(target, ::TYPES[64/*Fuse.IObjectContainer*/]);

    if ((_nodes != NULL) && (iarn != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[65/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(iarn), ::TYPES[64/*Fuse.IObjectContainer*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[66/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret1), ret1));

    if (_behaviors != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_behaviors), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Behavior>*/])); ++i1)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(target)->Behaviors()), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Behavior>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_behaviors), ::TYPES[68/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i1), &ret2), ret2));
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance] :888
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Animation()");

    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :893
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_Animation(Fuse.Animations.TriggerAnimation)");
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :924
uObject* Trigger::Animators()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Animators()");
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance] :913
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_BackwardAnimation()");
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance] :914
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_BackwardAnimation(Fuse.Animations.TriggerAnimation)");
    uPtr(Animation())->Backward(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :959
uObject* Trigger::Behaviors()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Behaviors()");

    if (_behaviors == NULL)
        _behaviors = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[73/*Uno.Collections.ObservableList<Fuse.Behavior>*/], uDelegate::New(::TYPES[74/*Uno.Action<Fuse.Behavior>*/], (void*)Trigger__OnBehaviorAdded_fn, this), uDelegate::New(::TYPES[74/*Uno.Action<Fuse.Behavior>*/], (void*)Trigger__OnBehaviorRemoved_fn, this)));

    return _behaviors;
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() [instance] :884
int Trigger::Bypass()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Bypass()");
    return _Bypass;
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance] :884
void Trigger::Bypass(int value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_Bypass(Fuse.Triggers.TriggerBypassMode)");
    _Bypass = value;
}

// protected void BypassActivate() [instance] :1117
void Trigger::BypassActivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassActivate()");

    if (Bypass() == 1)
        Activate(NULL);
    else
    {
        BypassSeek(1.0, 0);
        PlayOn();
    }
}

// protected void BypassDeactivate() [instance] :1146
void Trigger::BypassDeactivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassDeactivate()");

    if (Bypass() == 1)
        Deactivate();
    else
    {
        BypassSeek(0.0, 0);
        Deactivate();
    }
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :1314
void Trigger::BypassSeek(double progress, int direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassSeek(double,[Fuse.Animations.AnimationVariant])");

    if (Bypass() == 1)
    {
        Seek1(progress, direction);
        return;
    }

    if (progress > 0.0)
        Start();
    else
        Stop(false);

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, 3);
}

// private void CleanupState() [instance] :1185
void Trigger::CleanupState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CleanupState()");

    if (_animState != NULL)
    {
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance] :1194
void Trigger::CreateState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CreateState()");
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(ParentNode());
    uPtr(_animState)->add_PlaybackDone(uDelegate::New(::TYPES[70/*Uno.Action<object>*/], (void*)Trigger__OnPlaybackDone_fn, this));
    uPtr(_animState)->add_ProgressUpdated(uDelegate::New(::TYPES[70/*Uno.Action<object>*/], (void*)Trigger__OnProgressUpdated_fn, this));
}

// public double get_CrossFadeDuration() [instance] :919
double Trigger::CrossFadeDuration()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_CrossFadeDuration()");
    return uPtr(Animation())->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) [instance] :920
void Trigger::CrossFadeDuration(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_CrossFadeDuration(double)");
    uPtr(Animation())->CrossFadeDuration(value);
}

// protected void Deactivate() [instance] :1131
void Trigger::Deactivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Deactivate()");

    if ((Progress() > 0.0) || (_lastPlayDirection != 0))
        SetPlayDirection(-1);

    if ((Progress() <= 0.0) && (_animState == NULL))
        Stop(false);
    else
        PlayEnd(false, uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Trigger__StopAction_fn, this));
}

// private void EnsureAnimationLength() [instance] :1214
void Trigger::EnsureAnimationLength()
{
    uStackFrame __("Fuse.Triggers.Trigger", "EnsureAnimationLength()");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret3;

    if (!HasActions())
        return;

    double animFore = uPtr(Animation())->GetAnimatorsDuration(0);
    double animBack = uPtr(Animation())->GetAnimatorsDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret3), ret3);
        float when = uPtr(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
            actFore = ::g::Uno::Math::Max((double)when, actFore);

        if ((action->Direction() == 1) || (action->Direction() == 2))
            actBack = ::g::Uno::Math::Max((double)when, actBack);
    }

    if ((actFore <= animFore) && (actBack <= animBack))
        return;

    ::g::Fuse::Animations::Nothing* n = ::g::Fuse::Animations::Nothing::New1();
    n->Delay(actFore);
    n->DelayBack(actBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[40/*Fuse.Animations.Animator*/])), n);

    if (BackwardAnimation() != NULL)
    {
        n = ::g::Fuse::Animations::Nothing::New1();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[40/*Fuse.Animations.Animator*/])), n);
    }
}

// private bool EnsureState(double progress) [instance] :1204
bool Trigger::EnsureState(double progress)
{
    uStackFrame __("Fuse.Triggers.Trigger", "EnsureState(double)");

    if ((progress > 0.0) || _startAtZero)
    {
        if ((_animState == NULL) && (HasAnimators() || HasActions()))
            CreateState();
    }

    return _animState != NULL;
}

// public bool get_HasActions() [instance] :943
bool Trigger::HasActions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasActions()");
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasAnimators() [instance] :928
bool Trigger::HasAnimators()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasAnimators()");
    return (_animation != NULL) && uPtr(_animation)->HasAnimators();
}

// protected void InversePulse() [instance] :1166
void Trigger::InversePulse()
{
    uStackFrame __("Fuse.Triggers.Trigger", "InversePulse()");
    PlayEnd(false, uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :949
uObject* Trigger::Nodes()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Nodes()");

    if (_nodes == NULL)
        _nodes = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[75/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[76/*Uno.Action<Fuse.Node>*/], this, offsetof(Trigger_type, fp_OnNodeAdded)), uDelegate::New(::TYPES[76/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeRemoved_fn, this)));

    return _nodes;
}

// protected void OnBehaviorAdded(Fuse.Behavior b) [instance] :966
void Trigger::OnBehaviorAdded(::g::Fuse::Behavior* b)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnBehaviorAdded(Fuse.Behavior)");

    if (IsRooted() && _isStarted)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ParentNode())->Behaviors()), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Behavior>*/]), b);
}

// protected void OnBehaviorRemoved(Fuse.Behavior b) [instance] :971
void Trigger::OnBehaviorRemoved(::g::Fuse::Behavior* b)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnBehaviorRemoved(Fuse.Behavior)");
    bool ret4;

    if (IsRooted() && _isStarted)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(ParentNode())->Behaviors()), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Behavior>*/]), b, &ret4);
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :982
void Trigger::OnNodeRemoved(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnNodeRemoved(Fuse.Node)");
    uObject* iar = uAs<uObject*>(ParentNode(), ::TYPES[64/*Fuse.IObjectContainer*/]);

    if ((iar != NULL) && _isStarted)
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(iar), ::TYPES[64/*Fuse.IObjectContainer*/]), n);
}

// private void OnPlaybackDone(object s) [instance] :1060
void Trigger::OnPlaybackDone(uObject* s)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnPlaybackDone(object)");
    SetPlayDirection(0);

    if (::g::Uno::Delegate::op_Inequality(PlaybackDone1, NULL))
        uPtr(PlaybackDone1)->InvokeVoid(this);

    if (::g::Uno::Delegate::op_Equality(_doneAction, NULL))
        return;

    uDelegate* da = _doneAction;
    _doneAction = NULL;

    if ((_doneOn && uPtr(_animState)->ProgressFullOn()) || (!_doneOn && uPtr(_animState)->ProgressFullOff()))
        uPtr(da)->InvokeVoid();
}

// private void OnProgressUpdated(object s) [instance] :1261
void Trigger::OnProgressUpdated(uObject* s)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnProgressUpdated(object)");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret5;
    double prev = uPtr(_animState)->PreviousProgress();
    double cur = uPtr(_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
        return;

    OnProgressChanged();
    SetPlayDirection((diff > 0.0) ? 1 : (diff < 0.0) ? -1 : 0);

    if (_actions == NULL)
        return;

    int dir = (diff > 0.0) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret5), ret5);

        if (!uPtr(action)->IsProgressTriggered())
            continue;

        float tp = uPtr(action)->ProgressWhen((float)uPtr(_animState)->CurrentAnimatorsDuration());
        bool call = (dir == 0) ? (((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0)) : (((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
            action->PerformFromNode(ParentNode());
    }
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :882
void Trigger::add_PlaybackDone(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger>)");
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[58/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :882
void Trigger::remove_PlaybackDone(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger>)");
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[58/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance] :1176
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayEnd(bool,[Uno.Action])");

    if (on)
        Start();

    SetDone(done, on);

    if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance] :1171
void Trigger::PlayOn()
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayOn()");
    PlayEnd(true, NULL);
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance] :1292
void Trigger::PlayTo(double progress, int variant)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayTo(double,[Fuse.Animations.AnimationVariant])");

    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant, 1);
}

// protected double get_Progress() [instance] :1028
double Trigger::Progress()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Progress()");

    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance] :1159
void Trigger::Pulse()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Pulse()");
    SetPlayDirection(0);
    Activate(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Trigger__Deactivate_fn, this));
}

// protected void RemoveContent(Fuse.Node target) [instance] :1004
void Trigger::RemoveContent(::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Trigger", "RemoveContent(Fuse.Node)");
    ::g::Fuse::Node* ret6;
    bool ret7;
    ::g::Fuse::Behavior* ret8;
    uObject* iarn = uAs<uObject*>(target, ::TYPES[64/*Fuse.IObjectContainer*/]);

    if ((_nodes != NULL) && (iarn != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[65/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(iarn), ::TYPES[64/*Fuse.IObjectContainer*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[66/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6));

    if (_behaviors != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_behaviors), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Behavior>*/])); ++i1)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(target)->Behaviors()), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Behavior>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_behaviors), ::TYPES[68/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i1), &ret8), ret8), &ret7);
}

// protected void Seek(double progress) [instance] :1298
void Trigger::Seek(double progress)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Seek(double)");
    Seek1(progress, 0);
}

// protected void Seek(double progress, Fuse.Animations.AnimationVariant direction) [instance] :1303
void Trigger::Seek1(double progress, int direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Seek(double,Fuse.Animations.AnimationVariant)");

    if (progress > 0.0)
        Start();
    else
        Stop(false);

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, 1);
}

// private void SetDone(Uno.Action done, bool on) [instance] :1020
void Trigger::SetDone(uDelegate* done, bool on)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SetDone(Uno.Action,bool)");
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayDirection(int next) [instance] :1038
void Trigger::SetPlayDirection(int next)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SetPlayDirection(int)");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret9;

    if (next == _lastPlayDirection)
        return;

    _lastPlayDirection = next;

    if ((next == 0) || (_actions == NULL))
        return;

    int dir = (next > 0) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret9), ret9);

        if (uPtr(action)->IsProgressTriggered())
            continue;

        if ((uPtr(action)->Direction() == dir) || (uPtr(action)->Direction() == 2))
            uPtr(action)->PerformFromNode(ParentNode());
    }
}

// protected void Start() [instance] :1081
void Trigger::Start()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Start()");

    if (!_isStarted)
    {
        if (!TriggerCanStartTest())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[10/*"Trigger sta...*/], this)));

        AddContent(ParentNode());
        _isStarted = true;
    }
}

// protected void Stop([bool force]) [instance] :1092
void Trigger::Stop(bool force)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Stop([bool])");

    if (_startAtZero && !force)
        return;

    if (_isStarted)
    {
        RemoveContent(ParentNode());
        _isStarted = false;
    }
}

// private void StopAction() [instance] :1144
void Trigger::StopAction()
{
    uStackFrame __("Fuse.Triggers.Trigger", "StopAction()");
    Stop(false);
}

// public double get_StretchDuration() [instance] :907
double Trigger::StretchDuration()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_StretchDuration()");
    return uPtr(Animation())->StretchDuration();
}

// public void set_StretchDuration(double value) [instance] :908
void Trigger::StretchDuration(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_StretchDuration(double)");
    uPtr(Animation())->StretchDuration(value);
}

// public double get_TimeMultiplier() [instance] :901
double Trigger::TimeMultiplier()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_TimeMultiplier()");
    return uPtr(Animation())->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) [instance] :902
void Trigger::TimeMultiplier(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_TimeMultiplier(double)");
    uPtr(Animation())->TimeMultiplier(value);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(859)
// --------------------------------------------------------------

// public enum TriggerBypassMode :859
uEnumType* TriggerBypassMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerBypassMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL);
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1362)
// ---------------------------------------------------------------

// public abstract class WhileBool :1362
// {
::g::Fuse::Triggers::WhileValue_type* WhileBool_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileBool);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileBool", options);
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface1.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    ::TYPES[77] = ::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Value", NULL, (void*)WhileBool__get_Value1_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileBool__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// protected generated WhileBool() :1362
void WhileBool__ctor_4_fn(WhileBool* __this)
{
    __this->ctor_4();
}

// public new bool get_Value() :1366
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(bool value) :1367
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value)
{
    __this->Value1(*value);
}

// protected generated WhileBool() [instance] :1362
void WhileBool::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileBool", ".ctor()");
    ctor_3();
}

// public new bool get_Value() [instance] :1366
bool WhileBool::Value1()
{
    uStackFrame __("Fuse.Triggers.WhileBool", "get_Value()");
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance] :1367
void WhileBool::Value1(bool value)
{
    uStackFrame __("Fuse.Triggers.WhileBool", "set_Value(bool)");
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1747)
// ---------------------------------------------------------------

// public sealed class WhileCompleted :1747
// {
// static WhileCompleted() :1747
static void WhileCompleted__cctor__fn(uType* __type)
{
    WhileCompleted::_whileCompletedProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileCompleted", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileCompleted__New1_fn;
    type->fp_cctor_ = WhileCompleted__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[78] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileCompleted__New1_fn, 0, true, WhileCompleted_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileCompleted__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhileCompleted() :1747
void WhileCompleted__ctor_3_fn(WhileCompleted* __this)
{
    __this->ctor_3();
}

// private static bool IsCompleted(Fuse.Node n) :1751
void WhileCompleted__IsCompleted_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// public generated WhileCompleted New() :1747
void WhileCompleted__New1_fn(WhileCompleted** __retval)
{
    *__retval = WhileCompleted::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1772
void WhileCompleted__OnRooted_fn(WhileCompleted* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileCompleted::IsCompleted(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool paused) :1758
void WhileCompleted__SetState_fn(::g::Fuse::Node* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// public generated WhileCompleted() [instance] :1747
void WhileCompleted::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", ".ctor()");
    ctor_2();
}

// private static bool IsCompleted(Fuse.Node n) [static] :1751
bool WhileCompleted::IsCompleted(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "IsCompleted(Fuse.Node)");
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp());

    if (!uIs(v, ::TYPES[2/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[2/*bool*/], v);
}

// public generated WhileCompleted New() [static] :1747
WhileCompleted* WhileCompleted::New1()
{
    WhileCompleted* obj2 = (WhileCompleted*)uNew(WhileCompleted_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool paused) [static] :1758
void WhileCompleted::SetState(::g::Fuse::Node* n, bool paused)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "SetState(Fuse.Node,bool)");
    WhileCompleted_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp(), uBox(::TYPES[2/*bool*/], paused));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[3/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[78/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileCompleted* wl = uAs<WhileCompleted*>(b, WhileCompleted_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(53)
// ----------------------------------------------------------------------

// public class WhileContainsText :53
// {
::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileContainsText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileContainsText", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileContainsText__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileContainsText__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileContainsText__OnUnrooted_fn;
    ::TYPES[79] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[80] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    type->SetFields(17,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _source), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _value), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileContainsText__New1_fn, 0, true, WhileContainsText_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileContainsText__get_Source_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), 0),
        new uFunction("set_Source", NULL, (void*)WhileContainsText__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof())));
    return type;
}

// public generated WhileContainsText() :53
void WhileContainsText__ctor_3_fn(WhileContainsText* __this)
{
    __this->ctor_3();
}

// public generated WhileContainsText New() :53
void WhileContainsText__New1_fn(WhileContainsText** __retval)
{
    *__retval = WhileContainsText::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :63
void WhileContainsText__OnRooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnRooted(Fuse.Node)");
    uString* ret2;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->Source() != NULL)
        __this->_value = __this->Source();
    else
        __this->_value = uAs<uObject*>(parentNode, ::TYPES[79/*Fuse.Triggers.IValue<string>*/]);

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[79/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[80/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->BypassSetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_value), ::TYPES[79/*Fuse.Triggers.IValue<string>*/]), &ret2), ret2)));
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :78
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnUnrooted(Fuse.Node)");

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[79/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[80/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->_value = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.EventArgs args) :88
void WhileContainsText__OnValueChanged_fn(WhileContainsText* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public Fuse.Triggers.IValue<string> get_Source() :58
void WhileContainsText__get_Source_fn(WhileContainsText* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<string> value) :59
void WhileContainsText__set_Source_fn(WhileContainsText* __this, uObject* value)
{
    __this->Source(value);
}

// public generated WhileContainsText() [instance] :53
void WhileContainsText::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", ".ctor()");
    ctor_2();
}

// private void OnValueChanged(object sender, Uno.EventArgs args) [instance] :88
void WhileContainsText::OnValueChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnValueChanged(object,Uno.EventArgs)");
    uString* ret3;
    SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(_value), ::TYPES[79/*Fuse.Triggers.IValue<string>*/]), &ret3), ret3)));
}

// public Fuse.Triggers.IValue<string> get_Source() [instance] :58
uObject* WhileContainsText::Source()
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<string> value) [instance] :59
void WhileContainsText::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "set_Source(Fuse.Triggers.IValue<string>)");
    _source = value;
}

// public generated WhileContainsText New() [static] :53
WhileContainsText* WhileContainsText::New1()
{
    WhileContainsText* obj1 = (WhileContainsText*)uNew(WhileContainsText_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(64)
// -------------------------------------------------------------

// public sealed class WhileDisabled :64
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileDisabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileDisabled", options);
    type->SetBase(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof());
    type->fp_ctor_ = (void*)WhileDisabled__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileDisabled__get_IsActive_fn;
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileDisabled__New1_fn, 0, true, WhileDisabled_typeof(), 0));
    return type;
}

// public generated WhileDisabled() :64
void WhileDisabled__ctor_4_fn(WhileDisabled* __this)
{
    __this->ctor_4();
}

// protected override sealed bool get_IsActive() :68
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileDisabled", "get_IsActive()");
    return *__retval = (__this->ParentNode() != NULL) ? !uPtr(__this->ParentNode())->IsEnabled() : false, void();
}

// public generated WhileDisabled New() :64
void WhileDisabled__New1_fn(WhileDisabled** __retval)
{
    *__retval = WhileDisabled::New1();
}

// public generated WhileDisabled() [instance] :64
void WhileDisabled::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileDisabled", ".ctor()");
    ctor_3();
}

// public generated WhileDisabled New() [static] :64
WhileDisabled* WhileDisabled::New1()
{
    WhileDisabled* obj1 = (WhileDisabled*)uNew(WhileDisabled_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(75)
// -------------------------------------------------------------

// public sealed class WhileEnabled :75
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileEnabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabled", options);
    type->SetBase(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof());
    type->fp_ctor_ = (void*)WhileEnabled__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileEnabled__get_IsActive_fn;
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEnabled__New1_fn, 0, true, WhileEnabled_typeof(), 0));
    return type;
}

// public generated WhileEnabled() :75
void WhileEnabled__ctor_4_fn(WhileEnabled* __this)
{
    __this->ctor_4();
}

// protected override sealed bool get_IsActive() :79
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileEnabled", "get_IsActive()");
    return *__retval = (__this->ParentNode() != NULL) ? uPtr(__this->ParentNode())->IsEnabled() : true, void();
}

// public generated WhileEnabled New() :75
void WhileEnabled__New1_fn(WhileEnabled** __retval)
{
    *__retval = WhileEnabled::New1();
}

// public generated WhileEnabled() [instance] :75
void WhileEnabled::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileEnabled", ".ctor()");
    ctor_3();
}

// public generated WhileEnabled New() [static] :75
WhileEnabled* WhileEnabled::New1()
{
    WhileEnabled* obj1 = (WhileEnabled*)uNew(WhileEnabled_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(38)
// -------------------------------------------------------------

// public abstract class WhileEnabledDisabledTrigger :38
// {
WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof()
{
    static uSStrong<WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileEnabledDisabledTrigger);
    options.TypeSize = sizeof(WhileEnabledDisabledTrigger_type);
    type = (WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabledDisabledTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17);
    return type;
}

// internal WhileEnabledDisabledTrigger() :40
void WhileEnabledDisabledTrigger__ctor_3_fn(WhileEnabledDisabledTrigger* __this)
{
    __this->ctor_3();
}

// private void OnIsEnabledChanged(object sender, Uno.EventArgs args) :58
void WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsEnabledChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :44
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn, __this));
    __this->BypassSetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :52
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnUnrooted(Fuse.Node)");
    uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// internal WhileEnabledDisabledTrigger() [instance] :40
void WhileEnabledDisabledTrigger::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", ".ctor()");
    ctor_2();
}

// private void OnIsEnabledChanged(object sender, Uno.EventArgs args) [instance] :58
void WhileEnabledDisabledTrigger::OnIsEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnIsEnabledChanged(object,Uno.EventArgs)");
    SetActive(IsActive());
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1392)
// ---------------------------------------------------------------

// public sealed class WhileFailed :1392
// {
// static WhileFailed() :1392
static void WhileFailed__cctor__fn(uType* __type)
{
    WhileFailed::_whileFailedProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileFailed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFailed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileFailed__New1_fn;
    type->fp_cctor_ = WhileFailed__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFailed__OnRooted_fn;
    ::STRINGS[11] = uString::Const("WhileFailed.Message");
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[78] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileFailed::_whileFailedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileFailed__New1_fn, 0, true, WhileFailed_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileFailed__SetState_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public generated WhileFailed() :1392
void WhileFailed__ctor_3_fn(WhileFailed* __this)
{
    __this->ctor_3();
}

// private static bool IsFailed(Fuse.Node n) :1396
void WhileFailed__IsFailed_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileFailed::IsFailed(n);
}

// public generated WhileFailed New() :1392
void WhileFailed__New1_fn(WhileFailed** __retval)
{
    *__retval = WhileFailed::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1419
void WhileFailed__OnRooted_fn(WhileFailed* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileFailed", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileFailed::IsFailed(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool failed, string message) :1403
void WhileFailed__SetState_fn(::g::Fuse::Node* n, bool* failed, uString* message)
{
    WhileFailed::SetState(n, *failed, message);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileFailed::_whileFailedProp_;

// public generated WhileFailed() [instance] :1392
void WhileFailed::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileFailed", ".ctor()");
    ctor_2();
}

// private static bool IsFailed(Fuse.Node n) [static] :1396
bool WhileFailed::IsFailed(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.WhileFailed", "IsFailed(Fuse.Node)");
    WhileFailed_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileFailed::_whileFailedProp());

    if (!uIs(v, ::TYPES[2/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[2/*bool*/], v);
}

// public generated WhileFailed New() [static] :1392
WhileFailed* WhileFailed::New1()
{
    WhileFailed* obj2 = (WhileFailed*)uNew(WhileFailed_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool failed, string message) [static] :1403
void WhileFailed::SetState(::g::Fuse::Node* n, bool failed, uString* message)
{
    uStackFrame __("Fuse.Triggers.WhileFailed", "SetState(Fuse.Node,bool,string)");
    WhileFailed_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileFailed::IsFailed(n);

    if (v != failed)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileFailed::_whileFailedProp(), uBox(::TYPES[2/*bool*/], failed));
        n->SetResource(::STRINGS[11/*"WhileFailed...*/], message);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[3/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[78/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileFailed* wl = uAs<WhileFailed*>(b, WhileFailed_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(failed);
        }
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1376)
// ---------------------------------------------------------------

// public sealed class WhileFalse :1376
// {
::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileFalse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFalse", options);
    type->SetBase(::g::Fuse::Triggers::WhileBool_typeof());
    type->fp_ctor_ = (void*)WhileFalse__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFalse__get_IsOn_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface1.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[81] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFalse__New1_fn, 0, true, WhileFalse_typeof(), 0));
    return type;
}

// public generated WhileFalse() :1376
void WhileFalse__ctor_5_fn(WhileFalse* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsOn() :1378
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileFalse", "get_IsOn()");
    return *__retval = !__this->Value1(), void();
}

// public generated WhileFalse New() :1376
void WhileFalse__New1_fn(WhileFalse** __retval)
{
    *__retval = WhileFalse::New1();
}

// public generated WhileFalse() [instance] :1376
void WhileFalse::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileFalse", ".ctor()");
    ctor_4();
}

// public generated WhileFalse New() [static] :1376
WhileFalse* WhileFalse::New1()
{
    WhileFalse* obj1 = (WhileFalse*)uNew(WhileFalse_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1438)
// ---------------------------------------------------------------

// public sealed class WhileFloat :1438
// {
::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileFloat);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFloat", options);
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_ctor_ = (void*)WhileFloat__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFloat__get_IsOn_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface1.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    ::TYPES[47] = ::g::Uno::Float2_typeof();
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[82] = ::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Float_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _compare), 0,
        WhileFloat__Range_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _high), 0,
        WhileFloat__Range_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _low), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_GreaterThan", NULL, (void*)WhileFloat__get_GreaterThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileFloat__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GreaterThanEqual", NULL, (void*)WhileFloat__get_GreaterThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThanEqual", NULL, (void*)WhileFloat__set_GreaterThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileFloat__get_LessThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileFloat__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThanEqual", NULL, (void*)WhileFloat__get_LessThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThanEqual", NULL, (void*)WhileFloat__set_LessThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileFloat__New1_fn, 0, true, WhileFloat_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)WhileFloat__get_Value1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileFloat__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated WhileFloat() :1438
void WhileFloat__ctor_4_fn(WhileFloat* __this)
{
    __this->ctor_4();
}

// public float get_GreaterThan() :1480
void WhileFloat__get_GreaterThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(float value) :1481
void WhileFloat__set_GreaterThan_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThan(*value);
}

// public float get_GreaterThanEqual() :1491
void WhileFloat__get_GreaterThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThanEqual();
}

// public void set_GreaterThanEqual(float value) :1492
void WhileFloat__set_GreaterThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThanEqual(*value);
}

// protected override sealed bool get_IsOn() :1502
void WhileFloat__get_IsOn_fn(WhileFloat* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_IsOn()");

    if ((__this->_low == 1) && (__this->Value1() <= __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_low == 2) && (__this->Value1() < __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_high == 1) && (__this->Value1() >= __this->_compare.Y))
        return *__retval = false, void();

    if ((__this->_high == 2) && (__this->Value1() > __this->_compare.Y))
        return *__retval = false, void();

    return *__retval = true, void();
}

// public float get_LessThan() :1458
void WhileFloat__get_LessThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(float value) :1459
void WhileFloat__set_LessThan_fn(WhileFloat* __this, float* value)
{
    __this->LessThan(*value);
}

// public float get_LessThanEqual() :1469
void WhileFloat__get_LessThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThanEqual();
}

// public void set_LessThanEqual(float value) :1470
void WhileFloat__set_LessThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->LessThanEqual(*value);
}

// public generated WhileFloat New() :1438
void WhileFloat__New1_fn(WhileFloat** __retval)
{
    *__retval = WhileFloat::New1();
}

// public new float get_Value() :1442
void WhileFloat__get_Value1_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(float value) :1443
void WhileFloat__set_Value1_fn(WhileFloat* __this, float* value)
{
    __this->Value1(*value);
}

// public generated WhileFloat() [instance] :1438
void WhileFloat::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", ".ctor()");
    ctor_3();
}

// public float get_GreaterThan() [instance] :1480
float WhileFloat::GreaterThan()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_GreaterThan()");
    return _compare.X;
}

// public void set_GreaterThan(float value) [instance] :1481
void WhileFloat::GreaterThan(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_GreaterThan(float)");
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// public float get_GreaterThanEqual() [instance] :1491
float WhileFloat::GreaterThanEqual()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_GreaterThanEqual()");
    return _compare.X;
}

// public void set_GreaterThanEqual(float value) [instance] :1492
void WhileFloat::GreaterThanEqual(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_GreaterThanEqual(float)");
    _compare.X = value;
    _low = 2;
    UpdateState();
}

// public float get_LessThan() [instance] :1458
float WhileFloat::LessThan()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_LessThan()");
    return _compare.Y;
}

// public void set_LessThan(float value) [instance] :1459
void WhileFloat::LessThan(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_LessThan(float)");
    _compare.Y = value;
    _high = 1;
    UpdateState();
}

// public float get_LessThanEqual() [instance] :1469
float WhileFloat::LessThanEqual()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_LessThanEqual()");
    return _compare.Y;
}

// public void set_LessThanEqual(float value) [instance] :1470
void WhileFloat::LessThanEqual(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_LessThanEqual(float)");
    _compare.Y = value;
    _high = 2;
    UpdateState();
}

// public new float get_Value() [instance] :1442
float WhileFloat::Value1()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_Value()");
    float ret2;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret2), ret2);
}

// public new void set_Value(float value) [instance] :1443
void WhileFloat::Value1(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_Value(float)");
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}

// public generated WhileFloat New() [static] :1438
WhileFloat* WhileFloat::New1()
{
    WhileFloat* obj1 = (WhileFloat*)uNew(WhileFloat_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1526)
// ---------------------------------------------------------------

// public sealed class WhileFocused :1526
// {
::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileFocused__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocused__OnUnrooted_fn;
    ::TYPES[83] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[84] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[85] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocused__New1_fn, 0, true, WhileFocused_typeof(), 0));
    return type;
}

// public generated WhileFocused() :1526
void WhileFocused__ctor_3_fn(WhileFocused* __this)
{
    __this->ctor_3();
}

// public generated WhileFocused New() :1526
void WhileFocused__New1_fn(WhileFocused** __retval)
{
    *__retval = WhileFocused::New1();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :1543
void WhileFocused__OnGotFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :1548
void WhileFocused__OnLostFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1528
void WhileFocused__OnRooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[84/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[85/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    __this->BypassSetActive(::g::Fuse::Input::Focus::FocusedNode() == __this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1536
void WhileFocused__OnUnrooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[84/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[85/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileFocused() [instance] :1526
void WhileFocused::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileFocused", ".ctor()");
    ctor_2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :1543
void WhileFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnGotFocus(object,Uno.EventArgs)");
    SetActive(true);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :1548
void WhileFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnLostFocus(object,Uno.EventArgs)");
    SetActive(false);
}

// public generated WhileFocused New() [static] :1526
WhileFocused* WhileFocused::New1()
{
    WhileFocused* obj1 = (WhileFocused*)uNew(WhileFocused_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1598)
// ---------------------------------------------------------------

// public sealed class WhileFocusWithin :1598
// {
::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileFocusWithin);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocusWithin", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileFocusWithin__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocusWithin__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocusWithin__OnUnrooted_fn;
    ::TYPES[83] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[84] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[85] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocusWithin__New1_fn, 0, true, WhileFocusWithin_typeof(), 0));
    return type;
}

// public generated WhileFocusWithin() :1598
void WhileFocusWithin__ctor_3_fn(WhileFocusWithin* __this)
{
    __this->ctor_3();
}

// private bool get_IsOn() :1623
void WhileFocusWithin__get_IsOn_fn(WhileFocusWithin* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileFocusWithin New() :1598
void WhileFocusWithin__New1_fn(WhileFocusWithin** __retval)
{
    *__retval = WhileFocusWithin::New1();
}

// private void OnFocusChange(object sender, Uno.EventArgs args) :1616
void WhileFocusWithin__OnFocusChange_fn(WhileFocusWithin* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFocusChange(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1600
void WhileFocusWithin__OnRooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[84/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[85/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    __this->BypassSetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1609
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[84/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[85/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileFocusWithin() [instance] :1598
void WhileFocusWithin::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", ".ctor()");
    ctor_2();
}

// private bool get_IsOn() [instance] :1623
bool WhileFocusWithin::IsOn()
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "get_IsOn()");
    return ::g::Fuse::Input::Focus::IsWithin(ParentNode());
}

// private void OnFocusChange(object sender, Uno.EventArgs args) [instance] :1616
void WhileFocusWithin::OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnFocusChange(object,Uno.EventArgs)");
    SetActive(IsOn());
}

// public generated WhileFocusWithin New() [static] :1598
WhileFocusWithin* WhileFocusWithin::New1()
{
    WhileFocusWithin* obj1 = (WhileFocusWithin*)uNew(WhileFocusWithin_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(475)
// -----------------------------------------------------------------------

// public sealed class WhileInteracting :475
// {
::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileInteracting);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileInteracting", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileInteracting__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileInteracting__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileInteracting__OnUnrooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _node), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileInteracting__New1_fn, 0, true, WhileInteracting_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileInteracting__get_Source_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WhileInteracting__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated WhileInteracting() :475
void WhileInteracting__ctor_3_fn(WhileInteracting* __this)
{
    __this->ctor_3();
}

// public generated WhileInteracting New() :475
void WhileInteracting__New1_fn(WhileInteracting** __retval)
{
    *__retval = WhileInteracting::New1();
}

// private void OnInteractingChanged(object s, object a) :501
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :485
void WhileInteracting__OnRooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnRooted(Fuse.Node)");
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_node = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Node*)__this->ParentNode()));
    uPtr(__this->_node)->add_IsInteractingChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->_node)->IsInteracting());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :494
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnUnrooted(Fuse.Node)");
    uPtr(__this->_node)->remove_IsInteractingChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->_node = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Node get_Source() :480
void WhileInteracting__get_Source_fn(WhileInteracting* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Node value) :481
void WhileInteracting__set_Source_fn(WhileInteracting* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// public generated WhileInteracting() [instance] :475
void WhileInteracting::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", ".ctor()");
    ctor_2();
}

// private void OnInteractingChanged(object s, object a) [instance] :501
void WhileInteracting::OnInteractingChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnInteractingChanged(object,object)");
    SetActive(uPtr(_node)->IsInteracting());
}

// public Fuse.Node get_Source() [instance] :480
::g::Fuse::Node* WhileInteracting::Source()
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Node value) [instance] :481
void WhileInteracting::Source(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "set_Source(Fuse.Node)");
    _source = value;
}

// public generated WhileInteracting New() [static] :475
WhileInteracting* WhileInteracting::New1()
{
    WhileInteracting* obj2 = (WhileInteracting*)uNew(WhileInteracting_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(111)
// --------------------------------------------------------------

// public sealed class WhileKeyboardVisible :111
// {
// static WhileKeyboardVisible() :111
static void WhileKeyboardVisible__cctor__fn(uType* __type)
{
    WhileKeyboardVisible::Keyboard_ = (uObject*)WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileKeyboardVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileKeyboardVisible__New1_fn;
    type->fp_cctor_ = WhileKeyboardVisible__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileKeyboardVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileKeyboardVisible__OnUnrooted_fn;
    ::TYPES[14] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[86] = ::g::Uno::Rect_typeof();
    ::TYPES[87] = ::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[88] = ::g::Fuse::IViewport_typeof();
    ::TYPES[89] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[90] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetFields(15,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _baseHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _threshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Keyboard", 18));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileKeyboardVisible__New1_fn, 0, true, WhileKeyboardVisible_typeof(), 0),
        new uFunction("get_Threshold", NULL, (void*)WhileKeyboardVisible__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0));
    return type;
}

// public generated WhileKeyboardVisible() :111
void WhileKeyboardVisible__ctor_2_fn(WhileKeyboardVisible* __this)
{
    __this->ctor_2();
}

// private float GetHeight(Uno.Rect r) :151
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval)
{
    *__retval = __this->GetHeight(*r);
}

// public generated WhileKeyboardVisible New() :111
void WhileKeyboardVisible__New1_fn(WhileKeyboardVisible** __retval)
{
    *__retval = WhileKeyboardVisible::New1();
}

// private void OnBottomBarResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :158
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnBottomBarResize(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :122
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[90/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    __this->_baseHeight = __this->GetHeight(::g::Uno::Platform::SystemUI::BottomFrame());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :141
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnUnrooted(Fuse.Node)");
    ::g::Uno::Platform::SystemUI::remove_BottomFrameWillResize(uDelegate::New(::TYPES[90/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public float get_Threshold() :118
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

float WhileKeyboardVisible::_deltaY_;
uSStrong<uObject*> WhileKeyboardVisible::Keyboard_;

// public generated WhileKeyboardVisible() [instance] :111
void WhileKeyboardVisible::ctor_2()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", ".ctor()");
    _threshold = 150.0f;
    ctor_1();
}

// private float GetHeight(Uno.Rect r) [instance] :151
float WhileKeyboardVisible::GetHeight(::g::Uno::Rect r)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "GetHeight(Uno.Rect)");
    return r.Bottom - r.Top;
}

// private void OnBottomBarResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :158
void WhileKeyboardVisible::OnBottomBarResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnBottomBarResize(object,Uno.Platform.SystemUIWillResizeEventArgs)");
    float newHeight = GetHeight(uPtr(args)->EndFrame());
    float density = 1.0f;
    uObject* vp = uPtr(ParentNode())->Viewport();

    if (vp != NULL)
        density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(vp), ::TYPES[88/*Fuse.IViewport*/]));

    float newDeltaY = (newHeight - _baseHeight) / density;

    if (newDeltaY > Threshold())
    {
        WhileKeyboardVisible::_deltaY() = newDeltaY;
        Activate(NULL);
    }
    else
    {
        _baseHeight = GetHeight(uPtr(args)->EndFrame());
        Deactivate();
    }
}

// public float get_Threshold() [instance] :118
float WhileKeyboardVisible::Threshold()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "get_Threshold()");
    return _threshold;
}

// public generated WhileKeyboardVisible New() [static] :111
WhileKeyboardVisible* WhileKeyboardVisible::New1()
{
    WhileKeyboardVisible* obj1 = (WhileKeyboardVisible*)uNew(WhileKeyboardVisible_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1639)
// ---------------------------------------------------------------

// public sealed class WhileLoading :1639
// {
// static WhileLoading() :1639
static void WhileLoading__cctor__fn(uType* __type)
{
    WhileLoading::_whileLoadingProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileLoading", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileLoading__New1_fn;
    type->fp_cctor_ = WhileLoading__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileLoading__OnRooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[78] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileLoading::_whileLoadingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileLoading__New1_fn, 0, true, WhileLoading_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileLoading__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhileLoading() :1639
void WhileLoading__ctor_3_fn(WhileLoading* __this)
{
    __this->ctor_3();
}

// private static bool IsLoading(Fuse.Node n) :1643
void WhileLoading__IsLoading_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileLoading::IsLoading(n);
}

// public generated WhileLoading New() :1639
void WhileLoading__New1_fn(WhileLoading** __retval)
{
    *__retval = WhileLoading::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1664
void WhileLoading__OnRooted_fn(WhileLoading* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileLoading", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileLoading::IsLoading(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool loading) :1650
void WhileLoading__SetState_fn(::g::Fuse::Node* n, bool* loading)
{
    WhileLoading::SetState(n, *loading);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileLoading::_whileLoadingProp_;

// public generated WhileLoading() [instance] :1639
void WhileLoading::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileLoading", ".ctor()");
    ctor_2();
}

// private static bool IsLoading(Fuse.Node n) [static] :1643
bool WhileLoading::IsLoading(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.WhileLoading", "IsLoading(Fuse.Node)");
    WhileLoading_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileLoading::_whileLoadingProp());

    if (!uIs(v, ::TYPES[2/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[2/*bool*/], v);
}

// public generated WhileLoading New() [static] :1639
WhileLoading* WhileLoading::New1()
{
    WhileLoading* obj2 = (WhileLoading*)uNew(WhileLoading_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool loading) [static] :1650
void WhileLoading::SetState(::g::Fuse::Node* n, bool loading)
{
    uStackFrame __("Fuse.Triggers.WhileLoading", "SetState(Fuse.Node,bool)");
    WhileLoading_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileLoading::IsLoading(n);

    if (v != loading)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileLoading::_whileLoadingProp(), uBox(::TYPES[2/*bool*/], loading));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[3/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[78/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileLoading* wl = uAs<WhileLoading*>(b, WhileLoading_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(loading);
        }
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1554)
// ---------------------------------------------------------------

// public sealed class WhileNotFocused :1554
// {
::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileNotFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileNotFocused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileNotFocused__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNotFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNotFocused__OnUnrooted_fn;
    ::TYPES[83] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[84] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[85] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotFocused__New1_fn, 0, true, WhileNotFocused_typeof(), 0));
    return type;
}

// public generated WhileNotFocused() :1554
void WhileNotFocused__ctor_3_fn(WhileNotFocused* __this)
{
    __this->ctor_3();
}

// public generated WhileNotFocused New() :1554
void WhileNotFocused__New1_fn(WhileNotFocused** __retval)
{
    *__retval = WhileNotFocused::New1();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :1571
void WhileNotFocused__OnGotFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :1576
void WhileNotFocused__OnLostFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1556
void WhileNotFocused__OnRooted_fn(WhileNotFocused* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[84/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[85/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    __this->BypassSetActive(::g::Fuse::Input::Focus::FocusedNode() != __this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1564
void WhileNotFocused__OnUnrooted_fn(WhileNotFocused* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[84/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[85/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileNotFocused() [instance] :1554
void WhileNotFocused::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", ".ctor()");
    ctor_2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :1571
void WhileNotFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnGotFocus(object,Uno.EventArgs)");
    SetActive(false);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :1576
void WhileNotFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnLostFocus(object,Uno.EventArgs)");
    SetActive(true);
}

// public generated WhileNotFocused New() [static] :1554
WhileNotFocused* WhileNotFocused::New1()
{
    WhileNotFocused* obj1 = (WhileNotFocused*)uNew(WhileNotFocused_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\WebView\$.uno(642)
// ----------------------------------------------------------------------

// public sealed class WhilePageLoading :642
// {
::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhilePageLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePageLoading", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePageLoading__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePageLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePageLoading__OnUnrooted_fn;
    ::STRINGS[6] = uString::Const("Warning: ");
    ::STRINGS[7] = uString::Const(" only applies to WebViews. Was attached to: ");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.24.7\\WebView\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[91] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[29] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[33] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[0] = uObject_typeof();
    type->SetFields(17,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::Triggers::WhilePageLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhilePageLoading__New1_fn, 0, true, WhilePageLoading_typeof(), 0));
    return type;
}

// public generated WhilePageLoading() :642
void WhilePageLoading__ctor_3_fn(WhilePageLoading* __this)
{
    __this->ctor_3();
}

// public generated WhilePageLoading New() :642
void WhilePageLoading__New1_fn(WhilePageLoading** __retval)
{
    *__retval = WhilePageLoading::New1();
}

// private void OnProgressChanged(object s, object a) :671
void WhilePageLoading__OnProgressChanged1_fn(WhilePageLoading* __this, uObject* s, uObject* a)
{
    __this->OnProgressChanged1(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :646
void WhilePageLoading__OnRooted_fn(WhilePageLoading* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (uIs(__this->ParentNode(), ::TYPES[29/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs< ::g::Fuse::Controls::WebView*>(__this->ParentNode(), ::TYPES[91/*Fuse.Controls.WebView*/]);
        uPtr(__this->_webView)->add_ProgressChanged(uDelegate::New(::TYPES[33/*Uno.UX.ValueChangedHandler<double>*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->SetActive(uPtr(__this->_webView)->Progress() != 1.0);
    }
    else
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Warning: "*/], __this), ::STRINGS[7/*" only appli...*/]), __this->ParentNode()), __this, ::STRINGS[8/*"C:\\Program...*/], 657, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :661
void WhilePageLoading__OnUnrooted_fn(WhilePageLoading* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnUnrooted(Fuse.Node)");

    if (__this->_webView != NULL)
    {
        uPtr(__this->_webView)->remove_ProgressChanged(uDelegate::New(::TYPES[33/*Uno.UX.ValueChangedHandler<double>*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhilePageLoading() [instance] :642
void WhilePageLoading::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", ".ctor()");
    ctor_2();
}

// private void OnProgressChanged(object s, object a) [instance] :671
void WhilePageLoading::OnProgressChanged1(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnProgressChanged(object,object)");
    SetActive(uPtr(_webView)->Progress() < 1.0);
}

// public generated WhilePageLoading New() [static] :642
WhilePageLoading* WhilePageLoading::New1()
{
    WhilePageLoading* obj1 = (WhilePageLoading*)uNew(WhilePageLoading_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1715)
// ---------------------------------------------------------------

// public sealed class WhilePaused :1715
// {
// static WhilePaused() :1715
static void WhilePaused__cctor__fn(uType* __type)
{
    WhilePaused::_whilePausedProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhilePaused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePaused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePaused__New1_fn;
    type->fp_cctor_ = WhilePaused__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePaused__OnRooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[78] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePaused__New1_fn, 0, true, WhilePaused_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhilePaused__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhilePaused() :1715
void WhilePaused__ctor_3_fn(WhilePaused* __this)
{
    __this->ctor_3();
}

// private static bool IsPaused(Fuse.Node n) :1719
void WhilePaused__IsPaused_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// public generated WhilePaused New() :1715
void WhilePaused__New1_fn(WhilePaused** __retval)
{
    *__retval = WhilePaused::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1740
void WhilePaused__OnRooted_fn(WhilePaused* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhilePaused::IsPaused(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool paused) :1726
void WhilePaused__SetState_fn(::g::Fuse::Node* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// public generated WhilePaused() [instance] :1715
void WhilePaused::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhilePaused", ".ctor()");
    ctor_2();
}

// private static bool IsPaused(Fuse.Node n) [static] :1719
bool WhilePaused::IsPaused(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "IsPaused(Fuse.Node)");
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp());

    if (!uIs(v, ::TYPES[2/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[2/*bool*/], v);
}

// public generated WhilePaused New() [static] :1715
WhilePaused* WhilePaused::New1()
{
    WhilePaused* obj2 = (WhilePaused*)uNew(WhilePaused_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool paused) [static] :1726
void WhilePaused::SetState(::g::Fuse::Node* n, bool paused)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "SetState(Fuse.Node,bool)");
    WhilePaused_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp(), uBox(::TYPES[2/*bool*/], paused));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[3/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[78/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhilePaused* wl = uAs<WhilePaused*>(b, WhilePaused_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1683)
// ---------------------------------------------------------------

// public sealed class WhilePlaying :1683
// {
// static WhilePlaying() :1683
static void WhilePlaying__cctor__fn(uType* __type)
{
    WhilePlaying::_whilePlayingProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhilePlaying);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePlaying", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePlaying__New1_fn;
    type->fp_cctor_ = WhilePlaying__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[78] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePlaying__New1_fn, 0, true, WhilePlaying_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhilePlaying__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhilePlaying() :1683
void WhilePlaying__ctor_3_fn(WhilePlaying* __this)
{
    __this->ctor_3();
}

// private static bool IsPlaying(Fuse.Node n) :1687
void WhilePlaying__IsPlaying_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// public generated WhilePlaying New() :1683
void WhilePlaying__New1_fn(WhilePlaying** __retval)
{
    *__retval = WhilePlaying::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1708
void WhilePlaying__OnRooted_fn(WhilePlaying* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhilePlaying::IsPlaying(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool playing) :1694
void WhilePlaying__SetState_fn(::g::Fuse::Node* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// public generated WhilePlaying() [instance] :1683
void WhilePlaying::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", ".ctor()");
    ctor_2();
}

// private static bool IsPlaying(Fuse.Node n) [static] :1687
bool WhilePlaying::IsPlaying(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "IsPlaying(Fuse.Node)");
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp());

    if (!uIs(v, ::TYPES[2/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[2/*bool*/], v);
}

// public generated WhilePlaying New() [static] :1683
WhilePlaying* WhilePlaying::New1()
{
    WhilePlaying* obj2 = (WhilePlaying*)uNew(WhilePlaying_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool playing) [static] :1694
void WhilePlaying::SetState(::g::Fuse::Node* n, bool playing)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "SetState(Fuse.Node,bool)");
    WhilePlaying_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp(), uBox(::TYPES[2/*bool*/], playing));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[3/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[78/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhilePlaying* wl = uAs<WhilePlaying*>(b, WhilePlaying_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(playing);
        }
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno(357)
// -----------------------------------------------------------------------

// public sealed class WhileScrollable :357
// {
::g::Fuse::Triggers::Trigger_type* WhileScrollable_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(WhileScrollable);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileScrollable", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileScrollable__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileScrollable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileScrollable__OnUnrooted_fn;
    ::TYPES[50] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[51] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[47] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    type->SetFields(17,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _scrollable), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _source), 0,
        ::g::Fuse::Gestures::ScrollDirections_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _ScrollDirections), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)WhileScrollable__New1_fn, 0, true, WhileScrollable_typeof(), 0),
        new uFunction("get_ScrollDirections", NULL, (void*)WhileScrollable__get_ScrollDirections_fn, 0, false, ::g::Fuse::Gestures::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)WhileScrollable__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ScrollDirections_typeof()),
        new uFunction("get_ScrollView", NULL, (void*)WhileScrollable__get_ScrollView_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_ScrollView", NULL, (void*)WhileScrollable__set_ScrollView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
    return type;
}

// public generated WhileScrollable() :357
void WhileScrollable__ctor_3_fn(WhileScrollable* __this)
{
    __this->ctor_3();
}

// private bool get_IsOn() :397
void WhileScrollable__get_IsOn_fn(WhileScrollable* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileScrollable New() :357
void WhileScrollable__New1_fn(WhileScrollable** __retval)
{
    *__retval = WhileScrollable::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :369
void WhileScrollable__OnRooted_fn(WhileScrollable* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_scrollable = __this->ScrollView();

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[51/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)WhileScrollable__OnScrollPositionChanged_fn, __this));
        __this->BypassSetActive(__this->IsOn());
    }
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) :390
void WhileScrollable__OnScrollPositionChanged_fn(WhileScrollable* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnScrollPositionChanged(sender, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :380
void WhileScrollable__OnUnrooted_fn(WhileScrollable* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnUnrooted(Fuse.Node)");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[51/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)WhileScrollable__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() :359
void WhileScrollable__get_ScrollDirections_fn(WhileScrollable* __this, int* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) :359
void WhileScrollable__set_ScrollDirections_fn(WhileScrollable* __this, int* value)
{
    __this->ScrollDirections(*value);
}

// public Fuse.Controls.ScrollView get_ScrollView() :365
void WhileScrollable__get_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->ScrollView();
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) :366
void WhileScrollable__set_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->ScrollView(value);
}

// public generated WhileScrollable() [instance] :357
void WhileScrollable::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", ".ctor()");
    ctor_2();
}

// private bool get_IsOn() [instance] :397
bool WhileScrollable::IsOn()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_IsOn()");
    ::g::Uno::Float2 p = uPtr(_scrollable)->ScrollPosition();
    ::g::Uno::Float2 mx = uPtr(_scrollable)->MaxScroll();
    ::g::Uno::Float2 mn = uPtr(_scrollable)->MinScroll();
    bool isOn = (((((ScrollDirections() & 1) == 1) && ((p.X - 1e-05f) > mn.X)) || (((ScrollDirections() & 2) == 2) && ((p.X + 1e-05f) < mx.X))) || (((ScrollDirections() & 4) == 4) && ((p.Y - 1e-05f) > mn.Y))) || (((ScrollDirections() & 8) == 8) && ((p.Y + 1e-05f) < mx.Y));
    return isOn;
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) [instance] :390
void WhileScrollable::OnScrollPositionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnScrollPositionChanged(object,Uno.EventArgs)");
    SetActive(IsOn());
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() [instance] :359
int WhileScrollable::ScrollDirections()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_ScrollDirections()");
    return _ScrollDirections;
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) [instance] :359
void WhileScrollable::ScrollDirections(int value)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "set_ScrollDirections(Fuse.Gestures.ScrollDirections)");
    _ScrollDirections = value;
}

// public Fuse.Controls.ScrollView get_ScrollView() [instance] :365
::g::Fuse::Controls::ScrollView* WhileScrollable::ScrollView()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_ScrollView()");
    ::g::Fuse::Controls::ScrollView* ind1 = _source;
    return (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Controls::ScrollView*>(ParentNode(), ::TYPES[50/*Fuse.Controls.ScrollView*/]);
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) [instance] :366
void WhileScrollable::ScrollView(::g::Fuse::Controls::ScrollView* value)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "set_ScrollView(Fuse.Controls.ScrollView)");
    _source = value;
}

// public generated WhileScrollable New() [static] :357
WhileScrollable* WhileScrollable::New1()
{
    WhileScrollable* obj2 = (WhileScrollable*)uNew(WhileScrollable_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1793)
// ---------------------------------------------------------------

// public abstract class WhileTrigger :1793
// {
::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileTrigger__OnRooted_fn;
    ::TYPES[6] = ::g::Fuse::UpdateManager_typeof();
    type->SetFields(15,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _rootFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _Invert), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Invert", NULL, (void*)WhileTrigger__get_Invert_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Invert", NULL, (void*)WhileTrigger__set_Invert_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// protected generated WhileTrigger() :1793
void WhileTrigger__ctor_2_fn(WhileTrigger* __this)
{
    __this->ctor_2();
}

// protected void BypassSetActive(bool on) :1804
void WhileTrigger__BypassSetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->BypassSetActive(*on);
}

// public generated bool get_Invert() :1795
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval)
{
    *__retval = __this->Invert();
}

// public generated void set_Invert(bool value) :1795
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value)
{
    __this->Invert(*value);
}

// protected override void OnRooted(Fuse.Node parentNode) :1798
void WhileTrigger__OnRooted_fn(WhileTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_rootFrame = -1;
}

// protected void SetActive(bool on) :1813
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->SetActive(*on);
}

// protected generated WhileTrigger() [instance] :1793
void WhileTrigger::ctor_2()
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", ".ctor()");
    ctor_1();
}

// protected void BypassSetActive(bool on) [instance] :1804
void WhileTrigger::BypassSetActive(bool on)
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "BypassSetActive(bool)");
    _rootFrame = ::g::Fuse::UpdateManager::FrameIndex();

    if (on != Invert())
        BypassActivate();
    else
        BypassDeactivate();
}

// public generated bool get_Invert() [instance] :1795
bool WhileTrigger::Invert()
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "get_Invert()");
    return _Invert;
}

// public generated void set_Invert(bool value) [instance] :1795
void WhileTrigger::Invert(bool value)
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "set_Invert(bool)");
    _Invert = value;
}

// protected void SetActive(bool on) [instance] :1813
void WhileTrigger::SetActive(bool on)
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "SetActive(bool)");

    if (::g::Fuse::UpdateManager::FrameIndex() == _rootFrame)
    {
        BypassSetActive(on);
        return;
    }

    if (on != Invert())
        Activate(NULL);
    else
        Deactivate();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1371)
// ---------------------------------------------------------------

// public sealed class WhileTrue :1371
// {
::g::Fuse::Triggers::WhileValue_type* WhileTrue_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileTrue);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileTrue", options);
    type->SetBase(::g::Fuse::Triggers::WhileBool_typeof());
    type->fp_ctor_ = (void*)WhileTrue__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileTrue__get_IsOn_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface1.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    ::TYPES[81] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileTrue__New1_fn, 0, true, WhileTrue_typeof(), 0));
    return type;
}

// public generated WhileTrue() :1371
void WhileTrue__ctor_5_fn(WhileTrue* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsOn() :1373
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileTrue", "get_IsOn()");
    return *__retval = __this->Value1(), void();
}

// public generated WhileTrue New() :1371
void WhileTrue__New1_fn(WhileTrue** __retval)
{
    *__retval = WhileTrue::New1();
}

// public generated WhileTrue() [instance] :1371
void WhileTrue::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileTrue", ".ctor()");
    ctor_4();
}

// public generated WhileTrue New() [static] :1371
WhileTrue* WhileTrue::New1()
{
    WhileTrue* obj1 = (WhileTrue*)uNew(WhileTrue_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1850)
// ---------------------------------------------------------------

// public abstract class WhileValue<T> :1850
// {
WhileValue_type* WhileValue_typeof()
{
    static uSStrong<WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhileValue);
    options.TypeSize = sizeof(WhileValue_type);
    type = (WhileValue_type*)uClassType::New("Fuse.Triggers.WhileValue`1", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileValue__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileValue__OnUnrooted_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))WhileValue__remove_ValueChanged_fn;
    type->interface1.fp_Pulse = (void(*)(uObject*))WhileValue__Pulse1_fn;
    ::STRINGS[12] = uString::Const("`Pulse` on a `WhileValue` will be removed, create a `Timeline` instead.");
    ::STRINGS[13] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Triggers\\0.24.7\\$.uno");
    ::STRINGS[14] = uString::Const("Pulse");
    ::TYPES[92] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[93] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[94] = ::g::Fuse::Triggers::WhileValueStatic_typeof();
    ::TYPES[95] = ::g::Fuse::Triggers::WhileTrigger_typeof();
    type->SetPrecalc(
        ::TYPES[92/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0)),
        ::TYPES[93/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileValue_type, interface1));
    type->SetFields(17,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileValue, _hasValue), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _obj), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _source), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, ValueChanged1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Pulse", NULL, (void*)WhileValue__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileValue__get_Source_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Source", NULL, (void*)WhileValue__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0))),
        new uFunction("get_Value", NULL, (void*)WhileValue__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)WhileValue__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, (void*)WhileValue__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, (void*)WhileValue__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
    return type;
}

// protected generated WhileValue() :1850
void WhileValue__ctor_3_fn(WhileValue* __this)
{
    __this->ctor_3();
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) :1900
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = WhileValue::FindValueNode(__type, n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1908
void WhileValue__OnRooted_fn(WhileValue* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnRooted(Fuse.Node)");
    uObject* ind1;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_obj = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)WhileValue::FindValueNode(WhileValue_typeof()->MakeType(__types[1]), __this->ParentNode())));

    if (__this->_obj != NULL)
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[2], (void*)WhileValue__OnValueChanged_fn, __this));

    __this->BypassSetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1916
void WhileValue__OnUnrooted_fn(WhileValue* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnUnrooted(Fuse.Node)");

    if (__this->_obj != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[2], (void*)WhileValue__OnValueChanged_fn, __this));
        __this->_obj = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) :1926
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    __this->OnValueChanged(s, a);
}

// public new void Pulse() :1884
void WhileValue__Pulse1_fn(WhileValue* __this)
{
    __this->Pulse1();
}

// public Fuse.Triggers.IValue<T> get_Source() :1878
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<T> value) :1879
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value)
{
    __this->Source(value);
}

// protected void UpdateState() :1933
void WhileValue__UpdateState_fn(WhileValue* __this)
{
    __this->UpdateState();
}

// public T get_Value() :1856
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "get_Value()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (__this->_hasValue)
        return __retval.Store(__this->_value()), void();

    if (__this->_obj != NULL)
        return __retval.Store((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_obj), __types[1]), &ret2), ret2)), void();

    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :1862
void WhileValue__set_Value_fn(WhileValue* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "set_Value(T)");

    if (!__this->_hasValue || !::g::Uno::Object::Equals1(uBoxPtr(__types[0], __this->_value()), uBoxPtr(__types[0], value)))
    {
        __this->_hasValue = true;
        __this->_value() = value;

        if (__this->IsRooted())
            __this->SetActive(__this->IsOn());
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :1882
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :1882
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated WhileValue() [instance] :1850
void WhileValue::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", ".ctor()");
    ctor_2();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance] :1926
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance] :1884
void WhileValue::Pulse1()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "Pulse()");

    if (!::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote())
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[12/*"`Pulse` on ...*/], this, ::STRINGS[13/*"C:\\Program...*/], 1888, ::STRINGS[14/*"Pulse"*/]);
        ::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote() = true;
    }

    if (IsOn() != Invert())
        InversePulse();
    else
        Pulse();
}

// public Fuse.Triggers.IValue<T> get_Source() [instance] :1878
uObject* WhileValue::Source()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance] :1879
void WhileValue::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "set_Source(Fuse.Triggers.IValue<T>)");
    _source = value;
}

// protected void UpdateState() [instance] :1933
void WhileValue::UpdateState()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "UpdateState()");

    if (!IsRooted())
        return;

    SetActive(IsOn());
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :1882
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "add_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :1882
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "remove_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static] :1900
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "FindValueNode(Fuse.Node)");

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->Parent() != NULL)
        return WhileValue::FindValueNode(__type->MakeType(__types[1]), uPtr(n)->Parent());

    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1845)
// ---------------------------------------------------------------

// internal static class WhileValueStatic :1845
// {
uClassType* WhileValueStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.WhileValueStatic", options);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_, uFieldFlagsStatic);
    return type;
}

bool WhileValueStatic::_deprecatedNote_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1955)
// ---------------------------------------------------------------

// public sealed class WhileVisible :1955
// {
::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileVisible", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileVisible__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileVisible__OnUnrooted_fn;
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileVisible__New1_fn, 0, true, WhileVisible_typeof(), 0));
    return type;
}

// public generated WhileVisible() :1955
void WhileVisible__ctor_3_fn(WhileVisible* __this)
{
    __this->ctor_3();
}

// public generated WhileVisible New() :1955
void WhileVisible__New1_fn(WhileVisible** __retval)
{
    *__retval = WhileVisible::New1();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) :1971
void WhileVisible__OnIsVisibleChanged_fn(WhileVisible* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsVisibleChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1957
void WhileVisible__OnRooted_fn(WhileVisible* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_IsVisibleChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->ParentNode())->IsVisible());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1965
void WhileVisible__OnUnrooted_fn(WhileVisible* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnUnrooted(Fuse.Node)");
    uPtr(__this->ParentNode())->remove_IsVisibleChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileVisible() [instance] :1955
void WhileVisible::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WhileVisible", ".ctor()");
    ctor_2();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) [instance] :1971
void WhileVisible::OnIsVisibleChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnIsVisibleChanged(object,Uno.EventArgs)");
    SetActive(uPtr(ParentNode())->IsVisible());
}

// public generated WhileVisible New() [static] :1955
WhileVisible* WhileVisible::New1()
{
    WhileVisible* obj1 = (WhileVisible*)uNew(WhileVisible_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(2063)
// ---------------------------------------------------------------

// public abstract class WhileWindowAspect :2063
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileWindowAspect);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowAspect", options);
    type->SetBase(::g::Fuse::Triggers::WindowSizeTrigger_typeof());
    ::TYPES[96] = ::g::Fuse::Triggers::WindowSizeTrigger_typeof();
    ::TYPES[88] = ::g::Fuse::IViewport_typeof();
    ::TYPES[47] = ::g::Uno::Float2_typeof();
    type->SetFields(18);
    return type;
}

// protected generated WhileWindowAspect() :2063
void WhileWindowAspect__ctor_4_fn(WhileWindowAspect* __this)
{
    __this->ctor_4();
}

// protected float get_Aspect() :2066
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// protected generated WhileWindowAspect() [instance] :2063
void WhileWindowAspect::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileWindowAspect", ".ctor()");
    ctor_3();
}

// protected float get_Aspect() [instance] :2066
float WhileWindowAspect::Aspect()
{
    uStackFrame __("Fuse.Triggers.WhileWindowAspect", "get_Aspect()");

    if (Viewport() == NULL)
        return 0.5f;

    ::g::Uno::Float2 sz = ::g::Fuse::IViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[88/*Fuse.IViewport*/]));
    return sz.X / sz.Y;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(2075)
// ---------------------------------------------------------------

// public sealed class WhileWindowLandscape :2075
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileWindowLandscape);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowLandscape", options);
    type->SetBase(::g::Fuse::Triggers::WhileWindowAspect_typeof());
    type->fp_ctor_ = (void*)WhileWindowLandscape__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowLandscape__get_IsActive_fn;
    ::TYPES[97] = ::g::Fuse::Triggers::WhileWindowAspect_typeof();
    type->SetFields(18);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowLandscape__New1_fn, 0, true, WhileWindowLandscape_typeof(), 0));
    return type;
}

// public generated WhileWindowLandscape() :2075
void WhileWindowLandscape__ctor_5_fn(WhileWindowLandscape* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsActive() :2077
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowLandscape", "get_IsActive()");
    return *__retval = __this->Aspect() > 1.0f, void();
}

// public generated WhileWindowLandscape New() :2075
void WhileWindowLandscape__New1_fn(WhileWindowLandscape** __retval)
{
    *__retval = WhileWindowLandscape::New1();
}

// public generated WhileWindowLandscape() [instance] :2075
void WhileWindowLandscape::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileWindowLandscape", ".ctor()");
    ctor_4();
}

// public generated WhileWindowLandscape New() [static] :2075
WhileWindowLandscape* WhileWindowLandscape::New1()
{
    WhileWindowLandscape* obj1 = (WhileWindowLandscape*)uNew(WhileWindowLandscape_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(2080)
// ---------------------------------------------------------------

// public sealed class WhileWindowPortrait :2080
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileWindowPortrait);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowPortrait", options);
    type->SetBase(::g::Fuse::Triggers::WhileWindowAspect_typeof());
    type->fp_ctor_ = (void*)WhileWindowPortrait__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowPortrait__get_IsActive_fn;
    ::TYPES[97] = ::g::Fuse::Triggers::WhileWindowAspect_typeof();
    type->SetFields(18);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowPortrait__New1_fn, 0, true, WhileWindowPortrait_typeof(), 0));
    return type;
}

// public generated WhileWindowPortrait() :2080
void WhileWindowPortrait__ctor_5_fn(WhileWindowPortrait* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsActive() :2082
void WhileWindowPortrait__get_IsActive_fn(WhileWindowPortrait* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowPortrait", "get_IsActive()");
    return *__retval = __this->Aspect() <= 1.0f, void();
}

// public generated WhileWindowPortrait New() :2080
void WhileWindowPortrait__New1_fn(WhileWindowPortrait** __retval)
{
    *__retval = WhileWindowPortrait::New1();
}

// public generated WhileWindowPortrait() [instance] :2080
void WhileWindowPortrait::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileWindowPortrait", ".ctor()");
    ctor_4();
}

// public generated WhileWindowPortrait New() [static] :2080
WhileWindowPortrait* WhileWindowPortrait::New1()
{
    WhileWindowPortrait* obj1 = (WhileWindowPortrait*)uNew(WhileWindowPortrait_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(2026)
// ---------------------------------------------------------------

// public sealed class WhileWindowSize :2026
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(WhileWindowSize);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowSize", options);
    type->SetBase(::g::Fuse::Triggers::WindowSizeTrigger_typeof());
    type->fp_ctor_ = (void*)WhileWindowSize__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowSize__get_IsActive_fn;
    ::TYPES[96] = ::g::Fuse::Triggers::WindowSizeTrigger_typeof();
    ::TYPES[88] = ::g::Fuse::IViewport_typeof();
    ::TYPES[47] = ::g::Uno::Float2_typeof();
    type->SetFields(18,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _EqualTo), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _GreaterThan), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _LessThan), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_EqualTo", NULL, (void*)WhileWindowSize__get_EqualTo_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileWindowSize__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileWindowSize__get_GreaterThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileWindowSize__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileWindowSize__get_LessThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileWindowSize__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileWindowSize__New1_fn, 0, true, WhileWindowSize_typeof(), 0));
    return type;
}

// public generated WhileWindowSize() :2026
void WhileWindowSize__ctor_4_fn(WhileWindowSize* __this)
{
    __this->ctor_4();
}

// public generated float2 get_EqualTo() :2031
void WhileWindowSize__get_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EqualTo();
}

// public generated void set_EqualTo(float2 value) :2031
void WhileWindowSize__set_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->EqualTo(*value);
}

// public generated float2 get_GreaterThan() :2029
void WhileWindowSize__get_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GreaterThan();
}

// public generated void set_GreaterThan(float2 value) :2029
void WhileWindowSize__set_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->GreaterThan(*value);
}

// protected override sealed bool get_IsActive() :2035
void WhileWindowSize__get_IsActive_fn(WhileWindowSize* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_IsActive()");

    if (__this->Viewport() == NULL)
        return *__retval = false, void();

    ::g::Uno::Float2 sz = ::g::Fuse::IViewport::Size(uInterface(uPtr(__this->Viewport()), ::TYPES[88/*Fuse.IViewport*/]));

    if ((__this->GreaterThan().X > 0.0f) && (__this->GreaterThan().Y > 0.0f))
    {
        if ((sz.X < __this->GreaterThan().X) || (sz.Y < __this->GreaterThan().Y))
            return *__retval = false, void();
    }

    if ((__this->LessThan().X > 0.0f) && (__this->LessThan().Y > 0.0f))
    {
        if ((sz.X > __this->LessThan().X) || (sz.Y > __this->LessThan().Y))
            return *__retval = false, void();
    }

    if ((__this->EqualTo().X > 0.0f) && (__this->EqualTo().Y > 0.0f))
    {
        if ((sz.X != __this->EqualTo().X) || (sz.Y != __this->EqualTo().Y))
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// public generated float2 get_LessThan() :2030
void WhileWindowSize__get_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LessThan();
}

// public generated void set_LessThan(float2 value) :2030
void WhileWindowSize__set_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->LessThan(*value);
}

// public generated WhileWindowSize New() :2026
void WhileWindowSize__New1_fn(WhileWindowSize** __retval)
{
    *__retval = WhileWindowSize::New1();
}

// public generated WhileWindowSize() [instance] :2026
void WhileWindowSize::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", ".ctor()");
    ctor_3();
}

// public generated float2 get_EqualTo() [instance] :2031
::g::Uno::Float2 WhileWindowSize::EqualTo()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_EqualTo()");
    return _EqualTo;
}

// public generated void set_EqualTo(float2 value) [instance] :2031
void WhileWindowSize::EqualTo(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "set_EqualTo(float2)");
    _EqualTo = value;
}

// public generated float2 get_GreaterThan() [instance] :2029
::g::Uno::Float2 WhileWindowSize::GreaterThan()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_GreaterThan()");
    return _GreaterThan;
}

// public generated void set_GreaterThan(float2 value) [instance] :2029
void WhileWindowSize::GreaterThan(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "set_GreaterThan(float2)");
    _GreaterThan = value;
}

// public generated float2 get_LessThan() [instance] :2030
::g::Uno::Float2 WhileWindowSize::LessThan()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_LessThan()");
    return _LessThan;
}

// public generated void set_LessThan(float2 value) [instance] :2030
void WhileWindowSize::LessThan(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "set_LessThan(float2)");
    _LessThan = value;
}

// public generated WhileWindowSize New() [static] :2026
WhileWindowSize* WhileWindowSize::New1()
{
    WhileWindowSize* obj1 = (WhileWindowSize*)uNew(WhileWindowSize_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno(1985)
// ---------------------------------------------------------------

// public abstract class WindowSizeTrigger :1985
// {
WindowSizeTrigger_type* WindowSizeTrigger_typeof()
{
    static uSStrong<WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WindowSizeTrigger);
    options.TypeSize = sizeof(WindowSizeTrigger_type);
    type = (WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WindowSizeTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WindowSizeTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WindowSizeTrigger__OnUnrooted_fn;
    ::TYPES[88] = ::g::Fuse::IViewport_typeof();
    ::TYPES[98] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::RootViewport_typeof());
    ::TYPES[3] = ::g::Fuse::Behavior_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[99] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger, _Viewport), 0);
    return type;
}

// protected generated WindowSizeTrigger() :1985
void WindowSizeTrigger__ctor_3_fn(WindowSizeTrigger* __this)
{
    __this->ctor_3();
}

// private void OnResize(object sender, Uno.EventArgs args) :2017
void WindowSizeTrigger__OnResize_fn(WindowSizeTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnResize(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1990
void WindowSizeTrigger__OnRooted_fn(WindowSizeTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnRooted(Fuse.Node)");
    uObject* ind1;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->Viewport((ind1 = uAs<uObject*>((::g::Fuse::RootViewport*)uPtr(__this->ParentNode())->FindByType(::TYPES[98/*Fuse.Node.FindByType<Fuse.RootViewport>*/]), ::TYPES[88/*Fuse.IViewport*/]), (ind1 != NULL) ? ind1 : (uObject*)uPtr(__this->ParentNode())->Viewport()));
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    __this->BypassSetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2005
void WindowSizeTrigger__OnUnrooted_fn(WindowSizeTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnUnrooted(Fuse.Node)");
    __this->Viewport(NULL);
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->remove_FrameChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated Fuse.IViewport get_Viewport() :1988
void WindowSizeTrigger__get_Viewport_fn(WindowSizeTrigger* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// private generated void set_Viewport(Fuse.IViewport value) :1988
void WindowSizeTrigger__set_Viewport_fn(WindowSizeTrigger* __this, uObject* value)
{
    __this->Viewport(value);
}

// protected generated WindowSizeTrigger() [instance] :1985
void WindowSizeTrigger::ctor_3()
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", ".ctor()");
    ctor_2();
}

// private void OnResize(object sender, Uno.EventArgs args) [instance] :2017
void WindowSizeTrigger::OnResize(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnResize(object,Uno.EventArgs)");

    if (Viewport() != NULL)
        SetActive(IsActive());
}

// protected generated Fuse.IViewport get_Viewport() [instance] :1988
uObject* WindowSizeTrigger::Viewport()
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "get_Viewport()");
    return _Viewport;
}

// private generated void set_Viewport(Fuse.IViewport value) [instance] :1988
void WindowSizeTrigger::Viewport(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "set_Viewport(Fuse.IViewport)");
    _Viewport = value;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\Triggers\$.uno(32)
// ----------------------------------------------------------------------

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__WorldPositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__WorldPositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__WorldPositionChangeMode_type);
    type = (LayoutTransition__WorldPositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__WorldPositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__WorldPositionChangeMode__get_Flags_fn;
    ::TYPES[30] = ::g::Fuse::Transform_typeof();
    ::TYPES[31] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface1));
    return type;
}

// public generated WorldPositionChangeMode() :32
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :38
void LayoutTransition__WorldPositionChangeMode__get_Flags_fn(LayoutTransition__WorldPositionChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :34
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated WorldPositionChangeMode New() :32
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval)
{
    *__retval = LayoutTransition__WorldPositionChangeMode::New1();
}

// public generated WorldPositionChangeMode() [instance] :32
void LayoutTransition__WorldPositionChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :38
int LayoutTransition__WorldPositionChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :34
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::Triggers::LayoutTransition::GetWorldPositionChange(uPtr(t)->RelativeNode()), uPtr(t)->Vector());
}

// public generated WorldPositionChangeMode New() [static] :32
LayoutTransition__WorldPositionChangeMode* LayoutTransition__WorldPositionChangeMode::New1()
{
    LayoutTransition__WorldPositionChangeMode* obj1 = (LayoutTransition__WorldPositionChangeMode*)uNew(LayoutTransition__WorldPositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Triggers
