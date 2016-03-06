// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct PageIndicator;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace UX{struct Factory;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageIndicator :1605
// {
::g::Fuse::Controls::ParentControl_type* PageIndicator_typeof();
void PageIndicator__ctor_6_fn(PageIndicator* __this, uObject* navigation);
void PageIndicator__get_DotFactory_fn(PageIndicator* __this, ::g::Uno::UX::Factory** __retval);
void PageIndicator__set_DotFactory_fn(PageIndicator* __this, ::g::Uno::UX::Factory* value);
void PageIndicator__InitializeUX_fn(PageIndicator* __this);
void PageIndicator__New4_fn(uObject* navigation, PageIndicator** __retval);
void PageIndicator__OnDotFactoryChanged_fn(PageIndicator* p);
void PageIndicator__OnRooted_fn(PageIndicator* __this);
void PageIndicator__OnUnrooted_fn(PageIndicator* __this);
void PageIndicator__RecreateDots_fn(PageIndicator* __this);
void PageIndicator__UpdateCount_fn(PageIndicator* __this, uObject* s);
void PageIndicator__UpdateCurrent_fn(PageIndicator* __this, uObject* s, double* progress, double* prevProgress);

struct PageIndicator : ::g::Fuse::Controls::StackPanel
{
    uStrong<uObject*> _pageProgress;
    static uSStrong< ::g::Fuse::StyleProperty1*> DotFactoryProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& DotFactoryProperty() { return PageIndicator_typeof()->Init(), DotFactoryProperty_; }

    void ctor_6(uObject* navigation);
    ::g::Uno::UX::Factory* DotFactory();
    void DotFactory(::g::Uno::UX::Factory* value);
    void InitializeUX();
    void RecreateDots();
    void UpdateCount(uObject* s);
    void UpdateCurrent(uObject* s, double progress, double prevProgress);
    static PageIndicator* New4(uObject* navigation);
    static void OnDotFactoryChanged(PageIndicator* p);
};
// }

}}} // ::g::Fuse::Controls
