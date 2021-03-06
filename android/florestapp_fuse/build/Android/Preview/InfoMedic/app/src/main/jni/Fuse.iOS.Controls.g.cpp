// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Control.h>
#include <Fuse.iOS.Controls.Button.h>
#include <Fuse.iOS.Controls.Circle.h>
#include <Fuse.iOS.Controls.Control-1.h>
#include <Fuse.iOS.Controls.ControlProperties.h>
#include <Fuse.iOS.Controls.Element.h>
#include <Fuse.iOS.Controls.Image.h>
#include <Fuse.iOS.Controls.MapView.h>
#include <Fuse.iOS.Controls.Rectangle.h>
#include <Fuse.iOS.Controls.Shape-1.h>
#include <Fuse.iOS.Controls.Slider.h>
#include <Fuse.iOS.Controls.Switch.h>
#include <Fuse.iOS.Controls.TextBlock.h>
#include <Fuse.iOS.Controls.TextInput.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.Node.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(18)
// -----------------------------------------------------------------

// public sealed extern class Button :18
// {
// static Button() :18
static void Button__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    Button::NormalColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret2), ret2);
    Button::HighlightedColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret3), ret3);
    Button::DisabledColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret4), ret4);
    Button::SelectedColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret5), ret5);
}

::g::Fuse::Node_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Button", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof()));
    type->fp_ctor_ = (void*)Button__New1_fn;
    type->fp_cctor_ = Button__cctor_1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(Button_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::DisabledColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::HighlightedColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::NormalColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::SelectedColorProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("DisabledColorProperty", 55),
        new uField("HighlightedColorProperty", 56),
        new uField("NormalColorProperty", 57),
        new uField("SelectedColorProperty", 58));
    type->Reflection.SetFunctions(9,
        new uFunction("get_DisabledColor", NULL, (void*)Button__get_DisabledColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_DisabledColor", NULL, (void*)Button__set_DisabledColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_HighlightedColor", NULL, (void*)Button__get_HighlightedColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HighlightedColor", NULL, (void*)Button__set_HighlightedColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, Button_typeof(), 0),
        new uFunction("get_NormalColor", NULL, (void*)Button__get_NormalColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_NormalColor", NULL, (void*)Button__set_NormalColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_SelectedColor", NULL, (void*)Button__get_SelectedColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_SelectedColor", NULL, (void*)Button__set_SelectedColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
    return type;
}

// public generated Button() :18
void Button__ctor_3_fn(Button* __this)
{
    __this->ctor_3();
}

// public float4 get_DisabledColor() :34
void Button__get_DisabledColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->DisabledColor();
}

// public void set_DisabledColor(float4 value) :35
void Button__set_DisabledColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->DisabledColor(*value);
}

// public float4 get_HighlightedColor() :28
void Button__get_HighlightedColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HighlightedColor();
}

// public void set_HighlightedColor(float4 value) :29
void Button__set_HighlightedColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->HighlightedColor(*value);
}

// public generated Button New() :18
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public float4 get_NormalColor() :22
void Button__get_NormalColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->NormalColor();
}

// public void set_NormalColor(float4 value) :23
void Button__set_NormalColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->NormalColor(*value);
}

// protected static void OnButtonPropertyChanged(Fuse.iOS.Controls.Button t) :56
void Button__OnButtonPropertyChanged_fn(Button* t)
{
    Button::OnButtonPropertyChanged(t);
}

// public float4 get_SelectedColor() :40
void Button__get_SelectedColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SelectedColor();
}

// public void set_SelectedColor(float4 value) :41
void Button__set_SelectedColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->SelectedColor(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::DisabledColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::HighlightedColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::NormalColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::SelectedColorProperty_;

// public generated Button() [instance] :18
void Button::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Button", ".ctor()");
    ctor_2();
}

// public float4 get_DisabledColor() [instance] :34
::g::Uno::Float4 Button::DisabledColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_DisabledColor()");
    ::g::Uno::Float4 ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::DisabledColorProperty()), this, &ret6), ret6);
}

// public void set_DisabledColor(float4 value) [instance] :35
void Button::DisabledColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_DisabledColor(float4)");
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::DisabledColorProperty()), this, uCRef(value), &ret7);
}

// public float4 get_HighlightedColor() [instance] :28
::g::Uno::Float4 Button::HighlightedColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_HighlightedColor()");
    ::g::Uno::Float4 ret8;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::HighlightedColorProperty()), this, &ret8), ret8);
}

// public void set_HighlightedColor(float4 value) [instance] :29
void Button::HighlightedColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_HighlightedColor(float4)");
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::HighlightedColorProperty()), this, uCRef(value), &ret9);
}

// public float4 get_NormalColor() [instance] :22
::g::Uno::Float4 Button::NormalColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_NormalColor()");
    ::g::Uno::Float4 ret10;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::NormalColorProperty()), this, &ret10), ret10);
}

// public void set_NormalColor(float4 value) [instance] :23
void Button::NormalColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_NormalColor(float4)");
    bool ret11;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::NormalColorProperty()), this, uCRef(value), &ret11);
}

// public float4 get_SelectedColor() [instance] :40
::g::Uno::Float4 Button::SelectedColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_SelectedColor()");
    ::g::Uno::Float4 ret12;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::SelectedColorProperty()), this, &ret12), ret12);
}

// public void set_SelectedColor(float4 value) [instance] :41
void Button::SelectedColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_SelectedColor(float4)");
    bool ret13;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::SelectedColorProperty()), this, uCRef(value), &ret13);
}

// public generated Button New() [static] :18
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_3();
    return obj1;
}

// protected static void OnButtonPropertyChanged(Fuse.iOS.Controls.Button t) [static] :56
void Button::OnButtonPropertyChanged(Button* t)
{
    Button_typeof()->Init();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(195)
// ------------------------------------------------------------------

// public sealed extern class Circle :195
// {
::g::Fuse::Node_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Circle", options);
    type->SetBase(::g::Fuse::iOS::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_ctor_ = (void*)Circle__New2_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Circle__New2_fn, 0, true, Circle_typeof(), 0));
    return type;
}

// public generated Circle() :195
void Circle__ctor_4_fn(Circle* __this)
{
    __this->ctor_4();
}

// public generated Circle New() :195
void Circle__New2_fn(Circle** __retval)
{
    *__retval = Circle::New2();
}

// public generated Circle() [instance] :195
void Circle::ctor_4()
{
    uStackFrame __("Fuse.iOS.Controls.Circle", ".ctor()");
    ctor_3();
}

// public generated Circle New() [static] :195
Circle* Circle::New2()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(242)
// ------------------------------------------------------------------

// public abstract extern class Control<T> :242
// {
::g::Fuse::Node_type* Control_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Control`1", options);
    type->SetBase(::g::Fuse::iOS::Controls::Element_typeof());
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    return type;
}

// protected generated Control() :242
void Control__ctor_2_fn(Control* __this)
{
    __this->ctor_2();
}

// protected generated Control() [instance] :242
void Control::ctor_2()
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", ".ctor()");
    ctor_1();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(315)
// ------------------------------------------------------------------

// public static class ControlProperties :315
// {
// static ControlProperties() :315
static void ControlProperties__cctor__fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret1;
    ControlProperties::TintColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[2/*Fuse.StyleProperty<Fuse.Controls.Control, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Controls.Control>*/], (void*)ControlProperties__OnTintColorChanged_fn), &ret1), ret1);
}

uClassType* ControlProperties_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.ControlProperties", options);
    type->fp_cctor_ = ControlProperties__cctor__fn;
    ::TYPES[2] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::ControlProperties::TintColorProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("TintColorProperty", 0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetTintColor", NULL, (void*)ControlProperties__GetTintColor_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Fuse::Controls::Control_typeof()),
        new uFunction("ResetTintColor", NULL, (void*)ControlProperties__ResetTintColor_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Controls::Control_typeof()),
        new uFunction("SetTintColor", NULL, (void*)ControlProperties__SetTintColor_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Controls::Control_typeof(), ::g::Uno::Float4_typeof()));
    return type;
}

// public static float4 GetTintColor(Fuse.Controls.Control p) :323
void ControlProperties__GetTintColor_fn(::g::Fuse::Controls::Control* p, ::g::Uno::Float4* __retval)
{
    *__retval = ControlProperties::GetTintColor(p);
}

// private static void OnTintColorChanged(Fuse.Controls.Control panel) :327
void ControlProperties__OnTintColorChanged_fn(::g::Fuse::Controls::Control* panel)
{
    ControlProperties::OnTintColorChanged(panel);
}

// public static void ResetTintColor(Fuse.Controls.Control p) :325
void ControlProperties__ResetTintColor_fn(::g::Fuse::Controls::Control* p)
{
    ControlProperties::ResetTintColor(p);
}

// public static void SetTintColor(Fuse.Controls.Control p, float4 value) :321
void ControlProperties__SetTintColor_fn(::g::Fuse::Controls::Control* p, ::g::Uno::Float4* value)
{
    ControlProperties::SetTintColor(p, *value);
}

uSStrong< ::g::Fuse::StyleProperty1*> ControlProperties::TintColorProperty_;

// public static float4 GetTintColor(Fuse.Controls.Control p) [static] :323
::g::Uno::Float4 ControlProperties::GetTintColor(::g::Fuse::Controls::Control* p)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "GetTintColor(Fuse.Controls.Control)");
    ControlProperties_typeof()->Init();
    ::g::Uno::Float4 ret2;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(ControlProperties::TintColorProperty()), p, &ret2), ret2);
}

// private static void OnTintColorChanged(Fuse.Controls.Control panel) [static] :327
void ControlProperties::OnTintColorChanged(::g::Fuse::Controls::Control* panel)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "OnTintColorChanged(Fuse.Controls.Control)");
    ControlProperties_typeof()->Init();
    ::g::Fuse::iOS::NativeViews::NativeView* nv = ::g::Fuse::iOS::NativeViews::NativeView::GetFrom(panel);

    if (nv != NULL)
        uPtr(nv)->OnTintColorChanged();
}

// public static void ResetTintColor(Fuse.Controls.Control p) [static] :325
void ControlProperties::ResetTintColor(::g::Fuse::Controls::Control* p)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "ResetTintColor(Fuse.Controls.Control)");
    ControlProperties_typeof()->Init();
    bool ret3;
    ::g::Fuse::StyleProperty1__Reset_fn(uPtr(ControlProperties::TintColorProperty()), p, &ret3);
}

// public static void SetTintColor(Fuse.Controls.Control p, float4 value) [static] :321
void ControlProperties::SetTintColor(::g::Fuse::Controls::Control* p, ::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "SetTintColor(Fuse.Controls.Control,float4)");
    ControlProperties_typeof()->Init();
    bool ret4;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ControlProperties::TintColorProperty()), p, uCRef(value), &ret4);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(351)
// ------------------------------------------------------------------

// public abstract extern class Element :351
// {
::g::Fuse::Node_type* Element_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    return type;
}

// protected generated Element() :351
void Element__ctor_1_fn(Element* __this)
{
    __this->ctor_1();
}

// protected generated Element() [instance] :351
void Element::ctor_1()
{
    uStackFrame __("Fuse.iOS.Controls.Element", ".ctor()");
    ctor_();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(471)
// ------------------------------------------------------------------

// public sealed extern class Image :471
// {
::g::Fuse::Node_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Image", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_ctor_ = (void*)Image__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Image__New1_fn, 0, true, Image_typeof(), 0));
    return type;
}

// public generated Image() :471
void Image__ctor_3_fn(Image* __this)
{
    __this->ctor_3();
}

// public generated Image New() :471
void Image__New1_fn(Image** __retval)
{
    *__retval = Image::New1();
}

// public generated Image() [instance] :471
void Image::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Image", ".ctor()");
    ctor_2();
}

// public generated Image New() [static] :471
Image* Image::New1()
{
    Image* obj1 = (Image*)uNew(Image_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(659)
// ------------------------------------------------------------------

// public sealed extern class MapView :659
// {
::g::Fuse::Node_type* MapView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.MapView", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::MapView_typeof()));
    type->fp_ctor_ = (void*)MapView__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MapView__New1_fn, 0, true, MapView_typeof(), 0));
    return type;
}

// public generated MapView() :659
void MapView__ctor_3_fn(MapView* __this)
{
    __this->ctor_3();
}

// public generated MapView New() :659
void MapView__New1_fn(MapView** __retval)
{
    *__retval = MapView::New1();
}

// public generated MapView() [instance] :659
void MapView::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", ".ctor()");
    ctor_2();
}

// public generated MapView New() [static] :659
MapView* MapView::New1()
{
    MapView* obj1 = (MapView*)uNew(MapView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(707)
// ------------------------------------------------------------------

// public sealed extern class Rectangle :707
// {
::g::Fuse::Node_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::iOS::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_ctor_ = (void*)Rectangle__New2_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Rectangle__New2_fn, 0, true, Rectangle_typeof(), 0));
    return type;
}

// public generated Rectangle() :707
void Rectangle__ctor_4_fn(Rectangle* __this)
{
    __this->ctor_4();
}

// public generated Rectangle New() :707
void Rectangle__New2_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New2();
}

// public generated Rectangle() [instance] :707
void Rectangle::ctor_4()
{
    uStackFrame __("Fuse.iOS.Controls.Rectangle", ".ctor()");
    ctor_3();
}

// public generated Rectangle New() [static] :707
Rectangle* Rectangle::New2()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(770)
// ------------------------------------------------------------------

// public extern class Shape<T> :770
// {
::g::Fuse::Node_type* Shape_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Shape`1", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_ctor_ = (void*)Shape__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)Shape__New1_fn, 0, true, type, 0));
    return type;
}

// public generated Shape() :770
void Shape__ctor_3_fn(Shape* __this)
{
    __this->ctor_3();
}

// public generated Shape New() :770
void Shape__New1_fn(uType* __type, Shape** __retval)
{
    *__retval = Shape::New1(__type);
}

// public generated Shape() [instance] :770
void Shape::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Shape`1", ".ctor()");
    ctor_2();
}

// public generated Shape New() [static] :770
Shape* Shape::New1(uType* __type)
{
    Shape* obj1 = (Shape*)uNew(__type);
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(924)
// ------------------------------------------------------------------

// public sealed extern class Slider :924
// {
::g::Fuse::Node_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Slider", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof()));
    type->fp_ctor_ = (void*)Slider__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, Slider_typeof(), 0));
    return type;
}

// public generated Slider() :924
void Slider__ctor_3_fn(Slider* __this)
{
    __this->ctor_3();
}

// public generated Slider New() :924
void Slider__New1_fn(Slider** __retval)
{
    *__retval = Slider::New1();
}

// public generated Slider() [instance] :924
void Slider::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Slider", ".ctor()");
    ctor_2();
}

// public generated Slider New() [static] :924
Slider* Slider::New1()
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(1049)
// -------------------------------------------------------------------

// public sealed extern class Switch :1049
// {
::g::Fuse::Node_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Switch", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Switch_typeof()));
    type->fp_ctor_ = (void*)Switch__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, Switch_typeof(), 0));
    return type;
}

// public generated Switch() :1049
void Switch__ctor_3_fn(Switch* __this)
{
    __this->ctor_3();
}

// public generated Switch New() :1049
void Switch__New1_fn(Switch** __retval)
{
    *__retval = Switch::New1();
}

// public generated Switch() [instance] :1049
void Switch::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Switch", ".ctor()");
    ctor_2();
}

// public generated Switch New() [static] :1049
Switch* Switch::New1()
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(1118)
// -------------------------------------------------------------------

// public sealed extern class TextBlock :1118
// {
::g::Fuse::Node_type* TextBlock_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextBlock);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.TextBlock", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_ctor_ = (void*)TextBlock__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextBlock__New1_fn, 0, true, TextBlock_typeof(), 0));
    return type;
}

// public generated TextBlock() :1118
void TextBlock__ctor_3_fn(TextBlock* __this)
{
    __this->ctor_3();
}

// public generated TextBlock New() :1118
void TextBlock__New1_fn(TextBlock** __retval)
{
    *__retval = TextBlock::New1();
}

// public generated TextBlock() [instance] :1118
void TextBlock::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", ".ctor()");
    ctor_2();
}

// public generated TextBlock New() [static] :1118
TextBlock* TextBlock::New1()
{
    TextBlock* obj1 = (TextBlock*)uNew(TextBlock_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(1223)
// -------------------------------------------------------------------

// public sealed extern class TextInput :1223
// {
::g::Fuse::Node_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.TextInput", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_ctor_ = (void*)TextInput__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextInput__New1_fn, 0, true, TextInput_typeof(), 0));
    return type;
}

// public generated TextInput() :1223
void TextInput__ctor_3_fn(TextInput* __this)
{
    __this->ctor_3();
}

// public generated TextInput New() :1223
void TextInput__New1_fn(TextInput** __retval)
{
    *__retval = TextInput::New1();
}

// public generated TextInput() [instance] :1223
void TextInput::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", ".ctor()");
    ctor_2();
}

// public generated TextInput New() [static] :1223
TextInput* TextInput::New1()
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\Controls\$.uno(1801)
// -------------------------------------------------------------------

// public sealed extern class WebView :1801
// {
::g::Fuse::Node_type* WebView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.WebView", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof()));
    type->fp_ctor_ = (void*)WebView__New1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WebView__New1_fn, 0, true, WebView_typeof(), 0));
    return type;
}

// public generated WebView() :1801
void WebView__ctor_3_fn(WebView* __this)
{
    __this->ctor_3();
}

// public generated WebView New() :1801
void WebView__New1_fn(WebView** __retval)
{
    *__retval = WebView::New1();
}

// public generated WebView() [instance] :1801
void WebView::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", ".ctor()");
    ctor_2();
}

// public generated WebView New() [static] :1801
WebView* WebView::New1()
{
    WebView* obj1 = (WebView*)uNew(WebView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Controls
