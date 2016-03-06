// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\cache\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template :3
// {
// static Template() :10
static void MainView__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof()));
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New1_fn, 0, true, MainView__Template_typeof(), 1, ::g::MainView_typeof()));
    return type;
}

// public Template(MainView parent) :6
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template New(MainView parent) :6
void MainView__Template__New1_fn(::g::MainView* parent, MainView__Template** __retval)
{
    *__retval = MainView__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Text self) :13
void MainView__Template__OnApply_fn(MainView__Template* __this, ::g::Fuse::Controls::Text* self)
{
    uStackFrame __("MainView.Template", "OnApply(Fuse.Controls.Text)");
    bool ret2;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextColorProperty()), self, uCRef(::g::Uno::Float4__New2(0.345098f, 0.345098f, 0.345098f, 1.0f)), &ret2);
}

// public Template(MainView parent) [instance] :6
void MainView__Template::ctor_1(::g::MainView* parent)
{
    uStackFrame __("MainView.Template", ".ctor(MainView)");
    ctor_();
    __parent1 = parent;
}

// public Template New(MainView parent) [static] :6
MainView__Template* MainView__Template::New1(::g::MainView* parent)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
