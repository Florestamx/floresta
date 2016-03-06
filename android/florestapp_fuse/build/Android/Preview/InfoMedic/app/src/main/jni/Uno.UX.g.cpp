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
#include <Uno.UX.UXAutoNameTableAttribute.h>
#include <Uno.UX.UXComponentsAttribute.h>
#include <Uno.UX.UXConstructorAttribute.h>
#include <Uno.UX.UXContentAttribute.h>
#include <Uno.UX.UXFileNameAttribute.h>
#include <Uno.UX.UXGlobalResourceAttribute.h>
#include <Uno.UX.UXLineNumberAttribute.h>
#include <Uno.UX.UXMetadataAttribute.h>
#include <Uno.UX.UXNameAttribute.h>
#include <Uno.UX.UXPrimaryAttribute.h>
#include <Uno.UX.UXSourceFileNameAttribute.h>
#include <Uno.UX.UXValueBindingArgumentAttribute.h>
#include <Uno.UX.UXValueBindingTargetAttribute.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[1];
static uType* TYPES[20];

namespace g{
namespace Uno{
namespace UX{

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(8)
// --------------------------------------------------------------------

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
    type->Reflection.SetFields(1,
        new uField("BundleFile", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BundleFileSource__New1_fn, 0, true, BundleFileSource_typeof(), 1, ::g::Uno::BundleFile_typeof()));
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
    uStackFrame __("Uno.UX.BundleFileSource", "Equals(object)");
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, BundleFileSource_typeof());

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :40
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "GetHashCode()");
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
    uStackFrame __("Uno.UX.BundleFileSource", "OpenRead()");
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :21
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "ReadAllBytes()");
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :26
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "ReadAllText()");
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::BundleFile* bundleFile)
{
    uStackFrame __("Uno.UX.BundleFileSource", ".ctor(Uno.BundleFile)");
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

// ..\..\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\Actions\$.uno(325)
// ----------------------------------------------------------------------

// public delegate T Expression<T>() :325
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(107)
// ----------------------------------------------------------------------

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
    type->Reflection.SetFunctions(3,
        new uFunction("get_Case", NULL, (void*)Factory__get_Case_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_IsDefaultCase", NULL, (void*)Factory__get_IsDefaultCase_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("New", NULL, NULL, offsetof(Factory_type, fp_New1), false, uObject_typeof(), 0));
    return type;
}

// protected Factory(string caseMatch, bool isDefaultCase) :115
void Factory__ctor__fn(Factory* __this, uString* caseMatch, bool* isDefaultCase)
{
    __this->ctor_(caseMatch, *isDefaultCase);
}

// public string get_Case() :110
void Factory__get_Case_fn(Factory* __this, uString** __retval)
{
    *__retval = __this->Case();
}

// public bool get_IsDefaultCase() :113
void Factory__get_IsDefaultCase_fn(Factory* __this, bool* __retval)
{
    *__retval = __this->IsDefaultCase();
}

// protected Factory(string caseMatch, bool isDefaultCase) [instance] :115
void Factory::ctor_(uString* caseMatch, bool isDefaultCase)
{
    uStackFrame __("Uno.UX.Factory", ".ctor(string,bool)");
    _case = caseMatch;
    _isDefaultCase = isDefaultCase;
}

// public string get_Case() [instance] :110
uString* Factory::Case()
{
    uStackFrame __("Uno.UX.Factory", "get_Case()");
    return _case;
}

// public bool get_IsDefaultCase() [instance] :113
bool Factory::IsDefaultCase()
{
    uStackFrame __("Uno.UX.Factory", "get_IsDefaultCase()");
    return _isDefaultCase;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(133)
// ----------------------------------------------------------------------

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
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::EventArgs_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("add_DataChanged", NULL, (void*)FileSource__add_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("remove_DataChanged", NULL, (void*)FileSource__remove_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("OnDataChanged", NULL, (void*)FileSource__OnDataChanged_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OpenRead", NULL, NULL, offsetof(FileSource_type, fp_OpenRead), false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, NULL, offsetof(FileSource_type, fp_ReadAllBytes), false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("ReadAllText", NULL, NULL, offsetof(FileSource_type, fp_ReadAllText), false, ::g::Uno::String_typeof(), 0));
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

// public void OnDataChanged() :139
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.BundleFile bundleFile) :151
void FileSource__op_Implicit_fn(::g::Uno::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :158
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    uStackFrame __("Uno.UX.FileSource", "ReadAllBytes()");
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :163
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.FileSource", "ReadAllText()");
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :146
void FileSource::ctor_(uString* name)
{
    uStackFrame __("Uno.UX.FileSource", ".ctor(string)");
    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :137
void FileSource::add_DataChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.FileSource", "add_DataChanged(Uno.EventHandler<Uno.EventArgs>)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[3/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :137
void FileSource::remove_DataChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.FileSource", "remove_DataChanged(Uno.EventHandler<Uno.EventArgs>)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[3/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :139
void FileSource::OnDataChanged()
{
    uStackFrame __("Uno.UX.FileSource", "OnDataChanged()");
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.BundleFile bundleFile) [static] :151
FileSource* FileSource::op_Implicit(::g::Uno::BundleFile* bundleFile)
{
    uStackFrame __("Uno.UX.FileSource", "op_Implicit(Uno.BundleFile)~Uno.UX.FileSource");
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(219)
// ----------------------------------------------------------------------

// public abstract interface ITemplate :219
// {
uInterfaceType* ITemplate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.ITemplate", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Apply", NULL, NULL, offsetof(ITemplate, fp_Apply), false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(354)
// ----------------------------------------------------------------------

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
    ::TYPES[5] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[5/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Property, _hasRestState), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(6,
        new uFunction("Get", NULL, (void*)Property__Get_fn, 0, false, type->T(0), 0),
        new uFunction("GetRestState", NULL, (void*)Property__GetRestState_fn, 0, false, type->T(0), 0),
        new uFunction("Set", NULL, (void*)Property__Set_fn, 0, false, uVoid_typeof(), 2, type->T(0), uObject_typeof()),
        new uFunction("SetRestState", NULL, (void*)Property__SetRestState_fn, 0, false, uVoid_typeof(), 2, type->T(0), uObject_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)Property__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, (void*)Property__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
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
    uStackFrame __("Uno.UX.Property`1", "Get()");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    __this->RetainRestState();
    return __retval.Store((__this->OnGet_ex(&ret1), ret1)), void();
}

// public T GetRestState() :382
void Property__GetRestState_fn(Property* __this, uTRef __retval)
{
    uStackFrame __("Uno.UX.Property`1", "GetRestState()");
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
    uStackFrame __("Uno.UX.Property`1", "OnGet()");
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
    uStackFrame __("Uno.UX.Property`1", "OnSet(T,object)");
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
    uStackFrame __("Uno.UX.Property`1", "Set(T,object)");
    __this->RetainRestState();
    __this->OnSet_ex(value, origin);
}

// public void SetRestState(T value, object origin) :394
void Property__SetRestState_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.Property`1", "SetRestState(T,object)");
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
    uStackFrame __("Uno.UX.Property`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
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
    uStackFrame __("Uno.UX.Property`1", "RetainRestState()");
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
    uStackFrame __("Uno.UX.Property`1", "add_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    OnAddListener(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :410
void Property::remove_ValueChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.Property`1", "remove_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    OnRemoveListener(value);
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(429)
// ----------------------------------------------------------------------

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
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()));
    ::TYPES[8] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[9] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("AddGlobalKeyListener", NULL, (void*)Resource__AddGlobalKeyListener_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("GetGlobalKey", NULL, (void*)Resource__GetGlobalKey_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("get_Key", NULL, (void*)Resource__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Resource__New1_fn, 0, true, Resource_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetGlobalKey", NULL, (void*)Resource__SetGlobalKey_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TryFindGlobal", NULL, (void*)Resource__TryFindGlobal_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof()), uObject_typeof()->ByRef()),
        new uFunction("get_Value", NULL, (void*)Resource__get_Value_fn, 0, false, uObject_typeof(), 0));
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
    uStackFrame __("Uno.UX.Resource", ".ctor(string,object)");
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :431
uString* Resource::Key()
{
    uStackFrame __("Uno.UX.Resource", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :431
void Resource::Key(uString* value)
{
    uStackFrame __("Uno.UX.Resource", "set_Key(string)");
    _Key = value;
}

// public generated object get_Value() [instance] :432
uObject* Resource::Value()
{
    uStackFrame __("Uno.UX.Resource", "get_Value()");
    return _Value;
}

// private generated void set_Value(object value) [instance] :432
void Resource::Value(uObject* value)
{
    uStackFrame __("Uno.UX.Resource", "set_Value(object)");
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :445
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    uStackFrame __("Uno.UX.Resource", "AddGlobalKeyListener(Uno.Action<string>)");

    if (Resource::_listeners() == NULL)
        Resource::_listeners() = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.Action<string>>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
}

// public static string GetGlobalKey(object obj) [static] :479
uString* Resource::GetGlobalKey(uObject* obj)
{
    uStackFrame __("Uno.UX.Resource", "GetGlobalKey(object)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret4;
    bool ret5;

    if (Resource::_globals() == NULL)
        return NULL;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret4), ret4); enum2.MoveNext(::TYPES[8/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum2.Current(::TYPES[8/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[9/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret5), ret5))
            return list.Key(::TYPES[9/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
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
    uStackFrame __("Uno.UX.Resource", "SetGlobalKey(object,string)");
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    ::g::Uno::Collections::List* ret10;
    uDelegate* ret11;

    if (Resource::_globals() == NULL)
        Resource::_globals() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(Resource::_globals())->Values()), &ret6), ret6); enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), obj, &ret7), ret7))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), obj, &ret8);
            break;
        }
    }

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Resource::_globals()), key, &ret9), ret9))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<object>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Resource::_globals()), key, &ret10), ret10)), obj);

    if (Resource::_listeners() != NULL)

        for (int i = 0; i < uPtr(Resource::_listeners())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Resource::_listeners()), uCRef<int>(i), &ret11), ret11))->InvokeVoid(key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :491
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    uStackFrame __("Uno.UX.Resource", "TryFindGlobal(string,Uno.Predicate<object>,object&)");
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

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(169)
// ----------------------------------------------------------------------

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
    ::TYPES[15] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[16] = ::g::Uno::IDisposable_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[18] = ::g::Uno::IO::MemoryStream_typeof();
    ::TYPES[19] = ::g::Uno::Long_typeof();
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
    uStackFrame __("Uno.UX.StreamExtensions", "ReadAllBytes(Uno.IO.BinaryReader)");
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[16/*Uno.IDisposable*/]));
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
    uStackFrame __("Uno.UX.StreamExtensions", "ToArray(Uno.IO.MemoryStream)");
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[15/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(521)
// ----------------------------------------------------------------------

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
    type->Reflection.SetFunctions(5,
        new uFunction("get_AffectSubtypes", NULL, (void*)Template__get_AffectSubtypes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AffectSubtypes", NULL, (void*)Template__set_AffectSubtypes_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Apply", NULL, (void*)Template__Apply_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_Cascade", NULL, (void*)Template__get_Cascade_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Cascade", NULL, (void*)Template__set_Cascade_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
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
    uStackFrame __("Uno.UX.Template`1", ".ctor()");
    _cascade = true;
}

// public bool get_AffectSubtypes() [instance] :536
bool Template::AffectSubtypes()
{
    uStackFrame __("Uno.UX.Template`1", "get_AffectSubtypes()");
    return _affectSubtypes;
}

// public void set_AffectSubtypes(bool value) [instance] :537
void Template::AffectSubtypes(bool value)
{
    uStackFrame __("Uno.UX.Template`1", "set_AffectSubtypes(bool)");
    _affectSubtypes = value;
}

// public bool Apply(object obj) [instance] :543
bool Template::Apply(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(Template_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.Template`1", "Apply(object)");

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
    uStackFrame __("Uno.UX.Template`1", "get_Cascade()");
    return _cascade;
}

// public void set_Cascade(bool value) [instance] :527
void Template::Cascade(bool value)
{
    uStackFrame __("Uno.UX.Template`1", "set_Cascade(bool)");
    _cascade = value;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(309)
// ----------------------------------------------------------------------

// public sealed class UXAutoNameTableAttribute :309
// {
uType* UXAutoNameTableAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXAutoNameTableAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXAutoNameTableAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXAutoNameTableAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXAutoNameTableAttribute__New1_fn, 0, true, UXAutoNameTableAttribute_typeof(), 0));
    return type;
}

// public generated UXAutoNameTableAttribute() :309
void UXAutoNameTableAttribute__ctor_1_fn(UXAutoNameTableAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXAutoNameTableAttribute New() :309
void UXAutoNameTableAttribute__New1_fn(UXAutoNameTableAttribute** __retval)
{
    *__retval = UXAutoNameTableAttribute::New1();
}

// public generated UXAutoNameTableAttribute() [instance] :309
void UXAutoNameTableAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXAutoNameTableAttribute", ".ctor()");
    ctor_();
}

// public generated UXAutoNameTableAttribute New() [static] :309
UXAutoNameTableAttribute* UXAutoNameTableAttribute::New1()
{
    UXAutoNameTableAttribute* obj1 = (UXAutoNameTableAttribute*)uNew(UXAutoNameTableAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(121)
// ---------------------------------------------------------------------------------

// public sealed class UXComponentsAttribute :121
// {
uType* UXComponentsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXComponentsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXComponentsAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXComponentsAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXComponentsAttribute__New1_fn, 0, true, UXComponentsAttribute_typeof(), 0));
    return type;
}

// public generated UXComponentsAttribute() :121
void UXComponentsAttribute__ctor_1_fn(UXComponentsAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXComponentsAttribute New() :121
void UXComponentsAttribute__New1_fn(UXComponentsAttribute** __retval)
{
    *__retval = UXComponentsAttribute::New1();
}

// public generated UXComponentsAttribute() [instance] :121
void UXComponentsAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXComponentsAttribute", ".ctor()");
    ctor_();
}

// public generated UXComponentsAttribute New() [static] :121
UXComponentsAttribute* UXComponentsAttribute::New1()
{
    UXComponentsAttribute* obj1 = (UXComponentsAttribute*)uNew(UXComponentsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(131)
// ---------------------------------------------------------------------------------

// public sealed class UXConstructorAttribute :131
// {
uType* UXConstructorAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXConstructorAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXConstructorAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXConstructorAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXConstructorAttribute__New1_fn, 0, true, UXConstructorAttribute_typeof(), 0));
    return type;
}

// public generated UXConstructorAttribute() :131
void UXConstructorAttribute__ctor_1_fn(UXConstructorAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXConstructorAttribute New() :131
void UXConstructorAttribute__New1_fn(UXConstructorAttribute** __retval)
{
    *__retval = UXConstructorAttribute::New1();
}

// public generated UXConstructorAttribute() [instance] :131
void UXConstructorAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXConstructorAttribute", ".ctor()");
    ctor_();
}

// public generated UXConstructorAttribute New() [static] :131
UXConstructorAttribute* UXConstructorAttribute::New1()
{
    UXConstructorAttribute* obj1 = (UXConstructorAttribute*)uNew(UXConstructorAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(139)
// ---------------------------------------------------------------------------------

// public sealed class UXContentAttribute :139
// {
uType* UXContentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXContentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXContentAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXContentAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXContentAttribute__New1_fn, 0, true, UXContentAttribute_typeof(), 0));
    return type;
}

// public generated UXContentAttribute() :139
void UXContentAttribute__ctor_1_fn(UXContentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXContentAttribute New() :139
void UXContentAttribute__New1_fn(UXContentAttribute** __retval)
{
    *__retval = UXContentAttribute::New1();
}

// public generated UXContentAttribute() [instance] :139
void UXContentAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXContentAttribute", ".ctor()");
    ctor_();
}

// public generated UXContentAttribute New() [static] :139
UXContentAttribute* UXContentAttribute::New1()
{
    UXContentAttribute* obj1 = (UXContentAttribute*)uNew(UXContentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(212)
// ---------------------------------------------------------------------------------

// public sealed class UXFileNameAttribute :212
// {
uType* UXFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXFileNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXFileNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXFileNameAttribute__New1_fn, 0, true, UXFileNameAttribute_typeof(), 0));
    return type;
}

// public generated UXFileNameAttribute() :212
void UXFileNameAttribute__ctor_1_fn(UXFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXFileNameAttribute New() :212
void UXFileNameAttribute__New1_fn(UXFileNameAttribute** __retval)
{
    *__retval = UXFileNameAttribute::New1();
}

// public generated UXFileNameAttribute() [instance] :212
void UXFileNameAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXFileNameAttribute", ".ctor()");
    ctor_();
}

// public generated UXFileNameAttribute New() [static] :212
UXFileNameAttribute* UXFileNameAttribute::New1()
{
    UXFileNameAttribute* obj1 = (UXFileNameAttribute*)uNew(UXFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(165)
// ---------------------------------------------------------------------------------

// public sealed class UXGlobalResourceAttribute :165
// {
uType* UXGlobalResourceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UXGlobalResourceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXGlobalResourceAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXGlobalResourceAttribute__New1_fn;
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::UXGlobalResourceAttribute, Alias), 0);
    type->Reflection.SetFields(1,
        new uField("Alias", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New1_fn, 0, true, UXGlobalResourceAttribute_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New2_fn, 0, true, UXGlobalResourceAttribute_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public UXGlobalResourceAttribute() :174
void UXGlobalResourceAttribute__ctor_1_fn(UXGlobalResourceAttribute* __this)
{
    __this->ctor_1();
}

// public UXGlobalResourceAttribute(string alias) :169
void UXGlobalResourceAttribute__ctor_2_fn(UXGlobalResourceAttribute* __this, uString* alias)
{
    __this->ctor_2(alias);
}

// public UXGlobalResourceAttribute New() :174
void UXGlobalResourceAttribute__New1_fn(UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New1();
}

// public UXGlobalResourceAttribute New(string alias) :169
void UXGlobalResourceAttribute__New2_fn(uString* alias, UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New2(alias);
}

// public UXGlobalResourceAttribute() [instance] :174
void UXGlobalResourceAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXGlobalResourceAttribute", ".ctor()");
    ctor_();
}

// public UXGlobalResourceAttribute(string alias) [instance] :169
void UXGlobalResourceAttribute::ctor_2(uString* alias)
{
    uStackFrame __("Uno.UX.UXGlobalResourceAttribute", ".ctor(string)");
    ctor_();
    Alias = alias;
}

// public UXGlobalResourceAttribute New() [static] :174
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New1()
{
    UXGlobalResourceAttribute* obj2 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj2->ctor_1();
    return obj2;
}

// public UXGlobalResourceAttribute New(string alias) [static] :169
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New2(uString* alias)
{
    UXGlobalResourceAttribute* obj1 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj1->ctor_2(alias);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(198)
// ---------------------------------------------------------------------------------

// public sealed class UXLineNumberAttribute :198
// {
uType* UXLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXLineNumberAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXLineNumberAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXLineNumberAttribute__New1_fn, 0, true, UXLineNumberAttribute_typeof(), 0));
    return type;
}

// public generated UXLineNumberAttribute() :198
void UXLineNumberAttribute__ctor_1_fn(UXLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXLineNumberAttribute New() :198
void UXLineNumberAttribute__New1_fn(UXLineNumberAttribute** __retval)
{
    *__retval = UXLineNumberAttribute::New1();
}

// public generated UXLineNumberAttribute() [instance] :198
void UXLineNumberAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXLineNumberAttribute", ".ctor()");
    ctor_();
}

// public generated UXLineNumberAttribute New() [static] :198
UXLineNumberAttribute* UXLineNumberAttribute::New1()
{
    UXLineNumberAttribute* obj1 = (UXLineNumberAttribute*)uNew(UXLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(305)
// ----------------------------------------------------------------------

// public sealed class UXMetadataAttribute :305
// {
uType* UXMetadataAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXMetadataAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXMetadataAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXMetadataAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXMetadataAttribute__New1_fn, 0, true, UXMetadataAttribute_typeof(), 0));
    return type;
}

// public generated UXMetadataAttribute() :305
void UXMetadataAttribute__ctor_1_fn(UXMetadataAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXMetadataAttribute New() :305
void UXMetadataAttribute__New1_fn(UXMetadataAttribute** __retval)
{
    *__retval = UXMetadataAttribute::New1();
}

// public generated UXMetadataAttribute() [instance] :305
void UXMetadataAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXMetadataAttribute", ".ctor()");
    ctor_();
}

// public generated UXMetadataAttribute New() [static] :305
UXMetadataAttribute* UXMetadataAttribute::New1()
{
    UXMetadataAttribute* obj1 = (UXMetadataAttribute*)uNew(UXMetadataAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(207)
// ---------------------------------------------------------------------------------

// public sealed class UXNameAttribute :207
// {
uType* UXNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXNameAttribute__New1_fn, 0, true, UXNameAttribute_typeof(), 0));
    return type;
}

// public generated UXNameAttribute() :207
void UXNameAttribute__ctor_1_fn(UXNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXNameAttribute New() :207
void UXNameAttribute__New1_fn(UXNameAttribute** __retval)
{
    *__retval = UXNameAttribute::New1();
}

// public generated UXNameAttribute() [instance] :207
void UXNameAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXNameAttribute", ".ctor()");
    ctor_();
}

// public generated UXNameAttribute New() [static] :207
UXNameAttribute* UXNameAttribute::New1()
{
    UXNameAttribute* obj1 = (UXNameAttribute*)uNew(UXNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(242)
// ---------------------------------------------------------------------------------

// public sealed class UXPrimaryAttribute :242
// {
uType* UXPrimaryAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXPrimaryAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXPrimaryAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXPrimaryAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXPrimaryAttribute__New1_fn, 0, true, UXPrimaryAttribute_typeof(), 0));
    return type;
}

// public generated UXPrimaryAttribute() :242
void UXPrimaryAttribute__ctor_1_fn(UXPrimaryAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXPrimaryAttribute New() :242
void UXPrimaryAttribute__New1_fn(UXPrimaryAttribute** __retval)
{
    *__retval = UXPrimaryAttribute::New1();
}

// public generated UXPrimaryAttribute() [instance] :242
void UXPrimaryAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXPrimaryAttribute", ".ctor()");
    ctor_();
}

// public generated UXPrimaryAttribute New() [static] :242
UXPrimaryAttribute* UXPrimaryAttribute::New1()
{
    UXPrimaryAttribute* obj1 = (UXPrimaryAttribute*)uNew(UXPrimaryAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(250)
// ---------------------------------------------------------------------------------

// public sealed class UXSourceFileNameAttribute :250
// {
uType* UXSourceFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXSourceFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXSourceFileNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXSourceFileNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXSourceFileNameAttribute__New1_fn, 0, true, UXSourceFileNameAttribute_typeof(), 0));
    return type;
}

// public generated UXSourceFileNameAttribute() :250
void UXSourceFileNameAttribute__ctor_1_fn(UXSourceFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXSourceFileNameAttribute New() :250
void UXSourceFileNameAttribute__New1_fn(UXSourceFileNameAttribute** __retval)
{
    *__retval = UXSourceFileNameAttribute::New1();
}

// public generated UXSourceFileNameAttribute() [instance] :250
void UXSourceFileNameAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXSourceFileNameAttribute", ".ctor()");
    ctor_();
}

// public generated UXSourceFileNameAttribute New() [static] :250
UXSourceFileNameAttribute* UXSourceFileNameAttribute::New1()
{
    UXSourceFileNameAttribute* obj1 = (UXSourceFileNameAttribute*)uNew(UXSourceFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(296)
// ---------------------------------------------------------------------------------

// public sealed class UXValueBindingArgumentAttribute :296
// {
uType* UXValueBindingArgumentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXValueBindingArgumentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingArgumentAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXValueBindingArgumentAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingArgumentAttribute__New1_fn, 0, true, UXValueBindingArgumentAttribute_typeof(), 0));
    return type;
}

// public generated UXValueBindingArgumentAttribute() :296
void UXValueBindingArgumentAttribute__ctor_1_fn(UXValueBindingArgumentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingArgumentAttribute New() :296
void UXValueBindingArgumentAttribute__New1_fn(UXValueBindingArgumentAttribute** __retval)
{
    *__retval = UXValueBindingArgumentAttribute::New1();
}

// public generated UXValueBindingArgumentAttribute() [instance] :296
void UXValueBindingArgumentAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXValueBindingArgumentAttribute", ".ctor()");
    ctor_();
}

// public generated UXValueBindingArgumentAttribute New() [static] :296
UXValueBindingArgumentAttribute* UXValueBindingArgumentAttribute::New1()
{
    UXValueBindingArgumentAttribute* obj1 = (UXValueBindingArgumentAttribute*)uNew(UXValueBindingArgumentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\Attributes\$.uno(306)
// ---------------------------------------------------------------------------------

// public sealed class UXValueBindingTargetAttribute :306
// {
uType* UXValueBindingTargetAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXValueBindingTargetAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingTargetAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXValueBindingTargetAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingTargetAttribute__New1_fn, 0, true, UXValueBindingTargetAttribute_typeof(), 0));
    return type;
}

// public generated UXValueBindingTargetAttribute() :306
void UXValueBindingTargetAttribute__ctor_1_fn(UXValueBindingTargetAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingTargetAttribute New() :306
void UXValueBindingTargetAttribute__New1_fn(UXValueBindingTargetAttribute** __retval)
{
    *__retval = UXValueBindingTargetAttribute::New1();
}

// public generated UXValueBindingTargetAttribute() [instance] :306
void UXValueBindingTargetAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXValueBindingTargetAttribute", ".ctor()");
    ctor_();
}

// public generated UXValueBindingTargetAttribute New() [static] :306
UXValueBindingTargetAttribute* UXValueBindingTargetAttribute::New1()
{
    UXValueBindingTargetAttribute* obj1 = (UXValueBindingTargetAttribute*)uNew(UXValueBindingTargetAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(318)
// ----------------------------------------------------------------------

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
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", type, (void*)ValueChangedArgs__New2_fn, 0, true, type, 2, type->T(0), uObject_typeof()),
        new uFunction(".ctor", type, (void*)ValueChangedArgs__New3_fn, 0, true, type, 3, type->T(0), uObject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("NewRestState", type, (void*)ValueChangedArgs__NewRestState_fn, 0, true, type, 2, type->T(0), uObject_typeof()),
        new uFunction("get_Origin", NULL, (void*)ValueChangedArgs__get_Origin_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)ValueChangedArgs__get_Value_fn, 0, false, type->T(0), 0));
    return type;
}

// public ValueChangedArgs(T value, object origin) :325
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.ValueChangedArgs`1", ".ctor(T,object)");
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
    __this->Origin(origin);
}

// public ValueChangedArgs(T value, object origin, bool setNewRestState) :337
void ValueChangedArgs__ctor_2_fn(ValueChangedArgs* __this, void* value, uObject* origin, bool* setNewRestState)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.ValueChangedArgs`1", ".ctor(T,object,bool)");
    bool setNewRestState_ = *setNewRestState;
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
    __this->Origin(origin);
    __this->SetsNewRestState(setNewRestState_);
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

// public ValueChangedArgs New(T value, object origin, bool setNewRestState) :337
void ValueChangedArgs__New3_fn(uType* __type, void* value, uObject* origin, bool* setNewRestState, ValueChangedArgs** __retval)
{
    uType* __types[] = {
        __type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    bool setNewRestState_ = *setNewRestState;
    ValueChangedArgs* obj2 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_2_fn(obj2, value, origin, uCRef(setNewRestState_));
    return *__retval = obj2, void();
}

// public static Uno.UX.ValueChangedArgs<T> NewRestState(T value, object origin) :331
void ValueChangedArgs__NewRestState_fn(uType* __type, void* value, uObject* origin, ValueChangedArgs** __retval)
{
    uType* __types[] = {
        __type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "NewRestState(T,object)");
    ValueChangedArgs* ret3;
    ValueChangedArgs* args = (ValueChangedArgs__New2_fn(__type, value, origin, &ret3), ret3);
    args->SetsNewRestState(true);
    return *__retval = args, void();
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
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "get_Value()");
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :320
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "set_Value(T)");
    __this->_Value() = value;
}

// public generated object get_Origin() [instance] :321
uObject* ValueChangedArgs::Origin()
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "get_Origin()");
    return _Origin;
}

// private generated void set_Origin(object value) [instance] :321
void ValueChangedArgs::Origin(uObject* value)
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "set_Origin(object)");
    _Origin = value;
}

// internal generated bool get_SetsNewRestState() [instance] :323
bool ValueChangedArgs::SetsNewRestState()
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "get_SetsNewRestState()");
    return _SetsNewRestState;
}

// private generated void set_SetsNewRestState(bool value) [instance] :323
void ValueChangedArgs::SetsNewRestState(bool value)
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "set_SetsNewRestState(bool)");
    _SetsNewRestState = value;
}
// }

// ..\..\ProgramData\Uno\Packages\UnoCore\0.24.5\Source\Uno\UX\$.uno(345)
// ----------------------------------------------------------------------

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
