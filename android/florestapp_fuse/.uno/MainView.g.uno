public partial class MainView: Fuse.App
{
    public partial class Template: Uno.UX.Template<Fuse.Controls.Text>
    {
        internal readonly MainView __parent;
        public Template(MainView parent)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        protected override void OnApply(Fuse.Controls.Text self)
        {
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(0.345098f, 0.345098f, 0.345098f, 1f));
        }
    }
    public partial class Template1: Uno.UX.Template<Fuse.Controls.TextInput>
    {
        internal readonly MainView __parent;
        public Template1(MainView parent)
        {
            __parent = parent;
        }
        static Template1()
        {
        }
        protected override void OnApply(Fuse.Controls.TextInput self)
        {
            Fuse.Controls.TextEdit.CaretColorProperty.SetStyle(self, float4(0.345098f, 0.345098f, 0.345098f, 1f));
            Fuse.Controls.TextEdit.PlaceholderColorProperty.SetStyle(self, float4(0.7686275f, 0.7529412f, 0.8039216f, 1f));
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(0.345098f, 0.345098f, 0.345098f, 1f));
        }
    }
    floresta_fuse_FuseControlsTextControl_string_Value_Property temp_Value_inst;
    floresta_fuse_FuseControlsTextControl_string_Value_Property temp1_Value_inst;
    floresta_fuse_FuseNode_bool_IsEnabled_Property temp2_IsEnabled_inst;
    floresta_fuse_FuseControlsTextControl_string_Value_Property temp3_Value_inst;
    floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property temp4_Active_inst;
    internal Fuse.Controls.Page page1;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Controls.Page page2;
    internal Fuse.Controls.Page page3;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Controls.Page registro;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp5 = float4(0.8823529f, 0.5686275f, 0.05098039f, 1f);
        var temp6 = float4(0.1490196f, 0.1254902f, 0.1333333f, 1f);
        var temp7 = float4(0.4588235f, 0.4392157f, 0.4901961f, 1f);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new floresta_fuse_FuseControlsTextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new floresta_fuse_FuseControlsTextControl_string_Value_Property(temp1);
        var temp2 = new Fuse.Controls.Button();
        temp2_IsEnabled_inst = new floresta_fuse_FuseNode_bool_IsEnabled_Property(temp2);
        var temp3 = new Fuse.Controls.Text();
        temp3_Value_inst = new floresta_fuse_FuseControlsTextControl_string_Value_Property(temp3);
        var temp4 = new Fuse.Controls.PageControl();
        temp4_Active_inst = new floresta_fuse_FuseControlsPageControl_FuseNode_Active_Property(temp4);
        var temp8 = new Fuse.iOS.StatusBarConfig();
        var temp9 = new Fuse.Controls.DockPanel();
        var temp10 = new Fuse.Style();
        var temp11 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp12 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp13 = new Uno.UX.Resource("C600", temp5);
        var temp14 = new Uno.UX.Resource("C700", temp6);
        var temp15 = new Uno.UX.Resource("CFillFore", temp7);
        var temp16 = new Fuse.Controls.StatusBarBackground();
        var temp17 = new Fuse.Controls.BottomBarBackground();
        var temp18 = new Fuse.Reactive.JavaScript();
        page1 = new Fuse.Controls.Page();
        var temp19 = new Fuse.Controls.Grid();
        var temp20 = new Fuse.Controls.StackPanel();
        var temp21 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "username");
        var temp22 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "password");
        var temp23 = new Fuse.Controls.StackPanel();
        var temp24 = new Fuse.Controls.Image();
        var temp25 = new Fuse.Controls.Image();
        var temp26 = new Fuse.Controls.StackPanel();
        var temp27 = new Fuse.Reactive.DataBinding<bool>(temp2_IsEnabled_inst, "areCredentialsValid");
        temp_eb0 = new Fuse.Reactive.EventBinding("goToPage2");
        page2 = new Fuse.Controls.Page();
        var temp28 = new Fuse.Controls.Grid();
        var temp29 = new Fuse.Controls.StackPanel();
        var temp30 = new Fuse.Controls.Text();
        var temp31 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "immediateLocation");
        page3 = new Fuse.Controls.Page();
        var temp32 = new Fuse.Controls.StackPanel();
        var temp33 = new Fuse.Controls.Text();
        var temp34 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("goToPage1");
        registro = new Fuse.Controls.Page();
        var temp35 = new Fuse.Controls.Grid();
        var temp36 = new Fuse.Controls.StackPanel();
        var temp37 = new Fuse.Reactive.DataBinding<Fuse.Node>(temp4_Active_inst, "currentPage");
        this.ClearColor = float4(0.1843137f, 0.6705883f, 0.4f, 1f);
        temp8.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp9.Children.Add(temp16);
        temp9.Children.Add(temp17);
        temp9.Children.Add(temp4);
        temp9.Behaviors.Add(temp18);
        temp9.Resources.Add(temp13);
        temp9.Resources.Add(temp14);
        temp9.Resources.Add(temp15);
        temp9.Styles.Add(temp10);
        temp10.Templates.Add(temp11);
        temp10.Templates.Add(temp12);
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Bottom);
        temp18.Code = "var Observable = require(\"FuseJS/Observable\");\n\t\t\tvar env = require('FuseJS/Environment');\n\t\t\tvar GeoLocation = require(\"FuseJS/GeoLocation\");\n\n\t\t\t \n\n\t\t\tvar currentPage = Observable(\"page1\");\n\t\t\tvar username = Observable(\"\");\n\t\t\tvar password = Observable(\"\");\n\n\t\t\tvar immediateLocation = JSON.stringify(GeoLocation.location);\n\n\t\t\tvar areCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\n\t\t\tfunction goToPage2() {\n\t\t\t\n\n\t\t\t\tif(username.value == \"floresta\" && password.value==\"admin\")\n\t\t\t\t{ immediateLocation = JSON.stringify(GeoLocation.location);\n\t\t\t\t\tif (env.mobile) {\n        \t    \t\tdebug_log(\"Init geo.\");\n        \t\t\t}\n        \t\t\telse {\n            \t\t\tdebug_log(\"Not on mobile, so we don't have geo\");\n        \t\t\t}\n\n\t\t\t\t\tcurrentPage.value=\"page2\";\n\t\t\t\t}\t\n\t\t\t\t/*else\n\t\t\t\t{\n\t\t\t\t\tcurrentPage.value=\"page3\" ;\n\t\t\t\t}*/\n\t\t\t}\n\n\t\t\tfunction goToPage1() {\n\t\t\t\tcurrentPage.value=\"page1\";\n\t\t\t}\n\n\t\t\tfunction goToRegistro() {\n\t\t\t\tcurrentPage.value=\"registro\";\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\n\t\t\t\tcurrentPage: currentPage,\n\t\t\t\tusername: username,\n\t\t\t\tpassword: password,\n\t\t\t\timmediateLocation: immediateLocation,\n\n\t\t\t\tareCredentialsValid: areCredentialsValid,\n\t\t\t\tgoToPage2: goToPage2,\n\t\t\t\tgoToPage1: goToPage1,\n\t\t\t\tgoToRegistro: goToRegistro\n\t\t\t\n\t\t\t\n\n\t\t\t};";
        temp18.LineNumber = 18;
        temp18.FileName = "/Users/oscarbeltran/Documents/NativeLabs/P0011 - FlorestaApp/Hackaton/florestapp_fuse/MainView.ux";
        temp4.Children.Add(page1);
        temp4.Children.Add(page2);
        temp4.Children.Add(page3);
        temp4.Children.Add(registro);
        temp4.Behaviors.Add(temp37);
        page1.Name = "page1";
        page1.Children.Add(temp19);
        temp19.Rows = "1*,1*";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp23);
        temp19.Children.Add(temp25);
        temp19.Children.Add(temp26);
        temp20.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp20.Margin = float4(50f, 130f, 50f, 0f);
        temp20.Children.Add(temp);
        temp20.Children.Add(temp1);
        temp.PlaceholderText = "usuario";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        temp.Behaviors.Add(temp21);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "contraseña";
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        temp1.Behaviors.Add(temp22);
        temp23.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp23.Children.Add(temp24);
        temp24.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../Assets/floresta.png"));
        temp25.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../Assets/icon_principal.png"));
        temp26.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp26.Children.Add(temp2);
        temp2.Text = "Log in";
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb0.OnEvent);
        temp2.Behaviors.Add(temp27);
        temp2.Behaviors.Add(temp_eb0);
        page2.Name = "page2";
        page2.Children.Add(temp28);
        temp28.Children.Add(temp29);
        temp29.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp29.Margin = float4(50f, 0f, 50f, 0f);
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp3);
        temp30.Value = "Immediatee:";
        temp3.Behaviors.Add(temp31);
        page3.Name = "page3";
        page3.Children.Add(temp32);
        temp32.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp32.Margin = float4(50f, 0f, 50f, 0f);
        temp32.Children.Add(temp33);
        temp32.Children.Add(temp34);
        temp33.Value = "Error en Credenciales";
        temp33.FontSize = 20f;
        temp33.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp34.Text = "Regresar";
        temp34.IsEnabled = true;
        global::Fuse.Gestures.Clicked.AddHandler(temp34, temp_eb1.OnEvent);
        temp34.Behaviors.Add(temp_eb1);
        registro.Name = "registro";
        registro.Children.Add(temp35);
        temp35.Children.Add(temp36);
        temp36.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp36.Margin = float4(10f, 0f, 10f, 0f);
        this.RootNode = temp9;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp8);
    }
}
