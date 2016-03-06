// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseThemes_bundle.h>
#include <_root.FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property.h>
#include <_root.FuseThemes_FuseControlsScrollView_bool_UserScroll_Property.h>
#include <_root.FuseThemes_FuseGesturesScroller_bool_UserScroll_Property.h>
#include <_root.FuseThemes_FuseTriggersWhileBool_bool_Value_Property.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Ellipse.h>
#include <Fuse.Controls.Graphics.CircleVisual.h>
#include <Fuse.Controls.Graphics.EllipseVisual.h>
#include <Fuse.Controls.Graphics.ImageVisual.h>
#include <Fuse.Controls.Graphics.PathVisual.h>
#include <Fuse.Controls.Graphics.RectangleVisual.h>
#include <Fuse.Controls.Graphics.RegularPolygonVisual.h>
#include <Fuse.Controls.Graphics.StarVisual.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Path.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.RegularPolygon.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Star.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Node.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Fuse.Themes.GraphicsStyle.Template.h>
#include <Fuse.Themes.GraphicsStyle.Template1.h>
#include <Fuse.Themes.GraphicsStyle.Template2.h>
#include <Fuse.Themes.GraphicsStyle.Template3.h>
#include <Fuse.Themes.GraphicsStyle.Template4.h>
#include <Fuse.Themes.GraphicsStyle.Template5.h>
#include <Fuse.Themes.GraphicsStyle.Template6.h>
#include <Fuse.Themes.GraphicsStyle.Template7.h>
#include <Fuse.Themes.GraphicsStyle.Template8.h>
#include <Fuse.Themes.GraphicsStyle.Template9.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Video.VideoVisual.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[1];
static uType* TYPES[23];

namespace g{
namespace Fuse{
namespace Themes{

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(5)
// ---------------------------------------------------------------

// public partial sealed class GraphicsStyle :5
// {
// static GraphicsStyle() :183
static void GraphicsStyle__cctor__fn(uType* __type)
{
    GraphicsStyle::Default_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::FuseThemes_bundle::RobotoRegular4fb13d0f()));
    ::g::Uno::UX::Resource::SetGlobalKey(GraphicsStyle::Default_, ::STRINGS[0/*"Default"*/]);
}

::g::Fuse::Style_type* GraphicsStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Themes.GraphicsStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)GraphicsStyle__New2_fn;
    type->fp_cctor_ = GraphicsStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::STRINGS[0] = uString::Const("Default");
    ::TYPES[0] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[1] = ::g::FuseThemes_bundle_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[4] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof());
    ::TYPES[5] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof());
    ::TYPES[6] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Star_typeof());
    ::TYPES[7] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Ellipse_typeof());
    ::TYPES[8] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::RegularPolygon_typeof());
    ::TYPES[9] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Path_typeof());
    ::TYPES[10] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[11] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Video_typeof());
    ::TYPES[12] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[13] = ::g::Fuse::Style_typeof();
    ::TYPES[14] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Fuse::Themes::GraphicsStyle::Default_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Default", 5));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__New2_fn, 0, true, GraphicsStyle_typeof(), 0));
    return type;
}

// public GraphicsStyle() :188
void GraphicsStyle__ctor_1_fn(GraphicsStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :192
void GraphicsStyle__InitializeUX_fn(GraphicsStyle* __this)
{
    __this->InitializeUX();
}

// public GraphicsStyle New() :188
void GraphicsStyle__New2_fn(GraphicsStyle** __retval)
{
    *__retval = GraphicsStyle::New2();
}

uSStrong< ::g::Fuse::Font*> GraphicsStyle::Default_;

// public GraphicsStyle() [instance] :188
void GraphicsStyle::ctor_1()
{
    uStackFrame __("Fuse.Themes.GraphicsStyle", ".ctor()");
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :192
void GraphicsStyle::InitializeUX()
{
    uStackFrame __("Fuse.Themes.GraphicsStyle", "InitializeUX()");
    GraphicsStyle__Template* collection1;
    GraphicsStyle__Template1* collection2;
    GraphicsStyle__Template2* collection3;
    GraphicsStyle__Template3* collection4;
    GraphicsStyle__Template4* collection5;
    GraphicsStyle__Template5* collection6;
    GraphicsStyle__Template6* collection7;
    GraphicsStyle__Template7* collection8;
    GraphicsStyle__Template8* collection9;
    GraphicsStyle__Template9* collection10;
    collection1 = GraphicsStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template* temp = collection1;
    collection2 = GraphicsStyle__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template1* temp1 = collection2;
    collection3 = GraphicsStyle__Template2::New1(this);
    uPtr(collection3)->Cascade(true);
    true;
    uPtr(collection3)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template2* temp2 = collection3;
    collection4 = GraphicsStyle__Template3::New1(this);
    uPtr(collection4)->Cascade(true);
    true;
    uPtr(collection4)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template3* temp3 = collection4;
    collection5 = GraphicsStyle__Template4::New1(this);
    uPtr(collection5)->Cascade(true);
    true;
    uPtr(collection5)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template4* temp4 = collection5;
    collection6 = GraphicsStyle__Template5::New1(this);
    uPtr(collection6)->Cascade(true);
    true;
    uPtr(collection6)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template5* temp5 = collection6;
    collection7 = GraphicsStyle__Template6::New1(this);
    uPtr(collection7)->Cascade(true);
    true;
    uPtr(collection7)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template6* temp6 = collection7;
    collection8 = GraphicsStyle__Template7::New1(this);
    uPtr(collection8)->Cascade(true);
    true;
    uPtr(collection8)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template7* temp7 = collection8;
    collection9 = GraphicsStyle__Template8::New1(this);
    uPtr(collection9)->Cascade(true);
    true;
    uPtr(collection9)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template8* temp8 = collection9;
    collection10 = GraphicsStyle__Template9::New1(this);
    uPtr(collection10)->Cascade(true);
    true;
    uPtr(collection10)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template9* temp9 = collection10;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Uno.UX.ITemplate*/])), (uObject*)temp9);
}

// public GraphicsStyle New() [static] :188
GraphicsStyle* GraphicsStyle::New2()
{
    GraphicsStyle* obj11 = (GraphicsStyle*)uNew(GraphicsStyle_typeof());
    obj11->ctor_1();
    return obj11;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(7)
// ---------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template :7
// {
// static Template() :14
static void GraphicsStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[15] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[16] = ::g::Fuse::Themes::GraphicsStyle_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template__New1_fn, 0, true, GraphicsStyle__Template_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template(Fuse.Themes.GraphicsStyle parent) :10
void GraphicsStyle__Template__ctor_1_fn(GraphicsStyle__Template* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Themes.GraphicsStyle parent) :10
void GraphicsStyle__Template__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template** __retval)
{
    *__retval = GraphicsStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextControl self) :17
void GraphicsStyle__Template__OnApply_fn(GraphicsStyle__Template* __this, ::g::Fuse::Controls::TextControl* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template", "OnApply(Fuse.Controls.TextControl)");
    bool ret2;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), self, ::g::Fuse::Themes::GraphicsStyle::Default(), &ret2);
}

// public Template(Fuse.Themes.GraphicsStyle parent) [instance] :10
void GraphicsStyle__Template::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Themes.GraphicsStyle parent) [static] :10
GraphicsStyle__Template* GraphicsStyle__Template::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template* obj1 = (GraphicsStyle__Template*)uNew(GraphicsStyle__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(22)
// ----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template1 :22
// {
// static Template1() :29
static void GraphicsStyle__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template1__New1_fn, 0, true, GraphicsStyle__Template1_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template1(Fuse.Themes.GraphicsStyle parent) :25
void GraphicsStyle__Template1__ctor_1_fn(GraphicsStyle__Template1* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.Themes.GraphicsStyle parent) :25
void GraphicsStyle__Template1__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template1** __retval)
{
    *__retval = GraphicsStyle__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Rectangle self) :32
void GraphicsStyle__Template1__OnApply_fn(GraphicsStyle__Template1* __this, ::g::Fuse::Controls::Rectangle* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template1", "OnApply(Fuse.Controls.Rectangle)");
    ::g::Fuse::Controls::Graphics::RectangleVisual* temp = ::g::Fuse::Controls::Graphics::RectangleVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.Themes.GraphicsStyle parent) [instance] :25
void GraphicsStyle__Template1::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template1", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.Themes.GraphicsStyle parent) [static] :25
GraphicsStyle__Template1* GraphicsStyle__Template1::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template1* obj1 = (GraphicsStyle__Template1*)uNew(GraphicsStyle__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(38)
// ----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template2 :38
// {
// static Template2() :45
static void GraphicsStyle__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template2, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template2__New1_fn, 0, true, GraphicsStyle__Template2_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template2(Fuse.Themes.GraphicsStyle parent) :41
void GraphicsStyle__Template2__ctor_1_fn(GraphicsStyle__Template2* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.Themes.GraphicsStyle parent) :41
void GraphicsStyle__Template2__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template2** __retval)
{
    *__retval = GraphicsStyle__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Circle self) :48
void GraphicsStyle__Template2__OnApply_fn(GraphicsStyle__Template2* __this, ::g::Fuse::Controls::Circle* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template2", "OnApply(Fuse.Controls.Circle)");
    ::g::Fuse::Controls::Graphics::CircleVisual* temp = ::g::Fuse::Controls::Graphics::CircleVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template2(Fuse.Themes.GraphicsStyle parent) [instance] :41
void GraphicsStyle__Template2::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template2", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.Themes.GraphicsStyle parent) [static] :41
GraphicsStyle__Template2* GraphicsStyle__Template2::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template2* obj1 = (GraphicsStyle__Template2*)uNew(GraphicsStyle__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(54)
// ----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template3 :54
// {
// static Template3() :61
static void GraphicsStyle__Template3__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template3", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Star_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template3__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template3__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template3, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template3__New1_fn, 0, true, GraphicsStyle__Template3_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template3(Fuse.Themes.GraphicsStyle parent) :57
void GraphicsStyle__Template3__ctor_1_fn(GraphicsStyle__Template3* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template3 New(Fuse.Themes.GraphicsStyle parent) :57
void GraphicsStyle__Template3__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template3** __retval)
{
    *__retval = GraphicsStyle__Template3::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Star self) :64
void GraphicsStyle__Template3__OnApply_fn(GraphicsStyle__Template3* __this, ::g::Fuse::Controls::Star* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template3", "OnApply(Fuse.Controls.Star)");
    ::g::Fuse::Controls::Graphics::StarVisual* temp = ::g::Fuse::Controls::Graphics::StarVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template3(Fuse.Themes.GraphicsStyle parent) [instance] :57
void GraphicsStyle__Template3::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template3", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template3 New(Fuse.Themes.GraphicsStyle parent) [static] :57
GraphicsStyle__Template3* GraphicsStyle__Template3::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template3* obj1 = (GraphicsStyle__Template3*)uNew(GraphicsStyle__Template3_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(70)
// ----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template4 :70
// {
// static Template4() :77
static void GraphicsStyle__Template4__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template4", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Ellipse_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template4__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template4__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template4, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template4__New1_fn, 0, true, GraphicsStyle__Template4_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template4(Fuse.Themes.GraphicsStyle parent) :73
void GraphicsStyle__Template4__ctor_1_fn(GraphicsStyle__Template4* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template4 New(Fuse.Themes.GraphicsStyle parent) :73
void GraphicsStyle__Template4__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template4** __retval)
{
    *__retval = GraphicsStyle__Template4::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Ellipse self) :80
void GraphicsStyle__Template4__OnApply_fn(GraphicsStyle__Template4* __this, ::g::Fuse::Controls::Ellipse* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template4", "OnApply(Fuse.Controls.Ellipse)");
    ::g::Fuse::Controls::Graphics::EllipseVisual* temp = ::g::Fuse::Controls::Graphics::EllipseVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template4(Fuse.Themes.GraphicsStyle parent) [instance] :73
void GraphicsStyle__Template4::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template4", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template4 New(Fuse.Themes.GraphicsStyle parent) [static] :73
GraphicsStyle__Template4* GraphicsStyle__Template4::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template4* obj1 = (GraphicsStyle__Template4*)uNew(GraphicsStyle__Template4_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(86)
// ----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template5 :86
// {
// static Template5() :93
static void GraphicsStyle__Template5__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template5", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::RegularPolygon_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template5__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template5__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template5, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template5__New1_fn, 0, true, GraphicsStyle__Template5_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template5(Fuse.Themes.GraphicsStyle parent) :89
void GraphicsStyle__Template5__ctor_1_fn(GraphicsStyle__Template5* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template5 New(Fuse.Themes.GraphicsStyle parent) :89
void GraphicsStyle__Template5__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template5** __retval)
{
    *__retval = GraphicsStyle__Template5::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.RegularPolygon self) :96
void GraphicsStyle__Template5__OnApply_fn(GraphicsStyle__Template5* __this, ::g::Fuse::Controls::RegularPolygon* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template5", "OnApply(Fuse.Controls.RegularPolygon)");
    ::g::Fuse::Controls::Graphics::RegularPolygonVisual* temp = ::g::Fuse::Controls::Graphics::RegularPolygonVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template5(Fuse.Themes.GraphicsStyle parent) [instance] :89
void GraphicsStyle__Template5::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template5", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template5 New(Fuse.Themes.GraphicsStyle parent) [static] :89
GraphicsStyle__Template5* GraphicsStyle__Template5::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template5* obj1 = (GraphicsStyle__Template5*)uNew(GraphicsStyle__Template5_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(102)
// -----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template6 :102
// {
// static Template6() :109
static void GraphicsStyle__Template6__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template6", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Path_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template6__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template6__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template6, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template6__New1_fn, 0, true, GraphicsStyle__Template6_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template6(Fuse.Themes.GraphicsStyle parent) :105
void GraphicsStyle__Template6__ctor_1_fn(GraphicsStyle__Template6* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template6 New(Fuse.Themes.GraphicsStyle parent) :105
void GraphicsStyle__Template6__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template6** __retval)
{
    *__retval = GraphicsStyle__Template6::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Path self) :112
void GraphicsStyle__Template6__OnApply_fn(GraphicsStyle__Template6* __this, ::g::Fuse::Controls::Path* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template6", "OnApply(Fuse.Controls.Path)");
    ::g::Fuse::Controls::Graphics::PathVisual* temp = ::g::Fuse::Controls::Graphics::PathVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template6(Fuse.Themes.GraphicsStyle parent) [instance] :105
void GraphicsStyle__Template6::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template6", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template6 New(Fuse.Themes.GraphicsStyle parent) [static] :105
GraphicsStyle__Template6* GraphicsStyle__Template6::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template6* obj1 = (GraphicsStyle__Template6*)uNew(GraphicsStyle__Template6_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(118)
// -----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template7 :118
// {
// static Template7() :125
static void GraphicsStyle__Template7__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template7_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template7);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template7", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template7__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template7__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template7, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template7__New1_fn, 0, true, GraphicsStyle__Template7_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template7(Fuse.Themes.GraphicsStyle parent) :121
void GraphicsStyle__Template7__ctor_1_fn(GraphicsStyle__Template7* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template7 New(Fuse.Themes.GraphicsStyle parent) :121
void GraphicsStyle__Template7__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template7** __retval)
{
    *__retval = GraphicsStyle__Template7::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Image self) :128
void GraphicsStyle__Template7__OnApply_fn(GraphicsStyle__Template7* __this, ::g::Fuse::Controls::Image* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template7", "OnApply(Fuse.Controls.Image)");
    ::g::Fuse::Controls::Graphics::ImageVisual* temp = ::g::Fuse::Controls::Graphics::ImageVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template7(Fuse.Themes.GraphicsStyle parent) [instance] :121
void GraphicsStyle__Template7::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template7", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template7 New(Fuse.Themes.GraphicsStyle parent) [static] :121
GraphicsStyle__Template7* GraphicsStyle__Template7::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template7* obj1 = (GraphicsStyle__Template7*)uNew(GraphicsStyle__Template7_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(134)
// -----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template8 :134
// {
// static Template8() :141
static void GraphicsStyle__Template8__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template8", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Video_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template8__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template8__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template8, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template8__New1_fn, 0, true, GraphicsStyle__Template8_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template8(Fuse.Themes.GraphicsStyle parent) :137
void GraphicsStyle__Template8__ctor_1_fn(GraphicsStyle__Template8* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template8 New(Fuse.Themes.GraphicsStyle parent) :137
void GraphicsStyle__Template8__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template8** __retval)
{
    *__retval = GraphicsStyle__Template8::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Video self) :144
void GraphicsStyle__Template8__OnApply_fn(GraphicsStyle__Template8* __this, ::g::Fuse::Controls::Video* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template8", "OnApply(Fuse.Controls.Video)");
    ::g::Fuse::Video::VideoVisual* temp = ::g::Fuse::Video::VideoVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template8(Fuse.Themes.GraphicsStyle parent) [instance] :137
void GraphicsStyle__Template8::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template8", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template8 New(Fuse.Themes.GraphicsStyle parent) [static] :137
GraphicsStyle__Template8* GraphicsStyle__Template8::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template8* obj1 = (GraphicsStyle__Template8*)uNew(GraphicsStyle__Template8_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(150)
// -----------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template9 :150
// {
// static Template9() :161
static void GraphicsStyle__Template9__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template9_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template9);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template9", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template9__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template9__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[18] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[20] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[21] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[22] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template9, __parent1), 0,
        ::g::FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template9, self_KeepFocusInView_inst), 0,
        ::g::FuseThemes_FuseControlsScrollView_bool_UserScroll_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template9, self_UserScroll_inst), 0,
        ::g::FuseThemes_FuseGesturesScroller_bool_UserScroll_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template9, temp_UserScroll_inst), 0,
        ::g::FuseThemes_FuseTriggersWhileBool_bool_Value_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template9, temp1_Value_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsStyle__Template9__New1_fn, 0, true, GraphicsStyle__Template9_typeof(), 1, ::g::Fuse::Themes::GraphicsStyle_typeof()));
    return type;
}

// public Template9(Fuse.Themes.GraphicsStyle parent) :153
void GraphicsStyle__Template9__ctor_1_fn(GraphicsStyle__Template9* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template9 New(Fuse.Themes.GraphicsStyle parent) :153
void GraphicsStyle__Template9__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template9** __retval)
{
    *__retval = GraphicsStyle__Template9::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.ScrollView self) :164
void GraphicsStyle__Template9__OnApply_fn(GraphicsStyle__Template9* __this, ::g::Fuse::Controls::ScrollView* self)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template9", "OnApply(Fuse.Controls.ScrollView)");
    ::g::Fuse::Gestures::Scroller* temp = ::g::Fuse::Gestures::Scroller::New1();
    __this->temp_UserScroll_inst = ::g::FuseThemes_FuseGesturesScroller_bool_UserScroll_Property::New1(temp);
    __this->self_UserScroll_inst = ::g::FuseThemes_FuseControlsScrollView_bool_UserScroll_Property::New1(self);
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New1();
    __this->temp1_Value_inst = ::g::FuseThemes_FuseTriggersWhileBool_bool_Value_Property::New1(temp1);
    __this->self_KeepFocusInView_inst = ::g::FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property::New1(self);
    ::g::Fuse::Gestures::KeepFocusInView* temp2 = ::g::Fuse::Gestures::KeepFocusInView::New2();
    ::g::Fuse::Controls::PropertyBinding* temp3 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[19/*Fuse.Controls.PropertyBinding<bool>*/], __this->temp_UserScroll_inst, __this->self_UserScroll_inst);
    ::g::Fuse::Controls::PropertyBinding* temp4 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[19/*Fuse.Controls.PropertyBinding<bool>*/], __this->temp1_Value_inst, __this->self_KeepFocusInView_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Behavior*/])), temp2);
    uPtr(self)->AddStyleBehavior(temp3);
    self->AddStyleBehavior(temp4);
    self->AddStyleBehavior(temp);
    self->AddStyleBehavior(temp1);
}

// public Template9(Fuse.Themes.GraphicsStyle parent) [instance] :153
void GraphicsStyle__Template9::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    uStackFrame __("Fuse.Themes.GraphicsStyle.Template9", ".ctor(Fuse.Themes.GraphicsStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template9 New(Fuse.Themes.GraphicsStyle parent) [static] :153
GraphicsStyle__Template9* GraphicsStyle__Template9::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template9* obj1 = (GraphicsStyle__Template9*)uNew(GraphicsStyle__Template9_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

}}} // ::g::Fuse::Themes
