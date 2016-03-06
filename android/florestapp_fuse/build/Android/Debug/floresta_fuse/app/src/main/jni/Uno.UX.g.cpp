// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.Template-1.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[1];
static uType* TYPES[19];

namespace g{
namespace Uno{
namespace UX{

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(8)
// ---------------------------------------------------------------------------------------

// public sealed class BundleFileSource :8
// {
::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    ::TYPES[0] = ::g::Uno::BundleFile_typeof();
    ::TYPES[1] = uObject_typeof();
    type->SetFields(2,
        ::g::Uno::BundleFile_typeof(), offsetof(::g::Uno::UX::BundleFileSource, BundleFile), 0);
    return type;
}

// public BundleFileSource(Uno.BundleFile bundleFile) :11
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :31
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, BundleFileSource_typeof());

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :40
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.BundleFile bundleFile) :11
void BundleFileSource__New1_fn(::g::Uno::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// public override sealed Uno.IO.Stream OpenRead() :16
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :21
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :26
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::BundleFile* bundleFile)
{
    ctor_(uPtr(bundleFile)->Name());
    BundleFile = bundleFile;
}

// public BundleFileSource New(Uno.BundleFile bundleFile) [static] :11
BundleFileSource* BundleFileSource::New1(::g::Uno::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/Actions/$.uno(325)
// -----------------------------------------------------------------------------------------

// public delegate T Expression<T>() :325
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(107)
// -----------------------------------------------------------------------------------------

// public abstract class Factory :107
// {
Factory_type* Factory_typeof()
{
    static uSStrong<Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Factory);
    options.TypeSize = sizeof(Factory_type);
    type = (Factory_type*)uClassType::New("Uno.UX.Factory", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Factory, _case), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Factory, _isDefaultCase), 0);
    return type;
}

// protected Factory(string caseMatch, bool isDefaultCase) :115
void Factory__ctor__fn(Factory* __this, uString* caseMatch, bool* isDefaultCase)
{
    __this->ctor_(caseMatch, *isDefaultCase);
}

// protected Factory(string caseMatch, bool isDefaultCase) [instance] :115
void Factory::ctor_(uString* caseMatch, bool isDefaultCase)
{
    _case = caseMatch;
    _isDefaultCase = isDefaultCase;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(133)
// -----------------------------------------------------------------------------------------

// public abstract class FileSource :133
// {
FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
    return type;
}

// protected FileSource(string name) :146
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :137
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :137
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public static implicit operator Uno.UX.FileSource(Uno.BundleFile bundleFile) :151
void FileSource__op_Implicit_fn(::g::Uno::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :158
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :163
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :146
void FileSource::ctor_(uString* name)
{
    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :137
void FileSource::add_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[2/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :137
void FileSource::remove_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[2/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public static implicit operator Uno.UX.FileSource(Uno.BundleFile bundleFile) [static] :151
FileSource* FileSource::op_Implicit(::g::Uno::BundleFile* bundleFile)
{
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(219)
// -----------------------------------------------------------------------------------------

// public abstract interface ITemplate :219
// {
uInterfaceType* ITemplate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.ITemplate", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(354)
// -----------------------------------------------------------------------------------------

// public abstract class Property<T> :354
// {
Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_OnAddListener = Property__OnAddListener_fn;
    type->fp_OnGet = Property__OnGet_fn;
    type->fp_OnRemoveListener = Property__OnRemoveListener_fn;
    type->fp_OnSet = Property__OnSet_fn;
    ::TYPES[4] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[4/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Property, _hasRestState), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// protected generated Property() :354
void Property__ctor__fn(Property* __this)
{
    __this->ctor_();
}

// public T Get() :401
void Property__Get_fn(Property* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    __this->RetainRestState();
    return __retval.Store((__this->OnGet_ex(&ret1), ret1)), void();
}

// public T GetRestState() :382
void Property__GetRestState_fn(Property* __this, uTRef __retval)
{
    __this->RetainRestState();
    return __retval.Store(__this->_restState()), void();
}

// protected virtual void OnAddListener(Uno.UX.ValueChangedHandler<T> listener) :417
void Property__OnAddListener_fn(Property* __this, uDelegate* listener)
{
}

// protected virtual T OnGet() :415
void Property__OnGet_fn(Property* __this, uTRef __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// protected virtual void OnRemoveListener(Uno.UX.ValueChangedHandler<T> listener) :418
void Property__OnRemoveListener_fn(Property* __this, uDelegate* listener)
{
}

// protected virtual void OnSet(T value, object origin) :414
void Property__OnSet_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    U_THROW(::g::Uno::Exception::New1());
}

// protected void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) :358
void Property__OnValueChanged_fn(Property* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void RetainRestState() :370
void Property__RetainRestState_fn(Property* __this)
{
    __this->RetainRestState();
}

// public void Set(T value, object origin) :388
void Property__Set_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    __this->RetainRestState();
    __this->OnSet_ex(value, origin);
}

// public void SetRestState(T value, object origin) :394
void Property__SetRestState_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    __this->OnSet_ex(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// public void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :409
void Property__add_ValueChanged_fn(Property* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :410
void Property__remove_ValueChanged_fn(Property* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated Property() [instance] :354
void Property::ctor_()
{
}

// protected void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) [instance] :358
void Property::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->GetBase(Property_typeof())->T(0),
        __type->GetBase(Property_typeof())->Precalced(0/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(args)->SetsNewRestState())
    {
        _restState() = (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2);
        _hasRestState = true;
    }
}

// private void RetainRestState() [instance] :370
void Property::RetainRestState()
{
    uType* __types[] = {
        __type->GetBase(Property_typeof())->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (!_hasRestState)
    {
        v = (OnGet_ex(&ret3), ret3);
        _restState() = v;
        _hasRestState = true;
    }
}

// public void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :409
void Property::add_ValueChanged(uDelegate* value)
{
    OnAddListener(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :410
void Property::remove_ValueChanged(uDelegate* value)
{
    OnRemoveListener(value);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(429)
// -----------------------------------------------------------------------------------------

// public sealed class Resource :429
// {
uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()));
    ::TYPES[7] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[8] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[10] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
    return type;
}

// public Resource(string key, object value) :435
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value)
{
    __this->ctor_(key, value);
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :445
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :479
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public generated string get_Key() :431
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :431
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key, object value) :435
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval)
{
    *__retval = Resource::New1(key, value);
}

// public static void SetGlobalKey(object obj, string key) :452
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :491
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :432
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :432
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public Resource(string key, object value) [instance] :435
void Resource::ctor_(uString* key, uObject* value)
{
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :431
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :431
void Resource::Key(uString* value)
{
    _Key = value;
}

// public generated object get_Value() [instance] :432
uObject* Resource::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :432
void Resource::Value(uObject* value)
{
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :445
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    if (Resource::_listeners() == NULL)
        Resource::_listeners() = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Uno.Action<string>>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
}

// public static string GetGlobalKey(object obj) [static] :479
uString* Resource::GetGlobalKey(uObject* obj)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret4;
    bool ret5;

    if (Resource::_globals() == NULL)
        return NULL;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret4), ret4); enum2.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum2.Current(::TYPES[7/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[8/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret5), ret5))
            return list.Key(::TYPES[8/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
    }

    return NULL;
}

// public Resource New(string key, object value) [static] :435
Resource* Resource::New1(uString* key, uObject* value)
{
    Resource* obj3 = (Resource*)uNew(Resource_typeof());
    obj3->ctor_(key, value);
    return obj3;
}

// public static void SetGlobalKey(object obj, string key) [static] :452
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    ::g::Uno::Collections::List* ret10;
    uDelegate* ret11;

    if (Resource::_globals() == NULL)
        Resource::_globals() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(Resource::_globals())->Values()), &ret6), ret6); enum1.MoveNext(::TYPES[10/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[10/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), obj, &ret7), ret7))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), obj, &ret8);
            break;
        }
    }

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Resource::_globals()), key, &ret9), ret9))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<object>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Resource::_globals()), key, &ret10), ret10)), obj);

    if (Resource::_listeners() != NULL)

        for (int i = 0; i < uPtr(Resource::_listeners())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Resource::_listeners()), uCRef<int>(i), &ret11), ret11))->InvokeVoid(key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :491
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    bool ret12;
    uObject* ret13;
    bool ret14;

    if (Resource::_globals() != NULL)
    {
        ::g::Uno::Collections::List* list;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&list), &ret12), ret12))

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret13), ret13);

                if ((uPtr(acceptor)->Invoke(&ret14, 1, v), ret14))
                {
                    *res = v;
                    return true;
                }
            }
    }

    *res = NULL;
    return false;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(169)
// -----------------------------------------------------------------------------------------

// internal static class StreamExtensions :169
// {
uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    ::STRINGS[0] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[14] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[15] = ::g::Uno::IDisposable_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::IO::MemoryStream_typeof();
    ::TYPES[18] = ::g::Uno::Long_typeof();
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :171
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :189
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :171
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[15/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uArray* buffer;

        do
        {
            buffer = uPtr(reader)->ReadBytes(4096);
            uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
        }
        while (uPtr(buffer)->Length() == 4096);

        return StreamExtensions::ToArray(ms);
    }

    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :189
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[14/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(521)
// -----------------------------------------------------------------------------------------

// public abstract class Template<T> :521
// {
Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template`1", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))Template__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(Template_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _affectSubtypes), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _cascade), 0);
    return type;
}

// protected generated Template() :521
void Template__ctor__fn(Template* __this)
{
    __this->ctor_();
}

// public bool get_AffectSubtypes() :536
void Template__get_AffectSubtypes_fn(Template* __this, bool* __retval)
{
    *__retval = __this->AffectSubtypes();
}

// public void set_AffectSubtypes(bool value) :537
void Template__set_AffectSubtypes_fn(Template* __this, bool* value)
{
    __this->AffectSubtypes(*value);
}

// public bool Apply(object obj) :543
void Template__Apply_fn(Template* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public bool get_Cascade() :526
void Template__get_Cascade_fn(Template* __this, bool* __retval)
{
    *__retval = __this->Cascade();
}

// public void set_Cascade(bool value) :527
void Template__set_Cascade_fn(Template* __this, bool* value)
{
    __this->Cascade(*value);
}

// protected generated Template() [instance] :521
void Template::ctor_()
{
    _cascade = true;
}

// public bool get_AffectSubtypes() [instance] :536
bool Template::AffectSubtypes()
{
    return _affectSubtypes;
}

// public void set_AffectSubtypes(bool value) [instance] :537
void Template::AffectSubtypes(bool value)
{
    _affectSubtypes = value;
}

// public bool Apply(object obj) [instance] :543
bool Template::Apply(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(Template_typeof())->T(0),
    };

    if (_affectSubtypes)
    {
        if (uIs(obj, __types[0]))
        {
            OnApply_ex(uUnboxAny(__types[0], obj));
            return Cascade();
        }
    }
    else
    {
        if (::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(obj)), __types[0]))
        {
            OnApply_ex(uUnboxAny(__types[0], obj));
            return Cascade();
        }
    }

    return true;
}

// public bool get_Cascade() [instance] :526
bool Template::Cascade()
{
    return _cascade;
}

// public void set_Cascade(bool value) [instance] :527
void Template::Cascade(bool value)
{
    _cascade = value;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(318)
// -----------------------------------------------------------------------------------------

// public class ValueChangedArgs<T> :318
// {
uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Uno::UX::ValueChangedArgs, _Origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::ValueChangedArgs, _SetsNewRestState), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public ValueChangedArgs(T value, object origin) :325
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
    __this->Origin(origin);
}

// public ValueChangedArgs New(T value, object origin) :325
void ValueChangedArgs__New2_fn(uType* __type, void* value, uObject* origin, ValueChangedArgs** __retval)
{
    uType* __types[] = {
        __type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value, origin);
    return *__retval = obj1, void();
}

// public generated object get_Origin() :321
void ValueChangedArgs__get_Origin_fn(ValueChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->Origin();
}

// private generated void set_Origin(object value) :321
void ValueChangedArgs__set_Origin_fn(ValueChangedArgs* __this, uObject* value)
{
    __this->Origin(value);
}

// internal generated bool get_SetsNewRestState() :323
void ValueChangedArgs__get_SetsNewRestState_fn(ValueChangedArgs* __this, bool* __retval)
{
    *__retval = __this->SetsNewRestState();
}

// private generated void set_SetsNewRestState(bool value) :323
void ValueChangedArgs__set_SetsNewRestState_fn(ValueChangedArgs* __this, bool* value)
{
    __this->SetsNewRestState(*value);
}

// public generated T get_Value() :320
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :320
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    __this->_Value() = value;
}

// public generated object get_Origin() [instance] :321
uObject* ValueChangedArgs::Origin()
{
    return _Origin;
}

// private generated void set_Origin(object value) [instance] :321
void ValueChangedArgs::Origin(uObject* value)
{
    _Origin = value;
}

// internal generated bool get_SetsNewRestState() [instance] :323
bool ValueChangedArgs::SetsNewRestState()
{
    return _SetsNewRestState;
}

// private generated void set_SetsNewRestState(bool value) [instance] :323
void ValueChangedArgs::SetsNewRestState(bool value)
{
    _SetsNewRestState = value;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/UX/$.uno(345)
// -----------------------------------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :345
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0)));
    return type;
}

}}} // ::g::Uno::UX
