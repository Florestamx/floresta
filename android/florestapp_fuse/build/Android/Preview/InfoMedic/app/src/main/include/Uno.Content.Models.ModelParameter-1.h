// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelParameter1;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class ModelParameter<T> :746
// {
uType* ModelParameter1_typeof();
void ModelParameter1__get_Value_fn(ModelParameter1* __this, uTRef __retval);

struct ModelParameter1 : uObject
{
    uTField _value() { return __type->Field(this, 0); }

    template<class T>
    T Value() { T __retval; return ModelParameter1__get_Value_fn(this, &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Content::Models
