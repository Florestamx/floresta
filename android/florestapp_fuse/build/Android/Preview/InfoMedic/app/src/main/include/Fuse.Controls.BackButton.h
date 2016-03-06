// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\.uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct BackButton;}}}
namespace g{struct FuseControls_FuseNode_bool_IsEnabled_Property;}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class BackButton :5
// {
::g::Fuse::Controls::ParentControl_type* BackButton_typeof();
void BackButton__ctor_5_fn(BackButton* __this);
void BackButton__InitializeUX_fn(BackButton* __this);
void BackButton__New3_fn(BackButton** __retval);

struct BackButton : ::g::Fuse::Controls::Button
{
    uStrong< ::g::FuseControls_FuseNode_bool_IsEnabled_Property*> this_IsEnabled_inst;

    void ctor_5();
    void InitializeUX();
    static BackButton* New3();
};
// }

}}} // ::g::Fuse::Controls
