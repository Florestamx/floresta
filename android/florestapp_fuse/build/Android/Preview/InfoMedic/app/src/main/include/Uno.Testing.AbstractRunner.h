// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Testing.IRunner.h>
namespace g{namespace Uno{namespace Testing{struct AbstractRunner;}}}
namespace g{namespace Uno{namespace Testing{struct AssertionFailedException;}}}
namespace g{namespace Uno{namespace Testing{struct NamedTestMethod;}}}
namespace g{namespace Uno{namespace Testing{struct Registry;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Testing{

// public abstract class AbstractRunner :5
// {
struct AbstractRunner_type : uType
{
    ::g::Uno::Testing::IRunner interface0;
    void(*fp_AssertionFailed)(::g::Uno::Testing::AbstractRunner*, ::g::Uno::Testing::AssertionFailedException*);
    void(*fp_ExceptionThrown)(::g::Uno::Testing::AbstractRunner*, ::g::Uno::Exception*);
    void(*fp_Start)(::g::Uno::Testing::AbstractRunner*);
    void(*fp_TestPassed)(::g::Uno::Testing::AbstractRunner*);
    void(*fp_TestStarting)(::g::Uno::Testing::AbstractRunner*, uString*);
};

AbstractRunner_type* AbstractRunner_typeof();
void AbstractRunner__ctor__fn(AbstractRunner* __this, ::g::Uno::Testing::Registry* registry1);
void AbstractRunner__Done_fn(AbstractRunner* __this, uString* testName);
void AbstractRunner__EnsureStarted_fn(AbstractRunner* __this);
void AbstractRunner__get_NextTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod** __retval);
void AbstractRunner__set_NextTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* value);
void AbstractRunner__RunAsyncTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* test);
void AbstractRunner__RunSimpleTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* test);
void AbstractRunner__RunTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* test);
void AbstractRunner__Update_fn(AbstractRunner* __this);

struct AbstractRunner : uObject
{
    uStrong< ::g::Uno::Testing::NamedTestMethod*> _nextTest;
    uStrong< ::g::Uno::Testing::Registry*> registry;
    bool started;

    void ctor_(::g::Uno::Testing::Registry* registry1);
    void AssertionFailed(::g::Uno::Testing::AssertionFailedException* e) { (((AbstractRunner_type*)__type)->fp_AssertionFailed)(this, e); }
    void Done(uString* testName);
    void EnsureStarted();
    void ExceptionThrown(::g::Uno::Exception* e) { (((AbstractRunner_type*)__type)->fp_ExceptionThrown)(this, e); }
    ::g::Uno::Testing::NamedTestMethod* NextTest();
    void NextTest(::g::Uno::Testing::NamedTestMethod* value);
    void RunAsyncTest(::g::Uno::Testing::NamedTestMethod* test);
    void RunSimpleTest(::g::Uno::Testing::NamedTestMethod* test);
    void RunTest(::g::Uno::Testing::NamedTestMethod* test);
    void Start() { (((AbstractRunner_type*)__type)->fp_Start)(this); }
    void TestPassed() { (((AbstractRunner_type*)__type)->fp_TestPassed)(this); }
    void TestStarting(uString* name) { (((AbstractRunner_type*)__type)->fp_TestStarting)(this, name); }
    void Update();
};
// }

}}} // ::g::Uno::Testing
