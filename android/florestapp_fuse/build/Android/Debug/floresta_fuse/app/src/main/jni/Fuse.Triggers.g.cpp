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
#include <Fuse.Behavior.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Scaling.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransition.PositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ResizeChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ScaleChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransitioned.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
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
#include <Fuse.Triggers.WhileFocused.h>
#include <Fuse.Triggers.WhileFocusWithin.h>
#include <Fuse.Triggers.WhileInteracting.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileValueStatic.h>
#include <Fuse.UpdateManager.h>
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
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[5];
static uType* TYPES[61];

namespace g{
namespace Fuse{
namespace Triggers{

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/Actions/$.uno(207)
// -----------------------------------------------------------------------------------------

// public abstract interface IMediaPlayback :207
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/Actions/$.uno(193)
// -----------------------------------------------------------------------------------------

// public abstract interface IPlayback :193
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(319)
// ---------------------------------------------------------------------------------

// public abstract interface IProgress :319
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(668)
// ---------------------------------------------------------------------------------

// public abstract interface IPulseTrigger :668
// {
uInterfaceType* IPulseTrigger_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPulseTrigger", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(95)
// --------------------------------------------------------------------------------

// public abstract interface IValue<T> :95
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(26)
// -----------------------------------------------------------------------------------------

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
    ::TYPES[0] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::IResizeMode_typeof();
    ::TYPES[2] = ::g::Fuse::IScalingMode_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Float4_typeof();
    ::TYPES[5] = ::g::Uno::Float3_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
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
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange());
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::TYPES[4/*float4*/], v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) [static] :135
bool LayoutTransition::GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange(), &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::TYPES[4/*float4*/], res);
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
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange());

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::TYPES[5/*float3*/], v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Node n, float2 oldPos, float2 newPos) [static] :85
void LayoutTransition::SetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange(), uBox(::TYPES[4/*float4*/], ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) [static] :130
void LayoutTransition::SetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange(), uBox(::TYPES[4/*float4*/], ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) [static] :54
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Node* n, ::g::Uno::Float3 change)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange(), uBox(::TYPES[5/*float3*/], change));
}

// public static Fuse.NodeEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static] :30
::g::Fuse::NodeEvent* LayoutTransition::Transitioned()
{
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(17)
// -----------------------------------------------------------------------------------------

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
    ::TYPES[8] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(10)
// -----------------------------------------------------------------------------------------

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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(16)
// -----------------------------------------------------------------------------------------

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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(59)
// -----------------------------------------------------------------------------------------

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
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Fuse::Transform_typeof();
    ::TYPES[11] = ::g::Fuse::Translation_typeof();
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
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :61
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(325)
// ---------------------------------------------------------------------------------

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
    ::TYPES[12] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[14] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetFields(15,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _prevValue), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _progress), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _Source), 0);
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
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_progress = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : uAs<uObject*>(__this->ParentNode(), ::TYPES[12/*Fuse.Triggers.IProgress*/])));

    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[12/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[14/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_prevValue = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(__this->_progress), ::TYPES[12/*Fuse.Triggers.IProgress*/]));
        __this->BypassSeek(__this->_prevValue, 0);
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :344
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[12/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[14/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, __this));
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
    ctor_1();
}

// private void OnChanged(object s, object a) [instance] :355
void ProgressAnimation::OnChanged(uObject* s, uObject* a)
{
    double p = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(_progress), ::TYPES[12/*Fuse.Triggers.IProgress*/]));
    double diff = p - _prevValue;
    _prevValue = p;
    Seek1(p, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Triggers.IProgress get_Source() [instance] :327
uObject* ProgressAnimation::Source()
{
    return _Source;
}

// public generated void set_Source(Fuse.Triggers.IProgress value) [instance] :327
void ProgressAnimation::Source(uObject* value)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(91)
// -----------------------------------------------------------------------------------------

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
    return 0;
}

// public bool GetSizeChange(Fuse.Node n, Fuse.Node relative, float2& baseSize, float2& deltaSize) [instance] :93
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Node* n, ::g::Fuse::Node* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(105)
// ------------------------------------------------------------------------------------------

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
    ::TYPES[10] = ::g::Fuse::Transform_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Float2_typeof();
    ::TYPES[16] = ::g::Fuse::Scaling_typeof();
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
    return 0;
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance] :107
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(682)
// ---------------------------------------------------------------------------------

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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(617)
// ---------------------------------------------------------------------------------

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
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))State__OnRooted_fn;
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Fuse::Triggers::Trigger_typeof();
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::State, _on), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::State, _Name), 0);
    return type;
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
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);

    if (__this->_on)
        __this->BypassActivate();
}

// public new double get_Progress() :651
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public generated string get_Name() [instance] :622
uString* State::Name()
{
    return _Name;
}

// public generated void set_Name(string value) [instance] :622
void State::Name(uString* value)
{
    _Name = value;
}

// public bool get_On() [instance] :628
bool State::On()
{
    return _on;
}

// public void set_On(bool value) [instance] :629
void State::On(bool value)
{
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
    return Progress();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(471)
// ---------------------------------------------------------------------------------

// public sealed class StateGroup :471
// {
StateGroup_type* StateGroup_typeof()
{
    static uSStrong<StateGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(StateGroup_type);
    type = (StateGroup_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))StateGroup__FindObjectByName_fn;
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[19] = ::g::Fuse::Triggers::State_typeof();
    ::TYPES[20] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[23] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[17] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[24] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Triggers::Trigger_typeof());
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(StateGroup_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _active), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), offsetof(::g::Fuse::Triggers::StateGroup, _states), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _transition), 0);
    return type;
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

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) :583
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which)
{
    __this->OnPlaybackDone(which);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :549
void StateGroup__OnRooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::State* ret13;
    ::g::Fuse::Triggers::State* ret14;

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[23/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret13), ret13);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret14), ret14);
        uPtr(state)->On(state == __this->_active);
        state->add_PlaybackDone(uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->Rooted(__this->ParentNode());
    }

    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :538
void StateGroup__OnUnrooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::State* ret15;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret15), ret15);
        uPtr(state)->remove_PlaybackDone(uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->Unrooted(__this->ParentNode());
    }
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

// public Fuse.Triggers.State get_Active() [instance] :480
::g::Fuse::Triggers::State* StateGroup::Active()
{
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance] :481
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance] :504
int StateGroup::ActiveIndex()
{
    ::g::Fuse::Triggers::State* ret16;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[23/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(i), &ret16), ret16))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance] :511
void StateGroup::ActiveIndex(int value)
{
    ::g::Fuse::Triggers::State* ret17;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[23/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(value), &ret17), ret17));
}

// private void CheckAllDone() [instance] :589
void StateGroup::CheckAllDone()
{
    ::g::Fuse::Triggers::State* ret8;
    bool all = true;

    for (uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

        if (uPtr(state)->Progress1() > 0.0)
            all = false;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) [instance] :522
uObject* StateGroup::FindObjectByName(uString* name, uDelegate* acceptor)
{
    ::g::Fuse::Triggers::State* ret9;
    bool ret10;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret9), ret9);

        if (::g::Uno::String::op_Equality(uPtr(s)->Name(), name) && (uPtr(acceptor)->Invoke(&ret10, 1, s), ret10))
            return s;
    }

    return NULL;
}

// private void Goto(Fuse.Triggers.State next) [instance] :564
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Triggers::State* ret12;
    _active = next;

    switch (Transition())
    {
        case 0:
        {
            for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
            {
                ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
                uPtr(state)->On(state == next);
            }

            break;
        }
        case 1:
        {
            for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
            {
                ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
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
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) [instance] :583
void StateGroup::OnPlaybackDone(::g::Fuse::Triggers::Trigger* which)
{
    if (Transition() == 1)
        CheckAllDone();
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance] :475
uObject* StateGroup::States()
{
    return _states;
}

// public Fuse.Triggers.StateTransition get_Transition() [instance] :534
int StateGroup::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance] :535
void StateGroup::Transition(int value)
{
    _transition = value;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(465)
// ---------------------------------------------------------------------------------

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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(673)
// ---------------------------------------------------------------------------------

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
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[14] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[27] = ::g::Uno::Action_typeof();
    ::TYPES[28] = ::g::Fuse::Animations::TriggerAnimation_typeof();
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
    return type;
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

// protected override sealed void OnProgressChanged() :741
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, __this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[26/*Uno.UX.ValueChangedArgs<double>*/], uCRef(__this->Progress1()), __this, &ret2), ret2));
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :727
void Timeline__OnRooted_fn(Timeline* __this, ::g::Fuse::Node* parentNode)
{
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

// private void BypassOff() [instance] :830
void Timeline::BypassOff()
{
    _targetProgress = 0.0;
    BypassDeactivate();
}

// public bool get_CanPause() [instance] :793
bool Timeline::CanPause()
{
    return true;
}

// public bool get_CanPlayTo() [instance] :789
bool Timeline::CanPlayTo()
{
    return true;
}

// public bool get_CanResume() [instance] :795
bool Timeline::CanResume()
{
    return true;
}

// public bool get_CanStop() [instance] :791
bool Timeline::CanStop()
{
    return true;
}

// public void Pause() [instance] :771
void Timeline::Pause()
{
    if (IsRooted())
    {
        _state = 1;
        Seek(Progress1());
    }
}

// private void Play(double progress) [instance] :763
void Timeline::Play(double progress)
{
    _state = 0;
    PlayTo(progress, (progress >= Progress1()) ? 0 : 1);
    _targetProgress = progress;
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :723
int Timeline::PlayMode()
{
    return uPtr(Animation())->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :724
void Timeline::PlayMode(int value)
{
    uPtr(Animation())->PlayMode(value);
}

// public void PlayTo(double progress) [instance] :757
void Timeline::PlayTo1(double progress)
{
    if (IsRooted())
        Play(progress);
}

// public new double get_Progress() [instance] :800
double Timeline::Progress1()
{
    return Progress();
}

// public new void set_Progress(double value) [instance] :801
void Timeline::Progress1(double value)
{
    Seek(value);
    _targetProgress = value;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :739
void Timeline::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[14/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :739
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[14/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public new void Pulse() [instance] :819
void Timeline::Pulse1()
{
    Pulse();
}

// public void PulseBackward() [instance] :836
void Timeline::PulseBackward()
{
    BypassActivate();
    _targetProgress = 0.0;
    Deactivate();
}

// public void PulseForward() [instance] :824
void Timeline::PulseForward()
{
    _targetProgress = 1.0;
    Activate(uDelegate::New(::TYPES[27/*Uno.Action*/], (void*)Timeline__BypassOff_fn, this));
}

// public void Resume() [instance] :780
void Timeline::Resume()
{
    if (IsRooted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void Stop() [instance] :747
void Timeline::Stop1()
{
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
    if (!_hasTargetProgress && (PlayMode() == 1))
        return 1.0;

    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance] :712
void Timeline::TargetProgress(double value)
{
    _targetProgress = value;
    _hasTargetProgress = true;

    if (IsRooted() && (_state == 0))
        PlayTo1(_targetProgress);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(866)
// ---------------------------------------------------------------------------------

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
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    ::STRINGS[0] = uString::Const("Trigger started prior to being rooted: ");
    ::TYPES[29] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[30] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[31] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[33] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[34] = ::g::Fuse::Animations::TriggerAnimationState_typeof();
    ::TYPES[35] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[27] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[37] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[38] = ::g::Uno::Double_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[28] = ::g::Fuse::Animations::TriggerAnimation_typeof();
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[24] = ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof());
    ::TYPES[41] = ::g::Uno::Float_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[43] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[44] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[45] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[46] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
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

// protected void OnNodeAdded(Fuse.Node n) :976
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeAdded(n);
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
    if (__this->_startAtZero)
    {
        __this->Start();
        __this->EnsureState(0.0);
    }
}

// protected override void OnUnrooted(Fuse.Node parentNode) :1341
void Trigger__OnUnrooted_fn(Trigger* __this, ::g::Fuse::Node* parentNode)
{
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

// protected generated Trigger() [instance] :866
void Trigger::ctor_1()
{
    ctor_();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance] :934
uObject* Trigger::Actions()
{
    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/]));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance] :1104
void Trigger::Activate(uDelegate* done)
{
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
    ::g::Fuse::Node* ret1;
    ::g::Fuse::Behavior* ret2;
    uObject* iarn = uAs<uObject*>(target, ::TYPES[29/*Fuse.IObjectContainer*/]);

    if ((_nodes != NULL) && (iarn != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(iarn), ::TYPES[29/*Fuse.IObjectContainer*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[31/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret1), ret1));

    if (_behaviors != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_behaviors), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Behavior>*/])); ++i1)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(target)->Behaviors()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Behavior>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_behaviors), ::TYPES[33/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i1), &ret2), ret2));
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance] :888
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :893
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :924
uObject* Trigger::Animators()
{
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance] :913
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance] :914
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uPtr(Animation())->Backward(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :959
uObject* Trigger::Behaviors()
{
    if (_behaviors == NULL)
        _behaviors = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[43/*Uno.Collections.ObservableList<Fuse.Behavior>*/], uDelegate::New(::TYPES[44/*Uno.Action<Fuse.Behavior>*/], (void*)Trigger__OnBehaviorAdded_fn, this), uDelegate::New(::TYPES[44/*Uno.Action<Fuse.Behavior>*/], (void*)Trigger__OnBehaviorRemoved_fn, this)));

    return _behaviors;
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() [instance] :884
int Trigger::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance] :884
void Trigger::Bypass(int value)
{
    _Bypass = value;
}

// protected void BypassActivate() [instance] :1117
void Trigger::BypassActivate()
{
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
    if (_animState != NULL)
    {
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance] :1194
void Trigger::CreateState()
{
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(ParentNode());
    uPtr(_animState)->add_PlaybackDone(uDelegate::New(::TYPES[35/*Uno.Action<object>*/], (void*)Trigger__OnPlaybackDone_fn, this));
    uPtr(_animState)->add_ProgressUpdated(uDelegate::New(::TYPES[35/*Uno.Action<object>*/], (void*)Trigger__OnProgressUpdated_fn, this));
}

// protected void Deactivate() [instance] :1131
void Trigger::Deactivate()
{
    if ((Progress() > 0.0) || (_lastPlayDirection != 0))
        SetPlayDirection(-1);

    if ((Progress() <= 0.0) && (_animState == NULL))
        Stop(false);
    else
        PlayEnd(false, uDelegate::New(::TYPES[27/*Uno.Action*/], (void*)Trigger__StopAction_fn, this));
}

// private void EnsureAnimationLength() [instance] :1214
void Trigger::EnsureAnimationLength()
{
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Animations.Animator*/])), n);

    if (BackwardAnimation() != NULL)
    {
        n = ::g::Fuse::Animations::Nothing::New1();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Animations.Animator*/])), n);
    }
}

// private bool EnsureState(double progress) [instance] :1204
bool Trigger::EnsureState(double progress)
{
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
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasAnimators() [instance] :928
bool Trigger::HasAnimators()
{
    return (_animation != NULL) && uPtr(_animation)->HasAnimators();
}

// protected void InversePulse() [instance] :1166
void Trigger::InversePulse()
{
    PlayEnd(false, uDelegate::New(::TYPES[27/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :949
uObject* Trigger::Nodes()
{
    if (_nodes == NULL)
        _nodes = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[45/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[46/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeAdded_fn, this), uDelegate::New(::TYPES[46/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeRemoved_fn, this)));

    return _nodes;
}

// protected void OnBehaviorAdded(Fuse.Behavior b) [instance] :966
void Trigger::OnBehaviorAdded(::g::Fuse::Behavior* b)
{
    if (IsRooted() && _isStarted)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ParentNode())->Behaviors()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Behavior>*/]), b);
}

// protected void OnBehaviorRemoved(Fuse.Behavior b) [instance] :971
void Trigger::OnBehaviorRemoved(::g::Fuse::Behavior* b)
{
    bool ret4;

    if (IsRooted() && _isStarted)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(ParentNode())->Behaviors()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Behavior>*/]), b, &ret4);
}

// protected void OnNodeAdded(Fuse.Node n) [instance] :976
void Trigger::OnNodeAdded(::g::Fuse::Node* n)
{
    uObject* iar = uAs<uObject*>(ParentNode(), ::TYPES[29/*Fuse.IObjectContainer*/]);

    if ((iar != NULL) && _isStarted)
        ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(iar), ::TYPES[29/*Fuse.IObjectContainer*/]), n);
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :982
void Trigger::OnNodeRemoved(::g::Fuse::Node* n)
{
    uObject* iar = uAs<uObject*>(ParentNode(), ::TYPES[29/*Fuse.IObjectContainer*/]);

    if ((iar != NULL) && _isStarted)
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(iar), ::TYPES[29/*Fuse.IObjectContainer*/]), n);
}

// private void OnPlaybackDone(object s) [instance] :1060
void Trigger::OnPlaybackDone(uObject* s)
{
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
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[24/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :882
void Trigger::remove_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[24/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance] :1176
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    if (on)
        Start();

    SetDone(done, on);

    if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance] :1171
void Trigger::PlayOn()
{
    PlayEnd(true, NULL);
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance] :1292
void Trigger::PlayTo(double progress, int variant)
{
    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant, 1);
}

// protected double get_Progress() [instance] :1028
double Trigger::Progress()
{
    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance] :1159
void Trigger::Pulse()
{
    SetPlayDirection(0);
    Activate(uDelegate::New(::TYPES[27/*Uno.Action*/], (void*)Trigger__Deactivate_fn, this));
}

// protected void RemoveContent(Fuse.Node target) [instance] :1004
void Trigger::RemoveContent(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ret6;
    bool ret7;
    ::g::Fuse::Behavior* ret8;
    uObject* iarn = uAs<uObject*>(target, ::TYPES[29/*Fuse.IObjectContainer*/]);

    if ((_nodes != NULL) && (iarn != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(iarn), ::TYPES[29/*Fuse.IObjectContainer*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[31/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6));

    if (_behaviors != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_behaviors), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Behavior>*/])); ++i1)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(target)->Behaviors()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Behavior>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_behaviors), ::TYPES[33/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i1), &ret8), ret8), &ret7);
}

// protected void Seek(double progress) [instance] :1298
void Trigger::Seek(double progress)
{
    Seek1(progress, 0);
}

// protected void Seek(double progress, Fuse.Animations.AnimationVariant direction) [instance] :1303
void Trigger::Seek1(double progress, int direction)
{
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
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayDirection(int next) [instance] :1038
void Trigger::SetPlayDirection(int next)
{
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
    if (!_isStarted)
    {
        if (!TriggerCanStartTest())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Trigger sta...*/], this)));

        AddContent(ParentNode());
        _isStarted = true;
    }
}

// protected void Stop([bool force]) [instance] :1092
void Trigger::Stop(bool force)
{
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
    Stop(false);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(859)
// ---------------------------------------------------------------------------------

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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1362)
// ----------------------------------------------------------------------------------

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
    ::TYPES[47] = ::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22);
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
    ctor_3();
}

// public new bool get_Value() [instance] :1366
bool WhileBool::Value1()
{
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance] :1367
void WhileBool::Value1(bool value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1747)
// ----------------------------------------------------------------------------------

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
    type->fp_cctor_ = WhileCompleted__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
    return type;
}

// private static bool IsCompleted(Fuse.Node n) :1751
void WhileCompleted__IsCompleted_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1772
void WhileCompleted__OnRooted_fn(WhileCompleted* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileCompleted::IsCompleted(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool paused) :1758
void WhileCompleted__SetState_fn(::g::Fuse::Node* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// private static bool IsCompleted(Fuse.Node n) [static] :1751
bool WhileCompleted::IsCompleted(::g::Fuse::Node* n)
{
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp());

    if (!uIs(v, ::TYPES[9/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[9/*bool*/], v);
}

// public static void SetState(Fuse.Node n, bool paused) [static] :1758
void WhileCompleted::SetState(::g::Fuse::Node* n, bool paused)
{
    WhileCompleted_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp(), uBox(::TYPES[9/*bool*/], paused));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileCompleted* wl = uAs<WhileCompleted*>(b, WhileCompleted_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Triggers/$.uno(53)
// -----------------------------------------------------------------------------------------

// public sealed class WhileContainsText :53
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
    ::TYPES[49] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[50] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    type->SetFields(17,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _source), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _value), 0);
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
    uString* ret2;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->Source() != NULL)
        __this->_value = __this->Source();
    else
        __this->_value = uAs<uObject*>(parentNode, ::TYPES[49/*Fuse.Triggers.IValue<string>*/]);

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[49/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[50/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->BypassSetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_value), ::TYPES[49/*Fuse.Triggers.IValue<string>*/]), &ret2), ret2)));
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :78
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[49/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[50/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
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
    ctor_2();
}

// private void OnValueChanged(object sender, Uno.EventArgs args) [instance] :88
void WhileContainsText::OnValueChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uString* ret3;
    SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(_value), ::TYPES[49/*Fuse.Triggers.IValue<string>*/]), &ret3), ret3)));
}

// public Fuse.Triggers.IValue<string> get_Source() [instance] :58
uObject* WhileContainsText::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<string> value) [instance] :59
void WhileContainsText::Source(uObject* value)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(64)
// --------------------------------------------------------------------------------

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
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetFields(17);
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(75)
// --------------------------------------------------------------------------------

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
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileEnabled__get_IsActive_fn;
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetFields(17);
    return type;
}

// protected override sealed bool get_IsActive() :79
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval)
{
    return *__retval = (__this->ParentNode() != NULL) ? uPtr(__this->ParentNode())->IsEnabled() : true, void();
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(38)
// --------------------------------------------------------------------------------

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
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[51] = ::g::Uno::EventHandler_typeof();
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
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[51/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn, __this));
    __this->BypassSetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :52
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[51/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// internal WhileEnabledDisabledTrigger() [instance] :40
void WhileEnabledDisabledTrigger::ctor_3()
{
    ctor_2();
}

// private void OnIsEnabledChanged(object sender, Uno.EventArgs args) [instance] :58
void WhileEnabledDisabledTrigger::OnIsEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsActive());
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1392)
// ----------------------------------------------------------------------------------

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
    type->fp_cctor_ = WhileFailed__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFailed__OnRooted_fn;
    ::STRINGS[1] = uString::Const("WhileFailed.Message");
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileFailed::_whileFailedProp_, uFieldFlagsStatic);
    return type;
}

// private static bool IsFailed(Fuse.Node n) :1396
void WhileFailed__IsFailed_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileFailed::IsFailed(n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1419
void WhileFailed__OnRooted_fn(WhileFailed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileFailed::IsFailed(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool failed, string message) :1403
void WhileFailed__SetState_fn(::g::Fuse::Node* n, bool* failed, uString* message)
{
    WhileFailed::SetState(n, *failed, message);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileFailed::_whileFailedProp_;

// private static bool IsFailed(Fuse.Node n) [static] :1396
bool WhileFailed::IsFailed(::g::Fuse::Node* n)
{
    WhileFailed_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileFailed::_whileFailedProp());

    if (!uIs(v, ::TYPES[9/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[9/*bool*/], v);
}

// public static void SetState(Fuse.Node n, bool failed, string message) [static] :1403
void WhileFailed::SetState(::g::Fuse::Node* n, bool failed, uString* message)
{
    WhileFailed_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileFailed::IsFailed(n);

    if (v != failed)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileFailed::_whileFailedProp(), uBox(::TYPES[9/*bool*/], failed));
        n->SetResource(::STRINGS[1/*"WhileFailed...*/], message);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileFailed* wl = uAs<WhileFailed*>(b, WhileFailed_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(failed);
        }
    }
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1376)
// ----------------------------------------------------------------------------------

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
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[52] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22);
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1526)
// ----------------------------------------------------------------------------------

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
    ::TYPES[53] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[54] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[55] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(17);
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
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    __this->BypassSetActive(::g::Fuse::Input::Focus::FocusedNode() == __this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1536
void WhileFocused__OnUnrooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileFocused() [instance] :1526
void WhileFocused::ctor_3()
{
    ctor_2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :1543
void WhileFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(true);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :1548
void WhileFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1598)
// ----------------------------------------------------------------------------------

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
    ::TYPES[53] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[54] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[55] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(17);
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
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    __this->BypassSetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1609
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileFocusWithin() [instance] :1598
void WhileFocusWithin::ctor_3()
{
    ctor_2();
}

// private bool get_IsOn() [instance] :1623
bool WhileFocusWithin::IsOn()
{
    return ::g::Fuse::Input::Focus::IsWithin(ParentNode());
}

// private void OnFocusChange(object sender, Uno.EventArgs args) [instance] :1616
void WhileFocusWithin::OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Triggers/$.uno(475)
// ------------------------------------------------------------------------------------------

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
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[51] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _node), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _source), 0);
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
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_node = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Node*)__this->ParentNode()));
    uPtr(__this->_node)->add_IsInteractingChanged(uDelegate::New(::TYPES[51/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->_node)->IsInteracting());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :494
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_node)->remove_IsInteractingChanged(uDelegate::New(::TYPES[51/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->_node = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileInteracting() [instance] :475
void WhileInteracting::ctor_3()
{
    ctor_2();
}

// private void OnInteractingChanged(object s, object a) [instance] :501
void WhileInteracting::OnInteractingChanged(uObject* s, uObject* a)
{
    SetActive(uPtr(_node)->IsInteracting());
}

// public generated WhileInteracting New() [static] :475
WhileInteracting* WhileInteracting::New1()
{
    WhileInteracting* obj2 = (WhileInteracting*)uNew(WhileInteracting_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1639)
// ----------------------------------------------------------------------------------

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
    type->fp_cctor_ = WhileLoading__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileLoading__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileLoading::_whileLoadingProp_, uFieldFlagsStatic);
    return type;
}

// private static bool IsLoading(Fuse.Node n) :1643
void WhileLoading__IsLoading_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileLoading::IsLoading(n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1664
void WhileLoading__OnRooted_fn(WhileLoading* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileLoading::IsLoading(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool loading) :1650
void WhileLoading__SetState_fn(::g::Fuse::Node* n, bool* loading)
{
    WhileLoading::SetState(n, *loading);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileLoading::_whileLoadingProp_;

// private static bool IsLoading(Fuse.Node n) [static] :1643
bool WhileLoading::IsLoading(::g::Fuse::Node* n)
{
    WhileLoading_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileLoading::_whileLoadingProp());

    if (!uIs(v, ::TYPES[9/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[9/*bool*/], v);
}

// public static void SetState(Fuse.Node n, bool loading) [static] :1650
void WhileLoading::SetState(::g::Fuse::Node* n, bool loading)
{
    WhileLoading_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileLoading::IsLoading(n);

    if (v != loading)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileLoading::_whileLoadingProp(), uBox(::TYPES[9/*bool*/], loading));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileLoading* wl = uAs<WhileLoading*>(b, WhileLoading_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(loading);
        }
    }
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1715)
// ----------------------------------------------------------------------------------

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
    type->fp_cctor_ = WhilePaused__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePaused__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
    return type;
}

// private static bool IsPaused(Fuse.Node n) :1719
void WhilePaused__IsPaused_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1740
void WhilePaused__OnRooted_fn(WhilePaused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhilePaused::IsPaused(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool paused) :1726
void WhilePaused__SetState_fn(::g::Fuse::Node* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// private static bool IsPaused(Fuse.Node n) [static] :1719
bool WhilePaused::IsPaused(::g::Fuse::Node* n)
{
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp());

    if (!uIs(v, ::TYPES[9/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[9/*bool*/], v);
}

// public static void SetState(Fuse.Node n, bool paused) [static] :1726
void WhilePaused::SetState(::g::Fuse::Node* n, bool paused)
{
    WhilePaused_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp(), uBox(::TYPES[9/*bool*/], paused));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhilePaused* wl = uAs<WhilePaused*>(b, WhilePaused_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1683)
// ----------------------------------------------------------------------------------

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
    type->fp_cctor_ = WhilePlaying__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(17,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
    return type;
}

// private static bool IsPlaying(Fuse.Node n) :1687
void WhilePlaying__IsPlaying_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1708
void WhilePlaying__OnRooted_fn(WhilePlaying* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhilePlaying::IsPlaying(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool playing) :1694
void WhilePlaying__SetState_fn(::g::Fuse::Node* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// private static bool IsPlaying(Fuse.Node n) [static] :1687
bool WhilePlaying::IsPlaying(::g::Fuse::Node* n)
{
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp());

    if (!uIs(v, ::TYPES[9/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[9/*bool*/], v);
}

// public static void SetState(Fuse.Node n, bool playing) [static] :1694
void WhilePlaying::SetState(::g::Fuse::Node* n, bool playing)
{
    WhilePlaying_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp(), uBox(::TYPES[9/*bool*/], playing));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhilePlaying* wl = uAs<WhilePlaying*>(b, WhilePlaying_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(playing);
        }
    }
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1793)
// ----------------------------------------------------------------------------------

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
    ::TYPES[56] = ::g::Fuse::UpdateManager_typeof();
    type->SetFields(15,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _rootFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _Invert), 0);
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
    ctor_1();
}

// protected void BypassSetActive(bool on) [instance] :1804
void WhileTrigger::BypassSetActive(bool on)
{
    _rootFrame = ::g::Fuse::UpdateManager::FrameIndex();

    if (on != Invert())
        BypassActivate();
    else
        BypassDeactivate();
}

// public generated bool get_Invert() [instance] :1795
bool WhileTrigger::Invert()
{
    return _Invert;
}

// public generated void set_Invert(bool value) [instance] :1795
void WhileTrigger::Invert(bool value)
{
    _Invert = value;
}

// protected void SetActive(bool on) [instance] :1813
void WhileTrigger::SetActive(bool on)
{
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1371)
// ----------------------------------------------------------------------------------

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
    ::TYPES[52] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1));
    type->SetFields(22);
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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1850)
// ----------------------------------------------------------------------------------

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
    ::STRINGS[2] = uString::Const("`Pulse` on a `WhileValue` will be removed, create a `Timeline` instead.");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno");
    ::STRINGS[4] = uString::Const("Pulse");
    ::TYPES[57] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Behavior_typeof();
    ::TYPES[58] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[59] = ::g::Fuse::Triggers::WhileValueStatic_typeof();
    ::TYPES[60] = ::g::Fuse::Triggers::WhileTrigger_typeof();
    type->SetPrecalc(
        ::TYPES[57/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0)),
        ::TYPES[58/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(WhileValue_type, interface0),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileValue_type, interface1));
    type->SetFields(17,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileValue, _hasValue), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _obj), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _source), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, ValueChanged1), 0);
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

// public T get_Value() :1856
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
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
    ctor_2();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance] :1926
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance] :1884
void WhileValue::Pulse1()
{
    if (!::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote())
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[2/*"`Pulse` on ...*/], this, ::STRINGS[3/*"/usr/local/...*/], 1888, ::STRINGS[4/*"Pulse"*/]);
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
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance] :1879
void WhileValue::Source(uObject* value)
{
    _source = value;
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :1882
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :1882
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static] :1900
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->Parent() != NULL)
        return WhileValue::FindValueNode(__type->MakeType(__types[1]), uPtr(n)->Parent());

    return NULL;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno(1845)
// ----------------------------------------------------------------------------------

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

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Elements/0.24.6/Triggers/$.uno(32)
// -----------------------------------------------------------------------------------------

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
    ::TYPES[10] = ::g::Fuse::Transform_typeof();
    ::TYPES[11] = ::g::Fuse::Translation_typeof();
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
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :34
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
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
