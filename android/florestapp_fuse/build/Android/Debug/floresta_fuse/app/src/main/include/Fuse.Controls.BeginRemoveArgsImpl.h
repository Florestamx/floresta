// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.BeginRemoveArgs.h>
namespace g{namespace Fuse{namespace Controls{struct BeginRemoveArgsImpl;}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class BeginRemoveArgsImpl :1755
// {
::g::Fuse::BeginRemoveArgs_type* BeginRemoveArgsImpl_typeof();
void BeginRemoveArgsImpl__ctor_2_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent);
void BeginRemoveArgsImpl__get_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node** __retval);
void BeginRemoveArgsImpl__set_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* value);
void BeginRemoveArgsImpl__New2_fn(::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent, BeginRemoveArgsImpl** __retval);
void BeginRemoveArgsImpl__OnRemoved_fn(BeginRemoveArgsImpl* __this);
void BeginRemoveArgsImpl__get_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::ParentControl** __retval);
void BeginRemoveArgsImpl__set_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::ParentControl* value);

struct BeginRemoveArgsImpl : ::g::Fuse::BeginRemoveArgs
{
    uStrong< ::g::Fuse::Node*> _Child;
    uStrong< ::g::Fuse::Controls::ParentControl*> _Parent;

    void ctor_2(::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent);
    ::g::Fuse::Node* Child();
    void Child(::g::Fuse::Node* value);
    ::g::Fuse::Controls::ParentControl* Parent();
    void Parent(::g::Fuse::Controls::ParentControl* value);
    static BeginRemoveArgsImpl* New2(::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent);
};
// }

}}} // ::g::Fuse::Controls
