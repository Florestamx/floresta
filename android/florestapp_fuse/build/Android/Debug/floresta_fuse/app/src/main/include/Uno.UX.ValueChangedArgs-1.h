// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Uno{
namespace UX{

// public class ValueChangedArgs<T> :318
// {
uType* ValueChangedArgs_typeof();
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value, uObject* origin);
void ValueChangedArgs__New2_fn(uType* __type, void* value, uObject* origin, ValueChangedArgs** __retval);
void ValueChangedArgs__get_Origin_fn(ValueChangedArgs* __this, uObject** __retval);
void ValueChangedArgs__set_Origin_fn(ValueChangedArgs* __this, uObject* value);
void ValueChangedArgs__get_SetsNewRestState_fn(ValueChangedArgs* __this, bool* __retval);
void ValueChangedArgs__set_SetsNewRestState_fn(ValueChangedArgs* __this, bool* value);
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval);
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value);

struct ValueChangedArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> _Origin;
    bool _SetsNewRestState;
    uTField _Value() { return __type->Field(this, 2); }

    template<class T>
    void ctor_1(T value, uObject* origin) { ValueChangedArgs__ctor_1_fn(this, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value), origin); }
    uObject* Origin();
    void Origin(uObject* value);
    bool SetsNewRestState();
    void SetsNewRestState(bool value);
    template<class T>
    T Value() { T __retval; return ValueChangedArgs__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { ValueChangedArgs__set_Value_fn(this, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value)); }
    template<class T>
    static ValueChangedArgs* New2(uType* __type, T value, uObject* origin) { ValueChangedArgs* __retval; return ValueChangedArgs__New2_fn(__type, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value), origin, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
