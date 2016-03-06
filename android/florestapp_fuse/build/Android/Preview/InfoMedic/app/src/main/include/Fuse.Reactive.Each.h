// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Reactive.IObserver.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Factory;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :766
// {
struct Each_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Reactive::IObserver interface0;
};

Each_type* Each_typeof();
void Each__ctor_1_fn(Each* __this);
void Each__AddFactory_fn(Each* __this, ::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements);
void Each__AddNew_fn(Each* __this, uObject* dataContext);
void Each__get_Count_fn(Each* __this, int* __retval);
void Each__set_Count_fn(Each* __this, int* value);
void Each__get_Factories_fn(Each* __this, uObject** __retval);
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue);
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message);
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value);
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, int* length);
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value);
void Each__FuseReactiveIObserverOnRemove_fn(Each* __this, uObject* value, int* index);
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue);
void Each__GetMatchKey_fn(Each* __this, uObject* dataContext, uString** __retval);
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext);
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval);
void Each__get_Items_fn(Each* __this, uObject** __retval);
void Each__set_Items_fn(Each* __this, uObject* value);
void Each__get_MatchKey_fn(Each* __this, uString** __retval);
void Each__set_MatchKey_fn(Each* __this, uString* value);
void Each__New1_fn(Each** __retval);
void Each__OnFactoriesChanged_fn(Each* __this, ::g::Uno::UX::Factory* factory);
void Each__OnItemsChanged_fn(Each* __this);
void Each__OnRooted_fn(Each* __this, ::g::Fuse::Node* parentNode);
void Each__OnUnrooted_fn(Each* __this, ::g::Fuse::Node* parentNode);
void Each__RemoveAll_fn(Each* __this);
void Each__ReplaceAll_fn(Each* __this, uArray* dcs);
void Each__Repopulate_fn(Each* __this);
void Each__SetFailed_fn(Each* __this, uString* message);
void Each__SetValid_fn(Each* __this);

struct Each : ::g::Fuse::Behavior
{
    uStrong<uObject*> _container;
    int _count;
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong<uObject*> _factories;
    uStrong<uObject*> _items;
    uStrong<uString*> _matchKey;
    uStrong<uObject*> _subscription;

    void ctor_1();
    void AddFactory(::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements);
    void AddNew(uObject* dataContext);
    int Count();
    void Count(int value);
    uObject* Factories();
    uString* GetMatchKey(uObject* dataContext);
    void InsertNew(int index, uObject* dataContext);
    bool IsUnchanged(uArray* newDcs);
    uObject* Items();
    void Items(uObject* value);
    uString* MatchKey();
    void MatchKey(uString* value);
    void OnFactoriesChanged(::g::Uno::UX::Factory* factory);
    void OnItemsChanged();
    void RemoveAll();
    void ReplaceAll(uArray* dcs);
    void Repopulate();
    void SetFailed(uString* message);
    void SetValid();
    static Each* New1();
};
// }

}}} // ::g::Fuse::Reactive
