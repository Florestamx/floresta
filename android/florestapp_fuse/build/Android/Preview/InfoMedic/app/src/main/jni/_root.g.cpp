// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <_root.FuseBasicTheme_bundle.h>
#include <_root.FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsButton_string_Text_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAl-caf616dd.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWr-746d7e4e.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_string_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderCol-a5e732f7.h>
#include <_root.FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderTex-b681a73c.h>
#include <_root.FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingStroke_float_Width_Property.h>
#include <_root.FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property.h>
#include <_root.FuseBasicTheme_FuseElementsElement_float_Height_Property.h>
#include <_root.FuseBasicTheme_FuseElementsElement_float_Opacity_Property.h>
#include <_root.FuseBasicTheme_FuseElementsElement_float_Width_Property.h>
#include <_root.FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property.h>
#include <_root.FuseBasicTheme_FuseTranslation_float_X_Property.h>
#include <_root.FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsAc-7430db5a.h>
#include <_root.FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControls_FuseDrawingSolidColor_float4_Color_Property.h>
#include <_root.FuseControls_FuseNode_bool_IsEnabled_Property.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPolygons_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseEntities_bundle.h>
#include <_root.FuseiOS_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <_root.FuseThemes_bundle.h>
#include <_root.FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property.h>
#include <_root.FuseThemes_FuseControlsScrollView_bool_UserScroll_Property.h>
#include <_root.FuseThemes_FuseGesturesScroller_bool_UserScroll_Property.h>
#include <_root.FuseThemes_FuseTriggersWhileBool_bool_Value_Property.h>
#include <_root.FuseVideo_bundle.h>
#include <_root.HashableWeakReference.h>
#include <_root.OutracksSimulatorClientUno_bundle.h>
#include <_root.UnoCore_bundle.h>
#include <_root.WeakDictionary-2.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Node.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[176];
static uType* TYPES[23];

namespace g{

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\package
// ---------------------------------------------------------------

// public static generated class FuseAndroid_bundle :0
// {
// static FuseAndroid_bundle() :0
static void FuseAndroid_bundle__cctor__fn(uType* __type)
{
    FuseAndroid_bundle::Blitter8e9d75eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* FuseAndroid_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseAndroid_bundle", options);
    type->fp_cctor_ = FuseAndroid_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "vec4 g(vec2 h, mat4 i){\n"
        "    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = a;\n"
        "    gl_Position = g(c + (a * b), d);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseAndroid_bundle::Blitter8e9d75eb_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blitter8e9d75eb", 0));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseAndroid_bundle::Blitter8e9d75eb_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\package
// ------------------------------------------------------------------

// public static generated class FuseBasicTheme_bundle :0
// {
// static FuseBasicTheme_bundle() :0
static void FuseBasicTheme_bundle__cctor__fn(uType* __type)
{
    FuseBasicTheme_bundle::RobotoLight4e84d28d_ = ::g::Uno::BundleFile::New1(::STRINGS[7/*"roboto-ligh...*/]);
    FuseBasicTheme_bundle::RobotoMedium299cebde_ = ::g::Uno::BundleFile::New1(::STRINGS[8/*"roboto-medi...*/]);
    FuseBasicTheme_bundle::RobotoRegular8f7fe33c_ = ::g::Uno::BundleFile::New1(::STRINGS[9/*"roboto-regu...*/]);
}

uClassType* FuseBasicTheme_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseBasicTheme_bundle", options);
    type->fp_cctor_ = FuseBasicTheme_bundle__cctor__fn;
    ::STRINGS[7] = uString::Const("roboto-light-382c15af.ttf");
    ::STRINGS[8] = uString::Const("roboto-medium-ff03d88f.ttf");
    ::STRINGS[9] = uString::Const("roboto-regular-3d22e02e.ttf");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoLight4e84d28d_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoMedium299cebde_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoRegular8f7fe33c_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("RobotoLight4e84d28d", 0),
        new uField("RobotoMedium299cebde", 1),
        new uField("RobotoRegular8f7fe33c", 2));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> FuseBasicTheme_bundle::RobotoLight4e84d28d_;
uSStrong< ::g::Uno::BundleFile*> FuseBasicTheme_bundle::RobotoMedium299cebde_;
uSStrong< ::g::Uno::BundleFile*> FuseBasicTheme_bundle::RobotoRegular8f7fe33c_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(727)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property :727
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property__OnSet_fn;
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    type->SetFields(2,
        ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property(Fuse.Animations.Change<float4> obj) :730
void FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property__ctor_1_fn(FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property* __this, ::g::Fuse::Animations::Change* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property New(Fuse.Animations.Change<float4> obj) :730
void FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property::New1(obj);
}

// protected override sealed float4 OnGet() :731
void FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property__OnGet_fn(FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property", "OnGet()");
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// protected override sealed void OnSet(float4 v, object origin) :732
void FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property__OnSet_fn(FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(__this->_obj), uCRef(v_));
}

// public FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property(Fuse.Animations.Change<float4> obj) [instance] :730
void FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property::ctor_1(::g::Fuse::Animations::Change* obj)
{
    uStackFrame __("FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property", ".ctor(Fuse.Animations.Change<float4>)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property New(Fuse.Animations.Change<float4> obj) [static] :730
FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property* FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property::New1(::g::Fuse::Animations::Change* obj)
{
    FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property* obj1 = (FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property*)uNew(FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(785)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsButton_string_Text_Property :785
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsButton_string_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsButton_string_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsButton_string_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsButton_string_Text_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsButton_string_Text_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsButton_string_Text_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsButton_string_Text_Property__OnSet_fn;
    ::TYPES[2] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsButton_string_Text_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsButton_string_Text_Property(Fuse.Controls.Button obj) :788
void FuseBasicTheme_FuseControlsButton_string_Text_Property__ctor_1_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, ::g::Fuse::Controls::Button* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsButton_string_Text_Property New(Fuse.Controls.Button obj) :788
void FuseBasicTheme_FuseControlsButton_string_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, FuseBasicTheme_FuseControlsButton_string_Text_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsButton_string_Text_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :791
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnAddListener_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uDelegate* listener)
{
    uStackFrame __("FuseBasicTheme_FuseControlsButton_string_Text_Property", "OnAddListener(Uno.UX.ValueChangedHandler<string>)");
    uPtr(__this->_obj)->add_TextChanged(listener);
}

// protected override sealed string OnGet() :789
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnGet_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uString** __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsButton_string_Text_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :792
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnRemoveListener_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uDelegate* listener)
{
    uStackFrame __("FuseBasicTheme_FuseControlsButton_string_Text_Property", "OnRemoveListener(Uno.UX.ValueChangedHandler<string>)");
    uPtr(__this->_obj)->remove_TextChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :790
void FuseBasicTheme_FuseControlsButton_string_Text_Property__OnSet_fn(FuseBasicTheme_FuseControlsButton_string_Text_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsButton_string_Text_Property", "OnSet(string,object)");
    uPtr(__this->_obj)->SetText1(v, origin);
}

// public FuseBasicTheme_FuseControlsButton_string_Text_Property(Fuse.Controls.Button obj) [instance] :788
void FuseBasicTheme_FuseControlsButton_string_Text_Property::ctor_1(::g::Fuse::Controls::Button* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsButton_string_Text_Property", ".ctor(Fuse.Controls.Button)");
    ctor_();
    _obj = obj;
    uPtr(obj)->add_TextChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public FuseBasicTheme_FuseControlsButton_string_Text_Property New(Fuse.Controls.Button obj) [static] :788
FuseBasicTheme_FuseControlsButton_string_Text_Property* FuseBasicTheme_FuseControlsButton_string_Text_Property::New1(::g::Fuse::Controls::Button* obj)
{
    FuseBasicTheme_FuseControlsButton_string_Text_Property* obj1 = (FuseBasicTheme_FuseControlsButton_string_Text_Property*)uNew(FuseBasicTheme_FuseControlsButton_string_Text_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(778)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property :778
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property(Fuse.Controls.TextControl obj) :781
void FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property New(Fuse.Controls.TextControl obj) :781
void FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property::New1(obj);
}

// protected override sealed float OnGet() :782
void FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->FontSize(), void();
}

// protected override sealed void OnSet(float v, object origin) :783
void FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->FontSize(v_);
}

// public FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property(Fuse.Controls.TextControl obj) [instance] :781
void FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property New(Fuse.Controls.TextControl obj) [static] :781
FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property* FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(764)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property :764
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property(Fuse.Controls.TextControl obj) :767
void FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property New(Fuse.Controls.TextControl obj) :767
void FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property::New1(obj);
}

// protected override sealed float OnGet() :768
void FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->LineSpacing(), void();
}

// protected override sealed void OnSet(float v, object origin) :769
void FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->LineSpacing(v_);
}

// public FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property(Fuse.Controls.TextControl obj) [instance] :767
void FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property New(Fuse.Controls.TextControl obj) [static] :767
FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property* FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(706)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property :706
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property(Fuse.Controls.TextControl obj) :709
void FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property New(Fuse.Controls.TextControl obj) :709
void FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property::New1(obj);
}

// protected override sealed float4 OnGet() :710
void FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :711
void FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property(Fuse.Controls.TextControl obj) [instance] :709
void FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property New(Fuse.Controls.TextControl obj) [static] :709
FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property* FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(750)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property :750
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::TextAlignment_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property(Fuse.Controls.TextControl obj) :753
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property New(Fuse.Controls.TextControl obj) :753
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property::New1(obj);
}

// protected override sealed Fuse.Elements.TextAlignment OnGet() :754
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property* __this, int* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->TextAlignment(), void();
}

// protected override sealed void OnSet(Fuse.Elements.TextAlignment v, object origin) :755
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property* __this, int* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property", "OnSet(Fuse.Elements.TextAlignment,object)");
    int v_ = *v;
    uPtr(__this->_obj)->TextAlignment(v_);
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property(Fuse.Controls.TextControl obj) [instance] :753
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property New(Fuse.Controls.TextControl obj) [static] :753
FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property* FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAlignment_TextAlignment_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(757)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property :757
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::TextWrapping_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property(Fuse.Controls.TextControl obj) :760
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property New(Fuse.Controls.TextControl obj) :760
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property::New1(obj);
}

// protected override sealed Fuse.Elements.TextWrapping OnGet() :761
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property* __this, int* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->TextWrapping(), void();
}

// protected override sealed void OnSet(Fuse.Elements.TextWrapping v, object origin) :762
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property* __this, int* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property", "OnSet(Fuse.Elements.TextWrapping,object)");
    int v_ = *v;
    uPtr(__this->_obj)->TextWrapping(v_);
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property(Fuse.Controls.TextControl obj) [instance] :760
void FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property New(Fuse.Controls.TextControl obj) [static] :760
FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property* FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWrapping_TextWrapping_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(771)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property :771
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Font_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property(Fuse.Controls.TextControl obj) :774
void FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property New(Fuse.Controls.TextControl obj) :774
void FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property::New1(obj);
}

// protected override sealed Fuse.Font OnGet() :775
void FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property* __this, ::g::Fuse::Font** __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Font(), void();
}

// protected override sealed void OnSet(Fuse.Font v, object origin) :776
void FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property* __this, ::g::Fuse::Font* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property", "OnSet(Fuse.Font,object)");
    uPtr(__this->_obj)->Font(v);
}

// public FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property(Fuse.Controls.TextControl obj) [instance] :774
void FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property New(Fuse.Controls.TextControl obj) [static] :774
FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property* FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(734)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_string_Value_Property :734
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextControl_string_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_string_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_string_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnSet_fn;
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_string_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextControl_string_Value_Property(Fuse.Controls.TextControl obj) :737
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextControl_string_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextControl_string_Value_Property New(Fuse.Controls.TextControl obj) :737
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, FuseBasicTheme_FuseControlsTextControl_string_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_string_Value_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :740
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnAddListener_fn(FuseBasicTheme_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_string_Value_Property", "OnAddListener(Uno.UX.ValueChangedHandler<string>)");
    uPtr(__this->_obj)->add_ValueChanged(listener);
}

// protected override sealed string OnGet() :738
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextControl_string_Value_Property* __this, uString** __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_string_Value_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :741
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn(FuseBasicTheme_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_string_Value_Property", "OnRemoveListener(Uno.UX.ValueChangedHandler<string>)");
    uPtr(__this->_obj)->remove_ValueChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :739
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextControl_string_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_string_Value_Property", "OnSet(string,object)");
    uPtr(__this->_obj)->SetValue1(v, origin);
}

// public FuseBasicTheme_FuseControlsTextControl_string_Value_Property(Fuse.Controls.TextControl obj) [instance] :737
void FuseBasicTheme_FuseControlsTextControl_string_Value_Property::ctor_1(::g::Fuse::Controls::TextControl* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_string_Value_Property", ".ctor(Fuse.Controls.TextControl)");
    ctor_();
    _obj = obj;
    uPtr(obj)->add_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public FuseBasicTheme_FuseControlsTextControl_string_Value_Property New(Fuse.Controls.TextControl obj) [static] :737
FuseBasicTheme_FuseControlsTextControl_string_Value_Property* FuseBasicTheme_FuseControlsTextControl_string_Value_Property::New1(::g::Fuse::Controls::TextControl* obj)
{
    FuseBasicTheme_FuseControlsTextControl_string_Value_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_string_Value_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_string_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(808)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property :808
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property__OnSet_fn;
    ::TYPES[5] = ::g::Fuse::Controls::TextEdit_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property(Fuse.Controls.TextEdit obj) :811
void FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property* __this, ::g::Fuse::Controls::TextEdit* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property New(Fuse.Controls.TextEdit obj) :811
void FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property__New1_fn(::g::Fuse::Controls::TextEdit* obj, FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property::New1(obj);
}

// protected override sealed float4 OnGet() :812
void FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->PlaceholderColor(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :813
void FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->PlaceholderColor(v_);
}

// public FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property(Fuse.Controls.TextEdit obj) [instance] :811
void FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property::ctor_1(::g::Fuse::Controls::TextEdit* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property", ".ctor(Fuse.Controls.TextEdit)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property New(Fuse.Controls.TextEdit obj) [static] :811
FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property* FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property::New1(::g::Fuse::Controls::TextEdit* obj)
{
    FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property*)uNew(FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderColor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(801)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property :801
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property__OnSet_fn;
    ::TYPES[5] = ::g::Fuse::Controls::TextEdit_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property(Fuse.Controls.TextEdit obj) :804
void FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property__ctor_1_fn(FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property* __this, ::g::Fuse::Controls::TextEdit* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property New(Fuse.Controls.TextEdit obj) :804
void FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property__New1_fn(::g::Fuse::Controls::TextEdit* obj, FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property::New1(obj);
}

// protected override sealed string OnGet() :805
void FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property__OnGet_fn(FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property* __this, uString** __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->PlaceholderText(), void();
}

// protected override sealed void OnSet(string v, object origin) :806
void FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property__OnSet_fn(FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property", "OnSet(string,object)");
    uPtr(__this->_obj)->PlaceholderText(v);
}

// public FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property(Fuse.Controls.TextEdit obj) [instance] :804
void FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property::ctor_1(::g::Fuse::Controls::TextEdit* obj)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property", ".ctor(Fuse.Controls.TextEdit)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property New(Fuse.Controls.TextEdit obj) [static] :804
FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property* FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property::New1(::g::Fuse::Controls::TextEdit* obj)
{
    FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property* obj1 = (FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property*)uNew(FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderText_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(713)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property :713
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property__OnSet_fn;
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) :716
void FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property__ctor_1_fn(FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) :716
void FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :717
void FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property__OnGet_fn(FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :718
void FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property__OnSet_fn(FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) [instance] :716
void FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property::ctor_1(::g::Fuse::Drawing::SolidColor* obj)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property", ".ctor(Fuse.Drawing.SolidColor)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) [static] :716
FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property* FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj)
{
    FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property* obj1 = (FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property*)uNew(FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(815)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingStroke_float_Width_Property :815
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseDrawingStroke_float_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingStroke_float_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseDrawingStroke_float_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseDrawingStroke_float_Width_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseDrawingStroke_float_Width_Property__OnSet_fn;
    ::TYPES[7] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingStroke_float_Width_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseDrawingStroke_float_Width_Property(Fuse.Drawing.Stroke obj) :818
void FuseBasicTheme_FuseDrawingStroke_float_Width_Property__ctor_1_fn(FuseBasicTheme_FuseDrawingStroke_float_Width_Property* __this, ::g::Fuse::Drawing::Stroke* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseDrawingStroke_float_Width_Property New(Fuse.Drawing.Stroke obj) :818
void FuseBasicTheme_FuseDrawingStroke_float_Width_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, FuseBasicTheme_FuseDrawingStroke_float_Width_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingStroke_float_Width_Property::New1(obj);
}

// protected override sealed float OnGet() :819
void FuseBasicTheme_FuseDrawingStroke_float_Width_Property__OnGet_fn(FuseBasicTheme_FuseDrawingStroke_float_Width_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingStroke_float_Width_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// protected override sealed void OnSet(float v, object origin) :820
void FuseBasicTheme_FuseDrawingStroke_float_Width_Property__OnSet_fn(FuseBasicTheme_FuseDrawingStroke_float_Width_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingStroke_float_Width_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public FuseBasicTheme_FuseDrawingStroke_float_Width_Property(Fuse.Drawing.Stroke obj) [instance] :818
void FuseBasicTheme_FuseDrawingStroke_float_Width_Property::ctor_1(::g::Fuse::Drawing::Stroke* obj)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingStroke_float_Width_Property", ".ctor(Fuse.Drawing.Stroke)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingStroke_float_Width_Property New(Fuse.Drawing.Stroke obj) [static] :818
FuseBasicTheme_FuseDrawingStroke_float_Width_Property* FuseBasicTheme_FuseDrawingStroke_float_Width_Property::New1(::g::Fuse::Drawing::Stroke* obj)
{
    FuseBasicTheme_FuseDrawingStroke_float_Width_Property* obj1 = (FuseBasicTheme_FuseDrawingStroke_float_Width_Property*)uNew(FuseBasicTheme_FuseDrawingStroke_float_Width_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(720)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property :720
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__OnSet_fn;
    ::TYPES[8] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetFields(2,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property(Fuse.Effects.DropShadow obj) :723
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__ctor_1_fn(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* __this, ::g::Fuse::Effects::DropShadow* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property New(Fuse.Effects.DropShadow obj) :723
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :724
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__OnGet_fn(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :725
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property__OnSet_fn(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property(Fuse.Effects.DropShadow obj) [instance] :723
void FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property::ctor_1(::g::Fuse::Effects::DropShadow* obj)
{
    uStackFrame __("FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property", ".ctor(Fuse.Effects.DropShadow)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property New(Fuse.Effects.DropShadow obj) [static] :723
FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property::New1(::g::Fuse::Effects::DropShadow* obj)
{
    FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property* obj1 = (FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property*)uNew(FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(843)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_float_Height_Property :843
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseElementsElement_float_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_float_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_float_Height_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseElementsElement_float_Height_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseElementsElement_float_Height_Property__OnSet_fn;
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseBasicTheme_FuseElementsElement_float_Height_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseElementsElement_float_Height_Property(Fuse.Elements.Element obj) :846
void FuseBasicTheme_FuseElementsElement_float_Height_Property__ctor_1_fn(FuseBasicTheme_FuseElementsElement_float_Height_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseElementsElement_float_Height_Property New(Fuse.Elements.Element obj) :846
void FuseBasicTheme_FuseElementsElement_float_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, FuseBasicTheme_FuseElementsElement_float_Height_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_float_Height_Property::New1(obj);
}

// protected override sealed float OnGet() :847
void FuseBasicTheme_FuseElementsElement_float_Height_Property__OnGet_fn(FuseBasicTheme_FuseElementsElement_float_Height_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Height_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Height(), void();
}

// protected override sealed void OnSet(float v, object origin) :848
void FuseBasicTheme_FuseElementsElement_float_Height_Property__OnSet_fn(FuseBasicTheme_FuseElementsElement_float_Height_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Height_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Height(v_);
}

// public FuseBasicTheme_FuseElementsElement_float_Height_Property(Fuse.Elements.Element obj) [instance] :846
void FuseBasicTheme_FuseElementsElement_float_Height_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Height_Property", ".ctor(Fuse.Elements.Element)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_float_Height_Property New(Fuse.Elements.Element obj) [static] :846
FuseBasicTheme_FuseElementsElement_float_Height_Property* FuseBasicTheme_FuseElementsElement_float_Height_Property::New1(::g::Fuse::Elements::Element* obj)
{
    FuseBasicTheme_FuseElementsElement_float_Height_Property* obj1 = (FuseBasicTheme_FuseElementsElement_float_Height_Property*)uNew(FuseBasicTheme_FuseElementsElement_float_Height_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(836)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_float_Opacity_Property :836
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseElementsElement_float_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_float_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_float_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseElementsElement_float_Opacity_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseElementsElement_float_Opacity_Property__OnSet_fn;
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseBasicTheme_FuseElementsElement_float_Opacity_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseElementsElement_float_Opacity_Property(Fuse.Elements.Element obj) :839
void FuseBasicTheme_FuseElementsElement_float_Opacity_Property__ctor_1_fn(FuseBasicTheme_FuseElementsElement_float_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseElementsElement_float_Opacity_Property New(Fuse.Elements.Element obj) :839
void FuseBasicTheme_FuseElementsElement_float_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, FuseBasicTheme_FuseElementsElement_float_Opacity_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_float_Opacity_Property::New1(obj);
}

// protected override sealed float OnGet() :840
void FuseBasicTheme_FuseElementsElement_float_Opacity_Property__OnGet_fn(FuseBasicTheme_FuseElementsElement_float_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Opacity_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// protected override sealed void OnSet(float v, object origin) :841
void FuseBasicTheme_FuseElementsElement_float_Opacity_Property__OnSet_fn(FuseBasicTheme_FuseElementsElement_float_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Opacity_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Opacity(v_);
}

// public FuseBasicTheme_FuseElementsElement_float_Opacity_Property(Fuse.Elements.Element obj) [instance] :839
void FuseBasicTheme_FuseElementsElement_float_Opacity_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Opacity_Property", ".ctor(Fuse.Elements.Element)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_float_Opacity_Property New(Fuse.Elements.Element obj) [static] :839
FuseBasicTheme_FuseElementsElement_float_Opacity_Property* FuseBasicTheme_FuseElementsElement_float_Opacity_Property::New1(::g::Fuse::Elements::Element* obj)
{
    FuseBasicTheme_FuseElementsElement_float_Opacity_Property* obj1 = (FuseBasicTheme_FuseElementsElement_float_Opacity_Property*)uNew(FuseBasicTheme_FuseElementsElement_float_Opacity_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(822)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_float_Width_Property :822
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseElementsElement_float_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_float_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_float_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseElementsElement_float_Width_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseElementsElement_float_Width_Property__OnSet_fn;
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseBasicTheme_FuseElementsElement_float_Width_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseElementsElement_float_Width_Property(Fuse.Elements.Element obj) :825
void FuseBasicTheme_FuseElementsElement_float_Width_Property__ctor_1_fn(FuseBasicTheme_FuseElementsElement_float_Width_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseElementsElement_float_Width_Property New(Fuse.Elements.Element obj) :825
void FuseBasicTheme_FuseElementsElement_float_Width_Property__New1_fn(::g::Fuse::Elements::Element* obj, FuseBasicTheme_FuseElementsElement_float_Width_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_float_Width_Property::New1(obj);
}

// protected override sealed float OnGet() :826
void FuseBasicTheme_FuseElementsElement_float_Width_Property__OnGet_fn(FuseBasicTheme_FuseElementsElement_float_Width_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Width_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// protected override sealed void OnSet(float v, object origin) :827
void FuseBasicTheme_FuseElementsElement_float_Width_Property__OnSet_fn(FuseBasicTheme_FuseElementsElement_float_Width_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Width_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public FuseBasicTheme_FuseElementsElement_float_Width_Property(Fuse.Elements.Element obj) [instance] :825
void FuseBasicTheme_FuseElementsElement_float_Width_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_float_Width_Property", ".ctor(Fuse.Elements.Element)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_float_Width_Property New(Fuse.Elements.Element obj) [static] :825
FuseBasicTheme_FuseElementsElement_float_Width_Property* FuseBasicTheme_FuseElementsElement_float_Width_Property::New1(::g::Fuse::Elements::Element* obj)
{
    FuseBasicTheme_FuseElementsElement_float_Width_Property* obj1 = (FuseBasicTheme_FuseElementsElement_float_Width_Property*)uNew(FuseBasicTheme_FuseElementsElement_float_Width_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(794)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property :794
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property__OnSet_fn;
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property(Fuse.Node obj) :797
void FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property__ctor_1_fn(FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property* __this, ::g::Fuse::Node* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property New(Fuse.Node obj) :797
void FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property__New1_fn(::g::Fuse::Node* obj, FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property::New1(obj);
}

// protected override sealed bool OnGet() :798
void FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property__OnGet_fn(FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property* __this, bool* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property", "OnGet()");
    return *__retval = ::g::Fuse::Input::Focus::IsFocusable(__this->_obj), void();
}

// protected override sealed void OnSet(bool v, object origin) :799
void FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property__OnSet_fn(FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property", "OnSet(bool,object)");
    bool v_ = *v;
    ::g::Fuse::Input::Focus::SetIsFocusable(__this->_obj, v_);
}

// public FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property(Fuse.Node obj) [instance] :797
void FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property::ctor_1(::g::Fuse::Node* obj)
{
    uStackFrame __("FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property", ".ctor(Fuse.Node)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property New(Fuse.Node obj) [static] :797
FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property* FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property::New1(::g::Fuse::Node* obj)
{
    FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property* obj1 = (FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property*)uNew(FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(829)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_float_X_Property :829
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTranslation_float_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTranslation_float_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseTranslation_float_X_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseTranslation_float_X_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseTranslation_float_X_Property__OnSet_fn;
    ::TYPES[10] = ::g::Fuse::Translation_typeof();
    type->SetFields(2,
        ::g::Fuse::Translation_typeof(), offsetof(::g::FuseBasicTheme_FuseTranslation_float_X_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseTranslation_float_X_Property(Fuse.Translation obj) :832
void FuseBasicTheme_FuseTranslation_float_X_Property__ctor_1_fn(FuseBasicTheme_FuseTranslation_float_X_Property* __this, ::g::Fuse::Translation* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseTranslation_float_X_Property New(Fuse.Translation obj) :832
void FuseBasicTheme_FuseTranslation_float_X_Property__New1_fn(::g::Fuse::Translation* obj, FuseBasicTheme_FuseTranslation_float_X_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTranslation_float_X_Property::New1(obj);
}

// protected override sealed float OnGet() :833
void FuseBasicTheme_FuseTranslation_float_X_Property__OnGet_fn(FuseBasicTheme_FuseTranslation_float_X_Property* __this, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseTranslation_float_X_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->X(), void();
}

// protected override sealed void OnSet(float v, object origin) :834
void FuseBasicTheme_FuseTranslation_float_X_Property__OnSet_fn(FuseBasicTheme_FuseTranslation_float_X_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseTranslation_float_X_Property", "OnSet(float,object)");
    float v_ = *v;
    uPtr(__this->_obj)->X(v_);
}

// public FuseBasicTheme_FuseTranslation_float_X_Property(Fuse.Translation obj) [instance] :832
void FuseBasicTheme_FuseTranslation_float_X_Property::ctor_1(::g::Fuse::Translation* obj)
{
    uStackFrame __("FuseBasicTheme_FuseTranslation_float_X_Property", ".ctor(Fuse.Translation)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseTranslation_float_X_Property New(Fuse.Translation obj) [static] :832
FuseBasicTheme_FuseTranslation_float_X_Property* FuseBasicTheme_FuseTranslation_float_X_Property::New1(::g::Fuse::Translation* obj)
{
    FuseBasicTheme_FuseTranslation_float_X_Property* obj1 = (FuseBasicTheme_FuseTranslation_float_X_Property*)uNew(FuseBasicTheme_FuseTranslation_float_X_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(743)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property :743
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property__OnSet_fn;
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), offsetof(::g::FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property(Fuse.Triggers.Actions.TriggerAction obj) :746
void FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property__ctor_1_fn(FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property* __this, ::g::Fuse::Triggers::Actions::TriggerAction* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property New(Fuse.Triggers.Actions.TriggerAction obj) :746
void FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property__New1_fn(::g::Fuse::Triggers::Actions::TriggerAction* obj, FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property::New1(obj);
}

// protected override sealed bool OnGet() :747
void FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property__OnGet_fn(FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property* __this, bool* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// protected override sealed void OnSet(bool v, object origin) :748
void FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property__OnSet_fn(FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->IsActive(v_);
}

// public FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property(Fuse.Triggers.Actions.TriggerAction obj) [instance] :746
void FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property::ctor_1(::g::Fuse::Triggers::Actions::TriggerAction* obj)
{
    uStackFrame __("FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property", ".ctor(Fuse.Triggers.Actions.TriggerAction)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property New(Fuse.Triggers.Actions.TriggerAction obj) [static] :746
FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property* FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property::New1(::g::Fuse::Triggers::Actions::TriggerAction* obj)
{
    FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property* obj1 = (FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property*)uNew(FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsActive_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.BasicTheme\0.24.7\.uno\$.uno(850)
// ---------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property :850
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn;
    ::TYPES[12] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property, _obj), 0);
    return type;
}

// public FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) :853
void FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property__ctor_1_fn(FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj)
{
    __this->ctor_1(obj);
}

// public FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) :853
void FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :854
void FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn(FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :855
void FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn(FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) [instance] :853
void FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property::ctor_1(::g::Fuse::Triggers::WhileBool* obj)
{
    uStackFrame __("FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property", ".ctor(Fuse.Triggers.WhileBool)");
    ctor_();
    _obj = obj;
}

// public FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) [static] :853
FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property* FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj)
{
    FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property* obj1 = (FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property*)uNew(FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\.uno\package
// ----------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::ImageElementDrawcb6f1923_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[10/*"uniform mat...*/], ::STRINGS[11/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseControls_bundle::SolidRectangle5950675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[14/*"uniform mat...*/], ::STRINGS[15/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::SolidRectangle5951675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[16/*"uniform mat...*/], ::STRINGS[17/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[21/*"l"*/]));
    FuseControls_bundle::SolidRectangle5953675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[22/*"uniform mat...*/], ::STRINGS[23/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[25/*"n"*/]));
    FuseControls_bundle::Viewport2da28930_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/]));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    ::STRINGS[10] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (a * c) + d;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[11] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, g) * e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[15] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[16] = uString::Const("uniform mat4 h, b;\n"
        "uniform vec2 c, d, e, i;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n"
        "    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("uniform float f, g;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(l, vec2(k, 0.5));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[22] = uString::Const("uniform mat4 l, c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    m = ((((d * (false ? vec2(a.x, float(1) - a.y) : a)) - e) / f) * g) + h;\n"
        "    gl_Position = c * (l * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[23] = uString::Const("uniform vec4 i;\n"
        "uniform float j, k;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = (b ? vec4(float(0)) : texture2D(n, m)) * i;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j) * k;\n"
        "}\n"
        "");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[25] = uString::Const("n");
    ::STRINGS[26] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = false ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::ImageElementDrawcb6f1923_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle5950675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle5951675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle5953675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewport2da28930_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ImageElementDrawcb6f1923", 0),
        new uField("SolidRectangle5950675f", 1),
        new uField("SolidRectangle5951675f", 2),
        new uField("SolidRectangle5953675f", 3),
        new uField("Viewport2da28930", 4));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::ImageElementDrawcb6f1923_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle5950675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle5951675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle5953675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewport2da28930_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\.uno\$.uno(265)
// -------------------------------------------------------------------

// internal sealed class FuseControls_FuseDrawingSolidColor_float4_Color_Property :265
// {
::g::Uno::UX::Property_type* FuseControls_FuseDrawingSolidColor_float4_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseControls_FuseDrawingSolidColor_float4_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseControls_FuseDrawingSolidColor_float4_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseControls_FuseDrawingSolidColor_float4_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseControls_FuseDrawingSolidColor_float4_Color_Property__OnSet_fn;
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseControls_FuseDrawingSolidColor_float4_Color_Property, _obj), 0);
    return type;
}

// public FuseControls_FuseDrawingSolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) :268
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__ctor_1_fn(FuseControls_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj)
{
    __this->ctor_1(obj);
}

// public FuseControls_FuseDrawingSolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) :268
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, FuseControls_FuseDrawingSolidColor_float4_Color_Property** __retval)
{
    *__retval = FuseControls_FuseDrawingSolidColor_float4_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :269
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__OnGet_fn(FuseControls_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControls_FuseDrawingSolidColor_float4_Color_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :270
void FuseControls_FuseDrawingSolidColor_float4_Color_Property__OnSet_fn(FuseControls_FuseDrawingSolidColor_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControls_FuseDrawingSolidColor_float4_Color_Property", "OnSet(float4,object)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public FuseControls_FuseDrawingSolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) [instance] :268
void FuseControls_FuseDrawingSolidColor_float4_Color_Property::ctor_1(::g::Fuse::Drawing::SolidColor* obj)
{
    uStackFrame __("FuseControls_FuseDrawingSolidColor_float4_Color_Property", ".ctor(Fuse.Drawing.SolidColor)");
    ctor_();
    _obj = obj;
}

// public FuseControls_FuseDrawingSolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) [static] :268
FuseControls_FuseDrawingSolidColor_float4_Color_Property* FuseControls_FuseDrawingSolidColor_float4_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj)
{
    FuseControls_FuseDrawingSolidColor_float4_Color_Property* obj1 = (FuseControls_FuseDrawingSolidColor_float4_Color_Property*)uNew(FuseControls_FuseDrawingSolidColor_float4_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\.uno\$.uno(258)
// -------------------------------------------------------------------

// internal sealed class FuseControls_FuseNode_bool_IsEnabled_Property :258
// {
::g::Uno::UX::Property_type* FuseControls_FuseNode_bool_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseControls_FuseNode_bool_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseControls_FuseNode_bool_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseControls_FuseNode_bool_IsEnabled_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseControls_FuseNode_bool_IsEnabled_Property__OnSet_fn;
    ::TYPES[13] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::FuseControls_FuseNode_bool_IsEnabled_Property, _obj), 0);
    return type;
}

// public FuseControls_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) :261
void FuseControls_FuseNode_bool_IsEnabled_Property__ctor_1_fn(FuseControls_FuseNode_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj)
{
    __this->ctor_1(obj);
}

// public FuseControls_FuseNode_bool_IsEnabled_Property New(Fuse.Node obj) :261
void FuseControls_FuseNode_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, FuseControls_FuseNode_bool_IsEnabled_Property** __retval)
{
    *__retval = FuseControls_FuseNode_bool_IsEnabled_Property::New1(obj);
}

// protected override sealed bool OnGet() :262
void FuseControls_FuseNode_bool_IsEnabled_Property__OnGet_fn(FuseControls_FuseNode_bool_IsEnabled_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControls_FuseNode_bool_IsEnabled_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// protected override sealed void OnSet(bool v, object origin) :263
void FuseControls_FuseNode_bool_IsEnabled_Property__OnSet_fn(FuseControls_FuseNode_bool_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControls_FuseNode_bool_IsEnabled_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public FuseControls_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) [instance] :261
void FuseControls_FuseNode_bool_IsEnabled_Property::ctor_1(::g::Fuse::Node* obj)
{
    uStackFrame __("FuseControls_FuseNode_bool_IsEnabled_Property", ".ctor(Fuse.Node)");
    ctor_();
    _obj = obj;
}

// public FuseControls_FuseNode_bool_IsEnabled_Property New(Fuse.Node obj) [static] :261
FuseControls_FuseNode_bool_IsEnabled_Property* FuseControls_FuseNode_bool_IsEnabled_Property::New1(::g::Fuse::Node* obj)
{
    FuseControls_FuseNode_bool_IsEnabled_Property* obj1 = (FuseControls_FuseNode_bool_IsEnabled_Property*)uNew(FuseControls_FuseNode_bool_IsEnabled_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\FuseCore\0.24.7\.uno\package
// -----------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpers53a11bf4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform vec...*/], ::STRINGS[29/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/]));
    FuseCore_bundle::OpenSansLight41b7729b_ = ::g::Uno::BundleFile::New1(::STRINGS[30/*"opensans-li...*/]);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    ::STRINGS[28] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[29] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[30] = uString::Const("opensans-light-1d1a1a95.ttf");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpers53a11bf4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::OpenSansLight41b7729b_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("DrawHelpers53a11bf4", 0),
        new uField("OpenSansLight41b7729b", 1));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpers53a11bf4_;
uSStrong< ::g::Uno::BundleFile*> FuseCore_bundle::OpenSansLight41b7729b_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Drawing\0.24.7\.uno\package
// ---------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawableccd93376_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[31/*"attribute v...*/], ::STRINGS[32/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    ::STRINGS[31] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[32] = uString::Const("uniform float d[b], e;\n"
        "uniform vec4 f[c];\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 h(vec2 i){\n"
        "    float j = d[0] + (e * i.x);\n"
        "    vec4 k = f[0];\n"
        "\n"
        "    for (int l = 0; l < (b - 1); l++)\n"
        "    {\n"
        "        float m = d[l];\n"
        "        float n = d[l + 1];\n"
        "        vec4 o = f[l + 1];\n"
        "        k = mix(k, o, smoothstep(m, n, j));\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h(g);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawableccd93376_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawableccd93376", 0));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawableccd93376_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.24.7\.uno\package
// ------------------------------------------------------------------------

// public static generated class FuseDrawingPolygons_bundle :0
// {
// static FuseDrawingPolygons_bundle() :0
static void FuseDrawingPolygons_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPolygons_bundle::Border102c669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[33/*"uniform mat...*/], ::STRINGS[34/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseDrawingPolygons_bundle::Border102d669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[24/*"k"*/]));
    FuseDrawingPolygons_bundle::Border102f669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[37/*"uniform mat...*/], ::STRINGS[38/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[39/*"m"*/]));
    FuseDrawingPolygons_bundle::Border1032669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform mat...*/], ::STRINGS[41/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable91a038cd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[42/*"uniform mat...*/], ::STRINGS[15/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform mat...*/], ::STRINGS[44/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawableeef8c432_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[45/*"uniform mat...*/], ::STRINGS[46/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[20/*"j"*/]));
}

uClassType* FuseDrawingPolygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPolygons_bundle", options);
    type->fp_cctor_ = FuseDrawingPolygons_bundle__cctor__fn;
    ::STRINGS[33] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "uniform float d;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 e;\n"
        "\n"
        "vec4 f(vec2 g, mat4 h){\n"
        "    return vec4(((g.x * h[0].x) + (g.y * h[1].x)) + h[3].x, ((g.x * h[0].y) + (g.y * h[1].y)) + h[3].y, ((g.x * h[0].z) + (g.y * h[1].z)) + h[3].z, ((g.x * h[0].w) + (g.y * h[1].w)) + h[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    e = vec4((g.xyz * g.w) * d, g.w * d);\n"
        "    gl_Position = f(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[34] = uString::Const("varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[35] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "vec4 l(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    j = m(a.xy / c, g, h);\n"
        "    gl_Position = l(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[36] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D k;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(k, vec2(j, 0.5)) * i;\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f);\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[37] = uString::Const("uniform mat4 c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 k;\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    l = ((((d * (a.xy / d)) - e) / f) * g) + h;\n"
        "    gl_Position = n(a.xy, c);\n"
        "}\n"
        "");
    ::STRINGS[38] = uString::Const("uniform vec4 i;\n"
        "uniform float j;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec4 k;\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = ((b ? vec4(float(0)) : texture2D(m, l)) * i) * k;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[39] = uString::Const("m");
    ::STRINGS[40] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 d;\n"
        "\n"
        "vec4 e(vec2 f, mat4 g){\n"
        "    return vec4(((f.x * g[0].x) + (f.y * g[1].x)) + g[3].x, ((f.x * g[0].y) + (f.y * g[1].y)) + g[3].y, ((f.x * g[0].z) + (f.y * g[1].z)) + g[3].z, ((f.x * g[0].w) + (f.y * g[1].w)) + g[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    d = vec4((f.xyz * f.w) * 1.0, f.w);\n"
        "    gl_Position = e(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[41] = uString::Const("varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = d;\n"
        "}\n"
        "");
    ::STRINGS[42] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "vec4 d(vec2 e, mat4 f){\n"
        "    return vec4(((e.x * f[0].x) + (e.y * f[1].x)) + f[3].x, ((e.x * f[0].y) + (e.y * f[1].y)) + f[3].y, ((e.x * f[0].z) + (e.y * f[1].z)) + f[3].z, ((e.x * f[0].w) + (e.y * f[1].w)) + f[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d(a, b);\n"
        "}\n"
        "");
    ::STRINGS[15] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[43] = uString::Const("uniform mat4 c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = ((((d * (a / d)) - e) / f) * g) + h;\n"
        "    gl_Position = m(a, c);\n"
        "}\n"
        "");
    ::STRINGS[44] = uString::Const("uniform vec4 i;\n"
        "uniform float j;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = (b ? vec4(float(0)) : texture2D(l, k)) * i;\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * j, n.w * j);\n"
        "}\n"
        "");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[45] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "vec4 k(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "float l(vec2 m, vec2 n, float o){\n"
        "    vec2 p = (m * c) - d;\n"
        "    float q = dot(p, n) / o;\n"
        "    return (q - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = l(a / c, g, h);\n"
        "    gl_Position = k(a, b);\n"
        "}\n"
        "");
    ::STRINGS[46] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D j;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = texture2D(j, vec2(i, 0.5));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border102c669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border102d669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border102f669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border1032669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable91a038cd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawableeef8c432_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Border102c669d", 0),
        new uField("Border102d669d", 1),
        new uField("Border102f669d", 2),
        new uField("Border1032669d", 3),
        new uField("PolygonDrawable91a038cd", 4),
        new uField("PolygonDrawablea9a9dafc", 5),
        new uField("PolygonDrawableeef8c432", 6));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border102c669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border102d669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border102f669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border1032669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable91a038cd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawableeef8c432_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.24.7\.uno\package
// --------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle08de7d46_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform vec...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[49/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle0dcbf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform vec...*/], ::STRINGS[51/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[56/*"t"*/], ::STRINGS[57/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle205f8541_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform vec...*/], ::STRINGS[59/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[54/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle3e0df8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform vec...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle54d7f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle5628667c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform vec...*/], ::STRINGS[64/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle65ae6e77_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform vec...*/], ::STRINGS[66/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[67/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle663708ab_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[68/*"uniform vec...*/], ::STRINGS[69/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[55/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle6b9cf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform vec...*/], ::STRINGS[70/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[56/*"t"*/], ::STRINGS[57/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle85b410a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle940fd686_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform vec...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[54/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle940fd687_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[76/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[67/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle9aeeb57e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[78/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleb380f1e1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform vec...*/], ::STRINGS[79/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlec306f9dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform vec...*/], ::STRINGS[80/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[67/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlec38f9410_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[68/*"uniform vec...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[55/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circlec977f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[82/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[67/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlee03cf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[83/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circleecb159f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[85/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circleecb259f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circleecb759f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[87/*"uniform vec...*/], ::STRINGS[88/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlef701f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[90/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[56/*"t"*/]));
    FuseDrawingPrimitives_bundle::Circlef84740e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[91/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlef8cfdb17_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[92/*"uniform vec...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/]));
    FuseDrawingPrimitives_bundle::Rectangle03d615cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[94/*"uniform flo...*/], ::STRINGS[95/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[96/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectangle311b5cce_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[97/*"uniform flo...*/], ::STRINGS[98/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle4924ff01_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[101/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle766a4604_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform flo...*/], ::STRINGS[103/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8e73e833_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[105/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[101/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea67d8a66_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[107/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangled3c2d169_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform flo...*/], ::STRINGS[109/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[56/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangleebcc739c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[110/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/]));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    ::STRINGS[47] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 q(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "float r(vec2 s, vec2 t, float u){\n"
        "    vec2 v = (s * e) - f;\n"
        "    float w = dot(v, t) / u;\n"
        "    return (w - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = a * b;\n"
        "    vec2 t = s + c;\n"
        "    n = r(t / e, l, m);\n"
        "    o = s;\n"
        "    gl_Position = q(t, d);\n"
        "}\n"
        "");
    ::STRINGS[48] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = texture2D(p, vec2(n, 0.5));\n"
        "    vec4 t = vec4(s.xyz, s.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((t.xyz * t.w) * k, t.w * k);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[39] = uString::Const("m");
    ::STRINGS[49] = uString::Const("p");
    ::STRINGS[50] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "vec4 x(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * c;\n"
        "    vec2 z = y + d;\n"
        "    u = ((((f * (z / f)) - g) / h) * i) + j;\n"
        "    v = y;\n"
        "    gl_Position = x(z, e);\n"
        "}\n"
        "");
    ::STRINGS[51] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((min(dot(v, r), min(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("n");
    ::STRINGS[52] = uString::Const("o");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[54] = uString::Const("r");
    ::STRINGS[55] = uString::Const("s");
    ::STRINGS[56] = uString::Const("t");
    ::STRINGS[57] = uString::Const("w");
    ::STRINGS[58] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 s(vec2 t, mat4 u){\n"
        "    return vec4(((t.x * u[0].x) + (t.y * u[1].x)) + u[3].x, ((t.x * u[0].y) + (t.y * u[1].y)) + u[3].y, ((t.x * u[0].z) + (t.y * u[1].z)) + u[3].z, ((t.x * u[0].w) + (t.y * u[1].w)) + u[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * c;\n"
        "    vec2 u = t + d;\n"
        "    p = ((((f * (u / f)) - g) / h) * i) + j;\n"
        "    q = t;\n"
        "    gl_Position = s(u, e);\n"
        "}\n"
        "");
    ::STRINGS[59] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = (b ? vec4(float(0)) : texture2D(r, p)) * k;\n"
        "    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((length(q) - l) * m) * n), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o);\n"
        "}\n"
        "");
    ::STRINGS[60] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    m = o;\n"
        "    gl_Position = n(o + c, d);\n"
        "}\n"
        "");
    ::STRINGS[61] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * l, o.w * l);\n"
        "}\n"
        "");
    ::STRINGS[62] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    p = r;\n"
        "    gl_Position = q(r + c, d);\n"
        "}\n"
        "");
    ::STRINGS[63] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[64] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[65] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "vec4 v(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * c;\n"
        "    vec2 x = w + d;\n"
        "    s = ((((f * (x / f)) - g) / h) * i) + j;\n"
        "    t = w;\n"
        "    gl_Position = v(x, e);\n"
        "}\n"
        "");
    ::STRINGS[66] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[67] = uString::Const("u");
    ::STRINGS[68] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "vec4 t(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "float u(vec2 v, vec2 w, float x){\n"
        "    vec2 y = (v * e) - f;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * b;\n"
        "    vec2 w = v + c;\n"
        "    q = u(w / e, l, m);\n"
        "    r = v;\n"
        "    gl_Position = t(w, d);\n"
        "}\n"
        "");
    ::STRINGS[69] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((max(dot(v, r), max(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 l(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    k = m;\n"
        "    gl_Position = l(m + c, d);\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * j, m.w * j);\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "vec4 s(vec2 u, mat4 v){\n"
        "    return vec4(((u.x * v[0].x) + (u.y * v[1].x)) + v[3].x, ((u.x * v[0].y) + (u.y * v[1].y)) + v[3].y, ((u.x * v[0].z) + (u.y * v[1].z)) + v[3].z, ((u.x * v[0].w) + (u.y * v[1].w)) + v[3].w);\n"
        "}\n"
        "\n"
        "float t(vec2 u, vec2 v, float w){\n"
        "    vec2 x = (u * e) - f;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    p = t(v / e, n, o);\n"
        "    q = u;\n"
        "    gl_Position = s(v, d);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = texture2D(r, vec2(p, 0.5));\n"
        "    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((v.xyz * v.w) * m, v.w * m);\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "vec4 v(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "float w(vec2 x, vec2 y, float z){\n"
        "    vec2 A = (x * e) - f;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = a * b;\n"
        "    vec2 y = x + c;\n"
        "    s = w(y / e, n, o);\n"
        "    t = x;\n"
        "    gl_Position = v(y, d);\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    n = p;\n"
        "    gl_Position = o(p + c, d);\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[79] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = a * b;\n"
        "    o = q;\n"
        "    gl_Position = p(q + c, d);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    l = n;\n"
        "    gl_Position = m(n + c, d);\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * c;\n"
        "    vec2 w = v + d;\n"
        "    r = ((((f * (w / f)) - g) / h) * i) + j;\n"
        "    s = v;\n"
        "    gl_Position = u(w, e);\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = (b ? vec4(float(0)) : texture2D(t, r)) * k;\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((abs((length(s) - l) - m) - n) * o) * p), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * q, w.w * q);\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "vec4 k(vec2 l, mat4 m){\n"
        "    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    j = l;\n"
        "    gl_Position = k(l + c, d);\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 l = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((l.xyz * l.w) * 1.0, l.w);\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "vec4 y(vec2 z, mat4 A){\n"
        "    return vec4(((z.x * A[0].x) + (z.y * A[1].x)) + A[3].x, ((z.x * A[0].y) + (z.y * A[1].y)) + A[3].y, ((z.x * A[0].z) + (z.y * A[1].z)) + A[3].z, ((z.x * A[0].w) + (z.y * A[1].w)) + A[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    t = f[int(c)];\n"
        "    u = ((((i * (z / i)) - j) / k) * l) + m;\n"
        "    v = z;\n"
        "    w = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = y(z, h);\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q, r, s;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n"
        "    vec4 A = vec4(z.xyz, z.w * clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1)));\n"
        "    gl_FragColor = vec4((A.xyz * A.w) * s, A.w * s);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("x");
    ::STRINGS[97] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = q;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = p(q, g);\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, j, p;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "vec4 w(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "float x(vec2 y, vec2 z, float A){\n"
        "    vec2 B = (y * h) - i;\n"
        "    float C = dot(B, z) / A;\n"
        "    return (C - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = x(y / h, p, q);\n"
        "    t = y;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = w(y, g);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = texture2D(v, vec2(s, 0.5));\n"
        "    vec4 z = vec4(y.xyz, y.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("v");
    ::STRINGS[102] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = p;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = o(p, g);\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "vec4 w(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    r = f[int(c)];\n"
        "    s = ((((i * (x / i)) - j) / k) * l) + m;\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = w(x, h);\n"
        "}\n"
        "");
    ::STRINGS[105] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n"
        "    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1)));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * q, y.w * q);\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 r(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = s;\n"
        "    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = r(s, g);\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, j, n;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "float v(vec2 w, vec2 x, float y){\n"
        "    vec2 z = (w * h) - i;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = v(w / h, n, o);\n"
        "    r = w;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = u(w, g);\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(t, vec2(q, 0.5));\n"
        "    vec4 x = vec4(w.xyz, w.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = r;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = q(r, g);\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle08de7d46_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle0dcbf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle205f8541_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle3e0df8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle54d7f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle5628667c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle65ae6e77_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle663708ab_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle6b9cf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle85b410a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle940fd686_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle940fd687_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle9aeeb57e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleb380f1e1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlec306f9dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlec38f9410_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlec977f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee03cf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleecb159f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleecb259f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleecb759f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef701f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef84740e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef8cfdb17_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle03d615cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle311b5cce_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle4924ff01_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle766a4604_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8e73e833_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea67d8a66_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangled3c2d169_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleebcc739c_, uFieldFlagsStatic);
    type->Reflection.SetFields(32,
        new uField("Circle08de7d46", 0),
        new uField("Circle0dcbf8a6", 1),
        new uField("Circle205f8541", 2),
        new uField("Circle3e0df8a6", 3),
        new uField("Circle54d7f8a6", 4),
        new uField("Circle5628667c", 5),
        new uField("Circle65ae6e77", 6),
        new uField("Circle663708ab", 7),
        new uField("Circle6b9cf8a6", 8),
        new uField("Circle85b410a6", 9),
        new uField("Circle940fd686", 10),
        new uField("Circle940fd687", 11),
        new uField("Circle9aeeb57e", 12),
        new uField("Circleb380f1e1", 13),
        new uField("Circlec306f9dc", 14),
        new uField("Circlec38f9410", 15),
        new uField("Circlec977f8a6", 16),
        new uField("Circlee03cf8a6", 17),
        new uField("Circleecb159f0", 18),
        new uField("Circleecb259f0", 19),
        new uField("Circleecb759f0", 20),
        new uField("Circlef701f8a6", 21),
        new uField("Circlef84740e3", 22),
        new uField("Circlef8cfdb17", 23),
        new uField("Rectangle03d615cb", 24),
        new uField("Rectangle311b5cce", 25),
        new uField("Rectangle4924ff01", 26),
        new uField("Rectangle766a4604", 27),
        new uField("Rectangle8e73e833", 28),
        new uField("Rectanglea67d8a66", 29),
        new uField("Rectangled3c2d169", 30),
        new uField("Rectangleebcc739c", 31));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle08de7d46_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0dcbf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle205f8541_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle3e0df8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle54d7f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle5628667c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle65ae6e77_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle663708ab_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle6b9cf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle85b410a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle940fd686_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle940fd687_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle9aeeb57e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleb380f1e1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlec306f9dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlec38f9410_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlec977f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee03cf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleecb159f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleecb259f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleecb759f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef701f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef84740e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef8cfdb17_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle03d615cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle311b5cce_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle4924ff01_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle766a4604_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8e73e833_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea67d8a66_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangled3c2d169_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleebcc739c_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Effects\0.24.7\.uno\package
// ---------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitterec98f148_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform mat...*/], ::STRINGS[113/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::Blur289a5370_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform mat...*/], ::STRINGS[115/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"e"*/]));
    FuseEffects_bundle::Desaturate1f514108_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform mat...*/], ::STRINGS[117/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    FuseEffects_bundle::EffectHelpers0ae20243_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform vec...*/], ::STRINGS[119/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[39/*"m"*/]));
    FuseEffects_bundle::EffectHelpersa4726cf5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"attribute v...*/], ::STRINGS[121/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::EffectHelpersf4e3f746_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform vec...*/], ::STRINGS[123/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[56/*"t"*/]));
    FuseEffects_bundle::EffectHelpersf791727a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"attribute v...*/], ::STRINGS[125/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::Halftone1ff68c3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform mat...*/], ::STRINGS[127/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[53/*"q"*/]));
    FuseEffects_bundle::Mask85b813a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[129/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/]));
    FuseEffects_bundle::Maske38913a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[130/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/]));
    FuseEffects_bundle::Maskfa5313a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[131/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/]));
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    ::STRINGS[112] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[114] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 f = texture2D(e, d);\n"
        "    gl_FragColor = vec4(f.xyz / f.w, f.w);\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / g.w, g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[39] = uString::Const("m");
    ::STRINGS[120] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[56] = uString::Const("t");
    ::STRINGS[124] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[127] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[128] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    d = h;\n"
        "    e = vec2(h.x, float(1) - h.y);\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("uniform sampler2D f, g;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(f, d);\n"
        "    vec4 i = vec4(h.xyz / h.w, h.w);\n"
        "    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("uniform sampler2D f, g;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(f, d);\n"
        "    vec4 i = vec4(h.xyz / h.w, h.w);\n"
        "    vec4 j = texture2D(g, e);\n"
        "    gl_FragColor = vec4(i.xyz * j.xyz, i.w * j.w);\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("uniform sampler2D f, g;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(f, d);\n"
        "    vec4 i = vec4(h.xyz / h.w, h.w);\n"
        "    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).w);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitterec98f148_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blur289a5370_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate1f514108_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers0ae20243_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersa4726cf5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersf4e3f746_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersf791727a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone1ff68c3c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask85b813a2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maske38913a2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskfa5313a2_, uFieldFlagsStatic);
    type->Reflection.SetFields(11,
        new uField("Blitterec98f148", 0),
        new uField("Blur289a5370", 1),
        new uField("Desaturate1f514108", 2),
        new uField("EffectHelpers0ae20243", 3),
        new uField("EffectHelpersa4726cf5", 4),
        new uField("EffectHelpersf4e3f746", 5),
        new uField("EffectHelpersf791727a", 6),
        new uField("Halftone1ff68c3c", 7),
        new uField("Mask85b813a2", 8),
        new uField("Maske38913a2", 9),
        new uField("Maskfa5313a2", 10));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitterec98f148_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur289a5370_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate1f514108_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers0ae20243_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersa4726cf5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersf4e3f746_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersf791727a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone1ff68c3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask85b813a2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maske38913a2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskfa5313a2_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Elements\0.24.7\.uno\package
// ----------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper6627cb47_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform vec...*/], ::STRINGS[133/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[18/*"g"*/]));
    FuseElements_bundle::ElementBatch2ee7bdf7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[134/*"uniform mat...*/], ::STRINGS[135/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    FuseElements_bundle::Scale9Rectangle6cfacf09_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"uniform flo...*/], ::STRINGS[137/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[54/*"r"*/]));
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    ::STRINGS[132] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[133] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[134] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[135] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[136] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[137] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[39] = uString::Const("m");
    ::STRINGS[25] = uString::Const("n");
    ::STRINGS[52] = uString::Const("o");
    ::STRINGS[49] = uString::Const("p");
    ::STRINGS[54] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper6627cb47_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatch2ee7bdf7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle6cfacf09_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("CacheHelper6627cb47", 0),
        new uField("ElementBatch2ee7bdf7", 1),
        new uField("Scale9Rectangle6cfacf09", 2));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper6627cb47_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatch2ee7bdf7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle6cfacf09_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Entities\0.24.7\.uno\package
// ----------------------------------------------------------------

// public static generated class FuseEntities_bundle :0
// {
// static FuseEntities_bundle() :0
static void FuseEntities_bundle__cctor__fn(uType* __type)
{
    FuseEntities_bundle::Blur6e490521_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform vec...*/], ::STRINGS[139/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[13/*"h"*/]));
    FuseEntities_bundle::FindEdges5437027c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform vec...*/], ::STRINGS[141/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[25/*"n"*/]));
    FuseEntities_bundle::MeshBatchingEngine54fb35e2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[142/*"uniform mat...*/], ::STRINGS[143/*"uniform vec...*/], 3, 4, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[101/*"v"*/], ::STRINGS[57/*"w"*/], ::STRINGS[96/*"x"*/]));
    FuseEntities_bundle::MeshBatchingEnginee840d347_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[144/*"uniform mat...*/], ::STRINGS[145/*"uniform vec...*/], 3, 5, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[49/*"p"*/], ::STRINGS[53/*"q"*/], ::STRINGS[57/*"w"*/], ::STRINGS[96/*"x"*/], ::STRINGS[146/*"y"*/]));
    FuseEntities_bundle::MeshRenderer47c4cfe0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[147/*"uniform mat...*/], ::STRINGS[148/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/]));
    FuseEntities_bundle::MeshRendererb55bfadc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[149/*"uniform mat...*/], ::STRINGS[150/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseEntities_bundle::RenderToTexturea069a95b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[151/*"attribute v...*/], ::STRINGS[125/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
}

uClassType* FuseEntities_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEntities_bundle", options);
    type->fp_cctor_ = FuseEntities_bundle__cctor__fn;
    ::STRINGS[138] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 j = (i.xy * 0.5) + 0.5;\n"
        "    d = j + b;\n"
        "    e = j - b;\n"
        "    f = j + c;\n"
        "    g = j - c;\n"
        "    gl_Position = vec4(i, float(1));\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[140] = uString::Const("uniform vec2 b, c, d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2(a.x, 1.0 - a.y);\n"
        "    vec2 p = vec2(o.x, 1.0 - o.y);\n"
        "    i = p + b;\n"
        "    j = p + c;\n"
        "    k = p + d;\n"
        "    l = p + e;\n"
        "    m = p;\n"
        "    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n"
        "}\n"
        "");
    ::STRINGS[141] = uString::Const("uniform float f;\n"
        "uniform vec4 g, h;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 o = texture2D(n, m).xyz;\n"
        "    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n"
        "    gl_FragColor = (g * (1.0 - p)) + (h * p);\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[25] = uString::Const("n");
    ::STRINGS[142] = uString::Const("uniform mat4 o, l, p;\n"
        "uniform vec2 h, i;\n"
        "\n"
        "attribute vec3 a, d;\n"
        "attribute vec2 b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n"
        "    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n"
        "    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n"
        "    t = (b * h) + i;\n"
        "    u = (l * vec4(a, 1.)).xyz;\n"
        "    gl_Position = o * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[143] = uString::Const("uniform vec3 j, k, m;\n"
        "uniform float n;\n"
        "\n"
        "uniform sampler2D v, w, x;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n"
        "    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[39] = uString::Const("m");
    ::STRINGS[52] = uString::Const("o");
    ::STRINGS[49] = uString::Const("p");
    ::STRINGS[101] = uString::Const("v");
    ::STRINGS[57] = uString::Const("w");
    ::STRINGS[96] = uString::Const("x");
    ::STRINGS[144] = uString::Const("uniform mat4 i[16], q, m[16];\n"
        "uniform vec2 j, k;\n"
        "\n"
        "attribute vec3 a, e;\n"
        "attribute float b;\n"
        "attribute vec2 c;\n"
        "attribute vec4 d;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "mat3 z(mat3 A){\n"
        "    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n"
        "    r = A * d.xyz;\n"
        "    s = A * (cross(d.xyz, e) * d.w);\n"
        "    t = A * e;\n"
        "    u = (c * j) + k;\n"
        "    v = (i[int(b)] * vec4(a, 1.)).xyz;\n"
        "    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[145] = uString::Const("uniform vec3 l, n, o;\n"
        "uniform float p;\n"
        "\n"
        "uniform sampler2D w, x, y;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n"
        "    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[146] = uString::Const("y");
    ::STRINGS[147] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[148] = uString::Const("void main()\n"
        "{\n"
        "    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[149] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = c * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[150] = uString::Const("uniform vec4 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b;\n"
        "}\n"
        "");
    ::STRINGS[151] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::Blur6e490521_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::FindEdges5437027c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine54fb35e2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEnginee840d347_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRenderer47c4cfe0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRendererb55bfadc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::RenderToTexturea069a95b_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Blur6e490521", 0),
        new uField("FindEdges5437027c", 1),
        new uField("MeshBatchingEngine54fb35e2", 2),
        new uField("MeshBatchingEnginee840d347", 3),
        new uField("MeshRenderer47c4cfe0", 4),
        new uField("MeshRendererb55bfadc", 5),
        new uField("RenderToTexturea069a95b", 6));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::Blur6e490521_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::FindEdges5437027c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine54fb35e2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEnginee840d347_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRenderer47c4cfe0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRendererb55bfadc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::RenderToTexturea069a95b_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.iOS\0.24.7\.uno\package
// -----------------------------------------------------------

// public static generated class FuseiOS_bundle :0
// {
// static FuseiOS_bundle() :0
static void FuseiOS_bundle__cctor__fn(uType* __type)
{
    FuseiOS_bundle::Blitterb638ee0c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* FuseiOS_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseiOS_bundle", options);
    type->fp_cctor_ = FuseiOS_bundle__cctor__fn;
    ::STRINGS[152] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "vec4 g(vec2 h, mat4 i){\n"
        "    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = g(c + (a * b), d);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseiOS_bundle::Blitterb638ee0c_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blitterb638ee0c", 0));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseiOS_bundle::Blitterb638ee0c_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\.uno\package
// ----------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::es6promise5f9ed71d_ = ::g::Uno::BundleFile::New1(::STRINGS[153/*"es6-promise...*/]);
    FuseReactive_bundle::EventTargetaa45843c_ = ::g::Uno::BundleFile::New1(::STRINGS[154/*"eventtarget...*/]);
    FuseReactive_bundle::Fetch61247183_ = ::g::Uno::BundleFile::New1(::STRINGS[155/*"fetch-23823...*/]);
    FuseReactive_bundle::fetchfb7fd0d9_ = ::g::Uno::BundleFile::New1(::STRINGS[156/*"fetch-03440...*/]);
    FuseReactive_bundle::FetchJsoneac9198a_ = ::g::Uno::BundleFile::New1(::STRINGS[157/*"fetchjson-6...*/]);
    FuseReactive_bundle::Filecc62900c_ = ::g::Uno::BundleFile::New1(::STRINGS[158/*"file-4777cd...*/]);
    FuseReactive_bundle::FuseJSb2635b47_ = ::g::Uno::BundleFile::New1(::STRINGS[159/*"fusejs-3aa7...*/]);
    FuseReactive_bundle::localStorage1151a9ff_ = ::g::Uno::BundleFile::New1(::STRINGS[160/*"localstorag...*/]);
    FuseReactive_bundle::Observable61f9e91e_ = ::g::Uno::BundleFile::New1(::STRINGS[161/*"observable-...*/]);
    FuseReactive_bundle::SubscriberProxy839a85ef_ = ::g::Uno::BundleFile::New1(::STRINGS[162/*"subscriberp...*/]);
    FuseReactive_bundle::Window8c9a82ee_ = ::g::Uno::BundleFile::New1(::STRINGS[163/*"window-7a4e...*/]);
    FuseReactive_bundle::WindowBase64e1ba0ddd_ = ::g::Uno::BundleFile::New1(::STRINGS[164/*"windowbase6...*/]);
    FuseReactive_bundle::WindowTimers4c3bf21e_ = ::g::Uno::BundleFile::New1(::STRINGS[165/*"windowtimer...*/]);
    FuseReactive_bundle::XMLHttpRequest3556ba4b_ = ::g::Uno::BundleFile::New1(::STRINGS[166/*"xmlhttprequ...*/]);
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    ::STRINGS[153] = uString::Const("es6-promise-fadcfa3d.js");
    ::STRINGS[154] = uString::Const("eventtarget-bad495ca.js");
    ::STRINGS[155] = uString::Const("fetch-23823137.js");
    ::STRINGS[156] = uString::Const("fetch-0344003b.js");
    ::STRINGS[157] = uString::Const("fetchjson-642d38bf.js");
    ::STRINGS[158] = uString::Const("file-4777cd8e.js");
    ::STRINGS[159] = uString::Const("fusejs-3aa7f821.js");
    ::STRINGS[160] = uString::Const("localstorage-5669a5fc.js");
    ::STRINGS[161] = uString::Const("observable-1227c90e.js");
    ::STRINGS[162] = uString::Const("subscriberproxy-dd770f90.js");
    ::STRINGS[163] = uString::Const("window-7a4e8470.js");
    ::STRINGS[164] = uString::Const("windowbase64-22b97444.js");
    ::STRINGS[165] = uString::Const("windowtimers-5cb17573.js");
    ::STRINGS[166] = uString::Const("xmlhttprequest-c8cf891e.js");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promise5f9ed71d_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::EventTargetaa45843c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Fetch61247183_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::fetchfb7fd0d9_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::FetchJsoneac9198a_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Filecc62900c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::FuseJSb2635b47_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::localStorage1151a9ff_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observable61f9e91e_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::SubscriberProxy839a85ef_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Window8c9a82ee_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::WindowBase64e1ba0ddd_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::WindowTimers4c3bf21e_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::XMLHttpRequest3556ba4b_, uFieldFlagsStatic);
    type->Reflection.SetFields(14,
        new uField("es6promise5f9ed71d", 0),
        new uField("EventTargetaa45843c", 1),
        new uField("Fetch61247183", 2),
        new uField("fetchfb7fd0d9", 3),
        new uField("FetchJsoneac9198a", 4),
        new uField("Filecc62900c", 5),
        new uField("FuseJSb2635b47", 6),
        new uField("localStorage1151a9ff", 7),
        new uField("Observable61f9e91e", 8),
        new uField("SubscriberProxy839a85ef", 9),
        new uField("Window8c9a82ee", 10),
        new uField("WindowBase64e1ba0ddd", 11),
        new uField("WindowTimers4c3bf21e", 12),
        new uField("XMLHttpRequest3556ba4b", 13));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::es6promise5f9ed71d_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::EventTargetaa45843c_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::Fetch61247183_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::fetchfb7fd0d9_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::FetchJsoneac9198a_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::Filecc62900c_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::FuseJSb2635b47_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::localStorage1151a9ff_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::Observable61f9e91e_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::SubscriberProxy839a85ef_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::Window8c9a82ee_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::WindowBase64e1ba0ddd_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::WindowTimers4c3bf21e_;
uSStrong< ::g::Uno::BundleFile*> FuseReactive_bundle::XMLHttpRequest3556ba4b_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\package
// --------------------------------------------------------------

// public static generated class FuseThemes_bundle :0
// {
// static FuseThemes_bundle() :0
static void FuseThemes_bundle__cctor__fn(uType* __type)
{
    FuseThemes_bundle::RobotoRegular4fb13d0f_ = ::g::Uno::BundleFile::New1(::STRINGS[9/*"roboto-regu...*/]);
}

uClassType* FuseThemes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseThemes_bundle", options);
    type->fp_cctor_ = FuseThemes_bundle__cctor__fn;
    ::STRINGS[9] = uString::Const("roboto-regular-3d22e02e.ttf");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseThemes_bundle::RobotoRegular4fb13d0f_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("RobotoRegular4fb13d0f", 0));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> FuseThemes_bundle::RobotoRegular4fb13d0f_;
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(242)
// -----------------------------------------------------------------

// internal sealed class FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property :242
// {
::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property__OnSet_fn;
    ::TYPES[14] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property(Fuse.Controls.ScrollView obj) :245
void FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property__ctor_1_fn(FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollView* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj) :245
void FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property** __retval)
{
    *__retval = FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property::New1(obj);
}

// protected override sealed bool OnGet() :246
void FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property__OnGet_fn(FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property* __this, bool* __retval)
{
    uStackFrame __("FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// protected override sealed void OnSet(bool v, object origin) :247
void FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property__OnSet_fn(FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property(Fuse.Controls.ScrollView obj) [instance] :245
void FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property::ctor_1(::g::Fuse::Controls::ScrollView* obj)
{
    uStackFrame __("FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property", ".ctor(Fuse.Controls.ScrollView)");
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj) [static] :245
FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property* FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollView* obj)
{
    FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property* obj1 = (FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property*)uNew(FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(235)
// -----------------------------------------------------------------

// internal sealed class FuseThemes_FuseControlsScrollView_bool_UserScroll_Property :235
// {
::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_bool_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseControlsScrollView_bool_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseControlsScrollView_bool_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseControlsScrollView_bool_UserScroll_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseControlsScrollView_bool_UserScroll_Property__OnSet_fn;
    ::TYPES[14] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseThemes_FuseControlsScrollView_bool_UserScroll_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseControlsScrollView_bool_UserScroll_Property(Fuse.Controls.ScrollView obj) :238
void FuseThemes_FuseControlsScrollView_bool_UserScroll_Property__ctor_1_fn(FuseThemes_FuseControlsScrollView_bool_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseControlsScrollView_bool_UserScroll_Property New(Fuse.Controls.ScrollView obj) :238
void FuseThemes_FuseControlsScrollView_bool_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, FuseThemes_FuseControlsScrollView_bool_UserScroll_Property** __retval)
{
    *__retval = FuseThemes_FuseControlsScrollView_bool_UserScroll_Property::New1(obj);
}

// protected override sealed bool OnGet() :239
void FuseThemes_FuseControlsScrollView_bool_UserScroll_Property__OnGet_fn(FuseThemes_FuseControlsScrollView_bool_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseThemes_FuseControlsScrollView_bool_UserScroll_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// protected override sealed void OnSet(bool v, object origin) :240
void FuseThemes_FuseControlsScrollView_bool_UserScroll_Property__OnSet_fn(FuseThemes_FuseControlsScrollView_bool_UserScroll_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseThemes_FuseControlsScrollView_bool_UserScroll_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public FuseThemes_FuseControlsScrollView_bool_UserScroll_Property(Fuse.Controls.ScrollView obj) [instance] :238
void FuseThemes_FuseControlsScrollView_bool_UserScroll_Property::ctor_1(::g::Fuse::Controls::ScrollView* obj)
{
    uStackFrame __("FuseThemes_FuseControlsScrollView_bool_UserScroll_Property", ".ctor(Fuse.Controls.ScrollView)");
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseControlsScrollView_bool_UserScroll_Property New(Fuse.Controls.ScrollView obj) [static] :238
FuseThemes_FuseControlsScrollView_bool_UserScroll_Property* FuseThemes_FuseControlsScrollView_bool_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView* obj)
{
    FuseThemes_FuseControlsScrollView_bool_UserScroll_Property* obj1 = (FuseThemes_FuseControlsScrollView_bool_UserScroll_Property*)uNew(FuseThemes_FuseControlsScrollView_bool_UserScroll_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(221)
// -----------------------------------------------------------------

// internal sealed class FuseThemes_FuseGesturesScroller_bool_UserScroll_Property :221
// {
::g::Uno::UX::Property_type* FuseThemes_FuseGesturesScroller_bool_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseGesturesScroller_bool_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseGesturesScroller_bool_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseGesturesScroller_bool_UserScroll_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseGesturesScroller_bool_UserScroll_Property__OnSet_fn;
    ::TYPES[15] = ::g::Fuse::Gestures::Scroller_typeof();
    type->SetFields(2,
        ::g::Fuse::Gestures::Scroller_typeof(), offsetof(::g::FuseThemes_FuseGesturesScroller_bool_UserScroll_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseGesturesScroller_bool_UserScroll_Property(Fuse.Gestures.Scroller obj) :224
void FuseThemes_FuseGesturesScroller_bool_UserScroll_Property__ctor_1_fn(FuseThemes_FuseGesturesScroller_bool_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseGesturesScroller_bool_UserScroll_Property New(Fuse.Gestures.Scroller obj) :224
void FuseThemes_FuseGesturesScroller_bool_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, FuseThemes_FuseGesturesScroller_bool_UserScroll_Property** __retval)
{
    *__retval = FuseThemes_FuseGesturesScroller_bool_UserScroll_Property::New1(obj);
}

// protected override sealed bool OnGet() :225
void FuseThemes_FuseGesturesScroller_bool_UserScroll_Property__OnGet_fn(FuseThemes_FuseGesturesScroller_bool_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseThemes_FuseGesturesScroller_bool_UserScroll_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// protected override sealed void OnSet(bool v, object origin) :226
void FuseThemes_FuseGesturesScroller_bool_UserScroll_Property__OnSet_fn(FuseThemes_FuseGesturesScroller_bool_UserScroll_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseThemes_FuseGesturesScroller_bool_UserScroll_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public FuseThemes_FuseGesturesScroller_bool_UserScroll_Property(Fuse.Gestures.Scroller obj) [instance] :224
void FuseThemes_FuseGesturesScroller_bool_UserScroll_Property::ctor_1(::g::Fuse::Gestures::Scroller* obj)
{
    uStackFrame __("FuseThemes_FuseGesturesScroller_bool_UserScroll_Property", ".ctor(Fuse.Gestures.Scroller)");
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseGesturesScroller_bool_UserScroll_Property New(Fuse.Gestures.Scroller obj) [static] :224
FuseThemes_FuseGesturesScroller_bool_UserScroll_Property* FuseThemes_FuseGesturesScroller_bool_UserScroll_Property::New1(::g::Fuse::Gestures::Scroller* obj)
{
    FuseThemes_FuseGesturesScroller_bool_UserScroll_Property* obj1 = (FuseThemes_FuseGesturesScroller_bool_UserScroll_Property*)uNew(FuseThemes_FuseGesturesScroller_bool_UserScroll_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Themes\0.24.7\.uno\$.uno(228)
// -----------------------------------------------------------------

// internal sealed class FuseThemes_FuseTriggersWhileBool_bool_Value_Property :228
// {
::g::Uno::UX::Property_type* FuseThemes_FuseTriggersWhileBool_bool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FuseThemes_FuseTriggersWhileBool_bool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("FuseThemes_FuseTriggersWhileBool_bool_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))FuseThemes_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))FuseThemes_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn;
    ::TYPES[12] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::FuseThemes_FuseTriggersWhileBool_bool_Value_Property, _obj), 0);
    return type;
}

// public FuseThemes_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) :231
void FuseThemes_FuseTriggersWhileBool_bool_Value_Property__ctor_1_fn(FuseThemes_FuseTriggersWhileBool_bool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj)
{
    __this->ctor_1(obj);
}

// public FuseThemes_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) :231
void FuseThemes_FuseTriggersWhileBool_bool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, FuseThemes_FuseTriggersWhileBool_bool_Value_Property** __retval)
{
    *__retval = FuseThemes_FuseTriggersWhileBool_bool_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :232
void FuseThemes_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn(FuseThemes_FuseTriggersWhileBool_bool_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseThemes_FuseTriggersWhileBool_bool_Value_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :233
void FuseThemes_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn(FuseThemes_FuseTriggersWhileBool_bool_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseThemes_FuseTriggersWhileBool_bool_Value_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public FuseThemes_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) [instance] :231
void FuseThemes_FuseTriggersWhileBool_bool_Value_Property::ctor_1(::g::Fuse::Triggers::WhileBool* obj)
{
    uStackFrame __("FuseThemes_FuseTriggersWhileBool_bool_Value_Property", ".ctor(Fuse.Triggers.WhileBool)");
    ctor_();
    _obj = obj;
}

// public FuseThemes_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) [static] :231
FuseThemes_FuseTriggersWhileBool_bool_Value_Property* FuseThemes_FuseTriggersWhileBool_bool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj)
{
    FuseThemes_FuseTriggersWhileBool_bool_Value_Property* obj1 = (FuseThemes_FuseTriggersWhileBool_bool_Value_Property*)uNew(FuseThemes_FuseTriggersWhileBool_bool_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Video\0.24.7\.uno\package
// -------------------------------------------------------------

// public static generated class FuseVideo_bundle :0
// {
// static FuseVideo_bundle() :0
static void FuseVideo_bundle__cctor__fn(uType* __type)
{
    FuseVideo_bundle::Scale9Rectangleaf9f430d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[167/*"uniform flo...*/], ::STRINGS[168/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[18/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[39/*"m"*/], ::STRINGS[25/*"n"*/], ::STRINGS[52/*"o"*/], ::STRINGS[53/*"q"*/]));
    FuseVideo_bundle::VideoDrawElementc2e30808_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[169/*"uniform mat...*/], ::STRINGS[170/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
}

uClassType* FuseVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseVideo_bundle", options);
    type->fp_cctor_ = FuseVideo_bundle__cctor__fn;
    ::STRINGS[167] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[168] = uString::Const("uniform samplerExternalOES q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[18] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[39] = uString::Const("m");
    ::STRINGS[25] = uString::Const("n");
    ::STRINGS[52] = uString::Const("o");
    ::STRINGS[53] = uString::Const("q");
    ::STRINGS[169] = uString::Const("uniform mat4 f, c;\n"
        "uniform vec2 d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 i = (a * d) + e;\n"
        "    g = b ? vec2(i.x, 1.0 - i.y) : vec2(i.x, i.y);\n"
        "    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[170] = uString::Const("uniform samplerExternalOES h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseVideo_bundle::Scale9Rectangleaf9f430d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseVideo_bundle::VideoDrawElementc2e30808_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectangleaf9f430d", 0),
        new uField("VideoDrawElementc2e30808", 1));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseVideo_bundle::Scale9Rectangleaf9f430d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseVideo_bundle::VideoDrawElementc2e30808_;
// }

// ..\..\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1970)
// ------------------------------------------------------------------------------

// public sealed class HashableWeakReference :1970
// {
uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("HashableWeakReference", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))HashableWeakReference__GetHashCode_fn;
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof()), offsetof(::g::HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, HashableWeakReference_typeof(), 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof())),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :1973
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :1992
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    uStackFrame __("HashableWeakReference", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, HashableWeakReference_typeof()) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, HashableWeakReference_typeof()))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :1983
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int* __retval)
{
    uStackFrame __("HashableWeakReference", "GetHashCode()");
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :1973
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :1978
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :1973
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    uStackFrame __("HashableWeakReference", ".ctor(Uno.WeakReference<object>)");
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :1978
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    uStackFrame __("HashableWeakReference", "TryGetTarget(object&)");
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :1973
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\package
// -------------------------------------------------------------------------------

// public static generated class OutracksSimulatorClientUno_bundle :0
// {
// static OutracksSimulatorClientUno_bundle() :0
static void OutracksSimulatorClientUno_bundle__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_bundle::fightfc762f98_ = ::g::Uno::BundleFile::New1(::STRINGS[171/*"fight-8c16f...*/]);
}

uClassType* OutracksSimulatorClientUno_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OutracksSimulatorClientUno_bundle", options);
    type->fp_cctor_ = OutracksSimulatorClientUno_bundle__cctor__fn;
    ::STRINGS[171] = uString::Const("fight-8c16f395.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_bundle::fightfc762f98_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fightfc762f98", 0));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> OutracksSimulatorClientUno_bundle::fightfc762f98_;
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\.uno\package
// ----------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShadere233cf94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[172/*"uniform mat...*/], ::STRINGS[173/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[19/*"i"*/]));
    UnoCore_bundle::SpriteFontShaderf6f3aa43_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[174/*"uniform mat...*/], ::STRINGS[175/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[18/*"g"*/]));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    ::STRINGS[172] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = b;\n"
        "    h = c;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[173] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D i;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float j = smoothstep(e, f, texture2D(i, g).x);\n"
        "    if (j < 0.15) discard;\n"
        "    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[174] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[175] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShadere233cf94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShaderf6f3aa43_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("SdfFontShadere233cf94", 0),
        new uField("SpriteFontShaderf6f3aa43", 1));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShadere233cf94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShaderf6f3aa43_;
// }

// ..\..\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(2007)
// ------------------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :2007
// {
uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("WeakDictionary`2", options);
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    ::TYPES[18] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[19] = ::g::HashableWeakReference_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[21] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[22] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof());
    ::TYPES[16] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[18/*Uno.Collections.Dictionary`2*/]->MakeType(::TYPES[19/*HashableWeakReference*/], type->T(1)),
        ::TYPES[20/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[21/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[19/*HashableWeakReference*/], type->T(1))),
        ::TYPES[21/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[19/*HashableWeakReference*/], type->T(1)));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1)), offsetof(::g::WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1))), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
    return type;
}

// public generated WeakDictionary() :2007
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() :2011
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :2016
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static HashableWeakReference GetKey(TKey obj) :2032
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::HashableWeakReference** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("WeakDictionary`2", "GetKey(TKey)");
    return *__retval = ::g::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[22/*Uno.WeakReference<object>*/], uBoxPtr(__types[0], obj))), void();
}

// public TValue get_Item(TKey key) :2028
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    uStackFrame __("WeakDictionary`2", "get_Item(TKey)");
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ::g::HashableWeakReference* ret5;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret5), ret5), &ret4), ret4)), void();
}

// public void set_Item(TKey key, TValue value) :2029
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    uStackFrame __("WeakDictionary`2", "set_Item(TKey,TValue)");
    ::g::HashableWeakReference* ret6;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), value);
}

// public generated WeakDictionary New() :2007
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool TryGetValue(TKey key, TValue& value) :2021
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("WeakDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret2;
    ::g::HashableWeakReference* ret3;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret3), ret3), value, &ret2), ret2), void();
}

// public generated WeakDictionary() [instance] :2007
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
        __type->T(1),
    };
    uStackFrame __("WeakDictionary`2", ".ctor()");
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() [instance] :2011
uObject* WeakDictionary::AsEnumerable()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>>*/),
        __type->Precalced(2/*Uno.Collections.KeyValuePair<HashableWeakReference, TValue>*/),
        __type->T(1),
    };
    uStackFrame __("WeakDictionary`2", "AsEnumerable()");
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :2016
void WeakDictionary::Clear()
{
    uStackFrame __("WeakDictionary`2", "Clear()");
    uPtr(_dictionary)->Clear();
}

// public generated WeakDictionary New() [static] :2007
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

} // ::g
