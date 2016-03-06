// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ParentControl;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class Layout :1668
// {
struct Layout_type : uType
{
    void(*fp_ArrangePaddingBox)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*);
    void(*fp_GetContentSize)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_IsMarginBoxDependent)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Node*, int*);
};

Layout_type* Layout_typeof();
void Layout__ctor__fn(Layout* __this);
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval);
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* e, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp, bool* __retval);
void Layout__AssignZOrder_fn(uObject* nodes);
void Layout__GetFillPadding_fn(::g::Fuse::Node* n, bool* __retval);
void Layout__GetParentControl_fn(::g::Fuse::Node* elm, ::g::Fuse::Controls::ParentControl** __retval);
void Layout__InvalidateAncestorLayout_fn(::g::Fuse::Node* child);
void Layout__InvalidateLayout_fn(Layout* __this);
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Node* child, int* __retval);
void Layout__ParentControlInvalidateLayout_fn(::g::Fuse::Node* elm);
void Layout__RemoveContainer_fn(Layout* __this, ::g::Fuse::Controls::ParentControl* element);
void Layout__ResetFillPadding_fn(::g::Fuse::Node* n);
void Layout__SetContainer_fn(Layout* __this, ::g::Fuse::Controls::ParentControl* element);
void Layout__SetFillPadding_fn(::g::Fuse::Node* n, bool* f);
void Layout__Snap_fn(Layout* __this, float* p, float* __retval);
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval);
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval);
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);

struct Layout : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _fillPaddingProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _fillPaddingProperty() { return Layout_typeof()->Init(), _fillPaddingProperty_; }
    uStrong< ::g::Fuse::Controls::ParentControl*> Container;

    void ctor_();
    bool AffectsLayout(::g::Fuse::Node* n);
    bool ArrangeMarginBoxSpecial(::g::Fuse::Node* e, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp);
    void ArrangePaddingBox(uObject* elements, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 GetContentSize(uObject* elements, ::g::Fuse::LayoutParams lp);
    void InvalidateLayout();
    int IsMarginBoxDependent(::g::Fuse::Node* child) { int __retval; return (((Layout_type*)__type)->fp_IsMarginBoxDependent)(this, child, &__retval), __retval; }
    void RemoveContainer(::g::Fuse::Controls::ParentControl* element);
    void SetContainer(::g::Fuse::Controls::ParentControl* element);
    float Snap(float p);
    ::g::Uno::Float2 Snap1(::g::Uno::Float2 p);
    bool SnapToPixels();
    float SnapUp(float p);
    ::g::Uno::Float2 SnapUp1(::g::Uno::Float2 p);
    static void AssignZOrder(uObject* nodes);
    static bool GetFillPadding(::g::Fuse::Node* n);
    static ::g::Fuse::Controls::ParentControl* GetParentControl(::g::Fuse::Node* elm);
    static void InvalidateAncestorLayout(::g::Fuse::Node* child);
    static int IsMarginBoxDependent(Layout* __this, ::g::Fuse::Node* child) { int __retval; return Layout__IsMarginBoxDependent_fn(__this, child, &__retval), __retval; }
    static void ParentControlInvalidateLayout(::g::Fuse::Node* elm);
    static void ResetFillPadding(::g::Fuse::Node* n);
    static void SetFillPadding(::g::Fuse::Node* n, bool f);
};

}}} // ::g::Fuse::Layouts

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Layouts{

inline void Layout::ArrangePaddingBox(uObject* elements, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp) { (((Layout_type*)__type)->fp_ArrangePaddingBox)(this, elements, &padding, &lp); }
inline ::g::Uno::Float2 Layout::GetContentSize(uObject* elements, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((Layout_type*)__type)->fp_GetContentSize)(this, elements, &lp, &__retval), __retval; }
// }

}}} // ::g::Fuse::Layouts
