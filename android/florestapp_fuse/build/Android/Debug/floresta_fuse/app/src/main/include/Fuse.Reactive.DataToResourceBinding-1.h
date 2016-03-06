// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.INameListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResourceBinding;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataToResourceBinding<T> :529
// {
::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof();
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval);
void DataToResourceBinding__NewValue_fn(DataToResourceBinding* __this, uObject* value);
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this);

struct DataToResourceBinding : ::g::Fuse::Reactive::DataBinding
{
    uStrong<uString*> _key;

    bool AcceptFunction(uObject* obj);
    void OnChanged();
};
// }

}}} // ::g::Fuse::Reactive
