// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\cache\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.InfoMedic_bundle.h>
#include <_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.h>
#include <_root.InfoMedic_FuseControlsTextControl_string_Value_Property.h>
#include <_root.InfoMedic_FuseNode_bool_IsEnabled_Property.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Style.h>
#include <Fuse.Theme.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[28];
static uType* TYPES[28];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :46
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("C600");
    ::STRINGS[1] = uString::Const("C700");
    ::STRINGS[2] = uString::Const("CFillFore");
    ::STRINGS[3] = uString::Const("username");
    ::STRINGS[4] = uString::Const("password");
    ::STRINGS[5] = uString::Const("areCredentialsValid");
    ::STRINGS[6] = uString::Const("goToPage2");
    ::STRINGS[7] = uString::Const("goToRegistro");
    ::STRINGS[8] = uString::Const("goToPage1");
    ::STRINGS[9] = uString::Const("currentPage");
    ::STRINGS[10] = uString::Const("var Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\t\t\tvar currentPage = Observable(\"page1\");\n"
        "\t\t\tvar username = Observable(\"\");\n"
        "\t\t\tvar password = Observable(\"\");\n"
        "\n"
        "\t\t\tvar areCredentialsValid = Observable(function() {\n"
        "\t\t\t\treturn username.value != \"\" && password.value != \"\";\n"
        "\t\t\t});\n"
        "\n"
        "\n"
        "\t\t\tfunction goToPage2() {\n"
        "\t\t\t\tif(username.value == \"hackamano\" && password.value==\"admin\")\n"
        "\t\t\t\t{\n"
        "\t\t\t\t\tcurrentPage.value=\"page2\";\n"
        "\t\t\t\t}\t\n"
        "\t\t\t\telse\n"
        "\t\t\t\t{\n"
        "\t\t\t\t\tcurrentPage.value=\"page3\" ;\n"
        "\t\t\t\t}\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tfunction goToPage1() {\n"
        "\t\t\t\tcurrentPage.value=\"page1\";\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tfunction goToRegistro() {\n"
        "\t\t\t\tcurrentPage.value=\"registro\";\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tmodule.exports = {\n"
        "\n"
        "\t\t\t\tcurrentPage: currentPage,\n"
        "\t\t\t\tusername: username,\n"
        "\t\t\t\tpassword: password,\n"
        "\n"
        "\n"
        "\t\t\t\tareCredentialsValid: areCredentialsValid,\n"
        "\t\t\t\tgoToPage2: goToPage2,\n"
        "\t\t\t\tgoToPage1: goToPage1,\n"
        "\t\t\t\tgoToRegistro: goToRegistro\n"
        "\t\t\t\n"
        "\t\t\t\n"
        "\n"
        "\t\t\t};");
    ::STRINGS[11] = uString::Const("C:\\Users\\mmoraf\\Desktop\\InfoMedic\\InfoMedic\\MainView.ux");
    ::STRINGS[12] = uString::Const("page1");
    ::STRINGS[13] = uString::Const("1*,1*");
    ::STRINGS[14] = uString::Const("InfoMedic");
    ::STRINGS[15] = uString::Const("Administrando la Salud");
    ::STRINGS[16] = uString::Const("usuario");
    ::STRINGS[17] = uString::Const("contrase\303\261a");
    ::STRINGS[18] = uString::Const("Log in");
    ::STRINGS[19] = uString::Const("page2");
    ::STRINGS[20] = uString::Const("Emergencia");
    ::STRINGS[21] = uString::Const("Crear Cartilla");
    ::STRINGS[22] = uString::Const("Consultar Cartilla");
    ::STRINGS[23] = uString::Const("Padecimientos");
    ::STRINGS[24] = uString::Const("page3");
    ::STRINGS[25] = uString::Const("Error en Credenciales");
    ::STRINGS[26] = uString::Const("Regresar");
    ::STRINGS[27] = uString::Const("registro");
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof());
    ::TYPES[3] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextInput_typeof());
    ::TYPES[4] = uObject_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[10] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Uno::Application_typeof();
    ::TYPES[12] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[14] = ::g::Fuse::Behavior_typeof();
    ::TYPES[15] = ::g::Fuse::Style_typeof();
    ::TYPES[16] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[17] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[18] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::Grid_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[21] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[22] = ::g::InfoMedic_bundle_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[24] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[26] = ::g::Fuse::AppBase_typeof();
    ::TYPES[27] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page3), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, registro), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb2), 0,
        ::g::InfoMedic_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::InfoMedic_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::InfoMedic_FuseNode_bool_IsEnabled_Property_typeof(), offsetof(::g::MainView, temp2_IsEnabled_inst), 0,
        ::g::InfoMedic_FuseControlsPageControl_FuseNode_Active_Property_typeof(), offsetof(::g::MainView, temp3_Active_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :49
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :53
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :49
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :49
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :53
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    MainView__Template* collection1;
    MainView__Template1* collection2;
    ::g::Uno::Float4 temp4 = ::g::Uno::Float4__New2(0.6431373f, 0.01960784f, 0.172549f, 1.0f);
    ::g::Uno::Float4 temp5 = ::g::Uno::Float4__New2(0.1490196f, 0.1254902f, 0.1333333f, 1.0f);
    ::g::Uno::Float4 temp6 = ::g::Uno::Float4__New2(0.4588235f, 0.4392157f, 0.4901961f, 1.0f);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::InfoMedic_FuseControlsTextControl_string_Value_Property::New1(temp);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::InfoMedic_FuseControlsTextControl_string_Value_Property::New1(temp1);
    ::g::Fuse::Controls::Button* temp2 = ::g::Fuse::Controls::Button::New2();
    temp2_IsEnabled_inst = ::g::InfoMedic_FuseNode_bool_IsEnabled_Property::New1(temp2);
    ::g::Fuse::Controls::PageControl* temp3 = ::g::Fuse::Controls::PageControl::New3();
    temp3_Active_inst = ::g::InfoMedic_FuseControlsPageControl_FuseNode_Active_Property::New1(temp3);
    ::g::Fuse::iOS::StatusBarConfig* temp7 = ::g::Fuse::iOS::StatusBarConfig::New1();
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Style* temp9 = ::g::Fuse::Style::New1();
    collection1 = MainView__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    MainView__Template* temp10 = collection1;
    collection2 = MainView__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    MainView__Template1* temp11 = collection2;
    ::g::Uno::UX::Resource* temp12 = ::g::Uno::UX::Resource::New1(::STRINGS[0/*"C600"*/], uBox(::g::Uno::Float4_typeof(), temp4));
    ::g::Uno::UX::Resource* temp13 = ::g::Uno::UX::Resource::New1(::STRINGS[1/*"C700"*/], uBox(::g::Uno::Float4_typeof(), temp5));
    ::g::Uno::UX::Resource* temp14 = ::g::Uno::UX::Resource::New1(::STRINGS[2/*"CFillFore"*/], uBox(::g::Uno::Float4_typeof(), temp6));
    ::g::Fuse::Controls::StatusBarBackground* temp15 = ::g::Fuse::Controls::StatusBarBackground::New2();
    ::g::Fuse::Controls::BottomBarBackground* temp16 = ::g::Fuse::Controls::BottomBarBackground::New2();
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New1();
    page1 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Image* temp22 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp24 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[3/*"username"*/]);
    ::g::Fuse::Reactive::DataBinding* temp25 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[4/*"password"*/]);
    ::g::Fuse::Reactive::DataBinding* temp26 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<bool>*/], temp2_IsEnabled_inst, ::STRINGS[5/*"areCredenti...*/]);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"goToPage2"*/]);
    page2 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp27 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Button* temp29 = ::g::Fuse::Controls::Button::New2();
    ::g::Fuse::Controls::Button* temp30 = ::g::Fuse::Controls::Button::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"goToRegistro"*/]);
    ::g::Fuse::Controls::Button* temp31 = ::g::Fuse::Controls::Button::New2();
    ::g::Fuse::Controls::Button* temp32 = ::g::Fuse::Controls::Button::New2();
    page3 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp34 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Button* temp35 = ::g::Fuse::Controls::Button::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"goToPage1"*/]);
    registro = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp36 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp37 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp38 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<Fuse.Node>*/], temp3_Active_inst, ::STRINGS[9/*"currentPage"*/]);
    ClearColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Style*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Uno.UX.ITemplate*/])), (uObject*)temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Uno.UX.ITemplate*/])), (uObject*)temp11);
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 3);
    temp17->Code(::STRINGS[10/*"var Observa...*/]);
    temp17->LineNumber(18);
    temp17->FileName(::STRINGS[11/*"C:\\Users\\...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), registro);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp38);
    uPtr(page1)->Name(::STRINGS[12/*"page1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp18);
    temp18->Rows(::STRINGS[13/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp23);
    temp19->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp21);
    temp20->Value(::STRINGS[14/*"InfoMedic"*/]);
    temp20->FontSize(50.0f);
    temp20->Alignment(2);
    temp21->Value(::STRINGS[15/*"Administran...*/]);
    temp21->Alignment(2);
    temp21->Opacity(0.5f);
    temp22->File(::g::Uno::UX::BundleFileSource::New1(::g::InfoMedic_bundle::logo_hef7b87de()));
    temp23->Alignment(8);
    temp23->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp2);
    temp->PlaceholderText(::STRINGS[16/*"usuario"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp24);
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[17/*"contraseña"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp25);
    temp2->Text(::STRINGS[18/*"Log in"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb0);
    uPtr(page2)->Name(::STRINGS[19/*"page2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp28);
    temp28->Alignment(8);
    temp28->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp32);
    temp29->Text(::STRINGS[20/*"Emergencia"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp29, 0);
    temp30->Text(::STRINGS[21/*"Crear Carti...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp30, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp30, uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb1);
    temp31->Text(::STRINGS[22/*"Consultar C...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp31, 2);
    temp32->Text(::STRINGS[23/*"Padecimientos"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp32, 3);
    uPtr(page3)->Name(::STRINGS[24/*"page3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp33);
    temp33->Alignment(8);
    temp33->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp35);
    temp34->Value(::STRINGS[25/*"Error en Cr...*/]);
    temp34->FontSize(20.0f);
    temp34->Alignment(2);
    temp35->Text(::STRINGS[26/*"Regresar"*/]);
    temp35->IsEnabled(true);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp35, uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb2);
    uPtr(registro)->Name(::STRINGS[27/*"registro"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(registro)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp37);
    temp37->Alignment(8);
    temp37->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    RootNode(temp8);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp7);
}

// public MainView New() [static] :49
MainView* MainView::New1()
{
    MainView* obj3 = (MainView*)uNew(MainView_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

} // ::g
