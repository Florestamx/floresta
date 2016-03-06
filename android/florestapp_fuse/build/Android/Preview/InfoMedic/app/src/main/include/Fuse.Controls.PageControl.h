// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Navigation{struct LinearNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageControl :1542
// {
struct PageControl_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Navigation::INavigation interface9;
    ::g::Fuse::Navigation::IBaseNavigation interface10;
};

PageControl_type* PageControl_typeof();
void PageControl__ctor_5_fn(PageControl* __this);
void PageControl__get_Active_fn(PageControl* __this, ::g::Fuse::Node** __retval);
void PageControl__set_Active_fn(PageControl* __this, ::g::Fuse::Node* value);
void PageControl__get_CanGoBack_fn(PageControl* __this, bool* __retval);
void PageControl__get_CanGoForward_fn(PageControl* __this, bool* __retval);
void PageControl__FuseNavigationINavigationget_ActivePage_fn(PageControl* __this, ::g::Fuse::Node** __retval);
void PageControl__FuseNavigationINavigationGetPage_fn(PageControl* __this, int* index, ::g::Fuse::Node** __retval);
void PageControl__FuseNavigationINavigationget_PageCount_fn(PageControl* __this, int* __retval);
void PageControl__FuseNavigationINavigationget_PageProgress_fn(PageControl* __this, double* __retval);
void PageControl__GoBack_fn(PageControl* __this);
void PageControl__GoForward_fn(PageControl* __this);
void PageControl__Goto_fn(PageControl* __this, ::g::Fuse::Node* node, int* mode);
void PageControl__add_HistoryChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_HistoryChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__InitializeUX_fn(PageControl* __this);
void PageControl__add_Navigated_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_Navigated_fn(PageControl* __this, uDelegate* value);
void PageControl__get_Navigation_fn(PageControl* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval);
void PageControl__New3_fn(PageControl** __retval);
void PageControl__add_PageCountChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_PageCountChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__add_PageProgressChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_PageProgressChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__Toggle_fn(PageControl* __this, ::g::Fuse::Node* node);

struct PageControl : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::LinearNavigation*> TheNavigation;

    void ctor_5();
    ::g::Fuse::Node* Active();
    void Active(::g::Fuse::Node* value);
    bool CanGoBack();
    bool CanGoForward();
    void GoBack();
    void GoForward();
    void Goto(::g::Fuse::Node* node, int mode);
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    void InitializeUX();
    void add_Navigated(uDelegate* value);
    void remove_Navigated(uDelegate* value);
    ::g::Fuse::Navigation::StructuredNavigation* Navigation();
    void add_PageCountChanged(uDelegate* value);
    void remove_PageCountChanged(uDelegate* value);
    void add_PageProgressChanged(uDelegate* value);
    void remove_PageProgressChanged(uDelegate* value);
    void Toggle(::g::Fuse::Node* node);
    static PageControl* New3();
};
// }

}}} // ::g::Fuse::Controls
