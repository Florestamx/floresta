// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PulseBackward;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class PulseBackward :292
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof();
void PulseBackward__ctor_1_fn(PulseBackward* __this);
void PulseBackward__New1_fn(PulseBackward** __retval);
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target);
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval);
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value);

struct PulseBackward : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Triggers::Timeline*> _Target;

    void ctor_1();
    ::g::Fuse::Triggers::Timeline* Target();
    void Target(::g::Fuse::Triggers::Timeline* value);
    static PulseBackward* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
