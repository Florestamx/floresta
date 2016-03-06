// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Application.h>
namespace g{namespace Uno{namespace Testing{struct Registry;}}}
namespace g{namespace Uno{namespace Testing{struct TestSetup;}}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class TestSetup :999
// {
::g::Uno::Application_type* TestSetup_typeof();
void TestSetup__ctor_1_fn(TestSetup* __this);
void TestSetup__AddTests_fn(::g::Uno::Testing::Registry* registry);
void TestSetup__CreateRunner_fn(uObject** __retval);
void TestSetup__New1_fn(TestSetup** __retval);
void TestSetup__get_Runner_fn(uObject** __retval);
void TestSetup__Update_fn(TestSetup* __this);

struct TestSetup : ::g::Uno::Application
{
    static uSStrong<uObject*> _runner_;
    static uSStrong<uObject*>& _runner() { return TestSetup_typeof()->Init(), _runner_; }
    static uSStrong<uString*> _serverUrl_;
    static uSStrong<uString*>& _serverUrl() { return TestSetup_typeof()->Init(), _serverUrl_; }

    void ctor_1();
    static void AddTests(::g::Uno::Testing::Registry* registry);
    static uObject* CreateRunner();
    static TestSetup* New1();
    static uObject* Runner();
};
// }

}}} // ::g::Uno::Testing
