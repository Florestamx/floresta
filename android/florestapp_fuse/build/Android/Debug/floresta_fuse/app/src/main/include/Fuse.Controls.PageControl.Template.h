// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Page.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl__Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageControl.Template :93
// {
::g::Uno::UX::Template_type* PageControl__Template_typeof();
void PageControl__Template__ctor_1_fn(PageControl__Template* __this, ::g::Fuse::Controls::PageControl* parent);
void PageControl__Template__New1_fn(::g::Fuse::Controls::PageControl* parent, PageControl__Template** __retval);
void PageControl__Template__OnApply_fn(PageControl__Template* __this, ::g::Fuse::Controls::Page* self);

struct PageControl__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Controls::PageControl*> __parent1;

    void ctor_1(::g::Fuse::Controls::PageControl* parent);
    static PageControl__Template* New1(::g::Fuse::Controls::PageControl* parent);
};
// }

}}} // ::g::Fuse::Controls