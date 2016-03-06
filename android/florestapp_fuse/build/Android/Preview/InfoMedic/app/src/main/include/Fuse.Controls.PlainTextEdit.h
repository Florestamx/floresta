// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{namespace Controls{struct PlainTextEdit;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace UX{struct Factory;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PlainTextEdit :2590
// {
::g::Fuse::Controls::ParentControl_type* PlainTextEdit_typeof();
void PlainTextEdit__ctor_4_fn(PlainTextEdit* __this);
void PlainTextEdit__ForwardFocusNode_fn(PlainTextEdit* __this, ::g::Fuse::Node** __retval);
void PlainTextEdit__get_NativeEdit_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory** __retval);
void PlainTextEdit__set_NativeEdit_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory* value);
void PlainTextEdit__get_NativeText_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory** __retval);
void PlainTextEdit__set_NativeText_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory* value);
void PlainTextEdit__New2_fn(PlainTextEdit** __retval);
void PlainTextEdit__OnFactoryChanged_fn(PlainTextEdit* pte);
void PlainTextEdit__OnLostFocus_fn(PlainTextEdit* __this, uObject* s, uObject* a);
void PlainTextEdit__OnRooted_fn(PlainTextEdit* __this);
void PlainTextEdit__OnUnrooted_fn(PlainTextEdit* __this);
void PlainTextEdit__SetupEdit_fn(PlainTextEdit* __this);
void PlainTextEdit__SetupText_fn(PlainTextEdit* __this);

struct PlainTextEdit : ::g::Fuse::Controls::ParentControl
{
    uStrong< ::g::Fuse::Node*> _nativeEdit;
    uStrong< ::g::Fuse::Node*> _nativeText;
    uStrong< ::g::Fuse::Controls::NativeViewHost*> _nativeViewHost;
    bool _textMode;
    static uSStrong< ::g::Fuse::StyleProperty1*> NativeEditProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& NativeEditProperty() { return PlainTextEdit_typeof()->Init(), NativeEditProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> NativeTextProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& NativeTextProperty() { return PlainTextEdit_typeof()->Init(), NativeTextProperty_; }

    void ctor_4();
    ::g::Fuse::Node* ForwardFocusNode();
    ::g::Uno::UX::Factory* NativeEdit();
    void NativeEdit(::g::Uno::UX::Factory* value);
    ::g::Uno::UX::Factory* NativeText();
    void NativeText(::g::Uno::UX::Factory* value);
    void OnLostFocus(uObject* s, uObject* a);
    void SetupEdit();
    void SetupText();
    static PlainTextEdit* New2();
    static void OnFactoryChanged(PlainTextEdit* pte);
};
// }

}}} // ::g::Fuse::Controls
