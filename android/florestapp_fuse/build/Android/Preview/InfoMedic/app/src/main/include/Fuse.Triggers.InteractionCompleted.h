// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct InteractionCompleted;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class InteractionCompleted :507
// {
::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof();
void InteractionCompleted__ctor_2_fn(InteractionCompleted* __this);
void InteractionCompleted__New1_fn(InteractionCompleted** __retval);
void InteractionCompleted__OnInteractingChanged_fn(InteractionCompleted* __this, uObject* s, uObject* a);
void InteractionCompleted__OnRooted_fn(InteractionCompleted* __this, ::g::Fuse::Node* parentNode);
void InteractionCompleted__OnUnrooted_fn(InteractionCompleted* __this, ::g::Fuse::Node* parentNode);
void InteractionCompleted__get_Source_fn(InteractionCompleted* __this, ::g::Fuse::Node** __retval);
void InteractionCompleted__set_Source_fn(InteractionCompleted* __this, ::g::Fuse::Node* value);

struct InteractionCompleted : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Node*> _node;
    bool _on;
    uStrong< ::g::Fuse::Node*> _source;

    void ctor_2();
    void OnInteractingChanged(uObject* s, uObject* a);
    ::g::Fuse::Node* Source();
    void Source(::g::Fuse::Node* value);
    static InteractionCompleted* New1();
};
// }

}}} // ::g::Fuse::Triggers
