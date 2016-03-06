// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct CancelInteractions;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class CancelInteractions :30
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target);
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Node** __retval);
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Node* value);

struct CancelInteractions : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Node*> _Target;

    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
