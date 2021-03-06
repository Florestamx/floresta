// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_util_Collection.h>
#include <Android.Fallbacks.Android_java_util_Iterator.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.Fallbacks.Android_java_util_ListIterator.h>
#include <Android.Fallbacks.Android_java_util_Observer.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.List.h>
#include <Android.java.util.ListIterator.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace java{
namespace util{

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/java/util/$.uno(14474)
// -----------------------------------------------------------------------------------------------

// public abstract extern interface Collection :14474
// {
uInterfaceType* Collection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Collection", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/java/util/$.uno(14733)
// -----------------------------------------------------------------------------------------------

// public abstract extern interface Iterator :14733
// {
uInterfaceType* Iterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Iterator", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/java/util/$.uno(14519)
// -----------------------------------------------------------------------------------------------

// public abstract extern interface List :14519
// {
uInterfaceType* List_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.List", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/java/util/$.uno(14859)
// -----------------------------------------------------------------------------------------------

// public abstract extern interface ListIterator :14859
// {
uInterfaceType* ListIterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.ListIterator", 0, 0);
    return type;
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/java/util/$.uno(3295)
// ----------------------------------------------------------------------------------------------

// public sealed extern class Observable :3295
// {
::g::Android::java::lang::Object_type* Observable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.util.Observable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::Observable::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Observable::notifyObservers_38389_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Observable::notifyObservers_38390_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :3299
void Observable___Init2_fn()
{
    Observable::_Init2();
}

// public void notifyObservers() :3353
void Observable__notifyObservers_fn(Observable* __this)
{
    __this->notifyObservers();
}

// public void notifyObservers(Android.java.lang.Object arg0) :3359
void Observable__notifyObservers1_fn(Observable* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->notifyObservers1(arg0);
}

// public static extern void notifyObservers_IMPL_38389(bool arg0, Android.Base.Primitives.ujobject arg1) :3391
void Observable__notifyObservers_IMPL_38389_fn(bool* arg0_, jobject* arg1_)
{
    Observable::notifyObservers_IMPL_38389(*arg0_, *arg1_);
}

// public static extern void notifyObservers_IMPL_38390(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3394
void Observable__notifyObservers_IMPL_38390_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Observable::notifyObservers_IMPL_38390(*arg0_, *arg1_, arg2_);
}

jclass Observable::_javaClass2_;
jmethodID Observable::notifyObservers_38389_ID_;
jmethodID Observable::notifyObservers_38390_ID_;

// public void notifyObservers() [instance] :3353
void Observable::notifyObservers()
{
    Observable::notifyObservers_IMPL_38389(_subclassed, _javaObject);
}

// public void notifyObservers(Android.java.lang.Object arg0) [instance] :3359
void Observable::notifyObservers1(::g::Android::java::lang::Object* arg0)
{
    Observable::notifyObservers_IMPL_38390(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :3299
void Observable::_Init2()
{
    if (Observable::_javaClass2()) { return; }
    INIT_JNI;
    Observable::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/Observable"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Observable::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.Observable'", 44);; }
}

// public static extern void notifyObservers_IMPL_38389(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3391
void Observable::notifyObservers_IMPL_38389(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Observable::_javaClass2(),Observable::_Init2());
    
    CACHE_METHOD(Observable::notifyObservers_38389_ID(),Observable::_javaClass2(),"notifyObservers","()V",GetMethodID,"Id for fallback method java.util.Observable.notifyObservers could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Observable::_javaClass2(), Observable::notifyObservers_38389_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Observable::notifyObservers_38389_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void notifyObservers_IMPL_38390(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3394
void Observable::notifyObservers_IMPL_38390(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Observable::_javaClass2(),Observable::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Observable::notifyObservers_38390_ID(),Observable::_javaClass2(),"notifyObservers","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.Observable.notifyObservers could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Observable::_javaClass2(), Observable::notifyObservers_38390_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Observable::notifyObservers_38390_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ../../../../../../../usr/local/share/uno/Packages/Android/0.24.0/Android/java/util/$.uno(15073)
// -----------------------------------------------------------------------------------------------

// public abstract extern interface Observer :15073
// {
uInterfaceType* Observer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Observer", 0, 0);
    return type;
}
// }

}}}} // ::g::Android::java::util
