// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Factory;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Factory :107
// {
struct Factory_type : uType
{
    void(*fp_New1)(::g::Uno::UX::Factory*, uObject**);
};

Factory_type* Factory_typeof();
void Factory__ctor__fn(Factory* __this, uString* caseMatch, bool* isDefaultCase);
void Factory__get_Case_fn(Factory* __this, uString** __retval);
void Factory__get_IsDefaultCase_fn(Factory* __this, bool* __retval);

struct Factory : uObject
{
    uStrong<uString*> _case;
    bool _isDefaultCase;

    void ctor_(uString* caseMatch, bool isDefaultCase);
    uString* Case();
    bool IsDefaultCase();
    uObject* New1() { uObject* __retval; return (((Factory_type*)__type)->fp_New1)(this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
