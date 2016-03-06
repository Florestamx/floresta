// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.24.7\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.ParentControl.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentControl;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class ParentControl :683
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* ParentControl_typeof();
void ParentControl__ctor_3_fn(ParentControl* __this);
void ParentControl__ApplyZOrder_fn(ParentControl* __this);
void ParentControl__Attach_fn(ParentControl* __this);
void ParentControl__ChildRooted_fn(ParentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ParentControl__ChildUnrooted_fn(ParentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ParentControl__CreateInternal_fn(ParentControl* __this, ::g::Android::android::view::View** __retval);
void ParentControl__Detach_fn(ParentControl* __this);
void ParentControl__New1_fn(ParentControl** __retval);
void ParentControl__NotifyNewSize_fn(ParentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void ParentControl__OnZOrderChanged_fn(ParentControl* __this, uObject* s, uObject* a);

struct ParentControl : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;

    void ctor_3();
    void ApplyZOrder();
    void OnZOrderChanged(uObject* s, uObject* a);
    static ParentControl* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
