// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class DockLayout :449
// {
::g::Fuse::Layouts::Layout_type* DockLayout_typeof();
void DockLayout__ctor_1_fn(DockLayout* __this);
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void DockLayout__GetContentSize_fn(DockLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void DockLayout__GetDock_fn(::g::Fuse::Node* elm, int* __retval);
void DockLayout__MeasureSubtree_fn(DockLayout* __this, uObject* elements, int* childIndex, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void DockLayout__New1_fn(DockLayout** __retval);
void DockLayout__SetDock_fn(::g::Fuse::Node* elm, int* dock);

struct DockLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _dockProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _dockProperty() { return DockLayout_typeof()->Init(), _dockProperty_; }

    void ctor_1();
    ::g::Uno::Float2 MeasureSubtree(uObject* elements, int childIndex, ::g::Fuse::LayoutParams lp);
    static int GetDock(::g::Fuse::Node* elm);
    static DockLayout* New1();
    static void SetDock(::g::Fuse::Node* elm, int dock);
};
// }

}}} // ::g::Fuse::Layouts
