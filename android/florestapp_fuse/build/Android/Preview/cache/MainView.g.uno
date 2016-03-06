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
    InfoMedic_FuseControlsTextControl_string_Value_Property temp_Value_inst;
    InfoMedic_FuseControlsTextControl_string_Value_Property temp1_Value_inst;
    InfoMedic_FuseNode_bool_IsEnabled_Property temp2_IsEnabled_inst;
    InfoMedic_FuseControlsPageControl_FuseNode_Active_Property temp3_Active_inst;
    internal Fuse.Controls.Page page1;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Controls.Page page2;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Controls.Page page3;
    internal Fuse.Reactive.EventBinding temp_eb2;
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
        var temp4 = float4(0.6431373f, 0.01960784f, 0.172549f, 1f);
        var temp5 = float4(0.1490196f, 0.1254902f, 0.1333333f, 1f);
        var temp6 = float4(0.4588235f, 0.4392157f, 0.4901961f, 1f);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new InfoMedic_FuseControlsTextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new InfoMedic_FuseControlsTextControl_string_Value_Property(temp1);
        var temp2 = new Fuse.Controls.Button();
        temp2_IsEnabled_inst = new InfoMedic_FuseNode_bool_IsEnabled_Property(temp2);
        var temp3 = new Fuse.Controls.PageControl();
        temp3_Active_inst = new InfoMedic_FuseControlsPageControl_FuseNode_Active_Property(temp3);
        var temp7 = new Fuse.iOS.StatusBarConfig();
        var temp8 = new Fuse.Controls.DockPanel();
        var temp9 = new Fuse.Style();
        var temp10 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp11 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp12 = new Uno.UX.Resource("C600", temp4);
        var temp13 = new Uno.UX.Resource("C700", temp5);
        var temp14 = new Uno.UX.Resource("CFillFore", temp6);
        var temp15 = new Fuse.Controls.StatusBarBackground();
        var temp16 = new Fuse.Controls.BottomBarBackground();
        var temp17 = new Fuse.Reactive.JavaScript();
        page1 = new Fuse.Controls.Page();
        var temp18 = new Fuse.Controls.Grid();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Controls.Text();
        var temp21 = new Fuse.Controls.Text();
        var temp22 = new Fuse.Controls.Image();
        var temp23 = new Fuse.Controls.StackPanel();
        var temp24 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "username");
        var temp25 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "password");
        var temp26 = new Fuse.Reactive.DataBinding<bool>(temp2_IsEnabled_inst, "areCredentialsValid");
        temp_eb0 = new Fuse.Reactive.EventBinding("goToPage2");
        page2 = new Fuse.Controls.Page();
        var temp27 = new Fuse.Controls.Grid();
        var temp28 = new Fuse.Controls.StackPanel();
        var temp29 = new Fuse.Controls.Button();
        var temp30 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("goToRegistro");
        var temp31 = new Fuse.Controls.Button();
        var temp32 = new Fuse.Controls.Button();
        page3 = new Fuse.Controls.Page();
        var temp33 = new Fuse.Controls.StackPanel();
        var temp34 = new Fuse.Controls.Text();
        var temp35 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("goToPage1");
        registro = new Fuse.Controls.Page();
        var temp36 = new Fuse.Controls.Grid();
        var temp37 = new Fuse.Controls.StackPanel();
        var temp38 = new Fuse.Reactive.DataBinding<Fuse.Node>(temp3_Active_inst, "currentPage");
        this.ClearColor = float4(1f, 1f, 1f, 1f);
        temp7.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp8.Children.Add(temp15);
        temp8.Children.Add(temp16);
        temp8.Children.Add(temp3);
        temp8.Behaviors.Add(temp17);
        temp8.Resources.Add(temp12);
        temp8.Resources.Add(temp13);
        temp8.Resources.Add(temp14);
        temp8.Styles.Add(temp9);
        temp9.Templates.Add(temp10);
        temp9.Templates.Add(temp11);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Bottom);
        temp17.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar currentPage = Observable(\"page1\");\n\t\t\tvar username = Observable(\"\");\n\t\t\tvar password = Observable(\"\");\n\n\t\t\tvar areCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\n\t\t\tfunction goToPage2() {\n\t\t\t\tif(username.value == \"hackamano\" && password.value==\"admin\")\n\t\t\t\t{\n\t\t\t\t\tcurrentPage.value=\"page2\";\n\t\t\t\t}\t\n\t\t\t\telse\n\t\t\t\t{\n\t\t\t\t\tcurrentPage.value=\"page3\" ;\n\t\t\t\t}\n\t\t\t}\n\n\t\t\tfunction goToPage1() {\n\t\t\t\tcurrentPage.value=\"page1\";\n\t\t\t}\n\n\t\t\tfunction goToRegistro() {\n\t\t\t\tcurrentPage.value=\"registro\";\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\n\t\t\t\tcurrentPage: currentPage,\n\t\t\t\tusername: username,\n\t\t\t\tpassword: password,\n\n\n\t\t\t\tareCredentialsValid: areCredentialsValid,\n\t\t\t\tgoToPage2: goToPage2,\n\t\t\t\tgoToPage1: goToPage1,\n\t\t\t\tgoToRegistro: goToRegistro\n\t\t\t\n\t\t\t\n\n\t\t\t};";
        temp17.LineNumber = 18;
        temp17.FileName = "C:\\Users\\mmoraf\\Desktop\\InfoMedic\\InfoMedic\\MainView.ux";
        temp3.Children.Add(page1);
        temp3.Children.Add(page2);
        temp3.Children.Add(page3);
        temp3.Children.Add(registro);
        temp3.Behaviors.Add(temp38);
        page1.Name = "page1";
        page1.Children.Add(temp18);
        temp18.Rows = "1*,1*";
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp22);
        temp18.Children.Add(temp23);
        temp19.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Value = "InfoMedic";
        temp20.FontSize = 50f;
        temp20.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp21.Value = "Administrando la Salud";
        temp21.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp21.Opacity = 0.5f;
        temp22.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/logo_h.png"));
        temp23.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp23.Margin = float4(50f, 0f, 50f, 0f);
        temp23.Children.Add(temp);
        temp23.Children.Add(temp1);
        temp23.Children.Add(temp2);
        temp.PlaceholderText = "usuario";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        temp.Behaviors.Add(temp24);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "contraseña";
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        temp1.Behaviors.Add(temp25);
        temp2.Text = "Log in";
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb0.OnEvent);
        temp2.Behaviors.Add(temp26);
        temp2.Behaviors.Add(temp_eb0);
        page2.Name = "page2";
        page2.Children.Add(temp27);
        temp27.Children.Add(temp28);
        temp28.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp28.Margin = float4(50f, 0f, 50f, 0f);
        temp28.Children.Add(temp29);
        temp28.Children.Add(temp30);
        temp28.Children.Add(temp31);
        temp28.Children.Add(temp32);
        temp29.Text = "Emergencia";
        global::Fuse.Controls.Grid.SetRow(temp29, 0);
        temp30.Text = "Crear Cartilla";
        global::Fuse.Controls.Grid.SetRow(temp30, 1);
        global::Fuse.Gestures.Clicked.AddHandler(temp30, temp_eb1.OnEvent);
        temp30.Behaviors.Add(temp_eb1);
        temp31.Text = "Consultar Cartilla";
        global::Fuse.Controls.Grid.SetRow(temp31, 2);
        temp32.Text = "Padecimientos";
        global::Fuse.Controls.Grid.SetRow(temp32, 3);
        page3.Name = "page3";
        page3.Children.Add(temp33);
        temp33.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp33.Margin = float4(50f, 0f, 50f, 0f);
        temp33.Children.Add(temp34);
        temp33.Children.Add(temp35);
        temp34.Value = "Error en Credenciales";
        temp34.FontSize = 20f;
        temp34.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp35.Text = "Regresar";
        temp35.IsEnabled = true;
        global::Fuse.Gestures.Clicked.AddHandler(temp35, temp_eb2.OnEvent);
        temp35.Behaviors.Add(temp_eb2);
        registro.Name = "registro";
        registro.Children.Add(temp36);
        temp36.Children.Add(temp37);
        temp37.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp37.Margin = float4(10f, 0f, 10f, 0f);
        this.RootNode = temp8;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp7);
    }
}
