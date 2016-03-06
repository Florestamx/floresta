// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.Storage.ApplicationDir.ReadClosure.h>
#include <Fuse.Storage.ApplicationDir.WriteClosure.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.IDisposable.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
static uString* STRINGS[3];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Storage{

// ..\..\ProgramData\Uno\Packages\Fuse.Storage\0.24.7\$.uno(9)
// -----------------------------------------------------------

// public static class ApplicationDir :9
// {
uClassType* ApplicationDir_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Storage.ApplicationDir", options);
    ::STRINGS[0] = uString::Const("filename");
    ::STRINGS[1] = uString::Const("File does not exist.");
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->Reflection.SetFunctions(7,
        new uFunction("Delete", NULL, (void*)ApplicationDir__Delete_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)ApplicationDir__Read_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAsync", NULL, (void*)ApplicationDir__ReadAsync_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAsync", NULL, (void*)ApplicationDir__ReadAsync1_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()), 2, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Write", NULL, (void*)ApplicationDir__Write_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("WriteAsync", NULL, (void*)ApplicationDir__WriteAsync_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("WriteAsync", NULL, (void*)ApplicationDir__WriteAsync1_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof()), 3, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// private static void CreateFile(string filepath) :26
void ApplicationDir__CreateFile_fn(uString* filepath)
{
    ApplicationDir::CreateFile(filepath);
}

// public static bool Delete(string filename) :44
void ApplicationDir__Delete_fn(uString* filename, bool* __retval)
{
    *__retval = ApplicationDir::Delete(filename);
}

// public static string Read(string filename) :32
void ApplicationDir__Read_fn(uString* filename, uString** __retval)
{
    *__retval = ApplicationDir::Read(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) :70
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(Uno.Threading.IDispatcher dispatcher, string filename) :75
void ApplicationDir__ReadAsync1_fn(uObject* dispatcher, uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync1(dispatcher, filename);
}

// public static bool Write(string filename, string value) :11
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval)
{
    *__retval = ApplicationDir::Write(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) :60
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(Uno.Threading.IDispatcher dispatcher, string filename, string value) :65
void ApplicationDir__WriteAsync1_fn(uObject* dispatcher, uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync1(dispatcher, filename, value);
}

// private static void CreateFile(string filepath) [static] :26
void ApplicationDir::CreateFile(uString* filepath)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "CreateFile(string)");
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::Open(filepath, 2);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
    }
}

// public static bool Delete(string filename) [static] :44
bool ApplicationDir::Delete(uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "Delete(string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
        return false;

    try
    {
        ::g::Uno::IO::File::Delete(filepath);
        return true;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return false;
}

// public static string Read(string filename) [static] :32
uString* ApplicationDir::Read(uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "Read(string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);

    if (::g::Uno::IO::File::Exists(filepath))
        return ::g::Uno::IO::File::ReadAllText(filepath);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"File does n...*/]));
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) [static] :70
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync(uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "ReadAsync(string)");
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[2/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)ApplicationDir__ReadClosure__Invoke_fn, ApplicationDir__ReadClosure::New1(filename)));
}

// public static Uno.Threading.Future<string> ReadAsync(Uno.Threading.IDispatcher dispatcher, string filename) [static] :75
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync1(uObject* dispatcher, uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "ReadAsync(Uno.Threading.IDispatcher,string)");
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(::TYPES[2/*Uno.Threading.Promise<string>*/], dispatcher, uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)ApplicationDir__ReadClosure__Invoke_fn, ApplicationDir__ReadClosure::New1(filename)));
}

// public static bool Write(string filename, string value) [static] :11
bool ApplicationDir::Write(uString* filename, uString* value)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "Write(string,string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    if (::g::Uno::String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"value"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);
    ApplicationDir::CreateFile(filepath);
    ::g::Uno::IO::File::WriteAllText(filepath, value);
    return true;
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) [static] :60
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync(uString* filename, uString* value)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "WriteAsync(string,string)");
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[4/*Uno.Threading.Promise<bool>*/], uDelegate::New(::TYPES[5/*Uno.Func<bool>*/], (void*)ApplicationDir__WriteClosure__Invoke_fn, ApplicationDir__WriteClosure::New1(filename, value)));
}

// public static Uno.Threading.Future<bool> WriteAsync(Uno.Threading.IDispatcher dispatcher, string filename, string value) [static] :65
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync1(uObject* dispatcher, uString* filename, uString* value)
{
    uStackFrame __("Fuse.Storage.ApplicationDir", "WriteAsync(Uno.Threading.IDispatcher,string,string)");
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(::TYPES[4/*Uno.Threading.Promise<bool>*/], dispatcher, uDelegate::New(::TYPES[5/*Uno.Func<bool>*/], (void*)ApplicationDir__WriteClosure__Invoke_fn, ApplicationDir__WriteClosure::New1(filename, value)));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Storage\0.24.7\$.uno(97)
// ------------------------------------------------------------

// private sealed class ApplicationDir.ReadClosure :97
// {
uType* ApplicationDir__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ApplicationDir__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.ReadClosure", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Storage::ApplicationDir__ReadClosure, _filename), 0);
    return type;
}

// public ReadClosure(string filename) :101
void ApplicationDir__ReadClosure__ctor__fn(ApplicationDir__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke() :106
void ApplicationDir__ReadClosure__Invoke_fn(ApplicationDir__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename) :101
void ApplicationDir__ReadClosure__New1_fn(uString* filename, ApplicationDir__ReadClosure** __retval)
{
    *__retval = ApplicationDir__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance] :101
void ApplicationDir__ReadClosure::ctor_(uString* filename)
{
    uStackFrame __("Fuse.Storage.ApplicationDir.ReadClosure", ".ctor(string)");
    _filename = filename;
}

// public string Invoke() [instance] :106
uString* ApplicationDir__ReadClosure::Invoke()
{
    uStackFrame __("Fuse.Storage.ApplicationDir.ReadClosure", "Invoke()");
    return ::g::Fuse::Storage::ApplicationDir::Read(_filename);
}

// public ReadClosure New(string filename) [static] :101
ApplicationDir__ReadClosure* ApplicationDir__ReadClosure::New1(uString* filename)
{
    ApplicationDir__ReadClosure* obj1 = (ApplicationDir__ReadClosure*)uNew(ApplicationDir__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Storage\0.24.7\$.uno(80)
// ------------------------------------------------------------

// private sealed class ApplicationDir.WriteClosure :80
// {
uType* ApplicationDir__WriteClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ApplicationDir__WriteClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.WriteClosure", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Storage::ApplicationDir__WriteClosure, _filename), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Storage::ApplicationDir__WriteClosure, _value), 0);
    return type;
}

// public WriteClosure(string filename, string value) :85
void ApplicationDir__WriteClosure__ctor__fn(ApplicationDir__WriteClosure* __this, uString* filename, uString* value)
{
    __this->ctor_(filename, value);
}

// public bool Invoke() :91
void ApplicationDir__WriteClosure__Invoke_fn(ApplicationDir__WriteClosure* __this, bool* __retval)
{
    *__retval = __this->Invoke();
}

// public WriteClosure New(string filename, string value) :85
void ApplicationDir__WriteClosure__New1_fn(uString* filename, uString* value, ApplicationDir__WriteClosure** __retval)
{
    *__retval = ApplicationDir__WriteClosure::New1(filename, value);
}

// public WriteClosure(string filename, string value) [instance] :85
void ApplicationDir__WriteClosure::ctor_(uString* filename, uString* value)
{
    uStackFrame __("Fuse.Storage.ApplicationDir.WriteClosure", ".ctor(string,string)");
    _filename = filename;
    _value = value;
}

// public bool Invoke() [instance] :91
bool ApplicationDir__WriteClosure::Invoke()
{
    uStackFrame __("Fuse.Storage.ApplicationDir.WriteClosure", "Invoke()");
    return ::g::Fuse::Storage::ApplicationDir::Write(_filename, _value);
}

// public WriteClosure New(string filename, string value) [static] :85
ApplicationDir__WriteClosure* ApplicationDir__WriteClosure::New1(uString* filename, uString* value)
{
    ApplicationDir__WriteClosure* obj1 = (ApplicationDir__WriteClosure*)uNew(ApplicationDir__WriteClosure_typeof());
    obj1->ctor_(filename, value);
    return obj1;
}
// }

}}} // ::g::Fuse::Storage
