// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ScriptEventArgs :2422
// {
uType* ScriptEventArgs_typeof();
void ScriptEventArgs__ctor_1_fn(ScriptEventArgs* __this, ::g::Fuse::Node* sender, uString* name, uObject* args);
void ScriptEventArgs__New2_fn(::g::Fuse::Node* sender, uString* name, uObject* args, ScriptEventArgs** __retval);

struct ScriptEventArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> Args;
    uStrong<uString*> Name;
    uStrong< ::g::Fuse::Node*> Sender;

    void ctor_1(::g::Fuse::Node* sender, uString* name, uObject* args);
    static ScriptEventArgs* New2(::g::Fuse::Node* sender, uString* name, uObject* args);
};
// }

}}} // ::g::Fuse::Reactive
