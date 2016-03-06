// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class RangeControl :2768
// {
struct RangeControl_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Triggers::IProgress interface9;
    ::g::Fuse::Triggers::IValue interface10;
};

RangeControl_type* RangeControl_typeof();
void RangeControl__ctor_4_fn(RangeControl* __this);
void RangeControl__ClampToRange_fn(RangeControl* __this, double* v, double* __retval);
void RangeControl__GetValue_fn(RangeControl* rc, double* __retval);
void RangeControl__get_Maximum_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Maximum_fn(RangeControl* __this, double* value);
void RangeControl__get_Minimum_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Minimum_fn(RangeControl* __this, double* value);
void RangeControl__New2_fn(RangeControl** __retval);
void RangeControl__OnProgressChanged_fn(RangeControl* __this);
void RangeControl__OnRangeChanged_fn(RangeControl* rc);
void RangeControl__OnValueChanged_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__get_Progress_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Progress_fn(RangeControl* __this, double* value);
void RangeControl__add_ProgressChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__remove_ProgressChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__get_RelativeUserStep_fn(RangeControl* __this, double* __retval);
void RangeControl__set_RelativeUserStep_fn(RangeControl* __this, double* value);
void RangeControl__get_RelativeValue_fn(RangeControl* __this, double* __retval);
void RangeControl__set_RelativeValue_fn(RangeControl* __this, double* value);
void RangeControl__SetInternal_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__SetValue_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__SetValue1_fn(RangeControl* rc, double* value);
void RangeControl__get_UserStep_fn(RangeControl* __this, double* __retval);
void RangeControl__set_UserStep_fn(RangeControl* __this, double* value);
void RangeControl__get_Value_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Value_fn(RangeControl* __this, double* value);
void RangeControl__add_ValueChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__remove_ValueChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__ValueFromRelative_fn(RangeControl* __this, double* relative, double* __retval);
void RangeControl__ValueToRelative_fn(RangeControl* __this, double* value, double* __retval);

struct RangeControl : ::g::Fuse::Controls::ParentControl
{
    double _userStep;
    double _value;
    static uSStrong< ::g::Fuse::StyleProperty1*> MaximumProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MaximumProperty() { return RangeControl_typeof()->Init(), MaximumProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> MinimumProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MinimumProperty() { return RangeControl_typeof()->Init(), MinimumProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return RangeControl_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_4();
    double ClampToRange(double v);
    double Maximum();
    void Maximum(double value);
    double Minimum();
    void Minimum(double value);
    void OnProgressChanged();
    void OnValueChanged(double value, uObject* origin);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    double RelativeUserStep();
    void RelativeUserStep(double value);
    double RelativeValue();
    void RelativeValue(double value);
    void SetInternal(double value, uObject* origin);
    void SetValue(double value, uObject* origin);
    double UserStep();
    void UserStep(double value);
    double Value();
    void Value(double value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    double ValueFromRelative(double relative);
    double ValueToRelative(double value);
    static double GetValue(RangeControl* rc);
    static RangeControl* New2();
    static void OnRangeChanged(RangeControl* rc);
    static void SetValue1(RangeControl* rc, double value);
};
// }

}}} // ::g::Fuse::Controls
