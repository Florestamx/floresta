// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct ParentControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Factory;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class ParentControl :1770
// {
struct ParentControl_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Navigation::INavigationPanel interface7;
    ::g::Fuse::IObjectContainer interface8;
};

ParentControl_type* ParentControl_typeof();
void ParentControl__ctor_3_fn(ParentControl* __this);
void ParentControl__AddStyleChild_fn(ParentControl* __this, ::g::Fuse::Node* child);
void ParentControl__get_Appearance_fn(ParentControl* __this, ::g::Fuse::Node** __retval);
void ParentControl__set_Appearance_fn(ParentControl* __this, ::g::Fuse::Node* value);
void ParentControl__ArrangePaddingBox_fn(ParentControl* __this, ::g::Fuse::LayoutParams* lp);
void ParentControl__BeginRemoveChild_fn(ParentControl* __this, ::g::Fuse::Node* child);
void ParentControl__BringToFront_fn(ParentControl* __this, ::g::Fuse::Node* item);
void ParentControl__CalcRenderBounds_fn(ParentControl* __this, ::g::Uno::Rect* __retval);
void ParentControl__add_ChildAdded_fn(ParentControl* __this, uDelegate* value);
void ParentControl__remove_ChildAdded_fn(ParentControl* __this, uDelegate* value);
void ParentControl__add_ChildRemoved_fn(ParentControl* __this, uDelegate* value);
void ParentControl__remove_ChildRemoved_fn(ParentControl* __this, uDelegate* value);
void ParentControl__get_Children_fn(ParentControl* __this, uObject** __retval);
void ParentControl__EmitZOrderChanged_fn(ParentControl* __this);
void ParentControl__EndRemoveChild_fn(ParentControl* __this, ::g::Fuse::Node* child);
void ParentControl__EnsureSortedZOrder_fn(ParentControl* __this);
void ParentControl__get_Factories_fn(ParentControl* __this, uObject** __retval);
void ParentControl__FastTrackDrawWithOpacity_fn(ParentControl* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void ParentControl__FuseIObjectContainerAdd_fn(ParentControl* __this, uObject* obj);
void ParentControl__FuseIObjectContainerBeginRemove_fn(ParentControl* __this, uObject* obj);
void ParentControl__FuseIObjectContainerInsert_fn(ParentControl* __this, int* index, uObject* obj);
void ParentControl__FuseIObjectContainerRemove_fn(ParentControl* __this, uObject* obj);
void ParentControl__FuseNavigationINavigationPanelAddChild_fn(ParentControl* __this, ::g::Fuse::Node* n);
void ParentControl__FuseNavigationINavigationPanelAddChildAt_fn(ParentControl* __this, int* index, ::g::Fuse::Node* n);
void ParentControl__FuseNavigationINavigationPanelget_ChildCount_fn(ParentControl* __this, int* __retval);
void ParentControl__FuseNavigationINavigationPanelGetChild_fn(ParentControl* __this, int* index, ::g::Fuse::Node** __retval);
void ParentControl__FuseNavigationINavigationPanelRemoveChild_fn(ParentControl* __this, ::g::Fuse::Node* child);
void ParentControl__GetAppearance_fn(ParentControl* c, ::g::Fuse::Node** __retval);
void ParentControl__GetContentSize_fn(ParentControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ParentControl__GetEach_fn(ParentControl* __this, ::g::Fuse::Reactive::Each** __retval);
void ParentControl__GetLayout_fn(ParentControl* p, ::g::Fuse::Layouts::Layout** __retval);
void ParentControl__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval);
void ParentControl__GetSubNode_fn(ParentControl* __this, int* index, ::g::Fuse::Node** __retval);
void ParentControl__GetZOrderChild_fn(ParentControl* __this, int* index, ::g::Fuse::Node** __retval);
void ParentControl__get_HasChildren_fn(ParentControl* __this, bool* __retval);
void ParentControl__InvalidateZOrder_fn(ParentControl* __this);
void ParentControl__IsMarginBoxDependent_fn(ParentControl* __this, ::g::Fuse::Node* child, int* __retval);
void ParentControl__get_Items_fn(ParentControl* __this, uObject** __retval);
void ParentControl__set_Items_fn(ParentControl* __this, uObject* value);
void ParentControl__get_Layout_fn(ParentControl* __this, ::g::Fuse::Layouts::Layout** __retval);
void ParentControl__set_Layout_fn(ParentControl* __this, ::g::Fuse::Layouts::Layout* value);
void ParentControl__ListChildAdded_fn(ParentControl* __this, ::g::Fuse::Node* item);
void ParentControl__ListChildRemoved_fn(ParentControl* __this, ::g::Fuse::Node* child);
void ParentControl__get_MatchKey_fn(ParentControl* __this, uString** __retval);
void ParentControl__set_MatchKey_fn(ParentControl* __this, uString* value);
void ParentControl__New1_fn(ParentControl** __retval);
void ParentControl__OnAppearanceChanged_fn(ParentControl* c);
void ParentControl__OnChildAdded_fn(ParentControl* __this, ::g::Fuse::Node* elm);
void ParentControl__OnChildRemoved_fn(ParentControl* __this, ::g::Fuse::Node* elm);
void ParentControl__OnDrawControl_fn(ParentControl* __this, ::g::Fuse::DrawContext* dc);
void ParentControl__OnHitTestChildren_fn(ParentControl* __this, ::g::Fuse::HitTestContext* htc);
void ParentControl__OnInvalidateLayout_fn(ParentControl* __this);
void ParentControl__OnLayoutChanged_fn(ParentControl* p);
void ParentControl__OnResetStyle_fn(ParentControl* __this);
void ParentControl__OnRooted_fn(ParentControl* __this);
void ParentControl__OnUnrooted_fn(ParentControl* __this);
void ParentControl__RemoveStyleChildren_fn(ParentControl* __this);
void ParentControl__SendToBack_fn(ParentControl* __this, ::g::Fuse::Node* item);
void ParentControl__SetAppearance_fn(ParentControl* c, ::g::Fuse::Node* a);
void ParentControl__SetLayout_fn(ParentControl* p, ::g::Fuse::Layouts::Layout* value);
void ParentControl__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
void ParentControl__SetSingleChild_fn(ParentControl* __this, ::g::Fuse::Node* e);
void ParentControl__ShouldBatch_fn(ParentControl* __this, bool* __retval);
void ParentControl__SoftInvalidateZOrder_fn(ParentControl* __this, bool* force);
void ParentControl__get_SubNodeCount_fn(ParentControl* __this, int* __retval);
void ParentControl__get_ZOrder_fn(ParentControl* __this, ::g::Uno::Collections::List** __retval);
void ParentControl__add_ZOrderChanged_fn(ParentControl* __this, uDelegate* value);
void ParentControl__remove_ZOrderChanged_fn(ParentControl* __this, uDelegate* value);
void ParentControl__ZOrderComparator_fn(ParentControl* __this, ::g::Fuse::Node* a, ::g::Fuse::Node* b, int* __retval);

struct ParentControl : ::g::Fuse::Controls::Control
{
    uStrong< ::g::Fuse::Node*> _appearance;
    uStrong<uObject*> _children;
    uStrong< ::g::Fuse::Elements::ElementBatcher*> _elementBatcher;
    bool _elementBatchValid;
    static uSStrong< ::g::Fuse::PropertyHandle*> _implicitEachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _implicitEachHandle() { return ParentControl_typeof()->Init(), _implicitEachHandle_; }
    uStrong< ::g::Fuse::Layouts::Layout*> _layout;
    bool _nodeZOrders;
    bool _sortedZOrder;
    uStrong< ::g::Uno::Collections::List*> _zOrder;
    static uSStrong< ::g::Fuse::StyleProperty1*> AppearanceProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& AppearanceProperty() { return ParentControl_typeof()->Init(), AppearanceProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> LayoutProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& LayoutProperty() { return ParentControl_typeof()->Init(), LayoutProperty_; }
    uStrong<uDelegate*> ChildAdded1;
    uStrong<uDelegate*> ChildRemoved1;
    uStrong<uDelegate*> ZOrderChanged1;

    void ctor_3();
    void AddStyleChild(::g::Fuse::Node* child);
    ::g::Fuse::Node* Appearance();
    void Appearance(::g::Fuse::Node* value);
    void BeginRemoveChild(::g::Fuse::Node* child);
    void BringToFront(::g::Fuse::Node* item);
    void add_ChildAdded(uDelegate* value);
    void remove_ChildAdded(uDelegate* value);
    void add_ChildRemoved(uDelegate* value);
    void remove_ChildRemoved(uDelegate* value);
    uObject* Children();
    void EmitZOrderChanged();
    void EndRemoveChild(::g::Fuse::Node* child);
    void EnsureSortedZOrder();
    uObject* Factories();
    ::g::Fuse::Reactive::Each* GetEach();
    ::g::Fuse::Node* GetZOrderChild(int index);
    bool HasChildren();
    void InvalidateZOrder();
    uObject* Items();
    void Items(uObject* value);
    ::g::Fuse::Layouts::Layout* Layout();
    void Layout(::g::Fuse::Layouts::Layout* value);
    void ListChildAdded(::g::Fuse::Node* item);
    void ListChildRemoved(::g::Fuse::Node* child);
    uString* MatchKey();
    void MatchKey(uString* value);
    void OnChildAdded(::g::Fuse::Node* elm);
    void OnChildRemoved(::g::Fuse::Node* elm);
    void RemoveStyleChildren();
    void SendToBack(::g::Fuse::Node* item);
    void SetSingleChild(::g::Fuse::Node* e);
    bool ShouldBatch();
    void SoftInvalidateZOrder(bool force);
    ::g::Uno::Collections::List* ZOrder();
    void add_ZOrderChanged(uDelegate* value);
    void remove_ZOrderChanged(uDelegate* value);
    int ZOrderComparator(::g::Fuse::Node* a, ::g::Fuse::Node* b);
    static ::g::Fuse::Node* GetAppearance(ParentControl* c);
    static ::g::Fuse::Layouts::Layout* GetLayout(ParentControl* p);
    static ::g::Fuse::Elements::Element* GetLayoutMaster(::g::Fuse::Elements::Element* elm);
    static ParentControl* New1();
    static void OnAppearanceChanged(ParentControl* c);
    static void OnLayoutChanged(ParentControl* p);
    static void SetAppearance(ParentControl* c, ::g::Fuse::Node* a);
    static void SetLayout(ParentControl* p, ::g::Fuse::Layouts::Layout* value);
    static void SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
};
// }

}}} // ::g::Fuse::Controls
