// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\cache\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template1.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[2];

namespace g{

// public partial sealed class MainView.Template1 :18
// {
// static Template1() :25
static void MainView__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextInput_typeof()));
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template1__New1_fn, 0, true, MainView__Template1_typeof(), 1, ::g::MainView_typeof()));
    return type;
}

// public Template1(MainView parent) :21
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(MainView parent) :21
void MainView__Template1__New1_fn(::g::MainView* parent, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextInput self) :28
void MainView__Template1__OnApply_fn(MainView__Template1* __this, ::g::Fuse::Controls::TextInput* self)
{
    uStackFrame __("MainView.Template1", "OnApply(Fuse.Controls.TextInput)");
    bool ret2;
    bool ret3;
    bool ret4;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextEdit::CaretColorProperty()), self, uCRef(::g::Uno::Float4__New2(0.345098f, 0.345098f, 0.345098f, 1.0f)), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextEdit::PlaceholderColorProperty()), self, uCRef(::g::Uno::Float4__New2(0.7686275f, 0.7529412f, 0.8039216f, 1.0f)), &ret3);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextColorProperty()), self, uCRef(::g::Uno::Float4__New2(0.345098f, 0.345098f, 0.345098f, 1.0f)), &ret4);
}

// public Template1(MainView parent) [instance] :21
void MainView__Template1::ctor_1(::g::MainView* parent)
{
    uStackFrame __("MainView.Template1", ".ctor(MainView)");
    ctor_();
    __parent1 = parent;
}

// public Template1 New(MainView parent) [static] :21
MainView__Template1* MainView__Template1::New1(::g::MainView* parent)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
