// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.NativeViews.ContentControl.h>
#include <Fuse.iOS.NativeViews.GenericNativeView.h>
#include <Fuse.iOS.NativeViews.GraphicsView.h>
#include <Fuse.iOS.NativeViews.LeafNativeView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.h>
#include <Fuse.iOS.NativeViews.ParentControl.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
#include <Fuse.iOS.NativeViews.ScrollView.h>
#include <Fuse.Node.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(16)
// --------------------------------------------------------------------

// internal sealed extern class ContentControl :16
// {
::g::Fuse::Behavior_type* ContentControl_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ContentControl", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ContentControl_typeof()));
    type->fp_ctor_ = (void*)ContentControl__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated ContentControl() :16
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// public generated ContentControl New() :16
void ContentControl__New1_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New1();
}

// public generated ContentControl() [instance] :16
void ContentControl::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.ContentControl", ".ctor()");
    ctor_2();
}

// public generated ContentControl New() [static] :16
ContentControl* ContentControl::New1()
{
    ContentControl* obj1 = (ContentControl*)uNew(ContentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(45)
// --------------------------------------------------------------------

// internal sealed extern class GenericNativeView :45
// {
::g::Fuse::Behavior_type* GenericNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GenericNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.GenericNativeView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)GenericNativeView__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated GenericNativeView() :45
void GenericNativeView__ctor_2_fn(GenericNativeView* __this)
{
    __this->ctor_2();
}

// public generated GenericNativeView New() :45
void GenericNativeView__New1_fn(GenericNativeView** __retval)
{
    *__retval = GenericNativeView::New1();
}

// public generated GenericNativeView() [instance] :45
void GenericNativeView::ctor_2()
{
    uStackFrame __("Fuse.iOS.NativeViews.GenericNativeView", ".ctor()");
    ctor_1();
}

// public generated GenericNativeView New() [static] :45
GenericNativeView* GenericNativeView::New1()
{
    GenericNativeView* obj1 = (GenericNativeView*)uNew(GenericNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(82)
// --------------------------------------------------------------------

// public sealed extern class GraphicsView :82
// {
::g::Fuse::Behavior_type* GraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.GraphicsView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_ctor_ = (void*)GraphicsView__New1_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New1_fn, 0, true, GraphicsView_typeof(), 0));
    return type;
}

// public generated GraphicsView() :82
void GraphicsView__ctor_3_fn(GraphicsView* __this)
{
    __this->ctor_3();
}

// public generated GraphicsView New() :82
void GraphicsView__New1_fn(GraphicsView** __retval)
{
    *__retval = GraphicsView::New1();
}

// public generated GraphicsView() [instance] :82
void GraphicsView::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", ".ctor()");
    ctor_2();
}

// public generated GraphicsView New() [static] :82
GraphicsView* GraphicsView::New1()
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(228)
// ---------------------------------------------------------------------

// internal sealed extern class LeafNativeView :228
// {
::g::Fuse::Behavior_type* LeafNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(LeafNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.LeafNativeView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)LeafNativeView__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated LeafNativeView() :228
void LeafNativeView__ctor_2_fn(LeafNativeView* __this)
{
    __this->ctor_2();
}

// public generated LeafNativeView New() :228
void LeafNativeView__New1_fn(LeafNativeView** __retval)
{
    *__retval = LeafNativeView::New1();
}

// public generated LeafNativeView() [instance] :228
void LeafNativeView::ctor_2()
{
    uStackFrame __("Fuse.iOS.NativeViews.LeafNativeView", ".ctor()");
    ctor_1();
}

// public generated LeafNativeView New() [static] :228
LeafNativeView* LeafNativeView::New1()
{
    LeafNativeView* obj1 = (LeafNativeView*)uNew(LeafNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(260)
// ---------------------------------------------------------------------

// public abstract extern class NativeView :260
// {
::g::Fuse::Behavior_type* NativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.NativeView", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom_fn, 0, true, NativeView_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// protected generated NativeView() :260
void NativeView__ctor_1_fn(NativeView* __this)
{
    __this->ctor_1();
}

// public static Fuse.iOS.NativeViews.NativeView GetFrom(Fuse.Node n) :262
void NativeView__GetFrom_fn(::g::Fuse::Node* n, NativeView** __retval)
{
    *__retval = NativeView::GetFrom(n);
}

// internal void OnTintColorChanged() :263
void NativeView__OnTintColorChanged_fn(NativeView* __this)
{
    __this->OnTintColorChanged();
}

// protected generated NativeView() [instance] :260
void NativeView::ctor_1()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", ".ctor()");
    ctor_();
}

// internal void OnTintColorChanged() [instance] :263
void NativeView::OnTintColorChanged()
{
}

// public static Fuse.iOS.NativeViews.NativeView GetFrom(Fuse.Node n) [static] :262
NativeView* NativeView::GetFrom(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "GetFrom(Fuse.Node)");
    return NULL;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(591)
// ---------------------------------------------------------------------

// internal sealed extern class NativeViewHost :591
// {
::g::Fuse::Behavior_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.NativeViewHost", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof()));
    type->fp_ctor_ = (void*)NativeViewHost__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated NativeViewHost() :591
void NativeViewHost__ctor_3_fn(NativeViewHost* __this)
{
    __this->ctor_3();
}

// public generated NativeViewHost New() :591
void NativeViewHost__New1_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New1();
}

// public generated NativeViewHost() [instance] :591
void NativeViewHost::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", ".ctor()");
    ctor_2();
}

// public generated NativeViewHost New() [static] :591
NativeViewHost* NativeViewHost::New1()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(675)
// ---------------------------------------------------------------------

// internal sealed extern class ParentControl :675
// {
::g::Fuse::Behavior_type* ParentControl_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ParentControl);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ParentControl", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ParentControl_typeof()));
    type->fp_ctor_ = (void*)ParentControl__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated ParentControl() :675
void ParentControl__ctor_3_fn(ParentControl* __this)
{
    __this->ctor_3();
}

// public generated ParentControl New() :675
void ParentControl__New1_fn(ParentControl** __retval)
{
    *__retval = ParentControl::New1();
}

// public generated ParentControl() [instance] :675
void ParentControl::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", ".ctor()");
    ctor_2();
}

// public generated ParentControl New() [static] :675
ParentControl* ParentControl::New1()
{
    ParentControl* obj1 = (ParentControl*)uNew(ParentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(735)
// ---------------------------------------------------------------------

// internal abstract extern class ParentNativeView<T> :735
// {
::g::Fuse::Behavior_type* ParentNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ParentNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ParentNativeView`1", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->SetFields(3);
    return type;
}

// protected generated ParentNativeView() :735
void ParentNativeView__ctor_2_fn(ParentNativeView* __this)
{
    __this->ctor_2();
}

// protected generated ParentNativeView() [instance] :735
void ParentNativeView::ctor_2()
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentNativeView`1", ".ctor()");
    ctor_1();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\NativeViews\$.uno(777)
// ---------------------------------------------------------------------

// public sealed extern class ScrollView :777
// {
::g::Fuse::Behavior_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ScrollView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_ctor_ = (void*)ScrollView__New1_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, ScrollView_typeof(), 0));
    return type;
}

// public generated ScrollView() :777
void ScrollView__ctor_3_fn(ScrollView* __this)
{
    __this->ctor_3();
}

// public generated ScrollView New() :777
void ScrollView__New1_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New1();
}

// public generated ScrollView() [instance] :777
void ScrollView::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", ".ctor()");
    ctor_2();
}

// public generated ScrollView New() [static] :777
ScrollView* ScrollView::New1()
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::NativeViews
