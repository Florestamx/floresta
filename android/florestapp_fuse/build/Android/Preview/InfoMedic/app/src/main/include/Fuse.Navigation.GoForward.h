// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct GoForward;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class GoForward :2137
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof();
void GoForward__ctor_2_fn(GoForward* __this);
void GoForward__New1_fn(GoForward** __retval);
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node);

struct GoForward : ::g::Fuse::Navigation::BackForwardNavigationTriggerAction
{
    void ctor_2();
    static GoForward* New1();
};
// }

}}} // ::g::Fuse::Navigation
