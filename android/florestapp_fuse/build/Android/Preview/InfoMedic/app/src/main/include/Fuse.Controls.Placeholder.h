// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Placeholder;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Factory;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Placeholder :1344
// {
::g::Fuse::Controls::ContentControl_type* Placeholder_typeof();
void Placeholder__ctor_4_fn(Placeholder* __this);
void Placeholder__AcquireTarget_fn(Placeholder* __this);
void Placeholder__get_ContentFactory_fn(Placeholder* __this, ::g::Uno::UX::Factory** __retval);
void Placeholder__set_ContentFactory_fn(Placeholder* __this, ::g::Uno::UX::Factory* value);
void Placeholder__New2_fn(Placeholder** __retval);
void Placeholder__get_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Node** __retval);
void Placeholder__set_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Node* value);
void Placeholder__get_Target_fn(Placeholder* __this, ::g::Fuse::Node** __retval);
void Placeholder__set_Target_fn(Placeholder* __this, ::g::Fuse::Node* value);

struct Placeholder : ::g::Fuse::Controls::ContentControl
{
    uStrong< ::g::Uno::UX::Factory*> _contentFactory;
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_4();
    void AcquireTarget();
    ::g::Uno::UX::Factory* ContentFactory();
    void ContentFactory(::g::Uno::UX::Factory* value);
    ::g::Fuse::Node* PlaceholderContent();
    void PlaceholderContent(::g::Fuse::Node* value);
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static Placeholder* New2();
};
// }

}}} // ::g::Fuse::Controls
