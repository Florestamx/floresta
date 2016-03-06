// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MultiMap;}}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class MultiMap<T> :1586
// {
uType* MultiMap_typeof();
void MultiMap__ctor__fn(MultiMap* __this);
void MultiMap__Add_fn(MultiMap* __this, void* item);
void MultiMap__New1_fn(uType* __type, MultiMap** __retval);
void MultiMap__Remove_fn(MultiMap* __this, void* item);

struct MultiMap : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _dict;

    void ctor_();
    template<class T>
    void Add(T item) { MultiMap__Add_fn(this, uConstrain(__type->T(0), item)); }
    template<class T>
    void Remove(T item) { MultiMap__Remove_fn(this, uConstrain(__type->T(0), item)); }
    static MultiMap* New1(uType* __type);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
