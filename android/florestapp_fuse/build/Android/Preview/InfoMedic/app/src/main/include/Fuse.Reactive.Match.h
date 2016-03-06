// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Reactive.IObserver.h>
namespace g{namespace Fuse{namespace Reactive{struct Case;}}}
namespace g{namespace Fuse{namespace Reactive{struct Match;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Match :1389
// {
struct Match_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Reactive::IObserver interface0;
};

Match_type* Match_typeof();
void Match__ctor_1_fn(Match* __this);
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c);
void Match__get_Bool_fn(Match* __this, bool* __retval);
void Match__set_Bool_fn(Match* __this, bool* value);
void Match__get_Cases_fn(Match* __this, uObject** __retval);
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue);
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message);
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value);
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, int* length);
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value);
void Match__FuseReactiveIObserverOnRemove_fn(Match* __this, uObject* value, int* index);
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue);
void Match__get_Integer_fn(Match* __this, int* __retval);
void Match__set_Integer_fn(Match* __this, int* value);
void Match__Invalidate_fn(Match* __this);
void Match__New1_fn(Match** __retval);
void Match__get_Number_fn(Match* __this, double* __retval);
void Match__set_Number_fn(Match* __this, double* value);
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c);
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c);
void Match__OnRooted_fn(Match* __this, ::g::Fuse::Node* parentNode);
void Match__OnUnrooted_fn(Match* __this, ::g::Fuse::Node* parentNode);
void Match__RemoveElements_fn(Match* __this);
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval);
void Match__get_String_fn(Match* __this, uString** __retval);
void Match__set_String_fn(Match* __this, uString* value);
void Match__get_Value_fn(Match* __this, uObject** __retval);
void Match__set_Value_fn(Match* __this, uObject* value);

struct Match : ::g::Fuse::Behavior
{
    uStrong<uObject*> _cases;
    uStrong<uObject*> _container;
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong< ::g::Fuse::Reactive::Case*> _oldCase;
    uStrong<uObject*> _realValue;
    uStrong< ::g::Fuse::Reactive::ObservableSubscription*> _subscription;
    uStrong<uObject*> _value;

    void ctor_1();
    void AddElements(::g::Fuse::Reactive::Case* c);
    bool Bool();
    void Bool(bool value);
    uObject* Cases();
    int Integer();
    void Integer(int value);
    void Invalidate();
    double Number();
    void Number(double value);
    void OnCaseAdded(::g::Fuse::Reactive::Case* c);
    void OnCaseRemoved(::g::Fuse::Reactive::Case* c);
    void RemoveElements();
    ::g::Fuse::Reactive::Case* SelectCase();
    uString* String();
    void String(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static Match* New1();
};
// }

}}} // ::g::Fuse::Reactive
