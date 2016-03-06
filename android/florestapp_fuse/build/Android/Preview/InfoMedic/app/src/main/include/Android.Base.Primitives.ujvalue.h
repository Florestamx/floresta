// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// public extern struct ujvalue :2163
// {
uStructType* ujvalue_typeof();
void ujvalue__op_Implicit7_fn(jlong* v, jvalue* __retval);
void ujvalue__op_Implicit8_fn(jobject* v, jvalue* __retval);
void ujvalue__op_Implicit17_fn(int64_t* v, jvalue* __retval);

struct ujvalue
{
    static jvalue op_Implicit7(jlong v);
    static jvalue op_Implicit8(jobject v);
    static jvalue op_Implicit17(int64_t v);
};
// }

}}}} // ::g::Android::Base::Primitives
