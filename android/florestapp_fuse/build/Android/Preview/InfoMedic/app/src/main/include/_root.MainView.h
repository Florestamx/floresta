// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\cache\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{struct InfoMedic_FuseControlsPageControl_FuseNode_Active_Property;}
namespace g{struct InfoMedic_FuseControlsTextControl_string_Value_Property;}
namespace g{struct InfoMedic_FuseNode_bool_IsEnabled_Property;}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Controls::Page*> registro;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::InfoMedic_FuseControlsTextControl_string_Value_Property*> temp_Value_inst;
    uStrong< ::g::InfoMedic_FuseControlsTextControl_string_Value_Property*> temp1_Value_inst;
    uStrong< ::g::InfoMedic_FuseNode_bool_IsEnabled_Property*> temp2_IsEnabled_inst;
    uStrong< ::g::InfoMedic_FuseControlsPageControl_FuseNode_Active_Property*> temp3_Active_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
