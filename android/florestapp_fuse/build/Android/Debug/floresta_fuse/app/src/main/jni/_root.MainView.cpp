// This file was generated based on '/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.floresta_fuse_bundle.h>
#include <_root.floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property.h>
#include <_root.floresta_fuse_FuseControlsTextControl_string_Value_Property.h>
#include <_root.floresta_fuse_FuseNode_bool_IsEnabled_Property.h>
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
static uString* STRINGS[23];
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
    ::STRINGS[7] = uString::Const("immediateLocation");
    ::STRINGS[8] = uString::Const("goToPage1");
    ::STRINGS[9] = uString::Const("currentPage");
    ::STRINGS[10] = uString::Const("var Observable = require(\"FuseJS/Observable\");\n"
        "\t\t\tvar env = require('FuseJS/Environment');\n"
        "\t\t\tvar GeoLocation = require(\"FuseJS/GeoLocation\");\n"
        "\n"
        "\t\t\t \n"
        "\n"
        "\t\t\tvar currentPage = Observable(\"page1\");\n"
        "\t\t\tvar username = Observable(\"\");\n"
        "\t\t\tvar password = Observable(\"\");\n"
        "\n"
        "\t\t\tvar immediateLocation = JSON.stringify(GeoLocation.location);\n"
        "\n"
        "\t\t\tvar areCredentialsValid = Observable(function() {\n"
        "\t\t\t\treturn username.value != \"\" && password.value != \"\";\n"
        "\t\t\t});\n"
        "\n"
        "\n"
        "\t\t\tfunction goToPage2() {\n"
        "\t\t\t\n"
        "\n"
        "\t\t\t\tif(username.value == \"floresta\" && password.value==\"admin\")\n"
        "\t\t\t\t{ immediateLocation = JSON.stringify(GeoLocation.location);\n"
        "\t\t\t\t\tif (env.mobile) {\n"
        "        \t    \t\tdebug_log(\"Init geo.\");\n"
        "        \t\t\t}\n"
        "        \t\t\telse {\n"
        "            \t\t\tdebug_log(\"Not on mobile, so we don't have geo\");\n"
        "        \t\t\t}\n"
        "\n"
        "\t\t\t\t\tcurrentPage.value=\"page2\";\n"
        "\t\t\t\t}\t\n"
        "\t\t\t\t/*else\n"
        "\t\t\t\t{\n"
        "\t\t\t\t\tcurrentPage.value=\"page3\" ;\n"
        "\t\t\t\t}*/\n"
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
        "\t\t\t\timmediateLocation: immediateLocation,\n"
        "\n"
        "\t\t\t\tareCredentialsValid: areCredentialsValid,\n"
        "\t\t\t\tgoToPage2: goToPage2,\n"
        "\t\t\t\tgoToPage1: goToPage1,\n"
        "\t\t\t\tgoToRegistro: goToRegistro\n"
        "\t\t\t\n"
        "\t\t\t\n"
        "\n"
        "\t\t\t};");
    ::STRINGS[11] = uString::Const("/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/MainView.ux");
    ::STRINGS[12] = uString::Const("page1");
    ::STRINGS[13] = uString::Const("1*,1*");
    ::STRINGS[14] = uString::Const("usuario");
    ::STRINGS[15] = uString::Const("contrase\303\261a");
    ::STRINGS[16] = uString::Const("Log in");
    ::STRINGS[17] = uString::Const("page2");
    ::STRINGS[18] = uString::Const("Immediatee:");
    ::STRINGS[19] = uString::Const("page3");
    ::STRINGS[20] = uString::Const("Error en Credenciales");
    ::STRINGS[21] = uString::Const("Regresar");
    ::STRINGS[22] = uString::Const("registro");
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
    ::TYPES[20] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[21] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[22] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[23] = ::g::floresta_fuse_bundle_typeof();
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
        ::g::floresta_fuse_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::floresta_fuse_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::floresta_fuse_FuseNode_bool_IsEnabled_Property_typeof(), offsetof(::g::MainView, temp2_IsEnabled_inst), 0,
        ::g::floresta_fuse_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property_typeof(), offsetof(::g::MainView, temp4_Active_inst), 0);
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
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :53
void MainView::InitializeUX()
{
    MainView__Template* collection1;
    MainView__Template1* collection2;
    ::g::Uno::Float4 temp5 = ::g::Uno::Float4__New2(0.8823529f, 0.5686275f, 0.05098039f, 1.0f);
    ::g::Uno::Float4 temp6 = ::g::Uno::Float4__New2(0.1490196f, 0.1254902f, 0.1333333f, 1.0f);
    ::g::Uno::Float4 temp7 = ::g::Uno::Float4__New2(0.4588235f, 0.4392157f, 0.4901961f, 1.0f);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::floresta_fuse_FuseControlsTextControl_string_Value_Property::New1(temp);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::floresta_fuse_FuseControlsTextControl_string_Value_Property::New1(temp1);
    ::g::Fuse::Controls::Button* temp2 = ::g::Fuse::Controls::Button::New2();
    temp2_IsEnabled_inst = ::g::floresta_fuse_FuseNode_bool_IsEnabled_Property::New1(temp2);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New2();
    temp3_Value_inst = ::g::floresta_fuse_FuseControlsTextControl_string_Value_Property::New1(temp3);
    ::g::Fuse::Controls::PageControl* temp4 = ::g::Fuse::Controls::PageControl::New3();
    temp4_Active_inst = ::g::floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property::New1(temp4);
    ::g::Fuse::iOS::StatusBarConfig* temp8 = ::g::Fuse::iOS::StatusBarConfig::New1();
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Style* temp10 = ::g::Fuse::Style::New1();
    collection1 = MainView__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    MainView__Template* temp11 = collection1;
    collection2 = MainView__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    MainView__Template1* temp12 = collection2;
    ::g::Uno::UX::Resource* temp13 = ::g::Uno::UX::Resource::New1(::STRINGS[0/*"C600"*/], uBox(::g::Uno::Float4_typeof(), temp5));
    ::g::Uno::UX::Resource* temp14 = ::g::Uno::UX::Resource::New1(::STRINGS[1/*"C700"*/], uBox(::g::Uno::Float4_typeof(), temp6));
    ::g::Uno::UX::Resource* temp15 = ::g::Uno::UX::Resource::New1(::STRINGS[2/*"CFillFore"*/], uBox(::g::Uno::Float4_typeof(), temp7));
    ::g::Fuse::Controls::StatusBarBackground* temp16 = ::g::Fuse::Controls::StatusBarBackground::New2();
    ::g::Fuse::Controls::BottomBarBackground* temp17 = ::g::Fuse::Controls::BottomBarBackground::New2();
    ::g::Fuse::Reactive::JavaScript* temp18 = ::g::Fuse::Reactive::JavaScript::New1();
    page1 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp19 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp21 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[3/*"username"*/]);
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[4/*"password"*/]);
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Image* temp24 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Controls::Image* temp25 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp27 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<bool>*/], temp2_IsEnabled_inst, ::STRINGS[5/*"areCredenti...*/]);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"goToPage2"*/]);
    page2 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp28 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Reactive::DataBinding* temp31 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[7/*"immediateLo...*/]);
    page3 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::StackPanel* temp32 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp33 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Button* temp34 = ::g::Fuse::Controls::Button::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"goToPage1"*/]);
    registro = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp35 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp36 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<Fuse.Node>*/], temp4_Active_inst, ::STRINGS[9/*"currentPage"*/]);
    ClearColor(::g::Uno::Float4__New2(0.1843137f, 0.6705883f, 0.4f, 1.0f));
    temp8->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Style*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Uno.UX.ITemplate*/])), (uObject*)temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Uno.UX.ITemplate*/])), (uObject*)temp12);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 3);
    temp18->Code(::STRINGS[10/*"var Observa...*/]);
    temp18->LineNumber(18);
    temp18->FileName(::STRINGS[11/*"/Users/osca...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), registro);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp37);
    uPtr(page1)->Name(::STRINGS[12/*"page1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp19);
    temp19->Rows(::STRINGS[13/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp26);
    temp20->Alignment(8);
    temp20->Margin(::g::Uno::Float4__New2(50.0f, 130.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp1);
    temp->PlaceholderText(::STRINGS[14/*"usuario"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp21);
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[15/*"contraseña"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp22);
    temp23->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp24);
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::floresta_fuse_bundle::florestad315e263()));
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::floresta_fuse_bundle::icon_principalcd1cce07()));
    temp26->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp2);
    temp2->Text(::STRINGS[16/*"Log in"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb0);
    uPtr(page2)->Name(::STRINGS[17/*"page2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp29);
    temp29->Alignment(8);
    temp29->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp3);
    temp30->Value(::STRINGS[18/*"Immediatee:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp31);
    uPtr(page3)->Name(::STRINGS[19/*"page3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp32);
    temp32->Alignment(8);
    temp32->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp34);
    temp33->Value(::STRINGS[20/*"Error en Cr...*/]);
    temp33->FontSize(20.0f);
    temp33->Alignment(2);
    temp34->Text(::STRINGS[21/*"Regresar"*/]);
    temp34->IsEnabled(true);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp34, uDelegate::New(::TYPES[25/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp_eb1);
    uPtr(registro)->Name(::STRINGS[22/*"registro"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(registro)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Node*/])), temp36);
    temp36->Alignment(8);
    temp36->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    RootNode(temp9);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp8);
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
