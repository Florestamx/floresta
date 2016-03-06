// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class DockPanel :538
// {
::g::Fuse::Controls::ParentControl_type* DockPanel_typeof();
void DockPanel__ctor_5_fn(DockPanel* __this);
void DockPanel__New3_fn(DockPanel** __retval);
void DockPanel__SetDock_fn(::g::Fuse::Elements::Element* elm, int* dock);

struct DockPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::DockLayout*> _dockLayout;

    void ctor_5();
    static DockPanel* New3();
    static void SetDock(::g::Fuse::Elements::Element* elm, int dock);
};
// }

}}} // ::g::Fuse::Controls
