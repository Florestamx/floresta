// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Testing{struct NamedTestMethod;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class NamedTestMethod :972
// {
uType* NamedTestMethod_typeof();
void NamedTestMethod__ctor__fn(NamedTestMethod* __this, uDelegate* method, uString* name, bool* isAsync);
void NamedTestMethod__New1_fn(uDelegate* method, uString* name, bool* isAsync, NamedTestMethod** __retval);

struct NamedTestMethod : uObject
{
    uStrong< ::g::Uno::Exception*> Exception;
    bool Failed;
    bool Finished;
    bool IsAsync;
    uStrong<uDelegate*> Method;
    uStrong<uString*> Name;

    void ctor_(uDelegate* method, uString* name, bool isAsync);
    static NamedTestMethod* New1(uDelegate* method, uString* name, bool isAsync);
};
// }

}}} // ::g::Uno::Testing
