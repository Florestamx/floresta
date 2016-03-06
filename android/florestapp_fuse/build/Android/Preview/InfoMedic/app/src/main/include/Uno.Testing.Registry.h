// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Testing{struct NamedTestMethod;}}}
namespace g{namespace Uno{namespace Testing{struct Registry;}}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class Registry :789
// {
uType* Registry_typeof();
void Registry__ctor__fn(Registry* __this);
void Registry__Add_fn(Registry* __this, uDelegate* method, uString* name, bool* isAsync);
void Registry__FindTest_fn(Registry* __this, uString* testName, ::g::Uno::Testing::NamedTestMethod** __retval);
void Registry__New1_fn(Registry** __retval);

struct Registry : uObject
{
    uStrong< ::g::Uno::Collections::List*> tests;

    void ctor_();
    void Add(uDelegate* method, uString* name, bool isAsync);
    ::g::Uno::Testing::NamedTestMethod* FindTest(uString* testName);
    static Registry* New1();
};
// }

}}} // ::g::Uno::Testing
