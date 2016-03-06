// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileInteracting;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileInteracting :475
// {
::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof();
void WhileInteracting__ctor_3_fn(WhileInteracting* __this);
void WhileInteracting__New1_fn(WhileInteracting** __retval);
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a);
void WhileInteracting__OnRooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode);
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode);
void WhileInteracting__get_Source_fn(WhileInteracting* __this, ::g::Fuse::Node** __retval);
void WhileInteracting__set_Source_fn(WhileInteracting* __this, ::g::Fuse::Node* value);

struct WhileInteracting : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Node*> _source;

    void ctor_3();
    void OnInteractingChanged(uObject* s, uObject* a);
    ::g::Fuse::Node* Source();
    void Source(::g::Fuse::Node* value);
    static WhileInteracting* New1();
};
// }

}}} // ::g::Fuse::Triggers
