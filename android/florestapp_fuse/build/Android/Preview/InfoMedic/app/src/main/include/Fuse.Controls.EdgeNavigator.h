// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct TappedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct EdgeNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class EdgeNavigator :581
// {
::g::Fuse::Controls::ParentControl_type* EdgeNavigator_typeof();
void EdgeNavigator__ctor_5_fn(EdgeNavigator* __this);
void EdgeNavigator__get_Active_fn(EdgeNavigator* __this, ::g::Fuse::Node** __retval);
void EdgeNavigator__set_Active_fn(EdgeNavigator* __this, ::g::Fuse::Node* value);
void EdgeNavigator__InitializeUX_fn(EdgeNavigator* __this);
void EdgeNavigator__get_Navigation_fn(EdgeNavigator* __this, ::g::Fuse::Navigation::Navigation** __retval);
void EdgeNavigator__New3_fn(EdgeNavigator** __retval);
void EdgeNavigator__OnApplyStyle_fn(EdgeNavigator* __this, uObject* o);
void EdgeNavigator__OnTapped_fn(EdgeNavigator* __this, uObject* s, ::g::Fuse::Gestures::TappedArgs* args);
void EdgeNavigator__SetupEdge_fn(EdgeNavigator* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2* rel, int* align);
void EdgeNavigator__SetupMain_fn(EdgeNavigator* __this, ::g::Fuse::Elements::Element* elm);

struct EdgeNavigator : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::EdgeNavigation*> _navigation;

    void ctor_5();
    ::g::Fuse::Node* Active();
    void Active(::g::Fuse::Node* value);
    void InitializeUX();
    ::g::Fuse::Navigation::Navigation* Navigation();
    void OnTapped(uObject* s, ::g::Fuse::Gestures::TappedArgs* args);
    void SetupEdge(::g::Fuse::Elements::Element* elm, ::g::Uno::Float2 rel, int align);
    void SetupMain(::g::Fuse::Elements::Element* elm);
    static EdgeNavigator* New3();
};
// }

}}} // ::g::Fuse::Controls
