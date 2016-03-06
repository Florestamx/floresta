// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.graphics.Canvas.h>
#include <Android.android.text.Editable.h>
#include <Android.android.text.GetChars.h>
#include <Android.android.text.InputFilter.h>
#include <Android.android.text.Layout.h>
#include <Android.android.text.LayoutDLRAlignment.h>
#include <Android.android.text.Spannable.h>
#include <Android.android.text.Spanned.h>
#include <Android.android.text.StaticLayout.h>
#include <Android.android.text.TextPaint.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.text.TextWatcher.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_text_Editable.h>
#include <Android.Fallbacks.Android_android_text_GetChars.h>
#include <Android.Fallbacks.Android_android_text_InputFilter.h>
#include <Android.Fallbacks.Android_android_text_Layout.h>
#include <Android.Fallbacks.Android_android_text_Spannable.h>
#include <Android.Fallbacks.Android_android_text_Spanned.h>
#include <Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace android{
namespace text{

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(4517)
// ------------------------------------------------------------------------------

// public abstract extern interface Editable :4517
// {
uInterfaceType* Editable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.Editable", 0, 0);
    type->Reflection.SetFunctions(12,
        new uFunction("append", NULL, NULL, offsetof(Editable, fp_append), false, Editable_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("append", NULL, NULL, offsetof(Editable, fp_append1), false, Editable_typeof(), 3, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("append", NULL, NULL, offsetof(Editable, fp_append2), false, Editable_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(Editable, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("clearSpans", NULL, NULL, offsetof(Editable, fp_clearSpans), false, uVoid_typeof(), 0),
        new uFunction("getFilters", NULL, NULL, offsetof(Editable, fp_getFilters), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::text::InputFilter_typeof()), 0),
        new uFunction("insert", NULL, NULL, offsetof(Editable, fp_insert), false, Editable_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("insert", NULL, NULL, offsetof(Editable, fp_insert1), false, Editable_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("j_delete", NULL, NULL, offsetof(Editable, fp_j_delete), false, Editable_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("replace", NULL, NULL, offsetof(Editable, fp_replace), false, Editable_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("replace", NULL, NULL, offsetof(Editable, fp_replace1), false, Editable_typeof(), 5, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setFilters", NULL, NULL, offsetof(Editable, fp_setFilters), false, uVoid_typeof(), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::text::InputFilter_typeof())));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(4404)
// ------------------------------------------------------------------------------

// public abstract extern interface GetChars :4404
// {
uInterfaceType* GetChars_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.GetChars", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("getChars", NULL, NULL, offsetof(GetChars, fp_getChars), false, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Runtime::CharArray_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(4387)
// ------------------------------------------------------------------------------

// public abstract extern interface InputFilter :4387
// {
uInterfaceType* InputFilter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.InputFilter", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("filter", NULL, NULL, offsetof(InputFilter, fp_filter), false, ::g::Android::java::lang::CharSequence_typeof(), 6, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::text::Spanned_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(57)
// ----------------------------------------------------------------------------

// public abstract extern class Layout :57
// {
::g::Android::java::lang::Object_type* Layout_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Layout);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.text.Layout", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::android::text::TextPaint_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::text::Layout::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getDesiredWidth_19893_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getHeight_19902_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getLineBaseline_19929_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getLineEnd_19926_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getLineLeft_19919_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getPaint_19898_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::getWidth_19899_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::Layout::j_draw_19895_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(17,
        new uFunction("_Init", NULL, (void*)Layout___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getDesiredWidth", NULL, (void*)Layout__getDesiredWidth_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Android::java::lang::CharSequence_typeof(), ::g::Android::android::text::TextPaint_typeof()),
        new uFunction("getDesiredWidth_IMPL_19893", NULL, (void*)Layout__getDesiredWidth_IMPL_19893_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("getHeight", NULL, (void*)Layout__getHeight_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getHeight_IMPL_19902", NULL, (void*)Layout__getHeight_IMPL_19902_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getLineBaseline", NULL, (void*)Layout__getLineBaseline_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getLineBaseline_IMPL_19929", NULL, (void*)Layout__getLineBaseline_IMPL_19929_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getLineEnd", NULL, (void*)Layout__getLineEnd_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getLineEnd_IMPL_19926", NULL, (void*)Layout__getLineEnd_IMPL_19926_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getLineLeft", NULL, (void*)Layout__getLineLeft_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getLineLeft_IMPL_19919", NULL, (void*)Layout__getLineLeft_IMPL_19919_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getPaint", NULL, (void*)Layout__getPaint_fn, 0, false, ::g::Android::android::text::TextPaint_typeof(), 0),
        new uFunction("getPaint_IMPL_19898", NULL, (void*)Layout__getPaint_IMPL_19898_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getWidth", NULL, (void*)Layout__getWidth_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getWidth_IMPL_19899", NULL, (void*)Layout__getWidth_IMPL_19899_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("j_draw", NULL, (void*)Layout__j_draw_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::Canvas_typeof()),
        new uFunction("j_draw_IMPL_19895", NULL, (void*)Layout__j_draw_IMPL_19895_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// protected Layout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :62
void Layout__ctor_5_fn(Layout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :61
void Layout___Init2_fn()
{
    Layout::_Init2();
}

// public static float getDesiredWidth(Android.java.lang.CharSequence arg0, Android.android.text.TextPaint arg1) :116
void Layout__getDesiredWidth_fn(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, float* __retval)
{
    *__retval = Layout::getDesiredWidth(arg0, arg1);
}

// public static extern float getDesiredWidth_IMPL_19893(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) :373
void Layout__getDesiredWidth_IMPL_19893_fn(uObject* arg0_, uObject* arg1_, float* __retval)
{
    *__retval = Layout::getDesiredWidth_IMPL_19893(arg0_, arg1_);
}

// public int getHeight() :170
void Layout__getHeight_fn(Layout* __this, int* __retval)
{
    *__retval = __this->getHeight();
}

// public static extern int getHeight_IMPL_19902(bool arg0, Android.Base.Primitives.ujobject arg1) :400
void Layout__getHeight_IMPL_19902_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Layout::getHeight_IMPL_19902(*arg0_, *arg1_);
}

// public int getLineBaseline(int arg0) :305
void Layout__getLineBaseline_fn(Layout* __this, int* arg0, int* __retval)
{
    *__retval = __this->getLineBaseline(*arg0);
}

// public static extern int getLineBaseline_IMPL_19929(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :454
void Layout__getLineBaseline_IMPL_19929_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = Layout::getLineBaseline_IMPL_19929(*arg0_, *arg1_, *arg2_);
}

// public int getLineEnd(int arg0) :287
void Layout__getLineEnd_fn(Layout* __this, int* arg0, int* __retval)
{
    *__retval = __this->getLineEnd(*arg0);
}

// public static extern int getLineEnd_IMPL_19926(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :445
void Layout__getLineEnd_IMPL_19926_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = Layout::getLineEnd_IMPL_19926(*arg0_, *arg1_, *arg2_);
}

// public float getLineLeft(int arg0) :245
void Layout__getLineLeft_fn(Layout* __this, int* arg0, float* __retval)
{
    *__retval = __this->getLineLeft(*arg0);
}

// public static extern float getLineLeft_IMPL_19919(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :424
void Layout__getLineLeft_IMPL_19919_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* __retval)
{
    *__retval = Layout::getLineLeft_IMPL_19919(*arg0_, *arg1_, *arg2_);
}

// public Android.android.text.TextPaint getPaint() :146
void Layout__getPaint_fn(Layout* __this, ::g::Android::android::text::TextPaint** __retval)
{
    *__retval = __this->getPaint();
}

// public static extern Android.Base.Wrappers.IJWrapper getPaint_IMPL_19898(bool arg0, Android.Base.Primitives.ujobject arg1) :388
void Layout__getPaint_IMPL_19898_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Layout::getPaint_IMPL_19898(*arg0_, *arg1_);
}

// public int getWidth() :152
void Layout__getWidth_fn(Layout* __this, int* __retval)
{
    *__retval = __this->getWidth();
}

// public static extern int getWidth_IMPL_19899(bool arg0, Android.Base.Primitives.ujobject arg1) :391
void Layout__getWidth_IMPL_19899_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Layout::getWidth_IMPL_19899(*arg0_, *arg1_);
}

// public void j_draw(Android.android.graphics.Canvas arg0) :128
void Layout__j_draw_fn(Layout* __this, ::g::Android::android::graphics::Canvas* arg0)
{
    __this->j_draw(arg0);
}

// public static extern void j_draw_IMPL_19895(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :379
void Layout__j_draw_IMPL_19895_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Layout::j_draw_IMPL_19895(*arg0_, *arg1_, arg2_);
}

jclass Layout::_javaClass2_;
jmethodID Layout::getDesiredWidth_19893_ID_;
jmethodID Layout::getHeight_19902_ID_;
jmethodID Layout::getLineBaseline_19929_ID_;
jmethodID Layout::getLineEnd_19926_ID_;
jmethodID Layout::getLineLeft_19919_ID_;
jmethodID Layout::getPaint_19898_ID_;
jmethodID Layout::getWidth_19899_ID_;
jmethodID Layout::j_draw_19895_ID_;

// protected Layout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :62
void Layout::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.text.Layout", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public int getHeight() [instance] :170
int Layout::getHeight()
{
    uStackFrame __("Android.android.text.Layout", "getHeight()");
    return Layout::getHeight_IMPL_19902(_subclassed, _javaObject);
}

// public int getLineBaseline(int arg0) [instance] :305
int Layout::getLineBaseline(int arg0)
{
    uStackFrame __("Android.android.text.Layout", "getLineBaseline(int)");
    int arg0_ = arg0;
    return Layout::getLineBaseline_IMPL_19929(_subclassed, _javaObject, arg0_);
}

// public int getLineEnd(int arg0) [instance] :287
int Layout::getLineEnd(int arg0)
{
    uStackFrame __("Android.android.text.Layout", "getLineEnd(int)");
    int arg0_ = arg0;
    return Layout::getLineEnd_IMPL_19926(_subclassed, _javaObject, arg0_);
}

// public float getLineLeft(int arg0) [instance] :245
float Layout::getLineLeft(int arg0)
{
    uStackFrame __("Android.android.text.Layout", "getLineLeft(int)");
    int arg0_ = arg0;
    return Layout::getLineLeft_IMPL_19919(_subclassed, _javaObject, arg0_);
}

// public Android.android.text.TextPaint getPaint() [instance] :146
::g::Android::android::text::TextPaint* Layout::getPaint()
{
    uStackFrame __("Android.android.text.Layout", "getPaint()");
    return uCast< ::g::Android::android::text::TextPaint*>(Layout::getPaint_IMPL_19898(_subclassed, _javaObject), ::TYPES[2/*Android.android.text.TextPaint*/]);
}

// public int getWidth() [instance] :152
int Layout::getWidth()
{
    uStackFrame __("Android.android.text.Layout", "getWidth()");
    return Layout::getWidth_IMPL_19899(_subclassed, _javaObject);
}

// public void j_draw(Android.android.graphics.Canvas arg0) [instance] :128
void Layout::j_draw(::g::Android::android::graphics::Canvas* arg0)
{
    uStackFrame __("Android.android.text.Layout", "j_draw(Android.android.graphics.Canvas)");
    Layout::j_draw_IMPL_19895(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :61
void Layout::_Init2()
{
    uStackFrame __("Android.android.text.Layout", "_Init()");
    if (Layout::_javaClass2()) { return; }
    INIT_JNI;
    Layout::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/Layout"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Layout::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.Layout'", 43);; }
}

// public static float getDesiredWidth(Android.java.lang.CharSequence arg0, Android.android.text.TextPaint arg1) [static] :116
float Layout::getDesiredWidth(uObject* arg0, ::g::Android::android::text::TextPaint* arg1)
{
    uStackFrame __("Android.android.text.Layout", "getDesiredWidth(Android.java.lang.CharSequence,Android.android.text.TextPaint)");
    return Layout::getDesiredWidth_IMPL_19893(arg0, (uObject*)arg1);
}

// public static extern float getDesiredWidth_IMPL_19893(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) [static] :373
float Layout::getDesiredWidth_IMPL_19893(uObject* arg0_, uObject* arg1_)
{
    uStackFrame __("Android.android.text.Layout", "getDesiredWidth_IMPL_19893(Android.Base.Wrappers.IJWrapper,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg1 = ((!arg1_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    float result;
    CACHE_METHOD(Layout::getDesiredWidth_19893_ID(),Layout::_javaClass2(),"getDesiredWidth","(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F",GetStaticMethodID,"Id for fallback method android.text.Layout.getDesiredWidth could not be cached",78);
    result = ((float)U_JNIVAR->CallStaticFloatMethod(Layout::_javaClass2(), Layout::getDesiredWidth_19893_ID(), _obArg0, _obArg1));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getHeight_IMPL_19902(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :400
int Layout::getHeight_IMPL_19902(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.text.Layout", "getHeight_IMPL_19902(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    
    int result;
    CACHE_METHOD(Layout::getHeight_19902_ID(),Layout::_javaClass2(),"getHeight","()I",GetMethodID,"Id for fallback method android.text.Layout.getHeight could not be cached",72);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Layout::_javaClass2(), Layout::getHeight_19902_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Layout::getHeight_19902_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getLineBaseline_IMPL_19929(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :454
int Layout::getLineBaseline_IMPL_19929(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.text.Layout", "getLineBaseline_IMPL_19929(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    
    int result;
    CACHE_METHOD(Layout::getLineBaseline_19929_ID(),Layout::_javaClass2(),"getLineBaseline","(I)I",GetMethodID,"Id for fallback method android.text.Layout.getLineBaseline could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Layout::_javaClass2(), Layout::getLineBaseline_19929_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Layout::getLineBaseline_19929_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getLineEnd_IMPL_19926(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :445
int Layout::getLineEnd_IMPL_19926(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.text.Layout", "getLineEnd_IMPL_19926(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    
    int result;
    CACHE_METHOD(Layout::getLineEnd_19926_ID(),Layout::_javaClass2(),"getLineEnd","(I)I",GetMethodID,"Id for fallback method android.text.Layout.getLineEnd could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Layout::_javaClass2(), Layout::getLineEnd_19926_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Layout::getLineEnd_19926_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getLineLeft_IMPL_19919(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :424
float Layout::getLineLeft_IMPL_19919(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.text.Layout", "getLineLeft_IMPL_19919(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    
    float result;
    CACHE_METHOD(Layout::getLineLeft_19919_ID(),Layout::_javaClass2(),"getLineLeft","(I)F",GetMethodID,"Id for fallback method android.text.Layout.getLineLeft could not be cached",74);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, Layout::_javaClass2(), Layout::getLineLeft_19919_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, Layout::getLineLeft_19919_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getPaint_IMPL_19898(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :388
uObject* Layout::getPaint_IMPL_19898(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.text.Layout", "getPaint_IMPL_19898(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    
    uObject* result;
    CACHE_METHOD(Layout::getPaint_19898_ID(),Layout::_javaClass2(),"getPaint","()Landroid/text/TextPaint;",GetMethodID,"Id for fallback method android.text.Layout.getPaint could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Layout::_javaClass2(), Layout::getPaint_19898_ID()),result,::g::Android::android::text::TextPaint_typeof(),::g::Android::android::text::TextPaint*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Layout::getPaint_19898_ID()),result,::g::Android::android::text::TextPaint_typeof(),::g::Android::android::text::TextPaint*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getWidth_IMPL_19899(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :391
int Layout::getWidth_IMPL_19899(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.text.Layout", "getWidth_IMPL_19899(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    
    int result;
    CACHE_METHOD(Layout::getWidth_19899_ID(),Layout::_javaClass2(),"getWidth","()I",GetMethodID,"Id for fallback method android.text.Layout.getWidth could not be cached",71);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Layout::_javaClass2(), Layout::getWidth_19899_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Layout::getWidth_19899_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void j_draw_IMPL_19895(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :379
void Layout::j_draw_IMPL_19895(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.text.Layout", "j_draw_IMPL_19895(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Layout::_javaClass2(),Layout::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Layout::j_draw_19895_ID(),Layout::_javaClass2(),"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.text.Layout.draw could not be cached",67);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Layout::_javaClass2(), Layout::j_draw_19895_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Layout::j_draw_19895_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(677)
// -----------------------------------------------------------------------------

// public sealed extern class LayoutDLRAlignment :677
// {
::g::Android::java::lang::Object_type* LayoutDLRAlignment_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutDLRAlignment);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.text.LayoutDLRAlignment", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::text::LayoutDLRAlignment::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::text::LayoutDLRAlignment::ALIGN_CENTER_19884_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::text::LayoutDLRAlignment::ALIGN_NORMAL_19885_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::text::LayoutDLRAlignment::ALIGN_OPPOSITE_19886_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("_Init", NULL, (void*)LayoutDLRAlignment___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_ALIGN_CENTER", NULL, (void*)LayoutDLRAlignment__get_ALIGN_CENTER_fn, 0, true, LayoutDLRAlignment_typeof(), 0),
        new uFunction("get_ALIGN_NORMAL", NULL, (void*)LayoutDLRAlignment__get_ALIGN_NORMAL_fn, 0, true, LayoutDLRAlignment_typeof(), 0),
        new uFunction("get_ALIGN_OPPOSITE", NULL, (void*)LayoutDLRAlignment__get_ALIGN_OPPOSITE_fn, 0, true, LayoutDLRAlignment_typeof(), 0));
    return type;
}

// public static extern new void _Init() :681
void LayoutDLRAlignment___Init3_fn()
{
    LayoutDLRAlignment::_Init3();
}

// public static Android.android.text.LayoutDLRAlignment get_ALIGN_CENTER() :686
void LayoutDLRAlignment__get_ALIGN_CENTER_fn(LayoutDLRAlignment** __retval)
{
    *__retval = LayoutDLRAlignment::ALIGN_CENTER();
}

// public static Android.android.text.LayoutDLRAlignment get_ALIGN_NORMAL() :703
void LayoutDLRAlignment__get_ALIGN_NORMAL_fn(LayoutDLRAlignment** __retval)
{
    *__retval = LayoutDLRAlignment::ALIGN_NORMAL();
}

// public static Android.android.text.LayoutDLRAlignment get_ALIGN_OPPOSITE() :720
void LayoutDLRAlignment__get_ALIGN_OPPOSITE_fn(LayoutDLRAlignment** __retval)
{
    *__retval = LayoutDLRAlignment::ALIGN_OPPOSITE();
}

jclass LayoutDLRAlignment::_javaClass3_;
jfieldID LayoutDLRAlignment::ALIGN_CENTER_19884_ID_;
jfieldID LayoutDLRAlignment::ALIGN_NORMAL_19885_ID_;
jfieldID LayoutDLRAlignment::ALIGN_OPPOSITE_19886_ID_;

// public static extern new void _Init() [static] :681
void LayoutDLRAlignment::_Init3()
{
    uStackFrame __("Android.android.text.LayoutDLRAlignment", "_Init()");
    if (LayoutDLRAlignment::_javaClass3()) { return; }
    INIT_JNI;
    LayoutDLRAlignment::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/Layout$Alignment"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!LayoutDLRAlignment::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.Layout$Alignment'", 53);; }
}

// public static Android.android.text.LayoutDLRAlignment get_ALIGN_CENTER() [static] :686
LayoutDLRAlignment* LayoutDLRAlignment::ALIGN_CENTER()
{
    uStackFrame __("Android.android.text.LayoutDLRAlignment", "get_ALIGN_CENTER()");
    INIT_JNI;
    CLASS_INIT(LayoutDLRAlignment::_javaClass3(),LayoutDLRAlignment::_Init3());
    if (::uEnterCriticalIfNull(&LayoutDLRAlignment::ALIGN_CENTER_19884_ID())) {;
    CACHE_FIELD(LayoutDLRAlignment::ALIGN_CENTER_19884_ID(),LayoutDLRAlignment::_javaClass3(),"ALIGN_CENTER","Landroid/text/Layout$Alignment;",GetStaticFieldID,"Id for field LayoutDLRAlignment.ALIGN_CENTER could not be cached",64);
    ::uExitCritical();;
    };
    LayoutDLRAlignment* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(LayoutDLRAlignment::_javaClass3(), LayoutDLRAlignment::ALIGN_CENTER_19884_ID()),result,LayoutDLRAlignment_typeof(),LayoutDLRAlignment*,false,true);;
    return uCast<LayoutDLRAlignment*>(result, LayoutDLRAlignment_typeof());
}

// public static Android.android.text.LayoutDLRAlignment get_ALIGN_NORMAL() [static] :703
LayoutDLRAlignment* LayoutDLRAlignment::ALIGN_NORMAL()
{
    uStackFrame __("Android.android.text.LayoutDLRAlignment", "get_ALIGN_NORMAL()");
    INIT_JNI;
    CLASS_INIT(LayoutDLRAlignment::_javaClass3(),LayoutDLRAlignment::_Init3());
    if (::uEnterCriticalIfNull(&LayoutDLRAlignment::ALIGN_NORMAL_19885_ID())) {;
    CACHE_FIELD(LayoutDLRAlignment::ALIGN_NORMAL_19885_ID(),LayoutDLRAlignment::_javaClass3(),"ALIGN_NORMAL","Landroid/text/Layout$Alignment;",GetStaticFieldID,"Id for field LayoutDLRAlignment.ALIGN_NORMAL could not be cached",64);
    ::uExitCritical();;
    };
    LayoutDLRAlignment* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(LayoutDLRAlignment::_javaClass3(), LayoutDLRAlignment::ALIGN_NORMAL_19885_ID()),result,LayoutDLRAlignment_typeof(),LayoutDLRAlignment*,false,true);;
    return uCast<LayoutDLRAlignment*>(result, LayoutDLRAlignment_typeof());
}

// public static Android.android.text.LayoutDLRAlignment get_ALIGN_OPPOSITE() [static] :720
LayoutDLRAlignment* LayoutDLRAlignment::ALIGN_OPPOSITE()
{
    uStackFrame __("Android.android.text.LayoutDLRAlignment", "get_ALIGN_OPPOSITE()");
    INIT_JNI;
    CLASS_INIT(LayoutDLRAlignment::_javaClass3(),LayoutDLRAlignment::_Init3());
    if (::uEnterCriticalIfNull(&LayoutDLRAlignment::ALIGN_OPPOSITE_19886_ID())) {;
    CACHE_FIELD(LayoutDLRAlignment::ALIGN_OPPOSITE_19886_ID(),LayoutDLRAlignment::_javaClass3(),"ALIGN_OPPOSITE","Landroid/text/Layout$Alignment;",GetStaticFieldID,"Id for field LayoutDLRAlignment.ALIGN_OPPOSITE could not be cached",66);
    ::uExitCritical();;
    };
    LayoutDLRAlignment* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(LayoutDLRAlignment::_javaClass3(), LayoutDLRAlignment::ALIGN_OPPOSITE_19886_ID()),result,LayoutDLRAlignment_typeof(),LayoutDLRAlignment*,false,true);;
    return uCast<LayoutDLRAlignment*>(result, LayoutDLRAlignment_typeof());
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(4498)
// ------------------------------------------------------------------------------

// public abstract extern interface Spannable :4498
// {
uInterfaceType* Spannable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.Spannable", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("removeSpan", NULL, NULL, offsetof(Spannable, fp_removeSpan), false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("setSpan", NULL, NULL, offsetof(Spannable, fp_setSpan), false, uVoid_typeof(), 4, ::g::Android::java::lang::Object_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(4421)
// ------------------------------------------------------------------------------

// public abstract extern interface Spanned :4421
// {
uInterfaceType* Spanned_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.Spanned", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("getSpanEnd", NULL, NULL, offsetof(Spanned, fp_getSpanEnd), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("getSpanFlags", NULL, NULL, offsetof(Spanned, fp_getSpanFlags), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("getSpans", NULL, NULL, offsetof(Spanned, fp_getSpans), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::Class_typeof()),
        new uFunction("getSpanStart", NULL, NULL, offsetof(Spanned, fp_getSpanStart), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("nextSpanTransition", NULL, NULL, offsetof(Spanned, fp_nextSpanTransition), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::Class_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(3282)
// ------------------------------------------------------------------------------

// public sealed extern class StaticLayout :3282
// {
::g::Android::java::lang::Object_type* StaticLayout_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(StaticLayout);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.text.StaticLayout", options);
    type->SetBase(::g::Android::android::text::Layout_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::text::StaticLayout::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::StaticLayout::getLineCount_20064_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::StaticLayout::getLineStart_20067_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::StaticLayout::StaticLayout_20060_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::StaticLayout::StaticLayout_20062_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("_Init", NULL, (void*)StaticLayout___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getLineCount", NULL, (void*)StaticLayout__getLineCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getLineCount_IMPL_20064", NULL, (void*)StaticLayout__getLineCount_IMPL_20064_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getLineStart", NULL, (void*)StaticLayout__getLineStart_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getLineStart_IMPL_20067", NULL, (void*)StaticLayout__getLineStart_IMPL_20067_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)StaticLayout__New6_fn, 0, true, StaticLayout_typeof(), 7, ::g::Android::java::lang::CharSequence_typeof(), ::g::Android::android::text::TextPaint_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::text::LayoutDLRAlignment_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StaticLayout__New8_fn, 0, true, StaticLayout_typeof(), 11, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::text::TextPaint_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::text::LayoutDLRAlignment_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof(), ::g::Android::android::text::TextUtilsDLRTruncateAt_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public StaticLayout(Android.java.lang.CharSequence arg0, Android.android.text.TextPaint arg1, int arg2, Android.android.text.LayoutDLRAlignment arg3, float arg4, float arg5, bool arg6) :3289
void StaticLayout__ctor_8_fn(StaticLayout* __this, uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int* arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float* arg4, float* arg5, bool* arg6)
{
    __this->ctor_8(arg0, arg1, *arg2, arg3, *arg4, *arg5, *arg6);
}

// public StaticLayout(Android.java.lang.CharSequence arg0, int arg1, int arg2, Android.android.text.TextPaint arg3, int arg4, Android.android.text.LayoutDLRAlignment arg5, float arg6, float arg7, bool arg8, Android.android.text.TextUtilsDLRTruncateAt arg9, int arg10) :3325
void StaticLayout__ctor_10_fn(StaticLayout* __this, uObject* arg0, int* arg1, int* arg2, ::g::Android::android::text::TextPaint* arg3, int* arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float* arg6, float* arg7, bool* arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int* arg10)
{
    __this->ctor_10(arg0, *arg1, *arg2, arg3, *arg4, arg5, *arg6, *arg7, *arg8, arg9, *arg10);
}

// public static extern new void _Init() :3286
void StaticLayout___Init3_fn()
{
    StaticLayout::_Init3();
}

// public int getLineCount() :3350
void StaticLayout__getLineCount_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->getLineCount();
}

// public static extern int getLineCount_IMPL_20064(bool arg0, Android.Base.Primitives.ujobject arg1) :3429
void StaticLayout__getLineCount_IMPL_20064_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = StaticLayout::getLineCount_IMPL_20064(*arg0_, *arg1_);
}

// public int getLineStart(int arg0) :3368
void StaticLayout__getLineStart_fn(StaticLayout* __this, int* arg0, int* __retval)
{
    *__retval = __this->getLineStart(*arg0);
}

// public static extern int getLineStart_IMPL_20067(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :3438
void StaticLayout__getLineStart_IMPL_20067_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = StaticLayout::getLineStart_IMPL_20067(*arg0_, *arg1_, *arg2_);
}

// public StaticLayout New(Android.java.lang.CharSequence arg0, Android.android.text.TextPaint arg1, int arg2, Android.android.text.LayoutDLRAlignment arg3, float arg4, float arg5, bool arg6) :3289
void StaticLayout__New6_fn(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int* arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float* arg4, float* arg5, bool* arg6, StaticLayout** __retval)
{
    *__retval = StaticLayout::New6(arg0, arg1, *arg2, arg3, *arg4, *arg5, *arg6);
}

// public StaticLayout New(Android.java.lang.CharSequence arg0, int arg1, int arg2, Android.android.text.TextPaint arg3, int arg4, Android.android.text.LayoutDLRAlignment arg5, float arg6, float arg7, bool arg8, Android.android.text.TextUtilsDLRTruncateAt arg9, int arg10) :3325
void StaticLayout__New8_fn(uObject* arg0, int* arg1, int* arg2, ::g::Android::android::text::TextPaint* arg3, int* arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float* arg6, float* arg7, bool* arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int* arg10, StaticLayout** __retval)
{
    *__retval = StaticLayout::New8(arg0, *arg1, *arg2, arg3, *arg4, arg5, *arg6, *arg7, *arg8, arg9, *arg10);
}

jclass StaticLayout::_javaClass3_;
jmethodID StaticLayout::getLineCount_20064_ID_;
jmethodID StaticLayout::getLineStart_20067_ID_;
jmethodID StaticLayout::StaticLayout_20060_ID_c_;
jmethodID StaticLayout::StaticLayout_20062_ID_c_;

// public StaticLayout(Android.java.lang.CharSequence arg0, Android.android.text.TextPaint arg1, int arg2, Android.android.text.LayoutDLRAlignment arg3, float arg4, float arg5, bool arg6) [instance] :3289
void StaticLayout::ctor_8(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6)
{
    uStackFrame __("Android.android.text.StaticLayout", ".ctor(Android.java.lang.CharSequence,Android.android.text.TextPaint,int,Android.android.text.LayoutDLRAlignment,float,float,bool)");
    ctor_5(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(StaticLayout::_javaClass3(),StaticLayout::_Init3());;
    CACHE_METHOD(StaticLayout::StaticLayout_20060_ID_c(),StaticLayout::_javaClass3(),"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",GetMethodID,"Id for fallback method android.text.StaticLayout.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg3 = ((!arg3) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(StaticLayout::_javaClass3(), StaticLayout::StaticLayout_20060_ID_c(), _obArg0, _obArg1, ((jint)arg2), _obArg3, ((jfloat)arg4), ((jfloat)arg5), ((jboolean)arg6));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public StaticLayout(Android.java.lang.CharSequence arg0, int arg1, int arg2, Android.android.text.TextPaint arg3, int arg4, Android.android.text.LayoutDLRAlignment arg5, float arg6, float arg7, bool arg8, Android.android.text.TextUtilsDLRTruncateAt arg9, int arg10) [instance] :3325
void StaticLayout::ctor_10(uObject* arg0, int arg1, int arg2, ::g::Android::android::text::TextPaint* arg3, int arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10)
{
    uStackFrame __("Android.android.text.StaticLayout", ".ctor(Android.java.lang.CharSequence,int,int,Android.android.text.TextPaint,int,Android.android.text.LayoutDLRAlignment,float,float,bool,Android.android.text.TextUtilsDLRTruncateAt,int)");
    ctor_5(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(StaticLayout::_javaClass3(),StaticLayout::_Init3());;
    CACHE_METHOD(StaticLayout::StaticLayout_20062_ID_c(),StaticLayout::_javaClass3(),"<init>","(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",GetMethodID,"Id for fallback method android.text.StaticLayout.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg3 = ((!arg3) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg5 = ((!arg5) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg9 = ((!arg9) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg9, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(StaticLayout::_javaClass3(), StaticLayout::StaticLayout_20062_ID_c(), _obArg0, ((jint)arg1), ((jint)arg2), _obArg3, ((jint)arg4), _obArg5, ((jfloat)arg6), ((jfloat)arg7), ((jboolean)arg8), _obArg9, ((jint)arg10));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public int getLineCount() [instance] :3350
int StaticLayout::getLineCount()
{
    uStackFrame __("Android.android.text.StaticLayout", "getLineCount()");
    return StaticLayout::getLineCount_IMPL_20064(_subclassed, _javaObject);
}

// public int getLineStart(int arg0) [instance] :3368
int StaticLayout::getLineStart(int arg0)
{
    uStackFrame __("Android.android.text.StaticLayout", "getLineStart(int)");
    int arg0_ = arg0;
    return StaticLayout::getLineStart_IMPL_20067(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :3286
void StaticLayout::_Init3()
{
    uStackFrame __("Android.android.text.StaticLayout", "_Init()");
    if (StaticLayout::_javaClass3()) { return; }
    INIT_JNI;
    StaticLayout::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/StaticLayout"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!StaticLayout::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.StaticLayout'", 49);; }
}

// public static extern int getLineCount_IMPL_20064(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3429
int StaticLayout::getLineCount_IMPL_20064(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.text.StaticLayout", "getLineCount_IMPL_20064(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(StaticLayout::_javaClass3(),StaticLayout::_Init3());
    
    int result;
    CACHE_METHOD(StaticLayout::getLineCount_20064_ID(),StaticLayout::_javaClass3(),"getLineCount","()I",GetMethodID,"Id for fallback method android.text.StaticLayout.getLineCount could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, StaticLayout::_javaClass3(), StaticLayout::getLineCount_20064_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, StaticLayout::getLineCount_20064_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getLineStart_IMPL_20067(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :3438
int StaticLayout::getLineStart_IMPL_20067(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.text.StaticLayout", "getLineStart_IMPL_20067(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(StaticLayout::_javaClass3(),StaticLayout::_Init3());
    
    int result;
    CACHE_METHOD(StaticLayout::getLineStart_20067_ID(),StaticLayout::_javaClass3(),"getLineStart","(I)I",GetMethodID,"Id for fallback method android.text.StaticLayout.getLineStart could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, StaticLayout::_javaClass3(), StaticLayout::getLineStart_20067_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, StaticLayout::getLineStart_20067_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public StaticLayout New(Android.java.lang.CharSequence arg0, Android.android.text.TextPaint arg1, int arg2, Android.android.text.LayoutDLRAlignment arg3, float arg4, float arg5, bool arg6) [static] :3289
StaticLayout* StaticLayout::New6(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, int arg2, ::g::Android::android::text::LayoutDLRAlignment* arg3, float arg4, float arg5, bool arg6)
{
    StaticLayout* obj2 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj2->ctor_8(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    return obj2;
}

// public StaticLayout New(Android.java.lang.CharSequence arg0, int arg1, int arg2, Android.android.text.TextPaint arg3, int arg4, Android.android.text.LayoutDLRAlignment arg5, float arg6, float arg7, bool arg8, Android.android.text.TextUtilsDLRTruncateAt arg9, int arg10) [static] :3325
StaticLayout* StaticLayout::New8(uObject* arg0, int arg1, int arg2, ::g::Android::android::text::TextPaint* arg3, int arg4, ::g::Android::android::text::LayoutDLRAlignment* arg5, float arg6, float arg7, bool arg8, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg9, int arg10)
{
    StaticLayout* obj4 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj4->ctor_10(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    return obj4;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(3623)
// ------------------------------------------------------------------------------

// public sealed extern class TextPaint :3623
// {
::g::Android::java::lang::Object_type* TextPaint_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextPaint);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.text.TextPaint", options);
    type->SetBase(::g::Android::android::graphics::Paint_typeof());
    type->fp_ctor_ = (void*)TextPaint__New9_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::text::TextPaint::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::text::TextPaint::TextPaint_20090_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)TextPaint___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextPaint__New9_fn, 0, true, TextPaint_typeof(), 0));
    return type;
}

// public TextPaint() :3755
void TextPaint__ctor_9_fn(TextPaint* __this)
{
    __this->ctor_9();
}

// public static extern new void _Init() :3627
void TextPaint___Init3_fn()
{
    TextPaint::_Init3();
}

// public TextPaint New() :3755
void TextPaint__New9_fn(TextPaint** __retval)
{
    *__retval = TextPaint::New9();
}

jclass TextPaint::_javaClass3_;
jmethodID TextPaint::TextPaint_20090_ID_c_;

// public TextPaint() [instance] :3755
void TextPaint::ctor_9()
{
    uStackFrame __("Android.android.text.TextPaint", ".ctor()");
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(TextPaint::_javaClass3(),TextPaint::_Init3());;
    CACHE_METHOD(TextPaint::TextPaint_20090_ID_c(),TextPaint::_javaClass3(),"<init>","()V",GetMethodID,"Id for fallback method android.text.TextPaint.<init> could not be cached",72);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(TextPaint::_javaClass3(), TextPaint::TextPaint_20090_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :3627
void TextPaint::_Init3()
{
    uStackFrame __("Android.android.text.TextPaint", "_Init()");
    if (TextPaint::_javaClass3()) { return; }
    INIT_JNI;
    TextPaint::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/TextPaint"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TextPaint::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.TextPaint'", 46);; }
}

// public TextPaint New() [static] :3755
TextPaint* TextPaint::New9()
{
    TextPaint* obj2 = (TextPaint*)uNew(TextPaint_typeof());
    obj2->ctor_9();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(767)
// -----------------------------------------------------------------------------

// public sealed extern class TextUtilsDLRTruncateAt :767
// {
::g::Android::java::lang::Object_type* TextUtilsDLRTruncateAt_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextUtilsDLRTruncateAt);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.text.TextUtilsDLRTruncateAt", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::text::TextUtilsDLRTruncateAt::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::text::TextUtilsDLRTruncateAt::END_20102_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)TextUtilsDLRTruncateAt___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_END", NULL, (void*)TextUtilsDLRTruncateAt__get_END_fn, 0, true, TextUtilsDLRTruncateAt_typeof(), 0));
    return type;
}

// public static extern new void _Init() :771
void TextUtilsDLRTruncateAt___Init3_fn()
{
    TextUtilsDLRTruncateAt::_Init3();
}

// public static Android.android.text.TextUtilsDLRTruncateAt get_END() :776
void TextUtilsDLRTruncateAt__get_END_fn(TextUtilsDLRTruncateAt** __retval)
{
    *__retval = TextUtilsDLRTruncateAt::END();
}

jclass TextUtilsDLRTruncateAt::_javaClass3_;
jfieldID TextUtilsDLRTruncateAt::END_20102_ID_;

// public static extern new void _Init() [static] :771
void TextUtilsDLRTruncateAt::_Init3()
{
    uStackFrame __("Android.android.text.TextUtilsDLRTruncateAt", "_Init()");
    if (TextUtilsDLRTruncateAt::_javaClass3()) { return; }
    INIT_JNI;
    TextUtilsDLRTruncateAt::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/text/TextUtils$TruncateAt"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TextUtilsDLRTruncateAt::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.text.TextUtils$TruncateAt'", 57);; }
}

// public static Android.android.text.TextUtilsDLRTruncateAt get_END() [static] :776
TextUtilsDLRTruncateAt* TextUtilsDLRTruncateAt::END()
{
    uStackFrame __("Android.android.text.TextUtilsDLRTruncateAt", "get_END()");
    INIT_JNI;
    CLASS_INIT(TextUtilsDLRTruncateAt::_javaClass3(),TextUtilsDLRTruncateAt::_Init3());
    if (::uEnterCriticalIfNull(&TextUtilsDLRTruncateAt::END_20102_ID())) {;
    CACHE_FIELD(TextUtilsDLRTruncateAt::END_20102_ID(),TextUtilsDLRTruncateAt::_javaClass3(),"END","Landroid/text/TextUtils$TruncateAt;",GetStaticFieldID,"Id for field TextUtilsDLRTruncateAt.END could not be cached",59);
    ::uExitCritical();;
    };
    TextUtilsDLRTruncateAt* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(TextUtilsDLRTruncateAt::_javaClass3(), TextUtilsDLRTruncateAt::END_20102_ID()),result,TextUtilsDLRTruncateAt_typeof(),TextUtilsDLRTruncateAt*,false,true);;
    return uCast<TextUtilsDLRTruncateAt*>(result, TextUtilsDLRTruncateAt_typeof());
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\text\$.uno(4366)
// ------------------------------------------------------------------------------

// public abstract extern interface TextWatcher :4366
// {
uInterfaceType* TextWatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.TextWatcher", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("afterTextChanged", NULL, NULL, offsetof(TextWatcher, fp_afterTextChanged), false, uVoid_typeof(), 1, ::g::Android::android::text::Editable_typeof()),
        new uFunction("beforeTextChanged", NULL, NULL, offsetof(TextWatcher, fp_beforeTextChanged), false, uVoid_typeof(), 4, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onTextChanged", NULL, NULL, offsetof(TextWatcher, fp_onTextChanged), false, uVoid_typeof(), 4, ::g::Android::java::lang::CharSequence_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

}}}} // ::g::Android::android::text
