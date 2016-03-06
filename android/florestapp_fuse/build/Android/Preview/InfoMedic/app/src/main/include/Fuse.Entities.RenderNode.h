// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IDataContext.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Entities{struct RenderNode;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Entities{

// public class RenderNode :1923
// {
struct RenderNode_type : ::g::Fuse::Node_type
{
    void(*fp_OnDraw)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*);
};

RenderNode_type* RenderNode_typeof();
void RenderNode__ctor_1_fn(RenderNode* __this);
void RenderNode__get_Children_fn(RenderNode* __this, uObject** __retval);
void RenderNode__Draw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc);
void RenderNode__GetSubNode_fn(RenderNode* __this, int* index, ::g::Fuse::Node** __retval);
void RenderNode__get_LocalBounds_fn(RenderNode* __this, ::g::Uno::Geometry::Box* __retval);
void RenderNode__New1_fn(RenderNode** __retval);
void RenderNode__OnArrangeMarginBox_fn(RenderNode* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void RenderNode__OnChildAdded_fn(RenderNode* __this, ::g::Fuse::Node* c);
void RenderNode__OnChildRemoved_fn(RenderNode* __this, ::g::Fuse::Node* c);
void RenderNode__OnDraw_fn(RenderNode* __this, ::g::Fuse::DrawContext* dc);
void RenderNode__OnHitTest_fn(RenderNode* __this, ::g::Fuse::HitTestContext* args);
void RenderNode__OnUpdated_fn(RenderNode* __this, uObject* s, uObject* a);
void RenderNode__get_SubNodeCount_fn(RenderNode* __this, int* __retval);

struct RenderNode : ::g::Fuse::Node
{
    uStrong< ::g::Uno::Collections::ObservableList*> _children;

    void ctor_1();
    uObject* Children();
    void OnChildAdded(::g::Fuse::Node* c);
    void OnChildRemoved(::g::Fuse::Node* c);
    void OnDraw(::g::Fuse::DrawContext* dc) { (((RenderNode_type*)__type)->fp_OnDraw)(this, dc); }
    void OnUpdated(uObject* s, uObject* a);
    static RenderNode* New1();
    static void OnDraw(RenderNode* __this, ::g::Fuse::DrawContext* dc) { RenderNode__OnDraw_fn(__this, dc); }
};
// }

}}} // ::g::Fuse::Entities
