// This file was generated based on 'C:\Users\mmoraf\Desktop\InfoMedic\InfoMedic\build\Android\Preview\cache\InfoMedic.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.InfoMedic_FuseNode_bool_IsEnabled_Property.h>
#include <Fuse.Node.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class InfoMedic_FuseNode_bool_IsEnabled_Property :17
// {
::g::Uno::UX::Property_type* InfoMedic_FuseNode_bool_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InfoMedic_FuseNode_bool_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("InfoMedic_FuseNode_bool_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))InfoMedic_FuseNode_bool_IsEnabled_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))InfoMedic_FuseNode_bool_IsEnabled_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::InfoMedic_FuseNode_bool_IsEnabled_Property, _obj), 0);
    return type;
}

// public InfoMedic_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) :20
void InfoMedic_FuseNode_bool_IsEnabled_Property__ctor_1_fn(InfoMedic_FuseNode_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj)
{
    __this->ctor_1(obj);
}

// public InfoMedic_FuseNode_bool_IsEnabled_Property New(Fuse.Node obj) :20
void InfoMedic_FuseNode_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, InfoMedic_FuseNode_bool_IsEnabled_Property** __retval)
{
    *__retval = InfoMedic_FuseNode_bool_IsEnabled_Property::New1(obj);
}

// protected override sealed bool OnGet() :21
void InfoMedic_FuseNode_bool_IsEnabled_Property__OnGet_fn(InfoMedic_FuseNode_bool_IsEnabled_Property* __this, bool* __retval)
{
    uStackFrame __("InfoMedic_FuseNode_bool_IsEnabled_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// protected override sealed void OnSet(bool v, object origin) :22
void InfoMedic_FuseNode_bool_IsEnabled_Property__OnSet_fn(InfoMedic_FuseNode_bool_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("InfoMedic_FuseNode_bool_IsEnabled_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public InfoMedic_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) [instance] :20
void InfoMedic_FuseNode_bool_IsEnabled_Property::ctor_1(::g::Fuse::Node* obj)
{
    uStackFrame __("InfoMedic_FuseNode_bool_IsEnabled_Property", ".ctor(Fuse.Node)");
    ctor_();
    _obj = obj;
}

// public InfoMedic_FuseNode_bool_IsEnabled_Property New(Fuse.Node obj) [static] :20
InfoMedic_FuseNode_bool_IsEnabled_Property* InfoMedic_FuseNode_bool_IsEnabled_Property::New1(::g::Fuse::Node* obj)
{
    InfoMedic_FuseNode_bool_IsEnabled_Property* obj1 = (InfoMedic_FuseNode_bool_IsEnabled_Property*)uNew(InfoMedic_FuseNode_bool_IsEnabled_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
