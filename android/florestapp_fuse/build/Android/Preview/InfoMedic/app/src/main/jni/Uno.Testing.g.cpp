// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Testing.AbstractRunner.h>
#include <Uno.Testing.Assert.h>
#include <Uno.Testing.AssertionFailedException.h>
#include <Uno.Testing.AsyncTestAttribute.h>
#include <Uno.Testing.IRunner.h>
#include <Uno.Testing.NamedTestMethod.h>
#include <Uno.Testing.Registry.h>
#include <Uno.Testing.RemoteRunner.h>
#include <Uno.Testing.TestAttribute.h>
#include <Uno.Testing.TestSetup.h>
static uString* STRINGS[28];
static uType* TYPES[15];

namespace g{
namespace Uno{
namespace Testing{

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(5)
// ----------------------------------------------------------

// public abstract class AbstractRunner :5
// {
AbstractRunner_type* AbstractRunner_typeof()
{
    static uSStrong<AbstractRunner_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AbstractRunner);
    options.TypeSize = sizeof(AbstractRunner_type);
    type = (AbstractRunner_type*)uClassType::New("Uno.Testing.AbstractRunner", options);
    type->interface0.fp_Update = (void(*)(uObject*))AbstractRunner__Update_fn;
    ::TYPES[0] = ::g::Uno::Testing::NamedTestMethod_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Testing::AssertionFailedException_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Testing::IRunner_typeof(), offsetof(AbstractRunner_type, interface0));
    type->SetFields(0,
        ::g::Uno::Testing::NamedTestMethod_typeof(), offsetof(::g::Uno::Testing::AbstractRunner, _nextTest), 0,
        ::g::Uno::Testing::Registry_typeof(), offsetof(::g::Uno::Testing::AbstractRunner, registry), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Testing::AbstractRunner, started), 0);
    type->Reflection.SetFields(1,
        new uField("_nextTest", 0));
    type->Reflection.SetFunctions(5,
        new uFunction("EnsureStarted", NULL, (void*)AbstractRunner__EnsureStarted_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_NextTest", NULL, (void*)AbstractRunner__get_NextTest_fn, 0, false, ::g::Uno::Testing::NamedTestMethod_typeof(), 0),
        new uFunction("set_NextTest", NULL, (void*)AbstractRunner__set_NextTest_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Testing::NamedTestMethod_typeof()),
        new uFunction("RunTest", NULL, (void*)AbstractRunner__RunTest_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Testing::NamedTestMethod_typeof()),
        new uFunction("Update", NULL, (void*)AbstractRunner__Update_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// protected AbstractRunner(Uno.Testing.Registry registry) :28
void AbstractRunner__ctor__fn(AbstractRunner* __this, ::g::Uno::Testing::Registry* registry1)
{
    __this->ctor_(registry1);
}

// internal void Done(string testName) :133
void AbstractRunner__Done_fn(AbstractRunner* __this, uString* testName)
{
    __this->Done(testName);
}

// public void EnsureStarted() :43
void AbstractRunner__EnsureStarted_fn(AbstractRunner* __this)
{
    __this->EnsureStarted();
}

// public Uno.Testing.NamedTestMethod get_NextTest() :21
void AbstractRunner__get_NextTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod** __retval)
{
    *__retval = __this->NextTest();
}

// public void set_NextTest(Uno.Testing.NamedTestMethod value) :22
void AbstractRunner__set_NextTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* value)
{
    __this->NextTest(value);
}

// private void RunAsyncTest(Uno.Testing.NamedTestMethod test) :88
void AbstractRunner__RunAsyncTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* test)
{
    __this->RunAsyncTest(test);
}

// private void RunSimpleTest(Uno.Testing.NamedTestMethod test) :66
void AbstractRunner__RunSimpleTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* test)
{
    __this->RunSimpleTest(test);
}

// public void RunTest(Uno.Testing.NamedTestMethod test) :52
void AbstractRunner__RunTest_fn(AbstractRunner* __this, ::g::Uno::Testing::NamedTestMethod* test)
{
    __this->RunTest(test);
}

// public void Update() :33
void AbstractRunner__Update_fn(AbstractRunner* __this)
{
    __this->Update();
}

// protected AbstractRunner(Uno.Testing.Registry registry) [instance] :28
void AbstractRunner::ctor_(::g::Uno::Testing::Registry* registry1)
{
    uStackFrame __("Uno.Testing.AbstractRunner", ".ctor(Uno.Testing.Registry)");
    registry = registry1;
}

// internal void Done(string testName) [instance] :133
void AbstractRunner::Done(uString* testName)
{
    uStackFrame __("Uno.Testing.AbstractRunner", "Done(string)");
    ::g::Uno::Testing::NamedTestMethod* test = uPtr(registry)->FindTest(testName);

    if (uPtr(test)->Finished)
        return;

    uPtr(test)->Finished = true;

    if (!test->Failed)
        TestPassed();
    else if (uIs(test->Exception, ::TYPES[2/*Uno.Testing.AssertionFailedException*/]))
        AssertionFailed(uAs< ::g::Uno::Testing::AssertionFailedException*>(uPtr(test)->Exception, ::TYPES[2/*Uno.Testing.AssertionFailedException*/]));
    else if (test->Exception != NULL)
        ExceptionThrown(uPtr(test)->Exception);
}

// public void EnsureStarted() [instance] :43
void AbstractRunner::EnsureStarted()
{
    uStackFrame __("Uno.Testing.AbstractRunner", "EnsureStarted()");

    if (!started)
    {
        started = true;
        Start();
    }
}

// public Uno.Testing.NamedTestMethod get_NextTest() [instance] :21
::g::Uno::Testing::NamedTestMethod* AbstractRunner::NextTest()
{
    uStackFrame __("Uno.Testing.AbstractRunner", "get_NextTest()");
    return _nextTest;
}

// public void set_NextTest(Uno.Testing.NamedTestMethod value) [instance] :22
void AbstractRunner::NextTest(::g::Uno::Testing::NamedTestMethod* value)
{
    uStackFrame __("Uno.Testing.AbstractRunner", "set_NextTest(Uno.Testing.NamedTestMethod)");
    _nextTest = value;
}

// private void RunAsyncTest(Uno.Testing.NamedTestMethod test) [instance] :88
void AbstractRunner::RunAsyncTest(::g::Uno::Testing::NamedTestMethod* test)
{
    uStackFrame __("Uno.Testing.AbstractRunner", "RunAsyncTest(Uno.Testing.NamedTestMethod)");

    try
    {
        uPtr(uPtr(test)->Method)->InvokeVoid();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(test)->Exception = e;
        test->Failed = true;
    }

    if (uPtr(test)->Failed)
        Done(uPtr(test)->Name);
}

// private void RunSimpleTest(Uno.Testing.NamedTestMethod test) [instance] :66
void AbstractRunner::RunSimpleTest(::g::Uno::Testing::NamedTestMethod* test)
{
    uStackFrame __("Uno.Testing.AbstractRunner", "RunSimpleTest(Uno.Testing.NamedTestMethod)");

    try
    {
        uPtr(uPtr(test)->Method)->InvokeVoid();
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[2/*Uno.Testing.AssertionFailedException*/]))
        {
            ::g::Uno::Testing::AssertionFailedException* e = (::g::Uno::Testing::AssertionFailedException*)__t.Exception;
            AssertionFailed(e);
            uPtr(test)->Failed = true;
        }
        else if (uIs(__t.Exception, ::g::Uno::Exception_typeof()))
        {
            ::g::Uno::Exception* e1 = (::g::Uno::Exception*)__t.Exception;
            ExceptionThrown(e1);
            uPtr(test)->Failed = true;
        }
        else throw __t;
    }

    if (!uPtr(test)->Failed)
        TestPassed();
}

// public void RunTest(Uno.Testing.NamedTestMethod test) [instance] :52
void AbstractRunner::RunTest(::g::Uno::Testing::NamedTestMethod* test)
{
    uStackFrame __("Uno.Testing.AbstractRunner", "RunTest(Uno.Testing.NamedTestMethod)");
    TestStarting(uPtr(test)->Name);

    if (test->IsAsync)
        RunAsyncTest(test);
    else
        RunSimpleTest(test);
}

// public void Update() [instance] :33
void AbstractRunner::Update()
{
    uStackFrame __("Uno.Testing.AbstractRunner", "Update()");
    EnsureStarted();

    if (NextTest() != NULL)
    {
        RunTest(NextTest());
        NextTest(NULL);
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(167)
// ------------------------------------------------------------

// public partial static class Assert :167
// {
// static Assert() :167
static void Assert__cctor__fn(uType* __type)
{
    Assert::maxStringLength_ = 300;
}

uClassType* Assert_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Testing.Assert", options);
    type->fp_cctor_ = Assert__cctor__fn;
    ::STRINGS[0] = uString::Const("True");
    ::STRINGS[1] = uString::Const("False");
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Testing::Assert::maxStringLength_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("IsTrue", NULL, (void*)Assert__IsTrue_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static void IsTrue(bool val, [string filePath], [int lineNumber], [string memberName]) :554
void Assert__IsTrue_fn(bool* val, uString* filePath, int* lineNumber, uString* memberName)
{
    Assert::IsTrue(*val, filePath, *lineNumber, memberName);
}

int Assert::maxStringLength_;

// public static void IsTrue(bool val, [string filePath], [int lineNumber], [string memberName]) [static] :554
void Assert::IsTrue(bool val, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Uno.Testing.Assert", "IsTrue(bool,[string],[int],[string])");
    Assert_typeof()->Init();

    if (!val)
        U_THROW(::g::Uno::Testing::AssertionFailedException::New4(filePath, lineNumber, memberName, ::STRINGS[0/*"True"*/], ::STRINGS[1/*"False"*/]));
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(733)
// ------------------------------------------------------------

// public sealed class AssertionFailedException :733
// {
::g::Uno::Exception_type* AssertionFailedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(AssertionFailedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Testing.AssertionFailedException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::TYPES[4] = uObject_typeof();
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, actual), 0,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, expected), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, filename), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, line), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, membername), 0);
    type->Reflection.SetFields(5,
        new uField("actual", 3),
        new uField("expected", 4),
        new uField("filename", 5),
        new uField("line", 6),
        new uField("membername", 7));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AssertionFailedException__New4_fn, 0, true, AssertionFailedException_typeof(), 5, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public AssertionFailedException(string filename, int line, string membername, string expected, string actual) :741
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1)
{
    __this->ctor_3(filename1, *line1, membername1, expected1, actual1);
}

// public AssertionFailedException New(string filename, int line, string membername, string expected, string actual) :741
void AssertionFailedException__New4_fn(uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1, AssertionFailedException** __retval)
{
    *__retval = AssertionFailedException::New4(filename1, *line1, membername1, expected1, actual1);
}

// public AssertionFailedException(string filename, int line, string membername, string expected, string actual) [instance] :741
void AssertionFailedException::ctor_3(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1)
{
    ctor_();
    filename = filename1;
    line = line1;
    membername = membername1;
    expected = expected1;
    actual = actual1;
}

// public AssertionFailedException New(string filename, int line, string membername, string expected, string actual) [static] :741
AssertionFailedException* AssertionFailedException::New4(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1)
{
    AssertionFailedException* obj1 = (AssertionFailedException*)uNew(AssertionFailedException_typeof());
    obj1->ctor_3(filename1, line1, membername1, expected1, actual1);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(723)
// ------------------------------------------------------------

// public sealed class AsyncTestAttribute :723
// {
uType* AsyncTestAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AsyncTestAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.AsyncTestAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)AsyncTestAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AsyncTestAttribute__New1_fn, 0, true, AsyncTestAttribute_typeof(), 0));
    return type;
}

// public generated AsyncTestAttribute() :723
void AsyncTestAttribute__ctor_1_fn(AsyncTestAttribute* __this)
{
    __this->ctor_1();
}

// public generated AsyncTestAttribute New() :723
void AsyncTestAttribute__New1_fn(AsyncTestAttribute** __retval)
{
    *__retval = AsyncTestAttribute::New1();
}

// public generated AsyncTestAttribute() [instance] :723
void AsyncTestAttribute::ctor_1()
{
    uStackFrame __("Uno.Testing.AsyncTestAttribute", ".ctor()");
    ctor_();
}

// public generated AsyncTestAttribute New() [static] :723
AsyncTestAttribute* AsyncTestAttribute::New1()
{
    AsyncTestAttribute* obj1 = (AsyncTestAttribute*)uNew(AsyncTestAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(775)
// ------------------------------------------------------------

// public abstract interface IRunner :775
// {
uInterfaceType* IRunner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Testing.IRunner", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Update", NULL, NULL, offsetof(IRunner, fp_Update), false, uVoid_typeof(), 0));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(972)
// ------------------------------------------------------------

// public sealed class NamedTestMethod :972
// {
uType* NamedTestMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NamedTestMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.NamedTestMethod", options);
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Finished), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, IsAsync), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Method), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Name), 0);
    type->Reflection.SetFields(6,
        new uField("Exception", 0),
        new uField("Failed", 1),
        new uField("Finished", 2),
        new uField("IsAsync", 3),
        new uField("Method", 4),
        new uField("Name", 5));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NamedTestMethod__New1_fn, 0, true, NamedTestMethod_typeof(), 3, ::g::Uno::Action_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public NamedTestMethod(Uno.Action method, string name, bool isAsync) :981
void NamedTestMethod__ctor__fn(NamedTestMethod* __this, uDelegate* method, uString* name, bool* isAsync)
{
    __this->ctor_(method, name, *isAsync);
}

// public NamedTestMethod New(Uno.Action method, string name, bool isAsync) :981
void NamedTestMethod__New1_fn(uDelegate* method, uString* name, bool* isAsync, NamedTestMethod** __retval)
{
    *__retval = NamedTestMethod::New1(method, name, *isAsync);
}

// public NamedTestMethod(Uno.Action method, string name, bool isAsync) [instance] :981
void NamedTestMethod::ctor_(uDelegate* method, uString* name, bool isAsync)
{
    uStackFrame __("Uno.Testing.NamedTestMethod", ".ctor(Uno.Action,string,bool)");
    Method = method;
    Name = name;
    IsAsync = isAsync;
}

// public NamedTestMethod New(Uno.Action method, string name, bool isAsync) [static] :981
NamedTestMethod* NamedTestMethod::New1(uDelegate* method, uString* name, bool isAsync)
{
    NamedTestMethod* obj1 = (NamedTestMethod*)uNew(NamedTestMethod_typeof());
    obj1->ctor_(method, name, isAsync);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(789)
// ------------------------------------------------------------

// public sealed class Registry :789
// {
uType* Registry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Registry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.Registry", options);
    type->fp_ctor_ = (void*)Registry__New1_fn;
    ::STRINGS[2] = uString::Const("Could not find test ");
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof());
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof());
    ::TYPES[0] = ::g::Uno::Testing::NamedTestMethod_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof()), offsetof(::g::Uno::Testing::Registry, tests), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Add", NULL, (void*)Registry__Add_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Action_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("FindTest", NULL, (void*)Registry__FindTest_fn, 0, false, ::g::Uno::Testing::NamedTestMethod_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Registry__New1_fn, 0, true, Registry_typeof(), 0));
    return type;
}

// public generated Registry() :789
void Registry__ctor__fn(Registry* __this)
{
    __this->ctor_();
}

// public void Add(Uno.Action method, string name, bool isAsync) :793
void Registry__Add_fn(Registry* __this, uDelegate* method, uString* name, bool* isAsync)
{
    __this->Add(method, name, *isAsync);
}

// public Uno.Testing.NamedTestMethod FindTest(string testName) :798
void Registry__FindTest_fn(Registry* __this, uString* testName, ::g::Uno::Testing::NamedTestMethod** __retval)
{
    *__retval = __this->FindTest(testName);
}

// public generated Registry New() :789
void Registry__New1_fn(Registry** __retval)
{
    *__retval = Registry::New1();
}

// public generated Registry() [instance] :789
void Registry::ctor_()
{
    uStackFrame __("Uno.Testing.Registry", ".ctor()");
    tests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/]));
}

// public void Add(Uno.Action method, string name, bool isAsync) [instance] :793
void Registry::Add(uDelegate* method, uString* name, bool isAsync)
{
    uStackFrame __("Uno.Testing.Registry", "Add(Uno.Action,string,bool)");
    ::g::Uno::Collections::List__Add_fn(uPtr(tests), ::g::Uno::Testing::NamedTestMethod::New1(method, name, isAsync));
}

// public Uno.Testing.NamedTestMethod FindTest(string testName) [instance] :798
::g::Uno::Testing::NamedTestMethod* Registry::FindTest(uString* testName)
{
    uStackFrame __("Uno.Testing.Registry", "FindTest(string)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Testing::NamedTestMethod*> > ret3;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Testing::NamedTestMethod*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tests), &ret3), ret3); enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Uno.Testing.NamedTestMethod>.Enumerator*/]); )
    {
        ::g::Uno::Testing::NamedTestMethod* t = enum1.Current(::TYPES[6/*Uno.Collections.List<Uno.Testing.NamedTestMethod>.Enumerator*/]);

        if (::g::Uno::String::op_Equality(uPtr(t)->Name, testName))
            return t;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[2/*"Could not f...*/], testName)));
}

// public generated Registry New() [static] :789
Registry* Registry::New1()
{
    Registry* obj2 = (Registry*)uNew(Registry_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(827)
// ------------------------------------------------------------

// public sealed class RemoteRunner :827
// {
::g::Uno::Testing::AbstractRunner_type* RemoteRunner_typeof()
{
    static uSStrong< ::g::Uno::Testing::AbstractRunner_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RemoteRunner);
    options.TypeSize = sizeof(::g::Uno::Testing::AbstractRunner_type);
    type = (::g::Uno::Testing::AbstractRunner_type*)uClassType::New("Uno.Testing.RemoteRunner", options);
    type->SetBase(::g::Uno::Testing::AbstractRunner_typeof());
    type->fp_AssertionFailed = (void(*)(::g::Uno::Testing::AbstractRunner*, ::g::Uno::Testing::AssertionFailedException*))RemoteRunner__AssertionFailed_fn;
    type->fp_ExceptionThrown = (void(*)(::g::Uno::Testing::AbstractRunner*, ::g::Uno::Exception*))RemoteRunner__ExceptionThrown_fn;
    type->fp_Start = (void(*)(::g::Uno::Testing::AbstractRunner*))RemoteRunner__Start_fn;
    type->fp_TestPassed = (void(*)(::g::Uno::Testing::AbstractRunner*))RemoteRunner__TestPassed_fn;
    type->fp_TestStarting = (void(*)(::g::Uno::Testing::AbstractRunner*, uString*))RemoteRunner__TestStarting_fn;
    type->interface0.fp_Update = (void(*)(uObject*))::g::Uno::Testing::AbstractRunner__Update_fn;
    ::STRINGS[3] = uString::Const("?event=testAsserted");
    ::STRINGS[4] = uString::Const("&testName=");
    ::STRINGS[5] = uString::Const("&filename=");
    ::STRINGS[6] = uString::Const("&line=");
    ::STRINGS[7] = uString::Const("&membername=");
    ::STRINGS[8] = uString::Const("&expected=");
    ::STRINGS[9] = uString::Const("&actual=");
    ::STRINGS[10] = uString::Const("done");
    ::STRINGS[11] = uString::Const("wait");
    ::STRINGS[12] = uString::Const("run:");
    ::STRINGS[13] = uString::Const("Unknown command ");
    ::STRINGS[14] = uString::Const("?event=testThrew");
    ::STRINGS[15] = uString::Const("&message=");
    ::STRINGS[16] = uString::Const("GET");
    ::STRINGS[17] = uString::Const("?event=internalError");
    ::STRINGS[18] = uString::Const("Error sending request. ");
    ::STRINGS[19] = uString::Const(",Url=");
    ::STRINGS[20] = uString::Const(",Method=");
    ::STRINGS[21] = uString::Const(",ResponseStatus=");
    ::STRINGS[22] = uString::Const(".");
    ::STRINGS[23] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Uno.Testing\\0.24.5\\$.uno");
    ::STRINGS[24] = uString::Const("?event=ready");
    ::STRINGS[25] = uString::Const("?event=testPassed");
    ::STRINGS[26] = uString::Const("&us=");
    ::TYPES[7] = ::g::Uno::Testing::AbstractRunner_typeof();
    ::TYPES[2] = ::g::Uno::Testing::AssertionFailedException_typeof();
    ::TYPES[4] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Application_typeof();
    ::TYPES[9] = ::g::Uno::String_typeof();
    ::TYPES[10] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[12] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Testing::IRunner_typeof(), offsetof(::g::Uno::Testing::AbstractRunner_type, interface0));
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::RemoteRunner, currentTest), 0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Uno::Testing::RemoteRunner, handler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::RemoteRunner, prefix), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Testing::RemoteRunner, startTime), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RemoteRunner__New1_fn, 0, true, RemoteRunner_typeof(), 2, ::g::Uno::Testing::Registry_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public RemoteRunner(Uno.Testing.Registry registry, string prefix) :834
void RemoteRunner__ctor_1_fn(RemoteRunner* __this, ::g::Uno::Testing::Registry* registry1, uString* prefix1)
{
    __this->ctor_1(registry1, prefix1);
}

// private override sealed void AssertionFailed(Uno.Testing.AssertionFailedException e) :895
void RemoteRunner__AssertionFailed_fn(RemoteRunner* __this, ::g::Uno::Testing::AssertionFailedException* e)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "AssertionFailed(Uno.Testing.AssertionFailedException)");
    uString* q = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(__this->prefix, ::STRINGS[3/*"?event=test...*/]), ::STRINGS[4/*"&testName="*/]), ::g::Uno::Net::Http::Uri::Encode(__this->currentTest)), ::STRINGS[5/*"&filename="*/]), ::g::Uno::Net::Http::Uri::Encode(uPtr(e)->filename)), ::STRINGS[6/*"&line="*/]), uBox<int>(::TYPES[13/*int*/], uPtr(e)->line)), ::STRINGS[7/*"&membername="*/]), ::g::Uno::Net::Http::Uri::Encode(uPtr(e)->membername)), ::STRINGS[8/*"&expected="*/]), ::g::Uno::Net::Http::Uri::Encode(::g::Uno::Object::ToString(uPtr(uPtr(e)->expected)))), ::STRINGS[9/*"&actual="*/]), ::g::Uno::Net::Http::Uri::Encode(::g::Uno::Object::ToString(uPtr(uPtr(e)->actual))));
    __this->Get(q);
}

// private void CommandCallback(string content) :852
void RemoteRunner__CommandCallback_fn(RemoteRunner* __this, uString* content)
{
    __this->CommandCallback(content);
}

// private override sealed void ExceptionThrown(Uno.Exception e) :907
void RemoteRunner__ExceptionThrown_fn(RemoteRunner* __this, ::g::Uno::Exception* e)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "ExceptionThrown(Uno.Exception)");
    uString* q = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(__this->prefix, ::STRINGS[14/*"?event=test...*/]), ::STRINGS[4/*"&testName="*/]), ::g::Uno::Net::Http::Uri::Encode(__this->currentTest)), ::STRINGS[15/*"&message="*/]), ::g::Uno::Net::Http::Uri::Encode(uPtr(e)->ToString()));
    __this->Get(q);
}

// private void Get(string query) :922
void RemoteRunner__Get_fn(RemoteRunner* __this, uString* query)
{
    __this->Get(query);
}

// private void InternalError(Uno.Exception e) :915
void RemoteRunner__InternalError_fn(RemoteRunner* __this, ::g::Uno::Exception* e)
{
    __this->InternalError(e);
}

// public RemoteRunner New(Uno.Testing.Registry registry, string prefix) :834
void RemoteRunner__New1_fn(::g::Uno::Testing::Registry* registry1, uString* prefix1, RemoteRunner** __retval)
{
    *__retval = RemoteRunner::New1(registry1, prefix1);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest request) :847
void RemoteRunner__OnDone_fn(RemoteRunner* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->OnDone(request);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest request, string message) :931
void RemoteRunner__OnError_fn(RemoteRunner* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* message)
{
    __this->OnError(request, message);
}

// private override sealed void Start() :840
void RemoteRunner__Start_fn(RemoteRunner* __this)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "Start()");
    __this->handler = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    uString* query = ::g::Uno::String::op_Addition2(__this->prefix, ::STRINGS[24/*"?event=ready"*/]);
    __this->Get(query);
}

// private override sealed void TestPassed() :885
void RemoteRunner__TestPassed_fn(RemoteRunner* __this)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "TestPassed()");
    int us = (int)(1000000.0 * (::g::Uno::Diagnostics::Clock::GetSeconds() - __this->startTime));
    uString* q = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(__this->prefix, ::STRINGS[25/*"?event=test...*/]), ::STRINGS[4/*"&testName="*/]), ::g::Uno::Net::Http::Uri::Encode(__this->currentTest)), ::STRINGS[26/*"&us="*/]), uBox<int>(::TYPES[13/*int*/], us));
    __this->Get(q);
    __this->currentTest = NULL;
}

// private override sealed void TestStarting(string name) :879
void RemoteRunner__TestStarting_fn(RemoteRunner* __this, uString* name)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "TestStarting(string)");
    __this->currentTest = name;
    __this->startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
}

// public RemoteRunner(Uno.Testing.Registry registry, string prefix) [instance] :834
void RemoteRunner::ctor_1(::g::Uno::Testing::Registry* registry1, uString* prefix1)
{
    uStackFrame __("Uno.Testing.RemoteRunner", ".ctor(Uno.Testing.Registry,string)");
    ctor_(registry1);
    registry = registry1;
    prefix = prefix1;
}

// private void CommandCallback(string content) [instance] :852
void RemoteRunner::CommandCallback(uString* content)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "CommandCallback(string)");

    try
    {
        if (::g::Uno::String::op_Equality(content, ::STRINGS[10/*"done"*/]))
            uPtr(uPtr(::g::Uno::Application::Current())->Window())->Close();
        else if (::g::Uno::String::op_Equality(content, ::STRINGS[11/*"wait"*/]))
            ;
        else if ((uPtr(content)->Length() >= 4) && ::g::Uno::String::op_Equality(::g::Uno::String::Substring1(uPtr(content), 0, 4), ::STRINGS[12/*"run:"*/]))
            NextTest(uPtr(registry)->FindTest(::g::Uno::String::Substring(uPtr(content), 4)));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[13/*"Unknown com...*/], content)));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InternalError(e);
        throw __t;
    }
}

// private void Get(string query) [instance] :922
void RemoteRunner::Get(uString* query)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "Get(string)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = uPtr(handler)->CreateRequest(::STRINGS[16/*"GET"*/], query);
    uPtr(request)->add_Done(uDelegate::New(::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)RemoteRunner__OnDone_fn, this));
    request->add_Error(uDelegate::New(::TYPES[12/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)RemoteRunner__OnError_fn, this));
    request->SetResponseType(0);
    request->SendAsync();
}

// private void InternalError(Uno.Exception e) [instance] :915
void RemoteRunner::InternalError(::g::Uno::Exception* e)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "InternalError(Uno.Exception)");
    uString* q = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(prefix, ::STRINGS[17/*"?event=inte...*/]), ::STRINGS[15/*"&message="*/]), ::g::Uno::Net::Http::Uri::Encode(uPtr(e)->ToString()));
    Get(q);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :847
void RemoteRunner::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "OnDone(Uno.Net.Http.HttpMessageHandlerRequest)");
    CommandCallback(uPtr(request)->GetResponseContentString());
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest request, string message) [instance] :931
void RemoteRunner::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* message)
{
    uStackFrame __("Uno.Testing.RemoteRunner", "OnError(Uno.Net.Http.HttpMessageHandlerRequest,string)");
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[18/*"Error sendi...*/], message), ::STRINGS[19/*",Url="*/]), uPtr(request)->Url()), ::STRINGS[20/*",Method="*/]), uPtr(request)->Method()), ::STRINGS[21/*",ResponseSt...*/]), uBox<int>(::TYPES[13/*int*/], uPtr(request)->GetResponseStatus())), ::STRINGS[22/*"."*/]), 1, ::STRINGS[23/*"C:\\Program...*/], 933);
}

// public RemoteRunner New(Uno.Testing.Registry registry, string prefix) [static] :834
RemoteRunner* RemoteRunner::New1(::g::Uno::Testing::Registry* registry1, uString* prefix1)
{
    RemoteRunner* obj1 = (RemoteRunner*)uNew(RemoteRunner_typeof());
    obj1->ctor_1(registry1, prefix1);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(962)
// ------------------------------------------------------------

// public sealed class TestAttribute :962
// {
uType* TestAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TestAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.TestAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)TestAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TestAttribute__New1_fn, 0, true, TestAttribute_typeof(), 0));
    return type;
}

// public generated TestAttribute() :962
void TestAttribute__ctor_1_fn(TestAttribute* __this)
{
    __this->ctor_1();
}

// public generated TestAttribute New() :962
void TestAttribute__New1_fn(TestAttribute** __retval)
{
    *__retval = TestAttribute::New1();
}

// public generated TestAttribute() [instance] :962
void TestAttribute::ctor_1()
{
    uStackFrame __("Uno.Testing.TestAttribute", ".ctor()");
    ctor_();
}

// public generated TestAttribute New() [static] :962
TestAttribute* TestAttribute::New1()
{
    TestAttribute* obj1 = (TestAttribute*)uNew(TestAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Uno.Testing\0.24.5\$.uno(999)
// ------------------------------------------------------------

// public sealed class TestSetup :999
// {
// static TestSetup() :999
static void TestSetup__cctor__fn(uType* __type)
{
    TestSetup::_serverUrl_ = ::STRINGS[27/*""*/];
}

::g::Uno::Application_type* TestSetup_typeof()
{
    static uSStrong< ::g::Uno::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TestSetup);
    options.TypeSize = sizeof(::g::Uno::Application_type);
    type = (::g::Uno::Application_type*)uClassType::New("Uno.Testing.TestSetup", options);
    type->SetBase(::g::Uno::Application_typeof());
    type->fp_ctor_ = (void*)TestSetup__New1_fn;
    type->fp_cctor_ = TestSetup__cctor__fn;
    type->fp_Update = (void(*)(::g::Uno::Application*))TestSetup__Update_fn;
    ::STRINGS[27] = uString::Const("");
    ::TYPES[14] = ::g::Uno::Testing::IRunner_typeof();
    type->SetFields(5,
        ::g::Uno::Testing::IRunner_typeof(), (uintptr_t)&::g::Uno::Testing::TestSetup::_runner_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Testing::TestSetup::_serverUrl_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("AddTests", NULL, (void*)TestSetup__AddTests_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Testing::Registry_typeof()),
        new uFunction("CreateRunner", NULL, (void*)TestSetup__CreateRunner_fn, 0, true, ::g::Uno::Testing::IRunner_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TestSetup__New1_fn, 0, true, TestSetup_typeof(), 0),
        new uFunction("get_Runner", NULL, (void*)TestSetup__get_Runner_fn, 0, true, ::g::Uno::Testing::IRunner_typeof(), 0));
    return type;
}

// public generated TestSetup() :999
void TestSetup__ctor_1_fn(TestSetup* __this)
{
    __this->ctor_1();
}

// public static void AddTests(Uno.Testing.Registry registry) :1029
void TestSetup__AddTests_fn(::g::Uno::Testing::Registry* registry)
{
    TestSetup::AddTests(registry);
}

// public static Uno.Testing.IRunner CreateRunner() :1022
void TestSetup__CreateRunner_fn(uObject** __retval)
{
    *__retval = TestSetup::CreateRunner();
}

// public generated TestSetup New() :999
void TestSetup__New1_fn(TestSetup** __retval)
{
    *__retval = TestSetup::New1();
}

// public static Uno.Testing.IRunner get_Runner() :1006
void TestSetup__get_Runner_fn(uObject** __retval)
{
    *__retval = TestSetup::Runner();
}

// public override sealed void Update() :1016
void TestSetup__Update_fn(TestSetup* __this)
{
    uStackFrame __("Uno.Testing.TestSetup", "Update()");
    ::g::Uno::Application__Update_fn(__this);
    ::g::Uno::Testing::IRunner::Update(uInterface(uPtr(TestSetup::Runner()), ::TYPES[14/*Uno.Testing.IRunner*/]));
}

uSStrong<uObject*> TestSetup::_runner_;
uSStrong<uString*> TestSetup::_serverUrl_;

// public generated TestSetup() [instance] :999
void TestSetup::ctor_1()
{
    uStackFrame __("Uno.Testing.TestSetup", ".ctor()");
    ctor_();
}

// public static void AddTests(Uno.Testing.Registry registry) [static] :1029
void TestSetup::AddTests(::g::Uno::Testing::Registry* registry)
{
    TestSetup_typeof()->Init();
}

// public static Uno.Testing.IRunner CreateRunner() [static] :1022
uObject* TestSetup::CreateRunner()
{
    uStackFrame __("Uno.Testing.TestSetup", "CreateRunner()");
    TestSetup_typeof()->Init();
    ::g::Uno::Testing::Registry* registry = ::g::Uno::Testing::Registry::New1();
    TestSetup::AddTests(registry);
    return (uObject*)::g::Uno::Testing::RemoteRunner::New1(registry, TestSetup::_serverUrl());
}

// public generated TestSetup New() [static] :999
TestSetup* TestSetup::New1()
{
    TestSetup* obj1 = (TestSetup*)uNew(TestSetup_typeof());
    obj1->ctor_1();
    return obj1;
}

// public static Uno.Testing.IRunner get_Runner() [static] :1006
uObject* TestSetup::Runner()
{
    uStackFrame __("Uno.Testing.TestSetup", "get_Runner()");
    TestSetup_typeof()->Init();

    if (TestSetup::_runner() == NULL)
        TestSetup::_runner() = TestSetup::CreateRunner();

    return TestSetup::_runner();
}
// }

}}} // ::g::Uno::Testing
