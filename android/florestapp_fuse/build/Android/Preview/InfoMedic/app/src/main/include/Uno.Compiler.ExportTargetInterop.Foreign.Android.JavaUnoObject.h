// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Compiler\ExportTargetInterop\Foreign\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{struct JavaUnoObject;}}}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// public static extern class JavaUnoObject :32
// {
uClassType* JavaUnoObject_typeof();
void JavaUnoObject__Box_fn(uObject* unoObject, jobject* __retval);
void JavaUnoObject__EnsureInitialized_fn();
void JavaUnoObject__UnBox_fn(jobject* javaObject, uObject** __retval);

struct JavaUnoObject : uObject
{
    static jclass _unoObjectClass_;
    static jclass& _unoObjectClass() { return _unoObjectClass_; }
    static jmethodID _unoObjectConstructor_;
    static jmethodID& _unoObjectConstructor() { return _unoObjectConstructor_; }
    static jmethodID _unoObjectGetRetainedUnoPtr_;
    static jmethodID& _unoObjectGetRetainedUnoPtr() { return _unoObjectGetRetainedUnoPtr_; }

    static jobject Box(uObject* unoObject);
    static void EnsureInitialized();
    static uObject* UnBox(jobject javaObject);
};
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android
